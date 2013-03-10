#include "character/characteristics/race/typeRace/human.h"

Human::Human(Language language, AbilityType ability) : Race() {
    avgMinHeight = 165;
    avgMaxHeight = 185;
    avgMinWeight = 72;
    avgMaxWeight = 118;
    avgAge = 80;
    size = medium;
    speed = 6;
    vision = normal;

    languages.push_back(common);
    languages.push_back(language);

    bonus.setBonus(ability, 2);
    bonus.setBonus(fortitude, 1);
    bonus.setBonus(reflex, 1);
    bonus.setBonus(will, 1);
}

Human::~Human() {
}

const char * Human::toString() const {
    char name[] = "Human";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
