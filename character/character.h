#ifndef CHARACTER_H
#define CHARACTER_H

#include <cstring>
#include "characteristics/race/race.h"
#include "character/characteristics/class/classcharacter.h"
#include "characteristics/alignment.h"
#include "characteristics/gender.h"
#include "character/characteristics/skill/skill.h"
#include "character/characteristics/skill/tableskill.h"
#include "character/characteristics/deity/ideity.h"
#include "character/characteristics/equipment/equipment.h"

class Character {
    char *mNameCharacter;
    char *mNamePlayer;
    char *mNameCommand;
    Gender mGender;
    Alignment mAlignment;
    IDeity *mDeity;
    int mWeight;
    int mHeight;
    int mAge;
    int mLevel;
    int mExpereance;
    int mStrength;
    int mConstitution;
    int mDexterity;
    int mIntellect;
    int mWisdom;
    int mCharisma;
    Race *mRace;
    ClassCharacter *mClassCharacter;
    TableSkill mSkills;
    int mCountMaxSkill;
    bool mFlagSetAlignment;
    Language *mLanguages;
    int mCountLanguage;
    Equipment mEquipment;
    int getPositiveMod(int value) const;
    int getArmorSpeedPenalty() const;
    int getArmorSkillPenalty() const;
public:
    Character(Race *race, ClassCharacter *classCharacter,
              char nameCharacter[], char namePlayer[], char nameCommand[],
              int age, Gender gender, int height, int weight,
              int strength = 8, int constitution = 8,
              int dexterity = 8, int intellect = 8,
              int wisdom = 8, int charisma = 8,
              int level = 1);
    ~Character();
    const char* getNameCharacter() const;
    const char* getNamePlayer() const;
    const char* getNameCommand() const;
    Gender getGender() const;
    Alignment getAlignment() const;
    const IDeity& getDeity() const;
    int getWeight() const;
    int getHeight() const;
    int getAge() const;
    int getLevel() const;
    int getTotalExpereance() const;
    const char * const getRace() const;                                 // Race::toString() Race name
    const char * const getClass() const;                                // ClassCharacter::toString() Class name
    Size getSize() const;
//    void addExpereance(int value);

    // Common
    int getInitiative() const;
    int getMaxHitPoint() const;
    int getBloodied() const;
    int getHealingSurgesPerDay() const;
    int getHealingSurgesValue() const;
    int getActionPoints() const;
    int getSpeed() const;
    int getPassiveInsight() const;
    int getPassivePerception() const;
//    int getStandartMeleeAttackBonus() const;
//    int getStandartMeleeDamageBonus() const;
//    int getStandartRangeAttackBonus() const;
//    int getStandartRangeDamageBonus() const;
    Vision getVision() const;
    const std::vector<Language>& getLanguage() const;
//    ImplementType const * getImplements() const;
//    int getCountImplement() const;

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
    int getAbilityModifier(AbilityType abltType) const;

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

    //Learn skill and re-learn
    int setSkillTrained(SkillType skillType);
    int getRestCountSkillTrain() const;
//    int setSkillReTrained(SkillType skillType);
//    int setSkillTrained(SkillType skillType/*, Feat feat*/);

    // Choose deity and alignment
    int setDeity(IDeity *deityType);
    int setAlignment(Alignment alignment);

    // Choose new language
    int setLanguage(Language language);

    // Set armor
    void setArmor(ArmorType armorType);
};

#endif // CHARACTER_H
