#include "character/characteristics/skill/typeSkill/acrobatics.h"

Acrobatics::Acrobatics(bool trndFlag) : Skill(trndFlag) {
    skill = acrobatics;
    ability = dexterity_t;
}

Acrobatics::~Acrobatics() {
}
