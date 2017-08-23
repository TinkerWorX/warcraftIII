#include "CUnitRefList.h"

#include "CUnit.h"
#include "AbilDataCacheNode.h"

class CAbility : CUnitRefList { /* size = 108 (32+4+12+60) */
public:
    CUnit* owner; // The CUnit that has the ability.
    int abilityId; // The ability id.
    _DWORD field_38;
    _DWORD field_3C;
    _DWORD field_40;
    _DWORD field_44;
    _DWORD field_48;
    _DWORD field_4C;
    _DWORD field_50;
    AbilDataCacheNode* data; // The ability data cache.
    _DWORD field_58;
    _DWORD field_5C;
    _DWORD field_60;
    _DWORD field_64;
    _DWORD field_68;
};
