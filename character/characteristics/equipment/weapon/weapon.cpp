#include "character/characteristics/equipment/weapon/weapon.h"

Weapon::Weapon() {
    bonusProf = 0;
    damage = 4;
    countDice = 1;
    minRange = 1;
    price = 0;
    weight = 0;
    groupWeapon = gUnarmed;
    groupWeaponMisc = gUnarmed;
    weaponProp = pNoFeature;
    weaponPropMisc = pNoFeature;
}

Weapon::Weapon(WeaponType wt, int bonusP, int dmg, int countD,
               int minR, int pr, int w, GroupWeapon wg1, GroupWeapon wg2,
               WeaponProp wp1, WeaponProp wp2) :
    weaponType(wt),
    bonusProf(bonusP),
    damage(dmg),
    countDice(countD),
    minRange(minR),
    price(pr),
    weight(w),
    groupWeapon(wg1),
    groupWeaponMisc(wg2),
    weaponProp(wp1),
    weaponPropMisc(wp2) {
}

Weapon::Weapon(WeaponType wt, int bonusP, int dmg, int countD,
               int minR, int pr, int w, GroupWeapon wg, WeaponProp wp1,
               WeaponProp wp2) :
    weaponType(wt),
    bonusProf(bonusP),
    damage(dmg),
    countDice(countD),
    minRange(minR),
    price(pr),
    weight(w),
    groupWeapon(wg),
    weaponProp(wp1),
    weaponPropMisc(wp2) {
    groupWeaponMisc = groupWeapon;
}

Weapon::~Weapon() {
}

int Weapon::getBonusProf() const {
    return bonusProf;
}

int Weapon::getDamage() const {
    return damage;
}

int Weapon::getCountDice() const {
    return countDice;
}

int Weapon::getMinRange() const {
    return minRange;
}

int Weapon::getMaxRange() const {
    if (weaponProp == pReach || weaponPropMisc == pReach) {
        return (minRange * 2);
    }
    else if (minRange > 1) {
        return (minRange * 2);
    }
    return minRange;
}

int Weapon::getPrice() const {
    return price;
}

int Weapon::getWeight() const {
    return weight;
}

GroupWeapon Weapon::getFirstWeaponGroup() const {
    return groupWeapon;
}

GroupWeapon Weapon::getSecondWeaponGroup() const {
    return groupWeaponMisc;
}

WeaponProp Weapon::getFirstWeaponProp() const {
    return weaponProp;
}

WeaponProp Weapon::getSecondWeaponProp() const {
    return weaponProp;
}

