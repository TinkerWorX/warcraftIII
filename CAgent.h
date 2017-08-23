#include "CAgent_VTable.h"
#include "CWidget_VTable.h"
#include "CUnit_VTable.h"

class CAgent { /* size = 32 */
public:
    union {
      CAgent_VTable* cAgent_vtable;
      CWidget_VTable* cWidget_vtable;
      CUnit_VTable* cUnit_vtable;
    };
    _DWORD field_4;
    _DWORD field_8;
    int field_C;
    int field_10;
    _DWORD field_14;
    _DWORD field_18;
    _DWORD field_1C;
};
