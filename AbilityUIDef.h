#include "CharArray.h"
#include "StringArray.h"

class AbilityUIDef { /* size = unknown */
public:
    int field_0;
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    int field_1C;
    int field_20;
    int field_24;
    char* buffArtIcon;
    char* bulletArt; // not observed anywhere, maybe a leftover?
    char* soundEffectSound;
    char* SoundEffectSoundLooping;
    char* artIconTurnOff;
    char* artIconResearch;
    char* placementModel; // not observed anywhere
    char* placementTexture; // not observed anywhere
    char* globalMessage; // only observed in various *AbilityStrings.txt files, but always blank
    char* globalSound; // only observed in various *AbilityStrings.txt files, but always blank
    int artButtonPositionNormalX;
    int artButtonPositionNormalY;
    int artButtonPositionTurnOffX;
    int artButtonPositionTurnOffY;
    int artButtonPositionResearchX;
    int artButtonPositionResearchY;
    float artMissileSpeed;
    float artMissileArc;
    int artMissileHomingEnabled;
    int artRequiredSpellDetail; // 0 = low, 1 = medium, 2 = high
    char* scriptName; // only observed in ItemData.slk, seems hidden in the World Editor
    CharArray textHotkeyNormal; // 7C+80+84
    CharArray textHotkeyTurnOff; // 88+8C+90
    CharArray textHotkeyLearn; //94+98+9C
    StringArray textName; // A0+A4+A8
    StringArray artIconNormal; // AC+B0+B4
    StringArray artTarget; // B8+BC+C0
    StringArray artCaster; // C4+C8+CC
    StringArray artEffect; // D0+D4+D8
    StringArray artAreaEffect; // DC+E0+E4
    StringArray artMissileArt; // E8+EC+F0
    StringArray artSpecial; // F4+F8+FC
    StringArray artLightningEffects; // 100+104+108
    StringArray buffTextTooltip; // 10C+110+114
    StringArray buffTextTooltipExtended; // 118+11C+120
    StringArray textTooltipLearn; // 124+128+12C
    StringArray textTooltipNormal; // 130+134+138
    StringArray textTooltipTurnOff; // 13C+140+144
    StringArray textTooltipLearnExtended; // 148+14C+150
    StringArray textTooltipExtended; // 154+158+15C
    StringArray textTooltipTurnOffExtended; // 160+164+168
    StringArray artAnimationNames; // 16C+170+174
    int casterAttach;
    int field017C;
    int field0180;
    int field0184;
    int field0188;
    int field018C;
    int effectAttach;
    int field0194;
    int field0198;
    int field019C;
    int field01A0;
    int field01A4;
    int targetAttach;
    int field01AC;
    int field01B0;
    int field01B4;
    int field01B8;
    int field01BC;
    int specialAttach;
    int field01C4;
    int field01C8;
    int field01CC;
    int field01D0;
    int field01D4;
    int requires;
    int field01DC;
    int field01E0;
    int field01E4;
    int field01E8;
    int field01EC;
    int requiresAmount;
    int field01F4;
    int field01F8;
    int field01FC;
    int field0200;
    int field0204;
    int requiresHad;
    int field020C;
    int field0210;
    int field0214;
    int field0218;
    int field021C;
    int requiresHadAmount;
    int field0224;
    int field0228;
    int field022C;
    int field0230;
    int field0234;
    int field0238;
    int field023C;
    int field0240;
};
