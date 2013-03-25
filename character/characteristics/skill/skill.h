#ifndef SKILL_H
#define SKILL_H

#include "character/characteristics/abilitytype.h"
#include "character/characteristics/skill/skilltype.h"

class Skill {
protected:
    bool trainedFlag;
    AbilityType ability;
public:
    Skill(bool trndFlag = false);
    virtual ~Skill();
    int setTrain();
    int setUnTrain();
    int getValue() const;
    AbilityType getBaseAbility() const;
    bool isTrained() const;
    virtual const char * toString() const = 0;
    static Skill* createSkill(SkillType skillType, bool trndFlag = false);
};

#endif // SKILL_H
