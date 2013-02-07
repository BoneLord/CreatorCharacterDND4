#include "defense.h"

Defense::Defense(Character const * const chr, ClassCharacter const * const classChr, AbilityType ablType) :
    character(chr),
    classCharacter(classChr),
    abilityType(ablType) {
}

Defense::~Defense() {
}

int Defense::getValue() const {
    return (10 + character->getLevel()/2 + character->getAbilityModifier(abilityType));
}
