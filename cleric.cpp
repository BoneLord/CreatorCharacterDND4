#include "cleric.h"

Cleric::Cleric() {
    role = leaders;
    power = divine;
    classType = cleric;
    hitPointAtFirstLevel = 12;
    hitPointPerLevel = 5;
    healingSurgesPerDay = 7;
    countDfnsBns = 1;
    defenseBonus = new BonusDefense * [countDfnsBns];
    defenseBonus[0] = new BonusDefense(will, 2);
    countClassSkill = 6;
    classSkill = new SkillType [countClassSkill];
    classSkill[0] = arcana;
    classSkill[1] = diplomacy;
    classSkill[2] = heal;
    classSkill[3] = history;
    classSkill[4] = insight;
    classSkill[5] = religion;
    countTrainedSkill = 1;
    trainedSkill = new SkillType [countTrainedSkill];
    trainedSkill[0] = religion;
    countSkill = 4;
    countKeyAbility = 3;
    keyAbility = new AbilityType [countKeyAbility];
    keyAbility[0] = wisdom_t;
    keyAbility[1] = strength_t;
    keyAbility[2] = charisma_t;
    countImplement = 1;
    implements = new ImplementType [1];
    implements[0] = holySymbol;
    countFeat = 5;
    feats = new FeatType [countFeat];
    feats[0] = aPCloth;
    feats[1] = aPhide;
    feats[2] = aPLeather;
    feats[3] = wPSimpleMeleeWeapons;
    feats[4] = wPSimpleRangedWeapons;
}

Cleric::~Cleric() {
}
