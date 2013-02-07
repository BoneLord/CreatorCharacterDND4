#include "bonusdefense.h"

BonusDefense::BonusDefense(DefenseType dfnsType, int val) :
    Bonus(val),
    defenseType(dfnsType) {
}

BonusDefense::~BonusDefense() {
}

DefenseType BonusDefense::getBonusDefense() const {
    return defenseType;
}
