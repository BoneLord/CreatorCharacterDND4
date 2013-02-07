#include "perception.h"

Perception::Perception(bool trndFlag) : Skill(trndFlag) {
    skill = perception;
    ability = wisdom_t;
}

Perception::~Perception() {
}
