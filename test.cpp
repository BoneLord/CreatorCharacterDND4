#include "test/skilltest.h"
#include <gtest/gtest.h>

int main(int argc, char ** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
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
