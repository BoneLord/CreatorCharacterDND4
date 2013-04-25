#ifndef BONUS_H
#define BONUS_H

#include <map>
#include <vector>
#include <utility>
#include <algorithm>
#include "character/characteristics/abilitytype.h"
#include "character/characteristics/defensetype.h"
#include "character/characteristics/skill/skilltype.h"

class Bonus {
    Bonus(const Bonus &b);
    const Bonus& operator=(const Bonus &b);
    std::map<DefenseType, int> mDefenseBonus;
    std::map<AbilityType, int> mAbilityBonus;
    std::map<SkillType, int> mSkillBonus;
    std::vector<SkillType> mTrainedSkill;
public:
    Bonus();
    ~Bonus();

    const std::map<DefenseType, int> * getBonusToDefense() const;
    const std::map<AbilityType, int> * getBonusToAbility() const;
    const std::map<SkillType, int> * getBonusToSkill() const;
    const std::vector<SkillType> * getBonusTrainedSkill() const;

    void setBonus(DefenseType defense, int value);
    void setBonus(AbilityType ability, int value);
    void setBonus(SkillType skill, int value);
    void setBonus(SkillType skill);
};

#endif // BONUS_H
