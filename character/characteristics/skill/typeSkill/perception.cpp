#include "character/characteristics/skill/typeSkill/perception.h"

Perception::Perception(bool trndFlag) : Skill(trndFlag) {
    ability = wisdom_t;
}

Perception::~Perception() {
}

void Perception::addBonus(const Bonus * const bonus) {
    std::map<SkillType, int>::const_iterator it = bonus->getBonusToSkill()->find(perception);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue += (*it).second;
    }
}

void Perception::subBonus(const Bonus * const bonus) {
    std::map<SkillType, int>::const_iterator it = bonus->getBonusToSkill()->find(perception);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue -= (*it).second;
    }
}

const char * Perception::toString() const {
    char name[] = "Perception";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
