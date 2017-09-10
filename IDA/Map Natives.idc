#include <idc.idc>

static strCount(str, sub) {
    auto count;
    count = 0;
    while(strstr(str, sub) != -1) {
        count = count + 1;
        str = substr(str, strstr(str, sub) + 1, -1);
    }
    return count;
}

static typeFromArgs(jArgs, name) {
    auto args, count;
    args = substr(jArgs, strstr(jArgs, "(") + 1, strstr(jArgs, ")"));
    
    count =         strCount(args, "I");
    count = count + strCount(args, "R");
    count = count + strCount(args, "B");
    count = count + strCount(args, "H");
    count = count + strCount(args, "C");
    count = count + strCount(args, "S");
    args = "";
    while(count > 1) {
        args = ", " + form("int a%d", count) + args;
        count = count - 1;
    }
    if(count == 1) args = "int a1" + args;
    
    return "int __cdecl " + name + "(" + args + ");";
}

static mapNative(address) {
    auto argsAddress, nameAddress, funcAddress, funcString, argsString, funcType;
    argsAddress = Dword(address + 0x1);
    nameAddress = Dword(address + 0x6);
    funcAddress = Dword(address + 0xB);
    funcString = GetString(nameAddress, -1, ASCSTR_C);
    argsString = GetString(argsAddress, -1, ASCSTR_C);
    
    if(Byte(funcAddress + 0x00) == 0x33 && Byte(funcAddress + 0x01) == 0xC0)
        return;
    funcType = typeFromArgs(argsString, funcString);
    Message("Renaming sub_%08X into j%s with the type %s\n", funcAddress, funcString, funcType);
    SetType(funcAddress, funcType);
    
    MakeNameEx(nameAddress, "a" + funcString, SN_NOWARN);
    MakeNameEx(funcAddress, "j" + funcString, SN_NOWARN);
}

static mapAllNatives(pBindNative) {
    auto current;

    current = RfirstB(pBindNative);
    while(current != -1) {
        mapNative(current - 0xF);
        current = RnextB(pBindNative, current);
    }
}

static addressFromCall(address) {
	return Dword(address + 0x1) + address + 0x5;
}

static main() {
    auto bDeg2Rad, pDeg2Rad, bDebugS, pDebugS, pInitGameNatives, pInitAiNatives, pInitEditorNatives, pBindNative;
	bDeg2Rad = "44 65 67 32 52 61 64 00";
    pDeg2Rad = FindBinary(0x6F001000, SEARCH_DOWN, bDeg2Rad);
    bDebugS = "44 65 62 75 67 53 00";
    pDebugS = FindBinary(0x6F001000, SEARCH_DOWN, bDebugS);
    
    pInitGameNatives = NextFunction(PrevFunction(DfirstB(pDeg2Rad)));
    Message(form("Address of InitGameNatives: 0x%08X\n", pInitGameNatives));
    MakeNameEx(pInitGameNatives, "InitGameNatives", SN_NOWARN);
    SetType(pInitGameNatives, "void __cdecl InitGameNatives();");
    
    pInitEditorNatives = NextFunction(PrevFunction(DnextB(pDeg2Rad, DfirstB(pDeg2Rad))));
    Message(form("Address of InitEditorNatives: 0x%08X\n", pInitEditorNatives));
    MakeNameEx(pInitEditorNatives, "InitEditorNatives", SN_NOWARN);
    SetType(pInitEditorNatives, "void __cdecl InitEditorNatives();");
    
    pInitAiNatives = PrevFunction(PrevFunction(DnextB(pDebugS, DfirstB(pDebugS))));
    Message(form("Address of pInitAiNatives: 0x%08X\n", pInitAiNatives));
    MakeNameEx(pInitAiNatives, "InitAiNatives", SN_NOWARN);
    SetType(pInitAiNatives, "void __cdecl InitAiNatives();");
    
    pBindNative = addressFromCall(DfirstB(pDeg2Rad) + 0xA);
    Message(form("Address of BindNative: 0x%08X\n", pBindNative));
    MakeNameEx(pBindNative, "BindNative", SN_NOWARN);
    SetType(pBindNative, "void __fastcall BindNative(void* func, char* name, char* args);");
    
    mapAllNatives(pBindNative);
}
