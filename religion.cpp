#include "religion.h"

Religion::Religion(bool trndFlag) : Skill(trndFlag) {
    skill = religion;
    ability = wisdom_t;
}

Religion::~Religion() {
}
