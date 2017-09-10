#include "AbilityUIDef.h"
#include "AbilityLevelData.h"

class AbilDataCacheNode { /* size = unknown */
public:
    _DWORD field_0;
    _DWORD field_4;
    _DWORD field_8;
    _DWORD field_C;
    _DWORD field_10;
    _DWORD abilityId_0;
    _DWORD abilityId_1;
    _DWORD field_1C;
    _DWORD field_20;
    _DWORD field_24;
    AbilityUIDef* uiDef;
    int hasUiDef;
    int code; // the ability it is based on
    int alias; // the custom ability id from the editor
    int checkDependencies;
    int levels_0;
    int requiredLevel;
    int levelSkip;
    int priority;
    _DWORD field_4C;
    int levels_1;
    AbilityLevelData* level; // array[levels_1]
};
