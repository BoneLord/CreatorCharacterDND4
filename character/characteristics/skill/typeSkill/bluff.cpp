#include "character/characteristics/skill/typeSkill/bluff.h"

Bluff::Bluff(bool trndFlag) : Skill(trndFlag) {
    skill = bluff;
    ability = charisma_t;
}

Bluff::~Bluff() {
}
