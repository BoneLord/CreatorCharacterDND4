#include "character/characteristics/skill/typeSkill/thievery.h"

Thievery::Thievery(bool trndFlag) : Skill(trndFlag) {
    ability = dexterity_t;
}

Thievery::~Thievery() {
}

void Thievery::addBonus(const Bonus * const bonus) {
    std::map<SkillType, int>::const_iterator it = bonus->getBonusToSkill()->find(thievery);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue += (*it).second;
    }
}

void Thievery::subBonus(const Bonus * const bonus) {
    std::map<SkillType, int>::const_iterator it = bonus->getBonusToSkill()->find(thievery);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue -= (*it).second;
    }
}

const char * Thievery::toString() const {
    char name[] = "Thievery";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
