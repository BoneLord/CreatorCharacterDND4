#include "equipment.h"

Equipment::Equipment() {
    armor = 0;
    weapon = 0;
//    arms = 0;
//    feet = 0;
//    hands = 0;
//    head = 0;
//    neck = 0;
//    ring1 = 0;
//    ring2 = 0;
//    waist = 0;
}

Equipment::~Equipment() {
    delete armor;
    delete weapon;
//    delete arms;
//    delete feet;
//    delete hands;
//    delete head;
//    delete neck;
//    delete ring1;
//    delete ring2;
//    delete waist;
}

void Equipment::setArmor(ArmorType armorType) {
    if (armor != 0) {
        delete armor;
    }
    armor = Armor::createArmor(armorType);
}

void Equipment::setWeapon(WeaponType weaponType) {
    if (weapon != 0) {
        delete weapon;
    }
    weapon = Weapon::createWeapon(weaponType);
}

//void Equipment::setArms(ArmsType armsType) {
//    if (arms != 0) {
//        delete arms;
//    }
//    arms = Arms::createArms(armsType);
//}

//void Equipment::setFeet(FeetType feetType) {
//    if (feet != 0) {
//        delete feet;
//    }
//    feet = Feet::createFeet(feetType);
//}

//void Equipment::setHands(HandsType handsType) {
//    if (hands != 0) {
//        delete hands;
//    }
//    hands = Hands::createHands(handsType);
//}

//void Equipment::setHead(HeadType headType) {
//    if (head != 0) {
//        delete head;
//    }
//    head = Head::createHead(headType);
//}

//void Equipment::setNeck(NeckType neckType) {
//    if (neck != 0) {
//        delete neck;
//    }
//    neck = Neck::createNeck(neckType);
//}

const Armor *const Equipment::getArmor() const {
    return armor;
}

const Weapon *const Equipment::getWeapon() const {
    return weapon;
}
