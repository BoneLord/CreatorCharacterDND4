#include "character/characteristics/equipment/armor/typeArmor/chainmail.h"

Chainmail::Chainmail() : HeavyArmor() {
    armorBonus = 6;
    skillPenalty = -1;
    speedPenalty = -1;
    price = 40;
    weight = 40;
}

Chainmail::~Chainmail() {
}

