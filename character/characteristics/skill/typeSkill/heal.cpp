#include "character/characteristics/skill/typeSkill/heal.h"

Heal::Heal(bool trndFlag) : Skill(trndFlag) {
    ability = wisdom_t;
}

Heal::~Heal() {
}

void Heal::addBonus(const Bonus * const bonus) {
    std::map::const_iterator<SkillType, int> it = bonus->getBonusToSkill()->find(heal);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue += (*it).second;
    }
}

void Heal::subBonus(const Bonus * const bonus) {
    std::map::const_iterator<SkillType, int> it = bonus->getBonusToSkill()->find(heal);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue -= (*it).second;
    }
}

const char * Heal::toString() const {
    char name[] = "Heal";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
