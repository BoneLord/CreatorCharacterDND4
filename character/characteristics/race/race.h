#ifndef RACE_H
#define RACE_H

#include "character/characteristics/race/racetype.h"
#include "character/characteristics/race/characteristics/size.h"
#include "character/characteristics/race/characteristics/vision.h"
#include "character/characteristics/language.h"
#include "character/characteristics/bonus/typeBonus/bonusability.h"
#include "character/characteristics/bonus/typeBonus/bonusskill.h"
#include "character/characteristics/bonus/typeBonus/bonusdefense.h"
#include "character/characteristics/feat/feattype.h"

class Race {
protected:
    int avgMinHeight;
    int avgMaxHeight;
    int avgMaxWeight;
    int avgMinWeight;
    int avgAge;
    Size size;
    int speed;
    Vision vision;
    RaceType raceType;

    Language *languages;
    int countLanguage;

    BonusAbility **abilityScoreBonus;
    int countAbltScBns;

    BonusSkill **skillBonus;
    int countSkllBns;

    BonusDefense **defenseBonus;
    int countDfnsBns;

    FeatType *feats;
    int countFeat;
public:
    virtual ~Race();
    int getAverageMinHeight() const;
    int getAverageMaxHeight() const;
    int getAverageMinWeight() const;
    int getAverageMaxWeight() const;
    int getAverageAge() const;
    Size getSize() const;
    int getSpeed() const;
    Vision getVision() const;
    RaceType getRace() const;
    Language const * getLanguages() const;
    int countLanguages() const;
    BonusAbility const * const * getAbilityScoreBonus() const;
    int countAbilityScoreBonus() const;
    BonusSkill const * const * getSkillBonus() const;
    int countSkillBonus() const;
    BonusDefense const * const * getDefenseBonus() const;
    int countDefenseBonus() const;
    int getValueBonusOfType(AbilityType abltType) const;
    int getValueBonusOfType(SkillType skillType) const;
    int getValueBonusOfType(DefenseType dfnsType) const;
    FeatType const * const getFeats() const;
    int getCountFeat() const;

    static Race* createRace(RaceType raceType);
};

#endif // RACE_H

