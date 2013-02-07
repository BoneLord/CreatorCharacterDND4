#include "nature.h"

Nature::Nature(bool trndFlag) : Skill(trndFlag) {
    skill = nature;
    ability = wisdom_t;
}

Nature::~Nature() {
}
