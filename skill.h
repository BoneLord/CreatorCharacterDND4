#ifndef SKILL_H
#define SKILL_H

#include "abilitytype.h"
#include "skilltype.h"

class Skill {
protected:
    bool trainedFlag;
    SkillType skill;
    AbilityType ability;
public:
    Skill(bool trndFlag = false);
    virtual ~Skill();
    int setTrain();
    int setUnTrain();
    SkillType getSkillType() const;
    int getValue() const;
    AbilityType getBaseAbility() const;
    bool isTrained() const;
    static Skill* createSkill(SkillType skillType, bool trndFlag = false);
};

#endif // SKILL_H
