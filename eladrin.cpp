#include "eladrin.h"

Eladrin::Eladrin() : Race() {
    avgMinHeight = 164;
    avgMaxHeight = 183;    
    avgMinWeight = 70;
    avgMaxWeight = 97;
    avgAge = 300;
    size = medium;
    speed = 6;
    vision = lowLight;
    raceType = eladrin;

    countLanguage = 2;
    languages = new Language [countLanguage];
    languages[0] = common;
    languages[1] = elven;

    countAbltScBns = 2;
    abilityScoreBonus = new BonusAbility * [countAbltScBns];
    abilityScoreBonus[0] = new BonusAbility(dexterity_t, 2);
    abilityScoreBonus[1] = new BonusAbility(intellect_t, 2);

    countSkllBns = 2;
    skillBonus = new BonusSkill * [countSkllBns];
    skillBonus[0] = new BonusSkill(arcana, 2);
    skillBonus[1] = new BonusSkill(history, 2);

    countDfnsBns = 1;
    defenseBonus = new BonusDefense * [countDfnsBns];
    defenseBonus[0] = new BonusDefense(will, 1);

    countFeat = 0;
    feats = 0;
}

Eladrin::~Eladrin() {
}
