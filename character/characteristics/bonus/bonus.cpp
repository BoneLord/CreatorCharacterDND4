#include "character/characteristics/bonus/bonus.h"

Bonus::Bonus() {
}

Bonus::~Bonus() {
}

Bonus::Bonus(const Bonus &b) {
}

const Bonus& Bonus::operator=(const Bonus &b) {
    return *this;
}

const std::map<DefenseType, int> * Bonus::getBonusToDefense() const {
    return &mDefenseBonus;
}

const std::map<AbilityType, int> * Bonus::getBonusToAbility() const {
    return &mAbilityBonus;
}

const std::map<SkillType, int> * Bonus::getBonusToSkill() const {
    return &mSkillBonus;
}

const std::vector<SkillType> * Bonus::getBonusTrainedSkill() const {
    return &mTrainedSkill;
}

void Bonus::setBonus(DefenseType defense, int value) {
    std::map<DefenseType, int>::iterator it = mDefenseBonus.find(defense);
    if (it == mDefenseBonus.end()) {
        mDefenseBonus.insert(std::make_pair(defense, value));
        return;
    }
    it->second = value;
}

void Bonus::setBonus(AbilityType ability, int value) {
    std::map<AbilityType, int>::iterator it = mAbilityBonus.find(ability);
    if (it == mAbilityBonus.end()) {
        mAbilityBonus.insert(std::make_pair(ability, value));
        return;
    }
    it->second = value;
}

void Bonus::setBonus(SkillType skill, int value) {
    std::map<SkillType, int>::iterator it = mSkillBonus.find(skill);
    if (it == mSkillBonus.end()) {
        mSkillBonus.insert(std::make_pair(skill, value));
        return;
    }
    it->second = value;
}

void Bonus::setBonus(SkillType skill) {
    std::vector<SkillType>::iterator it = std::find(mTrainedSkill.begin(), mTrainedSkill.end(), skill);
    if (it == mTrainedSkill.end()) {
        mTrainedSkill.push_back(skill);
    }
}
