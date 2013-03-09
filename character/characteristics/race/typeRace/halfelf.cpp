#include "character/characteristics/race/typeRace/halfelf.h"

HalfElf::HalfElf(Language language) : Race() {
    avgMinHeight = 162;
    avgMaxHeight = 185;
    avgMinWeight = 70;
    avgMaxWeight = 102;
    avgAge = 75;
    size = medium;
    speed = 6;
    vision = lowLight;
    raceType = halfElf;

    languages.push_back(common);
    languages.push_back(elven);
    languages.push_back(language);

    bonus.setBonus(constitution_t, 2);
    bonus.setBonus(charisma_t, 2);
    bonus.setBonus(diplomacy, 2);
    bonus.setBonus(insight, 2);
}

HalfElf::~HalfElf() {
}
