#include "character/characteristics/skill/typeSkill/endurance.h"

Endurance::Endurance(bool trndFlag) : Skill(trndFlag) {
    ability = constitution_t;
}

Endurance::~Endurance() {
}
