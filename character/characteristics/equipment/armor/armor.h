#ifndef ARMOR_H
#define ARMOR_H

class Armor {
protected:
    int armorBonus;
    int skillPenalty;
    int speedPenalty;
    int price;
    int weight;
public:
    Armor();
    virtual ~Armor();
    int getArmorBonus() const;
    int getSkillPenalty() const;
    int getSpeedPenalty() const;
    int getPrice() const;
    int getWeight() const;
    virtual bool isAddModifiersToArmor() const = 0;
};

#endif // ARMOR_H
