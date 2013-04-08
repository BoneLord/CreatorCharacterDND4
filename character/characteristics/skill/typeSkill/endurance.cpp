#include "character/characteristics/skill/typeSkill/endurance.h"

Endurance::Endurance(bool trndFlag) : Skill(trndFlag) {
    ability = constitution_t;
}

Endurance::~Endurance() {
}

void Endurance::setBonus(const Bonus * const bonus) {
    std::map::const_iterator<SkillType, int> it = bonus->getBonusToSkill()->find(endurance);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue += (*it).second;
    }
}

const char * Endurance::toString() const {
    char name[] = "Endurance";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
