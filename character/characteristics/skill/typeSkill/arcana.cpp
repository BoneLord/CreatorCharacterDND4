#include "character/characteristics/skill/typeSkill/arcana.h"

Arcana::Arcana(bool trndFlag) : Skill(trndFlag) {
    skill = arcana;
    ability = intellect_t;
}

Arcana::~Arcana() {
}
