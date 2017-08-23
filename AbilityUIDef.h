#include "CharArray.h"
#include "StringArray.h"

class AbilityUIDef { /* size = unknown */
public:
    _DWORD field_0;
    _DWORD field_4;
    _DWORD field_8;
    _DWORD field_C;
    _DWORD field_10;
    _DWORD field_14;
    _DWORD field_18;
    _DWORD field_1C;
    _DWORD field_20;
    _DWORD field_24;
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
    _DWORD casterAttach;
    _DWORD field017C;
    _DWORD field0180;
    _DWORD field0184;
    _DWORD field0188;
    _DWORD field018C;
    _DWORD effectAttach;
    _DWORD field0194;
    _DWORD field0198;
    _DWORD field019C;
    _DWORD field01A0;
    _DWORD field01A4;
    _DWORD targetAttach;
    _DWORD field01AC;
    _DWORD field01B0;
    _DWORD field01B4;
    _DWORD field01B8;
    _DWORD field01BC;
    _DWORD specialAttach;
    _DWORD field01C4;
    _DWORD field01C8;
    _DWORD field01CC;
    _DWORD field01D0;
    _DWORD field01D4;
    _DWORD requires;
    _DWORD field01DC;
    _DWORD field01E0;
    _DWORD field01E4;
    _DWORD field01E8;
    _DWORD field01EC;
    _DWORD requiresAmount;
    _DWORD field01F4;
    _DWORD field01F8;
    _DWORD field01FC;
    _DWORD field0200;
    _DWORD field0204;
    _DWORD requiresHad;
    _DWORD field020C;
    _DWORD field0210;
    _DWORD field0214;
    _DWORD field0218;
    _DWORD field021C;
    _DWORD requiresHadAmount;
    _DWORD field0224;
    _DWORD field0228;
    _DWORD field022C;
    _DWORD field0230;
    _DWORD field0234;
    _DWORD field0238;
    _DWORD field023C;
    _DWORD field0240;
};
