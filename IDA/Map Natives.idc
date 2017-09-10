#include <idc.idc>

static str_count(str, sub) {
    auto count;
    count = 0;
    while(strstr(str, sub) != -1) {
        count = count + 1;
        str = substr(str, strstr(str, sub) + 1, -1);
    }
    return count;
}

static type_from_jArgs(jArgs, name) {
    auto args, count;
    args = substr(jArgs, strstr(jArgs, "(") + 1, strstr(jArgs, ")"));
    
    count =         str_count(args, "I");
    count = count + str_count(args, "R");
    count = count + str_count(args, "B");
    count = count + str_count(args, "H");
    count = count + str_count(args, "C");
    count = count + str_count(args, "S");
    args = "";
    while(count > 1) {
        args = ", " + form("int a%d", count) + args;
        count = count - 1;
    }
    if(count == 1) args = "int a1" + args;
    
    return "int __cdecl " + name + "(" + args + ");";
}

static map_Native(address) {
    auto argsAddress, nameAddress, funcAddress, funcString, argsString, funcType;
    argsAddress = Dword(address + 0x1);
    nameAddress = Dword(address + 0x6);
    funcAddress = Dword(address + 0xB);
    funcString = GetString(nameAddress, -1, ASCSTR_C);
    argsString = GetString(argsAddress, -1, ASCSTR_C);
    
    funcType = type_from_jArgs(argsString, funcString);
    Message("Renaming sub_%08X into j%s with the type %s\n", funcAddress, funcString, funcType);
    SetType(funcAddress, funcType);
    
    MakeNameEx(nameAddress, "a" + funcString, SN_NOWARN);
    MakeNameEx(funcAddress, "j" + funcString, SN_NOWARN);
    
}
static map_Natives(pInitGameNatives) {
    auto startAddress, address;
    startAddress = pInitGameNatives + 0x5;
    Message(form("Starting native renaming at: %08X\n", startAddress));
    address = startAddress;
    while(Byte(address) != 0xC3) {
        map_Native(address);
        address = address + 0x14;
    }
}

static address_from_call(address) {
	return Dword(address + 0x1) + address + 0x5;
}

static main() {
    auto bDeg2Rad, pDeg2Rad, pInitGameNatives, pInitEditorNatives, pBindNative;
	bDeg2Rad = "44 65 67 32 52 61 64 00";
    pDeg2Rad = FindBinary(0x6F001000, SEARCH_DOWN, bDeg2Rad);
    
    pInitGameNatives = NextFunction(PrevFunction(DfirstB(pDeg2Rad)));
    Message(form("Address of InitGameNatives: 0x%08X\n", pInitGameNatives));
    MakeNameEx(pInitGameNatives, "InitGameNatives", SN_NOWARN);
    SetType(pInitGameNatives, "void __cdecl InitGameNatives();");
    
    pInitEditorNatives = NextFunction(PrevFunction(DnextB(pDeg2Rad, DfirstB(pDeg2Rad))));
    Message(form("Address of InitEditorNatives: 0x%08X\n", pInitEditorNatives));
    MakeNameEx(pInitEditorNatives, "InitEditorNatives", SN_NOWARN);
    SetType(pInitEditorNatives, "void __cdecl InitEditorNatives();");
    
    pBindNative = address_from_call(DfirstB(pDeg2Rad) + 0xA);
    Message(form("Address of BindNative: 0x%08X\n", pBindNative));
    MakeNameEx(pBindNative, "BindNative", SN_NOWARN);
    SetType(pBindNative, "void __fastcall BindNative(void* func, char* name, char* args);");
    
    map_Natives(pInitGameNatives);
}
