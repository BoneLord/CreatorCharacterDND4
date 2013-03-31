#include "character/characteristics/equipment/armor/armor.h"

Armor::Armor() {
}

Armor::~Armor() {
}

int Armor::getArmorBonus() const {
    return armorBonus;
}

int Armor::getSkillPenalty() const {
    return skillPenalty;
}

int Armor::getSpeedPenalty() const {
    return speedPenalty;
}

int Armor::getPrice() const {
    return price;
}

int Armor::getWeight() const {
    return weight;
}

