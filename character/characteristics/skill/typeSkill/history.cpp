#include "character/characteristics/skill/typeSkill/history.h"

History::History(bool trndFlag) : Skill(trndFlag) {
    ability = intellect_t;
}

History::~History() {
}

void History::addBonus(const Bonus * const bonus) {
    std::map<SkillType, int>::const_iterator it = bonus->getBonusToSkill()->find(history);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue += (*it).second;
    }
}

void History::subBonus(const Bonus * const bonus) {
    std::map<SkillType, int>::const_iterator it = bonus->getBonusToSkill()->find(history);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue -= (*it).second;
    }
}

const char * History::toString() const {
    char name[] = "History";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
