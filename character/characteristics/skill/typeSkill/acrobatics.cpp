#include "character/characteristics/skill/typeSkill/acrobatics.h"

Acrobatics::Acrobatics(bool trndFlag) : Skill(trndFlag) {
    ability = dexterity_t;
}

Acrobatics::~Acrobatics() {
}

void Acrobatics::addBonus(const Bonus * const bonus) {
    std::map<SkillType, int>::const_iterator it = bonus->getBonusToSkill()->find(acrobatics);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue += (*it).second;
    }
}

void Acrobatics::subBonus(const Bonus *const bonus) {
    std::map<SkillType, int>::const_iterator it = bonus->getBonusToSkill()->find(acrobatics);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue -= (*it).second;
    }
}

const char * Acrobatics::toString() const {
    char name[] = "Acrobatics";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
