#include "character/characteristics/race/typeRace/dragonborn.h"

Dragonborn::Dragonborn() : Race() {
    avgMinHeight = 185;
    avgMaxHeight = 200;    
    avgMinWeight = 118;
    avgMaxWeight = 172;
    avgAge = 80;
    size = medium;
    speed = 6;
    vision = normal;
    raceType = dragonBorn;

    countLanguage = 2;
    languages = new Language [countLanguage];
    languages[0] = common;
    languages[1] = draconic;

    countAbltScBns = 2;
    abilityScoreBonus = new BonusAbility * [countAbltScBns];
    abilityScoreBonus[0] = new BonusAbility(strength_t, 2);
    abilityScoreBonus[1] = new BonusAbility(charisma_t, 2);

    countSkllBns = 2;
    skillBonus = new BonusSkill * [countSkllBns];
    skillBonus[0] = new BonusSkill(history, 2);
    skillBonus[1] = new BonusSkill(intimidate, 2);

    countDfnsBns = 0;
    defenseBonus = 0;

    countFeat = 0;
    feats = 0;
}

Dragonborn::~Dragonborn() {
}
