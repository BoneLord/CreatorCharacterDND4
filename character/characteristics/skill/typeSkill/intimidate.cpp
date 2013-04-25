#include "character/characteristics/skill/typeSkill/intimidate.h"

Intimidate::Intimidate(bool trndFlag) : Skill(trndFlag) {
    ability = charisma_t;
}

Intimidate::~Intimidate() {
}

void Intimidate::addBonus(const Bonus * const bonus) {
    std::map<SkillType, int>::const_iterator it = bonus->getBonusToSkill()->find(intimidate);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue += (*it).second;
    }
}

void Intimidate::subBonus(const Bonus * const bonus) {
    std::map<SkillType, int>::const_iterator it = bonus->getBonusToSkill()->find(intimidate);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue -= (*it).second;
    }
}

const char * Intimidate::toString() const {
    char name[] = "Intimidate";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
