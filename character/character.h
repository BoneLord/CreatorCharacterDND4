#ifndef CHARACTER_H
#define CHARACTER_H

#include <cstring>
#include "characteristics/race/race.h"
#include "character/characteristics/class/classcharacter.h"
#include "characteristics/alignment.h"
#include "characteristics/gender.h"
#include "characteristics/deity/deitytype.h"
#include "character/characteristics/race/racetype.h"
#include "character/characteristics/class/classtype.h"
#include "character/characteristics/skill/skill.h"
#include "character/characteristics/skill/tableskill.h"
#include "character/characteristics/deity/deity.h"
#include "character/characteristics/equipment/implement/implementtype.h"
#include "character/characteristics/equipment/equipment.h"
#include "character/characteristics/feat/feat.h"

class Character {
    char *nameCharacter;
    char *namePlayer;
    char *nameCommand;
    Gender gender;
    Alignment alignment;
    DeityType deityType;
    int weight;
    int height;
    int age;
    int level;
    int expereance;
    int strength;
    int constitution;
    int dexterity;
    int intellect;
    int wisdom;
    int charisma;
    Race *race;
    ClassCharacter *classCharacter;
    TableSkill skills;
    int countMaxSkill;
    bool flagSetAlignment;
    bool flagSetDeity;
    Language *languages;
    int countLanguage;
    Equipment equipment;
    Feat feats;
    int getPositiveMod(int value) const;
    int getArmorSpeedPenalty() const;
    int getArmorSkillPenalty() const;
public:
    Character(RaceType raceType, ClassType classType,
              char nameChr[], char namePlr[], char nameCmnd[],
              int _age, Gender _gender, int _height, int _weight,
              int _strength = 8, int _constitution = 8,
              int _dexterity = 8, int _intellect = 8,
              int _wisdom = 8, int _charisma = 8,
              int _level = 1);
    ~Character();
    const char* getNameCharacter() const;
    const char* getNamePlayer() const;
    const char* getNameCommand() const;
    Gender getGender() const;
    Alignment getAlignment() const;
    DeityType getDeityType() const;
    int getWeight() const;
    int getHeight() const;
    int getAge() const;
    int getLevel() const;
    int getTotalExpereance() const;
    RaceType getRace() const;
    ClassType getClass() const;
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
    int getAverageMinHeight() const;
    int getAverageMaxHeight() const;
    int getAverageMinWeight() const;
    int getAverageMaxWeight() const;
    int getAverageAge() const;
    Language const * getLanguage() const;
    int getCountLanguage() const;
    RoleType getRole() const;
    PowerSource getPowerSource() const;
    AbilityType const * getKeyAbility() const;
    int getCountKeyAbility() const;
    ImplementType const * getImplements() const;
    int getCountImplement() const;

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
    int setDeityType(DeityType _deityType);
    int setAlignment(Alignment _alignment);

    // Choose new language
    int setLanguage(Language language);

    // Set armor
    void setArmor(ArmorType armorType);
};

#endif // CHARACTER_H
