#include "character/characteristics/skill/typeSkill/bluff.h"

Bluff::Bluff(bool trndFlag) : Skill(trndFlag) {
    ability = charisma_t;
}

Bluff::~Bluff() {
}

void Bluff::addBonus(const Bonus * const bonus) {
    std::map<SkillType, int>::const_iterator it = bonus->getBonusToSkill()->find(bluff);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue += (*it).second;
    }
}

void Bluff::subBonus(const Bonus * const bonus) {
    std::map<SkillType, int>::const_iterator it = bonus->getBonusToSkill()->find(bluff);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue -= (*it).second;
    }
}

const char * Bluff::toString() const {
    char name[] = "Bluff";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}

