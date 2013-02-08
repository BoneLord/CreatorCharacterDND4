#include "human.h"

Human::Human() : Race() {
    avgMinHeight = 165;
    avgMaxHeight = 185;
    avgMinWeight = 72;
    avgMaxWeight = 118;
    avgAge = 80;
    size = medium;
    speed = 6;
    vision = normal;
    raceType = human;

    countLanguage = 2;
    languages = new Language [countLanguage];
    languages[0] = common;
    languages[1] = choiceOfOneOther;

//    countAbltScBns = 1;
//    abilityScoreBonus = new BonusAbility * [countAbltScBns];
//    abilityScoreBonus[0] = new BonusAbility(, 2);
    countAbltScBns = 0;
    abilityScoreBonus = 0;

    countSkllBns = 0;
    skillBonus = 0;

    countDfnsBns = 3;
    defenseBonus = new BonusDefense * [countDfnsBns];
    defenseBonus[0] = new BonusDefense(fortitude, 1);
    defenseBonus[1] = new BonusDefense(reflex, 1);
    defenseBonus[2] = new BonusDefense(will, 1);

    countFeat = 0;
    feats = 0;
}

Human::~Human() {
}
