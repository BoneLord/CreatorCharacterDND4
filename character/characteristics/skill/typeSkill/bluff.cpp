#include "character/characteristics/skill/typeSkill/bluff.h"

Bluff::Bluff(bool trndFlag) : Skill(trndFlag) {
    ability = charisma_t;
}

Bluff::~Bluff() {
}

void Bluff::setBonus(const Bonus * const bonus) {
    std::map::const_iterator<SkillType, int> it = bonus->getBonusToSkill()->find(bluff);
    if (it != bonus->getBonusToSkill()->end()) {
        mValue += (*it).second;
    }
}

const char * Bluff::toString() const {
    char name[] = "Bluff";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}

