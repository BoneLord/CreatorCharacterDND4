#ifndef CLASSCHARACTER_H
#define CLASSCHARACTER_H

#include "character/characteristics/class/characteristics/roletype.h"
#include "character/characteristics/bonus/bonus.h"
#include "character/characteristics/class/characteristics/powersource.h"
#include "character/characteristics/skill/skilltype.h"
#include "character/characteristics/abilitytype.h"
#include <vector>
#include <algorithm>

class ClassCharacter {
protected:
    Bonus bonus;
    std::vector<SkillType> classSkill;
    int countTrainedSkills;
    std::vector<AbilityType> keyAbility;
    RoleType role;
    PowerSource power;
    int hitPointAtFirstLevel;
    int hitPointPerLevel;
    int healingSurgesPerDay;
public:
    virtual ~ClassCharacter();
    RoleType getRoleType() const;
    PowerSource getPowerSource() const;
    const Bonus& getBonus() const;
    const std::vector<SkillType>* getClassSkill() const;
    int getHitPointAtFirstLevel() const;
    int getHitPointPerLevel() const;
    int getHealingSurgesPerDay() const;
    int getCountTrainedSkills() const;
    const std::vector<AbilityType>* getKeyAbility() const;
    bool isCanTrainSkillAtFirstLevel(SkillType skill) const;
    virtual const char * toString() const = 0;
};

#endif // CLASSCHARACTER_H

