#include "character/characteristics/equipment/armor/typeArmor/cloth.h"

Cloth::Cloth() : LightArmor() {
    armorBonus = 0;
    skillPenalty = 0;
    speedPenalty = 0;
    price = 1;
    weight = 4;
}

Cloth::~Cloth() {
}

