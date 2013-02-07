#ifndef DEFENSE_H
#define DEFENSE_H

#include "character.h"
#include "abilitytype.h"

class Defense {
    Character const * const character;
    ClassCharacter const * const classCharacter;
    AbilityType abilityType;
public:
    Defense(Character const * const chr, ClassCharacter const * const classChr, AbilityType ablType);
    virtual ~Defense();
    int getValue() const;
};

#endif // DEFENSE_H
