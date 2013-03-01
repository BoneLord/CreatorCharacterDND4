#include "character/characteristics/race/typeRace/halfelf.h"

HalfElf::HalfElf() : Race() {
    avgMinHeight = 162;
    avgMaxHeight = 185;
    avgMinWeight = 70;
    avgMaxWeight = 102;
    avgAge = 75;
    size = medium;
    speed = 6;
    vision = lowLight;
    raceType = halfElf;

    countLanguage = 3;
    languages = new Language [countLanguage];
    languages[0] = common;
    languages[1] = elven;
    languages[2] = choiceOfOneOther;

    countAbltScBns = 2;
    abilityScoreBonus = new BonusAbility * [countAbltScBns];
    abilityScoreBonus[0] = new BonusAbility(constitution_t, 2);
    abilityScoreBonus[1] = new BonusAbility(charisma_t, 2);

    countSkllBns = 2;
    skillBonus = new BonusSkill * [countSkllBns];
    skillBonus[0] = new BonusSkill(diplomacy, 2);
    skillBonus[1] = new BonusSkill(insight, 2);

    countDfnsBns = 0;
    defenseBonus = 0;

    countFeat = 0;
    feats = 0;
}

HalfElf::~HalfElf() {
}
