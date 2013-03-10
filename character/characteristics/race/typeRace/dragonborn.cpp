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

    languages.push_back(common);
    languages.push_back(draconic);

    bonus.setBonus(strength_t, 2);
    bonus.setBonus(charisma_t, 2);
    bonus.setBonus(history, 2);
    bonus.setBonus(intimidate, 2);
}

Dragonborn::~Dragonborn() {
}

const char * Dragonborn::toString() const {
    char name[] = "Dragonborn";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
