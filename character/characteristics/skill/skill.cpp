#include "character/characteristics/skill/skill.h"

Skill::Skill(bool trndFlag): trainedFlag(trndFlag) {
    mValue = 0;
}

Skill::~Skill() {
}

int Skill::setTrain() {
    if (!trainedFlag) {
        trainedFlag = true;
        mValue += 5;
        return 0;
    }
    return -1;
}

int Skill::setUnTrain() {
    if (trainedFlag) {
        trainedFlag = false;
        mValue -= 5;
        return 0;
    }
    return -2;
}

int Skill::getValue() const {
    return mValue;
}

AbilityType Skill::getBaseAbility() const {
    return ability;
}

bool Skill::isTrained() const {
    return trainedFlag;
}

void Skill::addBonus(int value) {
    mValue += value;
}

void Skill::subBonus(int value) {
    mValue -= value;
}
