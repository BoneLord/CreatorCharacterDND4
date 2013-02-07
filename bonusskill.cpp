#include "bonusskill.h"

BonusSkill::BonusSkill(SkillType skllType, int val) :
    Bonus(val),
    skillType(skllType) {
}

BonusSkill::~BonusSkill() {
}

SkillType BonusSkill::getBonusSkill() const {
    return skillType;
}
