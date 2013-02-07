#include "bluff.h"

Bluff::Bluff(bool trndFlag) : Skill(trndFlag) {
    skill = bluff;
    ability = charisma_t;
}

Bluff::~Bluff() {
}
