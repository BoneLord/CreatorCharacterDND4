#ifndef CHARACTER_H
#define CHARACTER_H

#include <cstring>
#include "characteristics/race/race.h"
#include "character/characteristics/class/classcharacter.h"
#include "characteristics/alignment.h"
#include "characteristics/gender.h"
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
#include "character/characteristics/deity/ideity.h"
#include "character/characteristics/equipment/armor/armor.h"
#include "character/characteristics/equipment/weapon/weapon.h"

class Character {
    enum {MAX_LEVEL = 30};
    enum {MAX_EXP = 1000000};
    Alignment mAlignment;
    Armor *mArmor;
//    Arms *mArms;
    bool mFlagSetAlignment;
    char *mNameCharacter;
    char *mNameCommand;
    char *mNamePlayer;
    ClassCharacter *mClassCharacter;
//    Feet *mFeet;
    Gender mGender;
//    Hands *mHands;
//    Head *mHead;
    IDeity *mDeity;
    int mAge;
    int mArmorClass;
    int mAttack;
    int mCharisma;
    int mConstitution;
    int mCountMaxSkill;
    int mCountTrainSkill;
    int mDexterity;
    int mExpereance;
    int mFortitude;
    int mHealingSurgesPerDay;
    int mHeight;
    int mHitPoint;
    int mInitiative;
    int mIntellect;
    int mLevel;
    int mMaxHitPoint;
    int mReflex;
    int mSpeed;
    int mStrength;
    int mWeight;
    int mWill;
    int mWisdom;
//    Neck *mNeck;
    Race *mRace;
//    Ring *mRing1;
//    Ring *mRing2;
    Size mSize;
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
    std::vector<Language> mLanguages;
    std::map<int, int> mExpereanceTable;
    Vision mVision;
//    Waist *mWaist;
    Weapon *mWeapon;

    int getArmorSpeedPenalty() const;
    int getArmorSkillPenalty() const;
    void addBonusToSkill(const Bonus * const bonus);
    void subBonusToSkill(const Bonus * const bonus);
    void addBonusToAbility(const Bonus * const bonus);
    void subBonusToAbility(const Bonus * const bonus);
    void addBonusToDefense(const Bonus * const bonus);
    void subBonusToDefense(const Bonus * const bonus);
    void addBonusTrainedSkill(const Bonus * const bonus);
    void subBonusTrainedSkill(const Bonus * const bonus);
    int computeHitPointPerLevel() const;
    void initTableExp();
    bool isClassSkill(SkillType skill) const;
public:
    Character();
    ~Character();

    // Common
    const char * getNameCharacter() const;
    const char * getNamePlayer() const;
    const char * getNameCommand() const;
    Gender getGender() const;
    Alignment getAlignment() const;
    const IDeity * const getDeity() const;
    int getWeight() const;
    int getHeight() const;
    int getAge() const;
    int getLevel() const;
    int getTotalExpereance() const;
    const Race * const getRace() const;
    const ClassCharacter * const getClass() const;
    Size getSize() const;
    int getInitiative() const;
    int getMaxHitPoint() const;
    int getHitPoint() const;
    int getBloodied() const;
    int getHealingSurgesPerDay() const;
    int getHealingSurgesValue() const;
    int getActionPoints() const;
    int getSpeed() const;
    int getPassiveInsight() const;
    int getPassivePerception() const;
    Vision getVision() const;
    const std::vector<Language> * getLanguage() const;
    int getStandartAttackBonus() const;

    // Ability score
    int getStrScore() const;
    int getConScore() const;
    int getDexScore() const;
    int getIntScore() const;
    int getWisScore() const;
    int getChrScore() const;

    // Ability modifier
    int getStrMod() const;
    int getConMod() const;
    int getDexMod() const;
    int getIntMod() const;
    int getWisMod() const;
    int getChrMod() const;
    int getAbilityModifier(AbilityType ability) const;

    // Defense
    int getArmorClass() const;
    int getFortitude() const;
    int getReflex() const;
    int getWill() const;

    // Skills
    int getAcrobatics() const;
    int getArcana() const;
    int getAthletics() const;
    int getBluff() const;
    int getDiplomacy() const;
    int getDungeoneering() const;
    int getEndurance() const;
    int getHeal() const;
    int getHistory() const;
    int getInsight() const;
    int getIntimidate() const;
    int getNature() const;
    int getPerception() const;
    int getReligion() const;
    int getStealth() const;
    int getStreetwise() const;
    int getThievery() const;

    const Armor * const getArmor() const;
    const Weapon * const getWeapon() const;
//    const Arms * const  getArms(Arms *arms) const;
//    const Feet * const  getFeet(Feet *feet) const;
//    const Hands * const  getHands(Hands *hands) const;
//    const Head * const  getHead(Head *head) const;
//    const Ring * const getRingFirst(Ring ring);
//    const Ring * const getRingSecond(Ring ring);
//    const Neck * const  getNeck(Neck *neck) const;

    //Learn skill and re-learn
//    int setSkillTrained(SkillType skillType);
//    int getRestCountSkillTrain() const;
//    int setSkillReTrained(SkillType untrainSkill, SkillType trainSkill);
    void setRace(Race *race);
    void setClass(ClassCharacter *classCharacter);

    // Choose deity and alignment
    int setDeity(IDeity *deityType);
    int setAlignment(Alignment alignment);

    //  Equipment set
    void setArmor(Armor *armor);
    void setWeapon(Weapon *weapon);
//    void setArms(Arms *arms);
//    void setFeet(Feet *feet);
//    void setHands(Hands *hands);
//    void setHead(Head *head);
//    void setRingFirst(Ring ring);
//    void setRingSecond(Ring ring);
//    void setNeck(Neck *neck);

    // set all members
    void setAge(int age);
    void setNameCharacter(const char * const nameCharacter);
    void setNamePlayer(const char * const namePlayer);
    void setNameCommand(const char * const nameCommand);
    void setGender(Gender gender);
    void setWeight(int weight);
    void setHeight(int height);
    void setLevel(int level);
    void addExpereance(int value);
    void setStrength(int strength);
    void setConstitution(int constitution);
    void setDexterity(int dexterity);
    void setIntellect(int intellect);
    void setWisdom(int wisdom);
    void setCharisma(int charisma);

    // train skills
    int trainSkill(SkillType skill);
    int unTrainSkill(SkillType skill);
    int trainAcrobatics();
    int unTrainAcrobatics();
    int trainArcana();
    int unTrainArcana();
    int trainAthletics();
    int unTrainAthletics();
    int trainBluff();
    int unTrainBluff();
    int trainDiplomacy();
    int unTrainDiplomacy();
    int trainDungeoneering();
    int unTrainDungeoneering();
    int trainEndurance();
    int unTrainEndurance();
    int trainHeal();
    int unTrainHeal();
    int trainHistory();
    int unTrainHistory();
    int trainInsight();
    int unTrainInsight();
    int trainIntimidate();
    int unTrainIntimidate();
    int trainNature();
    int unTrainNature();
    int trainPerception();
    int unTrainPerception();
    int trainReligion();
    int unTrainReligion();
    int trainStealth();
    int unTrainStealth();
    int trainStreetwise();
    int unTrainStreetwise();
    int trainThievery();
    int unTrainThievery();
};

#endif // CHARACTER_H
