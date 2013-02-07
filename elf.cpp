#include "elf.h"

Elf::Elf() : Race() {
    avgMinHeight = 162;
    avgMaxHeight = 180;
    avgMinWeight = 70;
    avgMaxWeight = 91;
    avgAge = 300;
    size = medium;
    speed = 7;
    vision = lowLight;
    raceType = dwarf;

    countLanguage = 2;
    languages = new Language [countLanguage];
    languages[0] = common;
    languages[1] = elven;

    countAbltScBns = 2;
    abilityScoreBonus = new BonusAbility * [countAbltScBns];
    abilityScoreBonus[0] = new BonusAbility(dexterity_t, 2);
    abilityScoreBonus[1] = new BonusAbility(wisdom_t, 2);

    countSkllBns = 2;
    skillBonus = new BonusSkill * [countSkllBns];
    skillBonus[0] = new BonusSkill(nature, 2);
    skillBonus[1] = new BonusSkill(perception, 2);

    countDfnsBns = 0;
    defenseBonus = 0;

    countFeat = 0;
    feats = 0;
}

Elf::~Elf() {
}
