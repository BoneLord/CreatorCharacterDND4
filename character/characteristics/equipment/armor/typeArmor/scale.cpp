#include "character/characteristics/equipment/armor/typeArmor/scale.h"

Scale::Scale() : HeavyArmor() {
    armorBonus = 7;
    skillPenalty = 0;
    speedPenalty = -1;
    price = 45;
    weight = 45;
}

Scale::~Scale() {
}
