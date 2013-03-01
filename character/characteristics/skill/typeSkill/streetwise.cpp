#include "character/characteristics/skill/typeSkill/streetwise.h"

Streetwise::Streetwise(bool trndFlag) : Skill(trndFlag) {
    skill = streetwise;
    ability = charisma_t;
}

Streetwise::~Streetwise() {
}
