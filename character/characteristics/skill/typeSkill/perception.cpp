#include "character/characteristics/skill/typeSkill/perception.h"

Perception::Perception(bool trndFlag) : Skill(trndFlag) {
    ability = wisdom_t;
}

Perception::~Perception() {
}

void Perception::setBonus(const Bonus * const bonus) {
    std::map::const_iterator<SkillType, int> it = bonus->getBonusToSkill()->find(perception);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue += (*it).second;
    }
}

const char * Perception::toString() const {
    char name[] = "Perception";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
