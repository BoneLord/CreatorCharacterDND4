#include "character/characteristics/equipment/armor/lightarmor.h"

LightArmor::LightArmor() : Armor() {
}

LightArmor::~LightArmor() {
}

bool LightArmor::isAddModifiersToArmor() const {
    return true;
}
