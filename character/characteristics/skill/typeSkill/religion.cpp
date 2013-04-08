#include "character/characteristics/skill/typeSkill/religion.h"

Religion::Religion(bool trndFlag) : Skill(trndFlag) {
    ability = wisdom_t;
}

Religion::~Religion() {
}

void Religion::setBonus(const Bonus * const bonus) {
    std::map::const_iterator<SkillType, int> it = bonus->getBonusToSkill()->find(religion);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue += (*it).second;
    }
}

const char * Religion::toString() const {
    char name[] = "Religion";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
