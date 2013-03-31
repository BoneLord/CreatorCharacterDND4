#include "character/characteristics/skill/typeSkill/religion.h"

Religion::Religion(bool trndFlag) : Skill(trndFlag) {
    ability = wisdom_t;
}

Religion::~Religion() {
}
