#ifndef BONUS_H
#define BONUS_H

#include <map>
#include <utility>
#include "character/characteristics/abilitytype.h"
#include "character/characteristics/defensetype.h"
#include "character/characteristics/skill/skilltype.h"

class Bonus {
    Bonus(const Bonus &b);
    const Bonus& operator=(const Bonus &b);
    std::map<DefenseType, int> mDefenseBonus;
    std::map<AbilityType, int> mAbilityBonus;
    std::map<SkillType, int> mSkillBonus;
public:
    Bonus();
    ~Bonus();

    const std::map<DefenseType, int> * getBonusToDefense() const;
    const std::map<AbilityType, int> * getBonusToAbility() const;
    const std::map<SkillType, int> * getBonusToSkill() const;

    void setBonus(DefenseType defense, int value = 0);
    void setBonus(AbilityType ability, int value = 0);
    void setBonus(SkillType skill, int value = 0);
};

#endif // BONUS_H
