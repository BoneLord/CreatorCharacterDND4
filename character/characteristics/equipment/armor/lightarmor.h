#ifndef LIGHTARMOR_H
#define LIGHTARMOR_H

#include "character/characteristics/equipment/armor/armor.h"

class LightArmor : public Armor {
public:
    LightArmor();
    virtual ~LightArmor();
    bool isAddModifiersToArmor() const;
};

#endif // LIGHTARMOR_H
