#include "AbilityUIDef.h"
#include "AbilityLevelData.h"

class AbilDataCacheNode { /* size = unknown */
public:
    int field_0;
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int abilityId_0;
    int abilityId_1;
    int field_1C;
    int field_20;
    int field_24;
    AbilityUIDef* uiDef;
    int hasUiDef;
    int code; // the ability it is based on
    int alias; // the custom ability id from the editor
    int checkDependencies;
    int levels_0;
    int requiredLevel;
    int levelSkip;
    int priority;
    int field_4C;
    int levels_1;
    AbilityLevelData* level; // array[levels_1]
};
