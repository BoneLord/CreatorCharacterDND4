#include "character/characteristics/class/typeClass/cleric.h"

Cleric::Cleric() {
    role = leaders;
    power = divine;
    classType = cleric;
    hitPointAtFirstLevel = 12;
    hitPointPerLevel = 5;
    healingSurgesPerDay = 7;
    countTrainedSkills = 3;
    bonus.setBonus(will, 2);

    classSkill.insert(arcana, false);
    classSkill.insert(diplomacy, false);
    classSkill.insert(heal, false);
    classSkill.insert(history, false);
    classSkill.insert(insight, false);
    classSkill.insert(religion, true);

    keyAbility.push_back(wisdom_t);
    keyAbility.push_back(strength_t);
    keyAbility.push_back(charisma_t);

    implements.push_back(holySymbol);
}

Cleric::~Cleric() {
}

const std::vector<ImplementType>& Cleric::getImplements() const {
    return implements;
}
