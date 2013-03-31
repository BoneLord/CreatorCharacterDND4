#include "character/characteristics/skill/typeSkill/perception.h"

Perception::Perception(bool trndFlag) : Skill(trndFlag) {
    ability = wisdom_t;
}

Perception::~Perception() {
}
