#ifndef CLASSCHARACTER_H
#define CLASSCHARACTER_H

#include "roletype.h"
#include "bonusdefense.h"
#include "powersource.h"
#include "classtype.h"
#include "skilltype.h"
#include "abilitytype.h"
#include "implementtype.h"
#include "feattype.h"

class ClassCharacter {
protected:
    BonusDefense **defenseBonus;
    int countDfnsBns;
    SkillType *classSkill;
    int countClassSkill;
    SkillType *trainedSkill;
    int countTrainedSkill;
    int countSkill;
    AbilityType *keyAbility;
    int countKeyAbility;
    ImplementType *implements;
    int countImplement;
    FeatType *feats;
    int countFeat;
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
    BonusDefense const * const * getDefenseBonus() const;
    int countDefenseBonus() const;
    SkillType const * getClassSkill() const;
    int getCountClassSkill() const;
    SkillType const * getTrainedSkill() const;
    int getCountTrainedSkill() const;
    int getHitPointAtFirstLevel() const;
    int getHitPointPerLevel() const;
    int getHealingSurgesPerDay() const;
    int getDefenseValue(DefenseType dfnsType) const;
    int getCountSkill() const;
    AbilityType const * getKeyAbility() const;
    int getCountKeyAbility() const;
    ImplementType const * getImplements() const;
    int getCountImplement() const;
    FeatType const * const getFeats() const;
    int getCountFeat() const;

    static ClassCharacter* createClass(ClassType classType);
};

#endif // CLASSCHARACTER_H

