#include "character/characteristics/skill/typeSkill/athletics.h"

Athletics::Athletics(bool trndFlag) : Skill(trndFlag) {
    ability = strength_t;
}

Athletics::~Athletics() {
}

void Athletics::addBonus(const Bonus * const bonus) {
    std::map<SkillType, int>::const_iterator it = bonus->getBonusToSkill()->find(athletics);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue += (*it).second;
    }
}

void Athletics::subBonus(const Bonus * const bonus) {
    std::map<SkillType, int>::const_iterator it = bonus->getBonusToSkill()->find(athletics);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue -= (*it).second;
    }
}

const char * Athletics::toString() const {
    char name[] = "Athletics";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
