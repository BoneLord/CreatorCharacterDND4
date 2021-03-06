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
    Skill *mSkill;
public:
    SkillTest();
    ~SkillTest();
};

#endif // SKILLTEST_H
