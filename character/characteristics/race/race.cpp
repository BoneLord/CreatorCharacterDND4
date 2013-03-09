#include "character/characteristics/race/race.h"
#include "character/characteristics/race/typeRace/dragonborn.h"
#include "character/characteristics/race/typeRace/dwarf.h"
#include "character/characteristics/race/typeRace/eladrin.h"
#include "character/characteristics/race/typeRace/elf.h"
#include "character/characteristics/race/typeRace/halfelf.h"
#include "character/characteristics/race/typeRace/halfling.h"
#include "character/characteristics/race/typeRace/human.h"
#include "character/characteristics/race/typeRace/tiefling.h"

Race::~Race() {
}

int Race::getAverageMinHeight() const {
    return avgMinHeight;
}

int Race::getAverageMaxHeight() const {
    return avgMaxHeight;
}

int Race::getAverageMinWeight() const {
    return avgMinWeight;
}

int Race::getAverageMaxWeight() const {
    return avgMaxWeight;
}

int Race::getAverageAge() const {
    return avgAge;
}

Size Race::getSize() const {
    return size;
}

int Race::getSpeed() const {
    return speed;
}

Vision Race::getVision() const {
    return vision;
}

RaceType Race::getRace() const {
    return raceType;
}

const std::vector<Language>& Race::getLanguages() const {
    return languages;
}

const Bonus& Race::getBonus() const {
    return bonus;
}

Race* Race::createRace(RaceType raceType) {
    Race *race;
    switch (raceType) {
    case dragonBorn:
        race = new Dragonborn();
        break;
    case dwarf:
        race = new Dwarf();
        break;
    case eladrin:
        race = new Eladrin();
        break;
    case elf:
        race = new Elf();
        break;
    case halfElf:
        race = new HalfElf();
        break;
    case halfling:
        race = new Halfling();
        break;
    case human:
        race = new Human();
        break;
    case tiefling:
        race = new Tiefling();
        break;
    default:
        return 0;
    }
    return race;
}
