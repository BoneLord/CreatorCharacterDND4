#include "character/characteristics/skill/typeSkill/streetwise.h"

Streetwise::Streetwise(bool trndFlag) : Skill(trndFlag) {
    ability = charisma_t;
}

Streetwise::~Streetwise() {
}

void Streetwise::addBonus(const Bonus * const bonus) {
    std::map::const_iterator<SkillType, int> it = bonus->getBonusToSkill()->find(streetwise);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue += (*it).second;
    }
}

void Streetwise::subBonus(const Bonus * const bonus) {
    std::map::const_iterator<SkillType, int> it = bonus->getBonusToSkill()->find(streetwise);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue -= (*it).second;
    }
}

const char * Streetwise::toString() const {
    char name[] = "Streetwise";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
