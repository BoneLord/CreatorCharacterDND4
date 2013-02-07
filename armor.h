#ifndef ARMOR_H
#define ARMOR_H

#include "armortype.h"
#include "armorkind.h"

// Магические свойства не учитываются (пока)

class Armor {
protected:
    int armorBonus;                 // бонус к классу защиты
    int skillPenalty;               // штраф к навыкам
    int speedPenalty;               // штраф к скорости
    int price;                      // цена
    int weight;                     // вес
    ArmorKind armorKind;            // тип доспеха
public:
    Armor();
    virtual ~Armor();
    int getArmorBonus() const;
    int getSkillPenalty() const;
    int getSpeedPenalty() const;
    int getPrice() const;
    int getWeight() const;
    bool isAddModifiersToArmor() const;
    static Armor * createArmor(ArmorType armorType);
};

#endif // ARMOR_H
