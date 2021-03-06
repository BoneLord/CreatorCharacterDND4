#include "character/characteristics/skill/typeSkill/religion.h"

Religion::Religion(bool trndFlag) : Skill(trndFlag) {
    ability = intellect_t;
}

Religion::~Religion() {
}

void Religion::addBonus(const Bonus * const bonus) {
    std::map<SkillType, int>::const_iterator it = bonus->getBonusToSkill()->find(religion);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue += (*it).second;
    }
}

void Religion::subBonus(const Bonus * const bonus) {
    std::map<SkillType, int>::const_iterator it = bonus->getBonusToSkill()->find(religion);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue -= (*it).second;
    }
}

const char * Religion::toString() const {
    char name[] = "Religion";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
