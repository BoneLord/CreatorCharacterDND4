#include "character/characteristics/race/typeRace/halfling.h"

Halfling::Halfling(Language language) : Race() {
    avgMinHeight = 115;
    avgMaxHeight = 125;
    avgMinWeight = 40;
    avgMaxWeight = 45;
    avgAge = 80;
    size = small;
    speed = 6;
    vision = normal;
    raceType = halfling;

    languages.push_back(common);
    languages.push_back(language);

    bonus.setBonus(dexterity_t, 2);
    bonus.setBonus(charisma_t, 2);
    bonus.setBonus(acrobatics, 2);
    bonus.setBonus(thievery, 2);
}

Halfling::~Halfling() {
}
