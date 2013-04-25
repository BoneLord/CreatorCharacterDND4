#include "character/characteristics/skill/typeSkill/insight.h"

Insight::Insight(bool trndFlag) : Skill(trndFlag) {
    ability = wisdom_t;
}

Insight::~Insight() {
}

void Insight::addBonus(const Bonus * const bonus) {
    std::map<SkillType, int>::const_iterator it = bonus->getBonusToSkill()->find(insight);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue += (*it).second;
    }
}

void Insight::subBonus(const Bonus * const bonus) {
    std::map<SkillType, int>::const_iterator it = bonus->getBonusToSkill()->find(insight);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue -= (*it).second;
    }
}

const char * Insight::toString() const {
    char name[] = "Insight";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
