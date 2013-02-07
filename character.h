#ifndef CHARACTER_H
#define CHARACTER_H

#include <cstring>
#include "race.h"
#include "classcharacter.h"
#include "alignment.h"
#include "gender.h"
#include "deitytype.h"
#include "racetype.h"
#include "classtype.h"
#include "skill.h"
#include "tableskill.h"
#include "deity.h"
#include "implementtype.h"
#include "equipment.h"
#include "feat.h"

/**
  Сделать учёт:
        1) Черт
        2) Вещей
  Которые влияют на характеристики.
  */

class Character {
    char *nameCharacter;                    // Имя персонажа
    char *namePlayer;                       // Имя игрока
    char *nameCommand;                      // Команда или название организации
    Gender gender;                          // Пол
    Alignment alignment;                    // Мировозрение
    DeityType deityType;                    // Божество или вера
    int weight;                             // Вес
    int height;                             // Рост
    int age;                                // Возраст
    int level;                              // Уровень персонажа
    int expereance;                         // Количество опыта
    int strength;                           // Сила
    int constitution;                       // Телосложение
    int dexterity;                          // Ловкость
    int intellect;                          // Интеллект
    int wisdom;                             // Мудрость
    int charisma;                           // Обаяние
    Race *race;                             // Раса
    ClassCharacter *classCharacter;         // Класс
    TableSkill skills;                      // Навыки
    int countMaxSkill;                      // Количество тренированных навыков
    bool flagSetAlignment;                  // Факт того, что мировоззрение было выбрано
    bool flagSetDeity;                      // Факт того, что божество было выбрано
    Language *languages;                    // Известные языки
    int countLanguage;                      // Количество известных языков
    Equipment equipment;                    // Снаряжение персонажа
    Feat feats;                             // Черты
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