Weapon *Weapon::createWeapon(WeaponType wt) {
    Weapon *weapon;
    switch (wt) {
    case club:
        weapon = new Weapon(wt, 2, 6, 1, 1, 1, 3, gMace);
        break;
    case dagger:
        weapon = new Weapon(wt, 3, 4, 1, 5, 1, 1, gLightBlade, pOffHand, pLightThrown);
        break;
    case javelin:
        weapon = new Weapon(wt, 2, 6, 1, 10, 5, 2, gSpear, pHeavyThrown);
        break;
    case mace:
        weapon = new Weapon(wt, 2, 8, 1, 1, 5, 6, gMace, pVersatile);
        break;
    case sickle:
        weapon = new Weapon(wt, 2, 6, 1, 1, 2, 2, gLightBlade, pOffHand);
        break;
    case spear:
        weapon = new Weapon(wt, 2, 8, 1, 1, 5, 6, gSpear, pVersatile);
        break;
    case greatclub:
        weapon = new Weapon(wt, 2, 4, 2, 1, 1, 10, gMace);
        break;
    case morningstar:
        weapon = new Weapon(wt, 2, 10, 1, 1, 10, 8, gMace);
        break;
    case quarterstaff:
        weapon = new Weapon(wt, 2, 8, 1, 1, 5, 4, gStaff);
        break;
    case scythe:
        weapon = new Weapon(wt, 2, 4, 2, 1, 5, 10, gHeavyBlade);
        break;
    case battleaxe:
        weapon = new Weapon(wt, 2, 10, 1, 1, 15, 6, gAxe, pVersatile);
        break;
    case flail:
        weapon = new Weapon(wt, 2, 10, 1, 1, 10, 5, gFlail, pVersatile);
        break;
    case handaxe:
        weapon = new Weapon(wt, 2, 6, 1, 5, 5, 3, gAxe, pOffHand, pHeavyThrown);
        break;
    case longsword:
        weapon = new Weapon(wt, 3, 8, 1, 1, 15, 4, gHeavyBlade, pVersatile);
        break;
    case scimitar:
        weapon = new Weapon(wt, 2, 8, 1, 1, 10, 4, gHeavyBlade, pHighCrit);
        break;
    case shortSword:
        weapon = new Weapon(wt, 3, 6, 1, 1, 10, 2, gLightBlade, pOffHand);
        break;
    case throwingHammer:
        weapon = new Weapon(wt, 2, 6, 1, 5, 5, 2, gHammer, pOffHand, pHeavyThrown);
        break;
    case warhammer:
        weapon = new Weapon(wt, 2, 10, 1, 1, 15, 5, gHammer, pVersatile);
        break;
    case warPick:
        weapon = new Weapon(wt, 2, 8, 1, 1, 15, 6, gPick, pHighCrit, pVersatile);
        break;
    case falchion:
        weapon = new Weapon(wt, 3, 4, 2, 1, 25, 7, gHeavyBlade, pHighCrit);
        break;
    case glaive:
        weapon = new Weapon(wt, 2, 4, 2, 1, 25, 10, gHeavyBlade, gPolearm, pReach);
        break;
    case greataxe:
        weapon = new Weapon(wt, 2, 12, 1, 1, 30, 12, gAxe, pHighCrit);
        break;
    case greatsword:
        weapon = new Weapon(wt, 3, 10, 1, 1, 30, 8, gHeavyBlade);
        break;
    case halberd:
        weapon = new Weapon(wt, 2, 10, 1, 1, 25, 12, gAxe, gPolearm, pReach);
        break;
    case heavyFlail:
        weapon = new Weapon(wt, 2, 6, 2, 1, 25, 10, gFlail);
        break;
    case longspear:
        weapon = new Weapon(wt, 2, 10, 1, 1, 10, 9, gPolearm, gSpear, pReach);
        break;
    case maul:
        weapon = new Weapon(wt, 2, 6, 2, 1, 30, 12, gHammer);
        break;
    case bastardSword:
        weapon = new Weapon(wt, 3, 10, 1, 1, 30, 6, gHeavyBlade, pVersatile);
        break;
    case katar:
        weapon = new Weapon(wt, 3, 6, 1, 1, 3, 1, gLightBlade, pOffHand, pHighCrit);
        break;
    case rapier:
        weapon = new Weapon(wt, 3, 8, 1, 1, 25, 2, gLightBlade);
        break;
    case spikedChain:
        weapon = new Weapon(wt, 3, 4, 2, 1, 30, 10, gFlail, pReach);
        break;
    case handCrossbow:
        weapon = new Weapon(wt, 2, 6, 1, 10, 25, 2, gCrossbow, pLoadFree);
        break;
    case sling:
        weapon = new Weapon(wt, 2, 6, 1, 10, 1, 0, gSling, pLoadFree);
        break;
    case crossbow:
        weapon = new Weapon(wt, 2, 8, 1, 15, 25, 4, gCrossbow, pLoadMinor);
        break;
    case longbow:
        weapon = new Weapon(wt, 2, 10, 1, 20, 30, 3, gBow, pLoadFree);
        break;
    case shortbow:
        weapon = new Weapon(wt, 2, 8, 1, 15, 25, 2, gBow, pLoadFree, pSmall);
        break;
    case shuriken:
        weapon = new Weapon(wt, 3, 4, 1, 6, 1, 1, gLightBlade, pLightThrown);
        break;
    }
    return weapon;
}
