#include "classcharacter.h"
#include "cleric.h"

ClassCharacter::~ClassCharacter() {
    for (int i = 0; i < countDfnsBns; ++i) {
        delete defenseBonus[i];
    }
    delete [] defenseBonus;
    delete [] classSkill;
    delete [] trainedSkill;
    delete [] keyAbility;
    delete [] implements;
    delete [] feats;
}

ClassType ClassCharacter::getClass() const {
    return cleric;
}

RoleType ClassCharacter::getRoleType() const {
    return leaders;
}

PowerSource ClassCharacter::getPowerSource() const {
    return divine;
}

BonusDefense const * const * ClassCharacter::getDefenseBonus() const {
    return defenseBonus;
}

int ClassCharacter::countDefenseBonus() const {
    return countDfnsBns;
}

SkillType const * ClassCharacter::getClassSkill() const {
    return classSkill;
}

int ClassCharacter::getCountClassSkill() const {
    return countClassSkill;
}

SkillType const * ClassCharacter::getTrainedSkill() const {
    return trainedSkill;
}

int ClassCharacter::getCountTrainedSkill() const {
    return countTrainedSkill;
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

int ClassCharacter::getDefenseValue(DefenseType dfnsType) const {
    for (int i = 0; i < countDfnsBns; ++i) {
        if (defenseBonus[i]->getBonusDefense() == dfnsType) {
            return defenseBonus[i]->getValBonus();
        }
    }
    return 0;
}

int ClassCharacter::getCountSkill() const {
    return (countSkill - countTrainedSkill);
}

AbilityType const * ClassCharacter::getKeyAbility() const {
    return keyAbility;
}

int ClassCharacter::getCountKeyAbility() const {
    return countKeyAbility;
}

ImplementType const * ClassCharacter::getImplements() const {
    return implements;
}

int ClassCharacter::getCountImplement() const {
    return countImplement;
}


int ClassCharacter::getCountFeat() const {
    return countFeat;
}

FeatType const * const  ClassCharacter::getFeats() const {
    return feats;
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


