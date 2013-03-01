#include "character/characteristics/equipment/armor/armor.h"
#include "character/characteristics/equipment/armor/typeArmor/chainmail.h"
#include "character/characteristics/equipment/armor/typeArmor/leather.h"
#include "character/characteristics/equipment/armor/typeArmor/hide.h"
#include "character/characteristics/equipment/armor/typeArmor/plate.h"
#include "character/characteristics/equipment/armor/typeArmor/scale.h"
#include "character/characteristics/equipment/armor/typeArmor/cloth.h"

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

bool Armor::isAddModifiersToArmor() const {
    if (armorKind == lightArmor) {
        return true;
    }
    return false;
}

Armor *Armor::createArmor(ArmorType armorType) {
    Armor *armor;
    switch (armorType) {
    default:
    case chainmail:
        armor = new Chainmail();
        break;
    case leather:
        armor = new Leather();
        break;
    case hide:
        armor = new Hide();
        break;
    case plate:
        armor = new Plate();
        break;
    case scale:
        armor = new Scale();
        break;
    case cloth:
        armor = new Cloth();
        break;
    }
    return armor;
}
