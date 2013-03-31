#ifndef HEAVYARMOR_H
#define HEAVYARMOR_H

#include "character/characteristics/equipment/armor/armor.h"

class HeavyArmor : public Armor {
public:
    HeavyArmor();
    virtual ~HeavyArmor();
    bool isAddModifiersToArmor() const;
};

#endif // HEAVYARMOR_H
