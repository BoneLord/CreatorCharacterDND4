#include "character/characteristics/skill/typeSkill/endurance.h"

Endurance::Endurance(bool trndFlag) : Skill(trndFlag) {
    ability = constitution_t;
}

Endurance::~Endurance() {
}

void Endurance::addBonus(const Bonus * const bonus) {
    std::map<SkillType, int>::const_iterator it = bonus->getBonusToSkill()->find(endurance);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue += (*it).second;
    }
}

void Endurance::subBonus(const Bonus * const bonus) {
    std::map<SkillType, int>::const_iterator it = bonus->getBonusToSkill()->find(endurance);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue -= (*it).second;
    }
}

const char * Endurance::toString() const {
    char name[] = "Endurance";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
