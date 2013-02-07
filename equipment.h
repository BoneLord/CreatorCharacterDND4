#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include "armor.h"
#include "weapon.h"

class Equipment {
    Armor *armor;               // Доспех
    Weapon *weapon;             // Оружие восновной руке
//    Arms *arms;                 // Щиты и наручи
//    Feet *feet;                 // Предметы на ноги (обувь, наголенники)
//    Hands *hands;               // Предметы для кистей (перчатки, рукавицы)
//    Head *head;                 // Предметы на голову
//    Neck *neck;                 // Предметы на шею (амулеты, накидки)
//    Ring *ring1;                // Кольцо для правой руки
//    Ring *ring2;                // Кольцо для левой руки
//    Waist *waist;               // Предметы на пояс
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
