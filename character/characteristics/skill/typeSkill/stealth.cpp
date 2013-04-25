#include "character/characteristics/skill/typeSkill/stealth.h"

Stealth::Stealth(bool trndFlag) : Skill(trndFlag) {
    ability = dexterity_t;
}

Stealth::~Stealth() {
}

void Stealth::addBonus(const Bonus * const bonus) {
    std::map<SkillType, int>::const_iterator it = bonus->getBonusToSkill()->find(stealth);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue += (*it).second;
    }
}

void Stealth::subBonus(const Bonus * const bonus) {
    std::map<SkillType, int>::const_iterator it = bonus->getBonusToSkill()->find(stealth);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue -= (*it).second;
    }
}

const char * Stealth::toString() const {
    char name[] = "Stealth";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
