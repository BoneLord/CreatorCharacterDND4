#ifndef ABILITY_H
#define ABILITY_H

#include "abilitytype.h"

class Ability {
    int value;
    AbilityType type;
    Ability(const Ability &other);
    const Ability& operator=(const Ability &other);
public:
    Ability(AbilityType _type, int _value = 0);
    ~Ability();
    int getAbilityValue() const;
    AbilityType getAbilityType() const;
};

#endif // ABILITY_H
