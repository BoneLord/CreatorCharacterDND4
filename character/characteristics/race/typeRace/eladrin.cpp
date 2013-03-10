#include "character/characteristics/race/typeRace/eladrin.h"

Eladrin::Eladrin() : Race() {
    avgMinHeight = 164;
    avgMaxHeight = 183;    
    avgMinWeight = 70;
    avgMaxWeight = 97;
    avgAge = 300;
    size = medium;
    speed = 6;
    vision = lowLight;

    languages.push_back(common);
    languages.push_back(elven);

    bonus.setBonus(dexterity_t, 2);
    bonus.setBonus(intellect_t, 2);
    bonus.setBonus(arcana, 2);
    bonus.setBonus(history, 2);
    bonus.setBonus(will, 1);
}

Eladrin::~Eladrin() {
}

const char * Eladrin::toString() const {
    char name[] = "Eladrin";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
