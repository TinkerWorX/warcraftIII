#include "CAgent_VTable.h"
#include "Agent/AgentWar3/War3Image/CWidget_VTable.h"
#include "Agent/AgentWar3/War3Image/Widget/Selectable/CUnit_VTable.h"

/*
Class ID: +aga
Class Size: 32
*/
class CAgent {
public:
    union {
        CAgent_VTable* cAgent_vtable;
        CWidget_VTable* cWidget_vtable;
        CUnit_VTable* cUnit_vtable;
      };
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    int field_1C;
};