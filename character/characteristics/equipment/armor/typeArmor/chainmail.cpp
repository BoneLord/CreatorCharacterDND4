#include "character/characteristics/equipment/armor/typeArmor/chainmail.h"

Chainmail::Chainmail() {
    armorBonus = 6;
    skillPenalty = -1;
    speedPenalty = -1;
    price = 40;
    weight = 40;
    armorKind = heavyArmor;
}

Chainmail::~Chainmail() {
}
