#include "character/characteristics/race/typeRace/dwarf.h"

Dwarf::Dwarf() : Race() {
    avgMinHeight = 130;
    avgMaxHeight = 147;
    avgMinWeight = 72;
    avgMaxWeight = 99;
    avgAge = 200;
    size = medium;
    speed = 5;
    vision = lowLight;
    raceType = dwarf;

    languages.push_back(common);
    languages.push_back(dwarven);

    bonus.setBonus(constitution_t, 2);
    bonus.setBonus(wisdom_t, 2);
    bonus.setBonus(dungeoneering, 2);
    bonus.setBonus(endurance, 2);
}

Dwarf::~Dwarf() {
}
