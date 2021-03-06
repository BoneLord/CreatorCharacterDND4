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

    languages.push_back(common);
    languages.push_back(language);

    bonus.setBonus(dexterity_t, 2);
    bonus.setBonus(charisma_t, 2);
    bonus.setBonus(acrobatics, 2);
    bonus.setBonus(thievery, 2);
}

Halfling::~Halfling() {
}

const char * Halfling::toString() const {
    char name[] = "Halfling";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
