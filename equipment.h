#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include "armor.h"
#include "weapon.h"

class Equipment {
    Armor *armor;
    Weapon *weapon;
//    Arms *arms;
//    Feet *feet;
//    Hands *hands;
//    Head *head;
//    Neck *neck;
//    Ring *ring1;
//    Ring *ring2;
//    Waist *waist;
public:
    Equipment();
    ~Equipment();
    void setArmor(ArmorType armorType);
    void setWeapon(WeaponType weaponType);
//    void setArms(ArmsType armsType);
//    void setFeet(FeetType feetType);
//    void setHands(HandsType handsType);
//    void setHead(HeadType headType);
//    void setNeck(NeckType neckType);

    Armor const * const getArmor() const;
    Weapon const * const getWeapon() const;
};

#endif // EQUIPMENT_H
