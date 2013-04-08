#include "character/characteristics/skill/typeSkill/athletics.h"

Athletics::Athletics(bool trndFlag) : Skill(trndFlag) {
    ability = strength_t;
}

Athletics::~Athletics() {
}

void Athletics::setBonus(const Bonus * const bonus) {
    std::map::const_iterator<SkillType, int> it = bonus->getBonusToSkill()->find(athletics);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue += (*it).second;
    }
}

const char * Athletics::toString() const {
    char name[] = "Athletics";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
