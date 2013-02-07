#include "thievery.h"

Thievery::Thievery(bool trndFlag) : Skill(trndFlag) {
    skill = thievery;
    ability = dexterity_t;
}

Thievery::~Thievery() {
}
