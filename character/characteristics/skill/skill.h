#ifndef SKILL_H
#define SKILL_H

#include "character/characteristics/abilitytype.h"
#include "character/characteristics/skill/skilltype.h"
#include "character/characteristics/bonus/bonus.h"

class Skill {
protected:
    bool trainedFlag;
    AbilityType ability;
    int mValue;
public:
    Skill(bool trndFlag = false);
    virtual ~Skill();
    int setTrain();
    int setUnTrain();
    int getValue() const;
    AbilityType getBaseAbility() const;
    bool isTrained() const;
    virtual const char * toString() const = 0;
    virtual void setBonus(const Bonus * const bonus) = 0;
};

#endif // SKILL_H
