#include "heal.h"

Heal::Heal(bool trndFlag) : Skill(trndFlag) {
    skill = heal;
    ability = wisdom_t;
}

Heal::~Heal() {
}
