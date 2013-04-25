#ifndef SKILL_H
#define SKILL_H

#include <cmath>
#include <cstring>
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
    virtual void addBonus(const Bonus * const bonus) = 0;
    void addBonus(int value);
    virtual void subBonus(const Bonus * const bonus) = 0;
    void subBonus(int value);
};

#endif // SKILL_H
