#include "character/characteristics/race/typeRace/dwarf.h"

Dwarf::Dwarf() : Race() {
    avgMinHeight = 130;
    avgMaxHeight = 147;
    avgMinWeight = 72;
    avgMaxWeight = 99;
    avgAge = 200;
    size = medium;
    speed = 5;
    vision = lowLight;
    raceType = dwarf;

    countLanguage = 2;
    languages = new Language [countLanguage];
    languages[0] = common;
    languages[1] = dwarven;

    countAbltScBns = 2;
    abilityScoreBonus = new BonusAbility * [countAbltScBns];
    abilityScoreBonus[0] = new BonusAbility(constitution_t, 2);
    abilityScoreBonus[1] = new BonusAbility(wisdom_t, 2);

    countSkllBns = 2;
    skillBonus = new BonusSkill * [countSkllBns];
    skillBonus[0] = new BonusSkill(dungeoneering, 2);
    skillBonus[1] = new BonusSkill(endurance, 2);

    countDfnsBns = 0;
    defenseBonus = 0;

    countFeat = 0;
    feats = 0;
}

Dwarf::~Dwarf() {
}
