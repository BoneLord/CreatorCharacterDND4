#include "endurance.h"

Endurance::Endurance(bool trndFlag) : Skill(trndFlag) {
    skill = endurance;
    ability = constitution_t;
}

Endurance::~Endurance() {
}
