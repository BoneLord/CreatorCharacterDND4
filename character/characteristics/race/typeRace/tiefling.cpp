#include "character/characteristics/race/typeRace/tiefling.h"

Tiefling::Tiefling() : Race() {
    avgMinHeight = 165;
    avgMaxHeight = 185;
    avgMinWeight = 63;
    avgMaxWeight = 104;
    avgAge = 80;
    size = medium;
    speed = 5;
    vision = lowLight;
    raceType = dwarf;

    countLanguage = 2;
    languages = new Language [countLanguage];
    languages[0] = common;
    languages[1] = choiceOfOneOther;

    countAbltScBns = 2;
    abilityScoreBonus = new BonusAbility * [countAbltScBns];
    abilityScoreBonus[0] = new BonusAbility(intellect_t, 2);
    abilityScoreBonus[1] = new BonusAbility(charisma_t, 2);

    countSkllBns = 2;
    skillBonus = new BonusSkill * [countSkllBns];
    skillBonus[0] = new BonusSkill(bluff, 2);
    skillBonus[1] = new BonusSkill(stealth, 2);

    countDfnsBns = 0;
    defenseBonus = 0;

    countFeat = 0;
    feats = 0;
}

Tiefling::~Tiefling() {
}
