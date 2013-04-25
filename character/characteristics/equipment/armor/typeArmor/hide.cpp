#include "character/characteristics/equipment/armor/typeArmor/hide.h"

Hide::Hide() : LightArmor() {
    armorBonus = 3;
    skillPenalty = -1;
    speedPenalty = 0;
    price = 30;
    weight = 25;
}

Hide::~Hide() {
}

