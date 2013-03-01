#include "character/characteristics/bonus/typeBonus/bonusability.h"

BonusAbility::BonusAbility(AbilityType abltType, int val) :
    Bonus(val),
    abilityType(abltType) {
}

BonusAbility::~BonusAbility() {
}

AbilityType BonusAbility::getBonusAbility() const {
    return abilityType;
}
