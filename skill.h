#ifndef SKILL_H
#define SKILL_H

#include "abilitytype.h"
#include "skilltype.h"

class Skill {
protected:
    bool trainedFlag;
    SkillType skill;
    AbilityType ability;
public:
    Skill(bool trndFlag = false);
    virtual ~Skill();
    int setTrain();
    int setUnTrain();
    SkillType getSkillType() const;
    int getValue() const;
    AbilityType getBaseAbility() const;
    bool isTrained() const;
    static Skill* createSkill(SkillType skillType, bool trndFlag = false);
};

#endif // SKILL_H

/**
    Skill name              Armor penalty
    Acrobatics      Dex                     ����������
    Arcana          Int     n/a             �����
    Athletics       Str                     ��������
    Bluff           Cha     n/a             �����
    Diplomacy       Cha     n/a             ����������
    Dungeoneering   Wis     n/a             ����������
    Endurance       Con                     ������������
    Heal            Wis     n/a             ������������
    History         Int     n/a             �������
    Insight         Wis     n/a             ����������������
    Intimidate      Cha     n/a             �����������
    Nature          Wis     n/a             �������
    Perception      Wis     n/a             ��������������
    Religion        Int     n/a             �������
    Stealth         Dex                     ����������
    Streetwise      Cha     n/a             ������ ����
    Thievery        Dex                     ���������
*/
