#include "character/characteristics/race/typeRace/halfling.h"

Halfling::Halfling() : Race() {
    avgMinHeight = 115;
    avgMaxHeight = 125;
    avgMinWeight = 40;
    avgMaxWeight = 45;
    avgAge = 80;
    size = small;
    speed = 6;
    vision = normal;
    raceType = halfling;

    countLanguage = 2;
    languages = new Language [countLanguage];
    languages[0] = common;
    languages[1] = choiceOfOneOther;

    countAbltScBns = 2;
    abilityScoreBonus = new BonusAbility * [countAbltScBns];
    abilityScoreBonus[0] = new BonusAbility(dexterity_t, 2);
    abilityScoreBonus[1] = new BonusAbility(charisma_t, 2);

    countSkllBns = 2;
    skillBonus = new BonusSkill * [countSkllBns];
    skillBonus[0] = new BonusSkill(acrobatics, 2);
    skillBonus[1] = new BonusSkill(thievery, 2);

    countDfnsBns = 0;
    defenseBonus = 0;

    countFeat = 0;
    feats = 0;
}

Halfling::~Halfling() {
}
