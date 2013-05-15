#ifndef SKILLTEST_H
#define SKILLTEST_H

#include <gtest/gtest.h>
#include "character/characteristics/skill/skill.h"
#include "character/characteristics/skill/typeSkill/acrobatics.h"
#include "character/characteristics/skill/typeSkill/arcana.h"
#include "character/characteristics/skill/typeSkill/athletics.h"
#include "character/characteristics/skill/typeSkill/bluff.h"
#include "character/characteristics/skill/typeSkill/diplomacy.h"
#include "character/characteristics/skill/typeSkill/dungeoneering.h"
#include "character/characteristics/skill/typeSkill/endurance.h"
#include "character/characteristics/skill/typeSkill/heal.h"
#include "character/characteristics/skill/typeSkill/history.h"
#include "character/characteristics/skill/typeSkill/insight.h"
#include "character/characteristics/skill/typeSkill/intimidate.h"
#include "character/characteristics/skill/typeSkill/nature.h"
#include "character/characteristics/skill/typeSkill/perception.h"
#include "character/characteristics/skill/typeSkill/religion.h"
#include "character/characteristics/skill/typeSkill/stealth.h"
#include "character/characteristics/skill/typeSkill/streetwise.h"
#include "character/characteristics/skill/typeSkill/thievery.h"

class SkillTest : public ::testing::Test {
protected:
    Skill *mAcrobatics;
    Skill *mArcana;
    Skill *mAthletics;
    Skill *mBluff;
    Skill *mDiplomacy;
    Skill *mDungeoneering;
    Skill *mEndurance;
    Skill *mHeal;
    Skill *mHistory;
    Skill *mInsight;
    Skill *mIntimidate;
    Skill *mNature;
    Skill *mPerception;
    Skill *mReligion;
    Skill *mStealth;
    Skill *mStreetwise;
    Skill *mThievery;
public:
    SkillTest();
    ~SkillTest();
};

#endif // SKILLTEST_H
