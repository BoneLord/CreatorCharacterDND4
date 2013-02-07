#ifndef BONUSSKILL_H
#define BONUSSKILL_H

#include "bonus.h"
#include "skilltype.h"

class BonusSkill : public Bonus {
    SkillType skillType;
public:
    BonusSkill(SkillType skllType, int val = 0);
    ~BonusSkill();
    SkillType getBonusSkill() const;
};

#endif // BONUSSKILL_H
