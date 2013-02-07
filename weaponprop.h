#ifndef WEAPONPROP_H
#define WEAPONPROP_H

enum WeaponProp {
    pHeavyThrown = 0,       // Тяжёлое метательное
    pHighCrit,				// Высококритичное
    pLightThrown,    		// Лёгкое метательное
    pOffHand,				// Дополнительное
    pReach,  				// Досягаемость
    pSmall,  				// Маленькое
    pVersatile,             // Универсальное
    pNoFeature,             // Нет особых свойств
    pLoadFree,              // Перезарядка свободным действием
    pLoadMinor              // Перезарядка малым действием
};

#endif // WEAPONPROP_H
