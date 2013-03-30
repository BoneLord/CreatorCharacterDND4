#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include "character/characteristics/equipment/armor/armor.h"
#include "character/characteristics/equipment/weapon/weapon.h"

class Equipment {
    Armor *mArmor;
    Weapon *mWeapon;
//    Arms *mArms;
//    Feet *mFeet;
//    Hands *mHands;
//    Head *mHead;
//    Neck *mNeck;
//    Ring *mRing1;
//    Ring *mRing2;
//    Waist *mWaist;
public:
    Equipment();
    ~Equipment();
    void setArmor(Armor *armor);
    void setWeapon(Weapon *weapon);
//    void setArms(Arms *arms);
//    void setFeet(Feet *feet);
//    void setHands(Hands *hands);
//    void setHead(Head *head);
//    void setRingFirst(Ring ring);
//    void setRingSecond(Ring ring);
//    void setNeck(Neck *neck);

    const Armor * const getArmor() const;
    const Weapon * const getWeapon() const;
//    const Arms * const  getArms(Arms *arms) const;
//    const Feet * const  getFeet(Feet *feet) const;
//    const Hands * const  getHands(Hands *hands) const;
//    const Head * const  getHead(Head *head) const;
//    const Ring * const getRingFirst(Ring ring);
//    const Ring * const getRingSecond(Ring ring);
//    const Neck * const  getNeck(Neck *neck) const;
};

#endif // EQUIPMENT_H
