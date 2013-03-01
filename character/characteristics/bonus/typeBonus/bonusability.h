#ifndef BONUSABILITY_H
#define BONUSABILITY_H

#include "character/characteristics/bonus/bonus.h"
#include "character/characteristics/abilitytype.h"

class BonusAbility : public Bonus {
    AbilityType abilityType;
public:
    BonusAbility(AbilityType abltType, int val = 0);
    ~BonusAbility();
    AbilityType getBonusAbility() const;
};

#endif // BONUSABILITY_H
