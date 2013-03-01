#include "character/characteristics/skill/typeSkill/intimidate.h"

Intimidate::Intimidate(bool trndFlag) : Skill(trndFlag) {
    skill = intimidate;
    ability = charisma_t;
}

Intimidate::~Intimidate() {
}
