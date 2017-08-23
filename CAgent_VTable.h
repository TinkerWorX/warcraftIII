typedef _DWORD (__thiscall* pCAgent__Function)(void* agent);

typedef int (__thiscall* pCAgent__GetClassId)(void* agent);
typedef char* (__thiscall* pCAgent__GetClassName)(void* agent);

struct CAgent_VTable { /* size = 24 */
    pCAgent__Function func0;
    pCAgent__Function func1;
    pCAgent__Function func2;
    pCAgent__Function func3;
    pCAgent__Function func4;
    pCAgent__Function func5;
    pCAgent__Function func6;
    pCAgent__GetClassId getClassId;
    pCAgent__Function func8;
    pCAgent__Function func9;
    pCAgent__Function func10;
    pCAgent__Function func11;
    pCAgent__Function func12;
    pCAgent__Function func13;
    pCAgent__Function func14;
    pCAgent__Function func15;
    pCAgent__Function func16;
    pCAgent__Function func17;
    pCAgent__Function func18;
    pCAgent__Function func19;
    pCAgent__Function func20;
    pCAgent__Function func21;
    pCAgent__GetClassName getClassName;
    pCAgent__Function func23;
};
