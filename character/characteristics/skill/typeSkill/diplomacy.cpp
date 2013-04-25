#include "character/characteristics/skill/typeSkill/diplomacy.h"

Diplomacy::Diplomacy(bool trndFlag) : Skill(trndFlag) {
    ability = charisma_t;
}

Diplomacy::~Diplomacy() {
}

void Diplomacy::addBonus(const Bonus * const bonus) {
    std::map<SkillType, int> ::const_iterator it = bonus->getBonusToSkill()->find(diplomacy);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue += (*it).second;
    }
}

void Diplomacy::subBonus(const Bonus * const bonus) {
    std::map<SkillType, int> ::const_iterator it = bonus->getBonusToSkill()->find(diplomacy);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue -= (*it).second;
    }
}

const char * Diplomacy::toString() const {
    char name[] = "Diplomacy";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
