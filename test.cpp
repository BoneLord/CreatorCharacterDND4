#include "test/skilltest.h"
#include <gtest/gtest.h>

int main(int argc, char ** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

// Test skill value
TEST_F(SkillTest, SkillValueDefault) {
    mSkill = new Acrobatics();
    EXPECT_EQ(0, mSkill->getValue());
    delete mSkill;
    mSkill = new Arcana();
    EXPECT_EQ(0, mSkill->getValue());
    delete mSkill;
    mSkill = new Athletics();
    EXPECT_EQ(0, mSkill->getValue());
    delete mSkill;
    mSkill = new Bluff();
    EXPECT_EQ(0, mSkill->getValue());
    delete mSkill;
    mSkill = new Diplomacy;
    EXPECT_EQ(0, mSkill->getValue());
    delete mSkill;
    mSkill = new Dungeoneering();
    EXPECT_EQ(0, mSkill->getValue());
    delete mSkill;
    mSkill = new Endurance();
    EXPECT_EQ(0, mSkill->getValue());
    delete mSkill;
    mSkill = new Heal();
    EXPECT_EQ(0, mSkill->getValue());
    delete mSkill;
    mSkill = new History();
    EXPECT_EQ(0, mSkill->getValue());
    delete mSkill;
    mSkill = new Insight();
    EXPECT_EQ(0, mSkill->getValue());
    delete mSkill;
    mSkill = new Intimidate();
    EXPECT_EQ(0, mSkill->getValue());
    delete mSkill;
    mSkill = new Nature();
    EXPECT_EQ(0, mSkill->getValue());
    delete mSkill;
    mSkill = new Perception();
    EXPECT_EQ(0, mSkill->getValue());
    delete mSkill;
    mSkill = new Religion();
    EXPECT_EQ(0, mSkill->getValue());
    delete mSkill;
    mSkill = new Stealth();
    EXPECT_EQ(0, mSkill->getValue());
    delete mSkill;
    mSkill = new Streetwise();
    EXPECT_EQ(0, mSkill->getValue());
    delete mSkill;
    mSkill = new Thievery();
    EXPECT_EQ(0, mSkill->getValue());
    delete mSkill;
}

TEST_F(SkillTest, SkillValue) {
    mSkill = new Acrobatics();
    mSkill->addBonus(11);
    EXPECT_EQ(11, mSkill->getValue());
    delete mSkill;
    mSkill = new Arcana();
    mSkill->addBonus(11);
    EXPECT_EQ(11, mSkill->getValue());
    delete mSkill;
    mSkill = new Athletics();
    mSkill->addBonus(11);
    EXPECT_EQ(11, mSkill->getValue());
    delete mSkill;
    mSkill = new Bluff();
    mSkill->addBonus(11);
    EXPECT_EQ(11, mSkill->getValue());
    delete mSkill;
    mSkill = new Diplomacy;
    mSkill->addBonus(11);
    EXPECT_EQ(11, mSkill->getValue());
    delete mSkill;
    mSkill = new Dungeoneering();
    mSkill->addBonus(11);
    EXPECT_EQ(11, mSkill->getValue());
    delete mSkill;
    mSkill = new Endurance();
    mSkill->addBonus(11);
    EXPECT_EQ(11, mSkill->getValue());
    delete mSkill;
    mSkill = new Heal();
    mSkill->addBonus(11);
    EXPECT_EQ(11, mSkill->getValue());
    delete mSkill;
    mSkill = new History();
    mSkill->addBonus(11);
    EXPECT_EQ(11, mSkill->getValue());
    delete mSkill;
    mSkill = new Insight();
    mSkill->addBonus(11);
    EXPECT_EQ(11, mSkill->getValue());
    delete mSkill;
    mSkill = new Intimidate();
    mSkill->addBonus(11);
    EXPECT_EQ(11, mSkill->getValue());
    delete mSkill;
    mSkill = new Nature();
    mSkill->addBonus(11);
    EXPECT_EQ(11, mSkill->getValue());
    delete mSkill;
    mSkill = new Perception();
    mSkill->addBonus(11);
    EXPECT_EQ(11, mSkill->getValue());
    delete mSkill;
    mSkill = new Religion();
    mSkill->addBonus(11);
    EXPECT_EQ(11, mSkill->getValue());
    delete mSkill;
    mSkill = new Stealth();
    mSkill->addBonus(11);
    EXPECT_EQ(11, mSkill->getValue());
    delete mSkill;
    mSkill = new Streetwise();
    mSkill->addBonus(11);
    EXPECT_EQ(11, mSkill->getValue());
    delete mSkill;
    mSkill = new Thievery();
    mSkill->addBonus(11);
    EXPECT_EQ(11, mSkill->getValue());
    delete mSkill;
}


TEST_F(SkillTest, TNature) {
  EXPECT_EQ(0, mNature->getValue());
}

TEST_F(SkillTest, TPerception) {
  EXPECT_EQ(0, mPerception->getValue());
}

TEST_F(SkillTest, TReligion) {
  EXPECT_EQ(0, mReligion->getValue());
}

TEST_F(SkillTest, TStealth) {
  EXPECT_EQ(0, mStealth->getValue());
}

TEST_F(SkillTest, TmStreetwise) {
  EXPECT_EQ(0, mStreetwise->getValue());
}

TEST_F(SkillTest, TThievery) {
  EXPECT_EQ(0, mThievery->getValue());
}

TEST_F(SkillTest, TAcrobatics) {
  EXPECT_EQ(0, mAcrobatics->getValue());
}

TEST_F(SkillTest, TArcana) {
  EXPECT_EQ(0, mArcana->getValue());
}

TEST_F(SkillTest, TAthletics) {
  EXPECT_EQ(0, mAthletics->getValue());
}

TEST_F(SkillTest, TBluff) {
  EXPECT_EQ(0, mBluff->getValue());
}

TEST_F(SkillTest, TDiplomacy) {
  EXPECT_EQ(0, mDiplomacy->getValue());
}

TEST_F(SkillTest, TDungeoneering) {
  EXPECT_EQ(0, mDungeoneering->getValue());
}

TEST_F(SkillTest, TEndurance) {
  EXPECT_EQ(0, mEndurance->getValue());
}

TEST_F(SkillTest, THeal) {
  EXPECT_EQ(0, mHeal->getValue());
}

TEST_F(SkillTest, THistory) {
  EXPECT_EQ(0, mHistory->getValue());
}

TEST_F(SkillTest, TInsight) {
  EXPECT_EQ(0, mInsight->getValue());
}

TEST_F(SkillTest, TIntimidate) {
  EXPECT_EQ(0, mIntimidate->getValue());
}

// Test base ability
