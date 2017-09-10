#include "AbilDataCacheNode.h"

#include "Agent/AgentWar3/CUnitRefList.h"
#include "Agent/AgentWar3/War3Image/Widget/Selectable/CUnit.h"
/*
Class ID: abil
Class Size: 108  (48+60)
*/
class CAbility : CUnitRefList {
public:
   CUnit* owner; // The CUnit that has the ability.
    int abilityId; // The ability id.
    int field_38;
    int field_3C;
    int field_40;
    int field_44;
    int field_48;
    int field_4C;
    int field_50;
   AbilDataCacheNode* data; // The ability data cache.
    int field_58;
    int field_5C;
    int field_60;
    int field_64;
    int field_68;
};