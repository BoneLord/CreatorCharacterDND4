#ifndef BONUSABILITY_H
#define BONUSABILITY_H

#include "bonus.h"
#include "abilitytype.h"

class BonusAbility : public Bonus {
    AbilityType abilityType;
public:
    BonusAbility(AbilityType abltType, int val = 0);
    ~BonusAbility();
    AbilityType getBonusAbility() const;
};

#endif // BONUSABILITY_H
