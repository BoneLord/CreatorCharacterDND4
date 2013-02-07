#ifndef ARMOR_H
#define ARMOR_H

#include "armortype.h"
#include "armorkind.h"

// ���������� �������� �� ����������� (����)

class Armor {
protected:
    int armorBonus;                 // ����� � ������ ������
    int skillPenalty;               // ����� � �������
    int speedPenalty;               // ����� � ��������
    int price;                      // ����
    int weight;                     // ���
    ArmorKind armorKind;            // ��� �������
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
