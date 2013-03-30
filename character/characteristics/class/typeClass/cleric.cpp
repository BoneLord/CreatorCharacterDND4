#include "character/characteristics/class/typeClass/cleric.h"

Cleric::Cleric() {
    role = leaders;
    power = divine;
    hitPointAtFirstLevel = 12;
    hitPointPerLevel = 5;
    healingSurgesPerDay = 7;
    countTrainedSkills = 3;
    bonus.setBonus(will, 2);
//    bonus.setBonus(religion, 5); // this skill trained

    classSkill.push_back(arcana);
    classSkill.push_back(diplomacy);
    classSkill.push_back(heal);
    classSkill.push_back(history);
    classSkill.push_back(insight);
    classSkill.push_back(religion);

    keyAbility.push_back(wisdom_t);
    keyAbility.push_back(strength_t);
    keyAbility.push_back(charisma_t);

    implements.push_back(holySymbol);
}

Cleric::~Cleric() {
}

const std::vector * Cleric::getImplements() const {
    return &implements;
}

const char * Cleric::toString() const {
    char name[] = "Cleric";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
