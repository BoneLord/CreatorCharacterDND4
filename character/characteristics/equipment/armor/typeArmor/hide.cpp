#include "character/characteristics/equipment/armor/typeArmor/hide.h"

Hide::Hide() {
    armorBonus = 3;
    skillPenalty = -1;
    speedPenalty = 0;
    price = 30;
    weight = 25;
    armorKind = lightArmor;
}

Hide::~Hide() {
}
