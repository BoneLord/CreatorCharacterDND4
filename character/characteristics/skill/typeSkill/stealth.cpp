#include "character/characteristics/skill/typeSkill/stealth.h"

Stealth::Stealth(bool trndFlag) : Skill(trndFlag) {
    ability = dexterity_t;
}

Stealth::~Stealth() {
}
