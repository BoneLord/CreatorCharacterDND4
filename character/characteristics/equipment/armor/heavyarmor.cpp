#include "character/characteristics/equipment/armor/heavyarmor.h"

HeavyArmor::HeavyArmor() : Armor() {
}

HeavyArmor::~HeavyArmor() {
}

bool HeavyArmor::isAddModifiersToArmor() const {
    return false;
}

