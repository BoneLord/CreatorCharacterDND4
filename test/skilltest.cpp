#include "skilltest.h"

SkillTest::SkillTest() {
    mAcrobatics = new Acrobatics();
    mArcana = new Arcana();
    mAthletics = new Athletics();
    mBluff = new Bluff();
    mDiplomacy = new Diplomacy;
    mDungeoneering = new Dungeoneering();
    mEndurance = new Endurance();
    mHeal = new Heal();
    mHistory = new History();
    mInsight = new Insight();
    mIntimidate = new Intimidate();
    mNature = new Nature();
    mPerception = new Perception();
    mReligion = new Religion();
    mStealth = new Stealth();
    mStreetwise = new Streetwise();
    mThievery = new Thievery();
}

SkillTest::~SkillTest() {
    delete mAcrobatics;
    delete mArcana;
    delete mAthletics;
    delete mBluff;
    delete mDiplomacy;
    delete mDungeoneering;
    delete mEndurance;
    delete mHeal;
    delete mHistory;
    delete mInsight;
    delete mIntimidate;
    delete mNature;
    delete mPerception;
    delete mReligion;
    delete mStealth;
    delete mStreetwise;
    delete mThievery;
}
