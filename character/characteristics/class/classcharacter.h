#ifndef CLASSCHARACTER_H
#define CLASSCHARACTER_H

#include "character/characteristics/class/characteristics/roletype.h"
#include "character/characteristics/bonus/bonus.h"
#include "character/characteristics/class/characteristics/powersource.h"
#include "character/characteristics/class/classtype.h"
#include "character/characteristics/skill/skilltype.h"
#include "character/characteristics/abilitytype.h"
#include <vector>
#include <map>

class ClassCharacter {
protected:
    Bonus bonus;
    std::map<SkillType, bool> classSkill;
    int countTrainedSkills;
    std::vector<AbilityType> keyAbility;
    RoleType role;
    PowerSource power;
    ClassType classType;
    int hitPointAtFirstLevel;
    int hitPointPerLevel;
    int healingSurgesPerDay;
public:
    virtual ~ClassCharacter();
    ClassType getClass() const;
    RoleType getRoleType() const;
    PowerSource getPowerSource() const;
    const Bonus& getBonus() const;
    const std::map<SkillType, bool>& getClassSkill() const;
    int getHitPointAtFirstLevel() const;
    int getHitPointPerLevel() const;
    int getHealingSurgesPerDay() const;    
    int getCountTrainedSkills() const;
    const std::vector<AbilityType>& getKeyAbility() const;
    static ClassCharacter* createClass(ClassType classType);
};

#endif // CLASSCHARACTER_H

