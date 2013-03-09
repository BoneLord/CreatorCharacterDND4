#include "character/characteristics/class/classcharacter.h"
#include "character/characteristics/class/typeClass/cleric.h"

ClassCharacter::~ClassCharacter() {
}

ClassType ClassCharacter::getClass() const {
    return classType;
}

RoleType ClassCharacter::getRoleType() const {
    return role;
}

PowerSource ClassCharacter::getPowerSource() const {
    return power;
}

const std::map<SkillType, bool>& ClassCharacter::getClassSkill() const {
    return classSkill;
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

const std::vector& ClassCharacter::getKeyAbility() const {
    return keyAbility;
}

ClassCharacter *ClassCharacter::createClass(ClassType classType) {
    ClassCharacter *classCharacter;
    switch (classType) {
    case cleric:
        classCharacter = new Cleric();
        break;
//    case fighter:
//        classCharacter = new Fighter();
//        break;
//    case paladin:
//        classCharacter = new Paladin();
//        break;
//    case ranger:
//        classCharacter = new Ranger();
//        break;
//    case rogue:
//        classCharacter = new Rogue();
//        break;
//    case warlock:
//        classCharacter = new Warlock();
//        break;
//    case warlord:
//        classCharacter = new Warlord();
//        break;
//    case wizard:
//        classCharacter = new Wizard();
//        break;
    default:
        return 0;
    }
    return classCharacter;
}


