#include "character/characteristics/race/typeRace/elf.h"

Elf::Elf() : Race() {
    avgMinHeight = 162;
    avgMaxHeight = 180;
    avgMinWeight = 70;
    avgMaxWeight = 91;
    avgAge = 300;
    size = medium;
    speed = 7;
    vision = lowLight;

    languages.push_back(common);
    languages.push_back(elven);

    bonus.setBonus(dexterity_t, 2);
    bonus.setBonus(wisdom_t, 2);
    bonus.setBonus(nature, 2);
    bonus.setBonus(perception, 2);
}

Elf::~Elf() {
}

const char * Elf::toString() const {
    char name[] = "Elf";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
