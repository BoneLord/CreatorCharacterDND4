#include "character/characteristics/skill/typeSkill/intimidate.h"

Intimidate::Intimidate(bool trndFlag) : Skill(trndFlag) {
    ability = charisma_t;
}

Intimidate::~Intimidate() {
}
