#include "ability.h"

Ability::Ability(AbilityType _type, int _value) :
    type(_type),
    value(_value) {
}

Ability::Ability(const Ability &other) {
}

const Ability &Ability::operator =(const Ability &other) {
    return *this;
}

Ability::~Ability() {
}

int Ability::getAbilityValue() const {
    return value;
}

AbilityType Ability::getAbilityType() const {
    return type;
}

