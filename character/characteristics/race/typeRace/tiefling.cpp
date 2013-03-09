#include "character/characteristics/race/typeRace/tiefling.h"

Tiefling::Tiefling(Language language) : Race() {
    avgMinHeight = 165;
    avgMaxHeight = 185;
    avgMinWeight = 63;
    avgMaxWeight = 104;
    avgAge = 80;
    size = medium;
    speed = 5;
    vision = lowLight;
    raceType = tiefling;

    languages.push_back(common);
    languages.push_back(language);

    bonus.setBonus(intellect_t, 2);
    bonus.setBonus(charisma_t, 2);
    bonus.setBonus(bluff, 2);
    bonus.setBonus(stealth, 2);
}

Tiefling::~Tiefling() {
}
