#include "character/characteristics/skill/typeSkill/nature.h"

Nature::Nature(bool trndFlag) : Skill(trndFlag) {
    skill = nature;
    ability = wisdom_t;
}

Nature::~Nature() {
}
