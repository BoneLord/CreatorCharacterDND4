#include "character/characteristics/skill/typeSkill/nature.h"

Nature::Nature(bool trndFlag) : Skill(trndFlag) {
    ability = wisdom_t;
}

Nature::~Nature() {
}

void Nature::addBonus(const Bonus * const bonus) {
    std::map::const_iterator<SkillType, int> it = bonus->getBonusToSkill()->find(nature);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue += (*it).second;
    }
}

void Nature::subBonus(const Bonus * const bonus) {
    std::map::const_iterator<SkillType, int> it = bonus->getBonusToSkill()->find(nature);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue -= (*it).second;
    }
}

const char * Nature::toString() const {
    char name[] = "Nature";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
