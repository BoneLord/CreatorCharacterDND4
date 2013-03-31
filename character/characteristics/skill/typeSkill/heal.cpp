#include "character/characteristics/skill/typeSkill/heal.h"

Heal::Heal(bool trndFlag) : Skill(trndFlag) {
    ability = wisdom_t;
}

Heal::~Heal() {
}
