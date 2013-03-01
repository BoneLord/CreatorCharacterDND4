#ifndef CLERIC_H
#define CLERIC_H

#include "character/characteristics/class/classcharacter.h"
#include "character/characteristics/class/characteristics/roletype.h"
#include "character/characteristics/class/characteristics/powersource.h"
#include "character/characteristics/abilitytype.h"
#include "character/characteristics/equipment/implement/implementtype.h"

class Cleric : public ClassCharacter {
public:
    Cleric();
    ~Cleric();
};

#endif // CLERIC_H
