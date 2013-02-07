#include "plate.h"

Plate::Plate() {
    armorBonus = 8;
    skillPenalty = -2;
    speedPenalty = -1;
    price = 50;
    weight = 50;
    armorKind = heavyArmor;
}

Plate::~Plate() {
}
