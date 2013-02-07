#ifndef TABLESKILL_H
#define TABLESKILL_H

#include "skill.h"
#include "skilltype.h"

class TableSkill {
    Skill **skills;
    enum {SKILLCOUNT = 17};
public:
    TableSkill();
    ~TableSkill();
    int getSkillValue(SkillType skillType) const;
    int getAcrobaticsValue() const;
    int getArcanaValue() const;
    int getAthleticsValue() const;
    int getBluffValue() const;
    int getDiplomacyValue() const;
    int getDungeoneeringValue() const;
    int getEnduranceValue() const;
    int getHealValue() const;
    int getHistoryValue() const;
    int getInsightValue() const;
    int getIntimidateValue() const;
    int getNatureValue() const;
    int getPerceptionValue() const;
    int getReligionValue() const;
    int getStealthValue() const;
    int getStreetwiseValue() const;
    int getThieveryValue() const;
    int setTrainSkill(SkillType skillType);
    int setUnTrainSkill(SkillType skillType);
    int getCountTrainedSkill() const;
};

#endif // TABLESKILL_H
