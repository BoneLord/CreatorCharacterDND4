#include "character/characteristics/race/race.h"

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

const std::vector * Race::getLanguages() const {
    return &languages;
}

const Bonus * Race::getBonus() const {
    return &bonus;
}
