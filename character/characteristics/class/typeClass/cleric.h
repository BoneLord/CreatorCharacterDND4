#ifndef CLERIC_H
#define CLERIC_H

#include "character/characteristics/class/classcharacter.h"
#include "character/characteristics/class/characteristics/roletype.h"
#include "character/characteristics/class/characteristics/powersource.h"
#include "character/characteristics/abilitytype.h"
#include "character/characteristics/equipment/implement/implementtype.h"
#include <vector>
#include <cstring>

class Cleric : public ClassCharacter {
    std::vector<ImplementType> implements;
//    std::vector<SkillType> trainedSkill;
public:
    Cleric();
    ~Cleric();
    const std::vector<ImplementType> * getImplements() const;
    const char * toString() const;
//    const std::vector<SkillType> * getTrainedSkill() const;
};

#endif // CLERIC_H
