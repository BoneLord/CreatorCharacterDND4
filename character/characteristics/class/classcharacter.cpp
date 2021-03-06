#include "character/characteristics/class/classcharacter.h"

ClassCharacter::~ClassCharacter() {
}

RoleType ClassCharacter::getRoleType() const {
    return role;
}

PowerSource ClassCharacter::getPowerSource() const {
    return power;
}

const Bonus * ClassCharacter::getBonus() const {
    return &bonus;
}

const std::vector<SkillType> * ClassCharacter::getClassSkill() const {
    return &classSkill;
}

int ClassCharacter::getHitPointAtFirstLevel() const {
    return hitPointAtFirstLevel;
}

int ClassCharacter::getHitPointPerLevel() const {
    return hitPointPerLevel;
}

int ClassCharacter::getHealingSurgesPerDay() const {
    return healingSurgesPerDay;
}

int ClassCharacter::getCountTrainedSkills() const {
    return countTrainedSkills;
}

const std::vector<AbilityType> * ClassCharacter::getKeyAbility() const {
    return &keyAbility;
}

bool ClassCharacter::isCanTrainSkill(SkillType skill) const {
    std::vector<SkillType>::const_iterator it = std::find(classSkill.begin(), classSkill.end(), skill);
    if (it == classSkill.end()) {
        return false;
    }
    return true;
}

