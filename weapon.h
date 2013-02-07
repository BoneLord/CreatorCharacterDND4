#ifndef WEAPON_H
#define WEAPON_H

#include "weapontype.h"
#include "groupweapon.h"
#include "weaponprop.h"

// ћагические свойства не учитываютс€ (пока)

class Weapon {
    WeaponType weaponType;
    int bonusProf;
    int damage;
    int countDice;
    int minRange;
    int price;
    int weight;
    GroupWeapon groupWeapon;
    GroupWeapon groupWeaponMisc;
    WeaponProp weaponProp;
    WeaponProp weaponPropMisc;
    Weapon();
    Weapon(WeaponType wt, int bonusP, int dmg, int countD,
           int minR, int pr, int w, GroupWeapon wg1,
           GroupWeapon wg2, WeaponProp wp1 = pNoFeature,
           WeaponProp wp2 = pNoFeature);
    Weapon(WeaponType wt, int bonusP, int dmg, int countD,
           int minR, int pr, int w, GroupWeapon wg,
           WeaponProp wp1 = pNoFeature, WeaponProp wp2 = pNoFeature);
public:
    ~Weapon();
    int getBonusProf() const;
    int getDamage() const;
    int getCountDice() const;
    int getMinRange() const;
    int getMaxRange() const;
    int getPrice() const;
    int getWeight() const;
    GroupWeapon getFirstWeaponGroup() const;
    GroupWeapon getSecondWeaponGroup() const;
    WeaponProp getFirstWeaponProp() const;
    WeaponProp getSecondWeaponProp() const;
    static Weapon * createWeapon(WeaponType wt);
};

#endif // WEAPON_H
