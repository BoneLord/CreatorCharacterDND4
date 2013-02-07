#ifndef BONUSDEFENSE_H
#define BONUSDEFENSE_H

#include "bonus.h"
#include "defensetype.h"

class BonusDefense : public Bonus {
    DefenseType defenseType;
public:
    BonusDefense(DefenseType dfnsType, int val = 0);
    ~BonusDefense();
    DefenseType getBonusDefense() const;
};

#endif // BONUSDEFENSE_H
