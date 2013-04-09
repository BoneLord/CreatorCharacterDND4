#include "character/characteristics/skill/typeSkill/dungeoneering.h"

Dungeoneering::Dungeoneering(bool trndFlag) : Skill(trndFlag) {
    ability = wisdom_t;
}

Dungeoneering::~Dungeoneering() {
}

void Dungeoneering::addBonus(const Bonus * const bonus) {
    std::map::const_iterator<SkillType, int> it = bonus->getBonusToSkill()->find(dungeoneering);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue += (*it).second;
    }
}

void Dungeoneering::subBonus(const Bonus * const bonus) {
    std::map::const_iterator<SkillType, int> it = bonus->getBonusToSkill()->find(dungeoneering);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue -= (*it).second;
    }
}

const char * Dungeoneering::toString() const {
    char name[] = "Dungeoneering";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
