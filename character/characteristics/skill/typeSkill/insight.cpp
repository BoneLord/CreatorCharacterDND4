#include "character/characteristics/skill/typeSkill/insight.h"

Insight::Insight(bool trndFlag) : Skill(trndFlag) {
    ability = wisdom_t;
}

Insight::~Insight() {
}

void Insight::setBonus(const Bonus * const bonus) {
    std::map::const_iterator<SkillType, int> it = bonus->getBonusToSkill()->find(insight);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue += (*it).second;
    }
}

const char * Insight::toString() const {
    char name[] = "Insight";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
