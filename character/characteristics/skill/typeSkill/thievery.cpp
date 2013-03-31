#include "character/characteristics/skill/typeSkill/thievery.h"

Thievery::Thievery(bool trndFlag) : Skill(trndFlag) {
    ability = dexterity_t;
}

Thievery::~Thievery() {
}
