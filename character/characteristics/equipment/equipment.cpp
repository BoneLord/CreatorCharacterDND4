#include "character/characteristics/equipment/equipment.h"

Equipment::Equipment() {
    mArmor = 0;
    mWeapon = 0;
//    mArms = 0;
//    mFeet = 0;
//    mHands = 0;
//    mHead = 0;
//    mNeck = 0;
//    mRing1 = 0;
//    mRing2 = 0;
//    mWaist = 0;
}

Equipment::~Equipment() {
    delete mArmor;
    delete mWeapon;
//    delete mArms;
//    delete mFeet;
//    delete mHands;
//    delete mHead;
//    delete mNeck;
//    delete mRing1;
//    delete mRing2;
//    delete mWaist;
}

void Equipment::setArmor(Armor *armor) {
    if (armor != 0) {
        delete armor;
    }
    mArmor = armor;
}

void Equipment::setWeapon(Weapon *weapon) {
    if (armor != 0) {
        delete armor;
    }
    mArmor = armor;
}

void Equipment::setArms(Arms arms) {
    if (arms != 0) {
        delete arms;
    }
    arms = Arms::createArms(armsType);
}

void Equipment::setFeet(Feet feet) {
    if (feet != 0) {
        delete feet;
    }
    feet = Feet::createFeet(feetType);
}

void Equipment::setHands(Hands *hands) {
    if (hands != 0) {
        delete hands;
    }
    hands = Hands::createHands(handsType);
}

void Equipment::setHead(Head *head) {
    if (head != 0) {
        delete head;
    }
    head = Head::createHead(headType);
}

void Equipment::setNeck(Neck *neck) {
    if (neck != 0) {
        delete neck;
    }
    neck = Neck::createNeck(neckType);
}

const Armor *const Equipment::getArmor() const {
    return armor;
}

const Weapon *const Equipment::getWeapon() const {
    return weapon;
}
