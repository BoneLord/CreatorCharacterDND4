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
    Acrobatics      Dex                     Акробатика
    Arcana          Int     n/a             Магия
    Athletics       Str                     Атлетика
    Bluff           Cha     n/a             Обман
    Diplomacy       Cha     n/a             Переговоры
    Dungeoneering   Wis     n/a             Подземелья
    Endurance       Con                     Выносливость
    Heal            Wis     n/a             Целительство
    History         Int     n/a             История
    Insight         Wis     n/a             Проницательность
    Intimidate      Cha     n/a             Запугивание
    Nature          Wis     n/a             Природа
    Perception      Wis     n/a             Внимательность
    Religion        Int     n/a             Религия
    Stealth         Dex                     Скрытность
    Streetwise      Cha     n/a             Знание улиц
    Thievery        Dex                     Воровство
*/
