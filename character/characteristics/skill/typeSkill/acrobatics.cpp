#include "character/characteristics/skill/typeSkill/acrobatics.h"

Acrobatics::Acrobatics(bool trndFlag) : Skill(trndFlag) {
    ability = dexterity_t;
}

Acrobatics::~Acrobatics() {
}

void Acrobatics::setBonus(const Bonus * const bonus) {
    std::map::const_iterator<SkillType, int> it = bonus->getBonusToSkill()->find(acrobatics);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue += (*it).second;
    }
}

const char * Acrobatics::toString() const {
    char name[] = "Acrobatics";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
