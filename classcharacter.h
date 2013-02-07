#ifndef CLASSCHARACTER_H
#define CLASSCHARACTER_H

#include "roletype.h"
#include "bonusdefense.h"
#include "powersource.h"
#include "classtype.h"
#include "skilltype.h"
#include "abilitytype.h"
#include "implementtype.h"
#include "feattype.h"

class ClassCharacter {
protected:
    BonusDefense **defenseBonus;            // Значение бонусных защит
    int countDfnsBns;                       // Количество бонусных защит
    SkillType *classSkill;                  // Классовые навыки
    int countClassSkill;                    // Количество классовых навыков
    SkillType *trainedSkill;                // Тренированные навыки
    int countTrainedSkill;                  // Количество тренированных навыков у класса
    int countSkill;                         // Максимальное количество навыков у класса
    AbilityType *keyAbility;                // Ключевые характеристики
    int countKeyAbility;                    // Количество ключевых характеристик
    ImplementType *implements;              // Инструменты, которыми персонаж может пользоваться
    int countImplement;                     // Количество инструментов
    FeatType *feats;                        // Классовые черты
    int countFeat;                          // Количество черт
    RoleType role;                          // Роль персонажа в группе
    PowerSource power;                      // Источник силы
    ClassType classType;                    // Класса персонажа
    int hitPointAtFirstLevel;               // Хиты на первом уровне
    int hitPointPerLevel;                   // Хиты за уровень
    int healingSurgesPerDay;                // Количество исцелений в день
public:
    virtual ~ClassCharacter();
    ClassType getClass() const;
    RoleType getRoleType() const;
    PowerSource getPowerSource() const;
    BonusDefense const * const * getDefenseBonus() const;
    int countDefenseBonus() const;
    SkillType const * getClassSkill() const;
    int getCountClassSkill() const;
    SkillType const * getTrainedSkill() const;
    int getCountTrainedSkill() const;
    int getHitPointAtFirstLevel() const;
    int getHitPointPerLevel() const;
    int getHealingSurgesPerDay() const;
    int getDefenseValue(DefenseType dfnsType) const;
    int getCountSkill() const;
    AbilityType const * getKeyAbility() const;
    int getCountKeyAbility() const;
    ImplementType const * getImplements() const;
    int getCountImplement() const;
    FeatType const * const getFeats() const;
    int getCountFeat() const;

    static ClassCharacter* createClass(ClassType classType);
};

#endif // CLASSCHARACTER_H

