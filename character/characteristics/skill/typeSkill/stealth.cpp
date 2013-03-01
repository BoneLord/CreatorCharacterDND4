#include "character/characteristics/skill/typeSkill/stealth.h"

Stealth::Stealth(bool trndFlag) : Skill(trndFlag) {
    skill = stealth;
    ability = dexterity_t;
}

Stealth::~Stealth() {
}
