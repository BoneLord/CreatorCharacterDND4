#include "character/characteristics/skill/typeSkill/diplomacy.h"

Diplomacy::Diplomacy(bool trndFlag) : Skill(trndFlag) {
    skill = diplomacy;
    ability = charisma_t;
}

Diplomacy::~Diplomacy() {
}
