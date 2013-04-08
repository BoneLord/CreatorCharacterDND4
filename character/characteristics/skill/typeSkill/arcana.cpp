#include "character/characteristics/skill/typeSkill/arcana.h"

Arcana::Arcana(bool trndFlag) : Skill(trndFlag) {
    ability = intellect_t;
}

Arcana::~Arcana() {
}

void Arcana::setBonus(const Bonus * const bonus) {
    std::map::const_iterator<SkillType, int> it = bonus->getBonusToSkill()->find(arcana);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue += (*it).second;
    }
}

const char * Arcana::toString() const {
    char name[] = "Arcana";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
