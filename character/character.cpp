#include "character/character.h"

Character::Character(Race *race, ClassCharacter *classCharacter,
                     char nameCharacter[], char namePlayer[], char nameCommand[],
                     int age, Gender gender, int height,
                     int weight, int strength, int constitution,
                     int dexterity, int intellect, int wisdom,
                     int charisma, int level) :
    mRace(race),
    mClassCharacter(classCharacter),
    mAge(age),
    mGender(gender),
    mHeight(height),
    mWeight(weight),
    mStrength(strength),
    mConstitution(constitution),
    mDexterity(dexterity),
    mIntellect(intellect),
    mWisdom(wisdom),
    mCharisma(charisma),
    mLevel(level) {
    mNamePlayer = new char [strlen(namePlayer)+1];
    mNameCharacter = new char [strlen(nameCharacter)+1];
    mNameCommand = new char [strlen(nameCommand)+1];
    strcpy(mNamePlayer, namePlayer);
    strcpy(mNameCharacter, nameCharacter);
    strcpy(mNameCommand, nameCommand);
    SkillType const * trainedSkill = mClassCharacter->getTrainedSkill();
    int countTrainedSkill = mClassCharacter->getCountTrainedSkill();
    for (int i = 0; i < countTrainedSkill; ++i) {
        mSkills.setTrainSkill(trainedSkill[i]);
    }
    mCountMaxSkill = mClassCharacter->getCountSkill();
    mFlagSetAlignment = false;
    mDeity = 0;
    mCountLanguage = mRace->countLanguages();
    mLanguages = new Language [mCountLanguage];
    memcpy(mLanguages, mRace->getLanguages(),(sizeof(Language) * mCountLanguage));
//    Language const * lan = mRace->getLanguages();
//    for (int i = 0; i < mCountLanguage; ++i) {
//        mLanguages[i] = lan[i];
//    }
}

Character::~Character() {
    delete [] mNameCharacter;
    delete [] mNamePlayer;
    delete [] mNameCommand;
    delete mRace;
    delete mClassCharacter;
    delete mLanguages;
    delete mDeity;
}

const char *Character::getNameCharacter() const {
    return mNameCharacter;
}

const char *Character::getNamePlayer() const {
    return mNamePlayer;
}

const char *Character::getNameCommand() const {
    return mNameCommand;
}

Gender Character::getGender() const {
    return mGender;
}

Alignment Character::getAlignment() const {
    return mAlignment;
}

const IDeity& Character::getDeity() const {
    return *mDeity;
}

int Character::getWeight() const {
    return mWeight;
}

int Character::getHeight() const {
    return mHeight;
}

int Character::getAge() const {
    return mAge;
}

int Character::getPositiveMod(int value) const {
    if (value < 0) {
        return 0;
    }
    return value;
}

int Character::getArmorSpeedPenalty() const {
    Armor const * const armor = mEquipment.getArmor();
    if (armor == 0) {
        return 0;
    }
    return armor->getSpeedPenalty();
}

int Character::getArmorSkillPenalty() const {
    Armor const * const armor = mEquipment.getArmor();
    if (armor == 0) {
        return 0;
    }
    return armor->getSkillPenalty();
}

int Character::getStrMod() const {
    return ((mStrength + mRace->getValueBonusOfType(strength_t))/2 - 5);
}

int Character::getConMod() const {
    return ((mConstitution + mRace->getValueBonusOfType(constitution_t))/2 -5);
}

int Character::getDexMod() const {
    return ((mDexterity + mRace->getValueBonusOfType(dexterity_t))/2 - 5);
}

int Character::getIntMod() const {
    return ((mIntellect + mRace->getValueBonusOfType(intellect_t))/2 - 5);
}

int Character::getWisMod() const {
    return ((mWisdom + mRace->getValueBonusOfType(wisdom_t))/2 - 5);
}

int Character::getChrMod() const {
    return ((mCharisma + mRace->getValueBonusOfType(charisma_t))/2 - 5);
}

int Character::getAbilityModifier(AbilityType abltType) const {
    switch (abltType) {
    case strength_t:
        return getStrMod();
    case constitution_t:
        return getConMod();
    case dexterity_t:
        return getDexMod();
    case intellect_t:
        return getIntMod();
    case wisdom_t:
        return getWisMod();
    case charisma_t:
        return getChrMod();
    }
    return 0;
}

int Character::getStrScore() const {
    return (mStrength + mRace->getValueBonusOfType(strength_t));
}

int Character::getConScore() const {
    return (mConstitution + mRace->getValueBonusOfType(constitution_t));
}

int Character::getDexScore() const {
    return (mDexterity + mRace->getValueBonusOfType(dexterity_t));
}

int Character::getIntScore() const {
    return (mIntellect + mRace->getValueBonusOfType(intellect_t));
}

int Character::getWisScore() const {
    return (mWisdom + mRace->getValueBonusOfType(wisdom_t));
}

int Character::getChrScore() const {
    return (mCharisma + mRace->getValueBonusOfType(charisma_t));
}

int Character::getArmorClass() const {
    Armor const * const armor = mEquipment.getArmor();
    int bonusArmor = 0;
    if (armor != 0) {
        int abilityMod = 0;
        if (armor->isAddModifiersToArmor()) {
            abilityMod = getDexMod();
            if (getIntMod() > abilityMod) {
                abilityMod = getIntMod();
            }
        }
        bonusArmor += abilityMod;
        bonusArmor += armor->getArmorBonus();
    }
    return (10 + mLevel/2 + mClassCharacter->getDefenseValue(armorClass) + bonusArmor/*shield + feat + misc + misc*/);
}

int Character::getFortitude() const {
    int abilityMod = getStrMod();
    if (getConMod() > abilityMod) {
        abilityMod = getConMod();
    }
    return (10 + mLevel/2 + abilityMod + mClassCharacter->getDefenseValue(fortitude)/* + feat + enhancement + misc + misc*/);
}

int Character::getReflex() const {
    int abilityMod = getDexMod();
    if (getIntMod() > abilityMod) {
        abilityMod = getIntMod();
    }
    return (10 + mLevel/2 + abilityMod + mClassCharacter->getDefenseValue(reflex)/* + feat + enhancement + misc + misc*/);
}

int Character::getWill() const {
    int abilityMod = getWisMod();
    if (getChrMod() > abilityMod) {
        abilityMod = getChrMod();
    }
    return (10 + mLevel/2 + abilityMod + mClassCharacter->getDefenseValue(will)/* + feat + enhancement + misc + misc*/);
}

int Character::getAcrobatics() const {
    return (mSkills.getSkillValue(acrobatics) +
            getDexMod() + mLevel/2 +
            mRace->getValueBonusOfType(acrobatics) + getArmorSkillPenalty()/* + misc*/);
}

int Character::getArcana() const {
    return (mSkills.getSkillValue(arcana) +
            getIntMod() + mLevel/2 +
            mRace->getValueBonusOfType(arcana)/* + misc*/);
}

int Character::getAthletics() const {
    return (mSkills.getSkillValue(athletics) +
            getStrMod() + mLevel/2 +
            mRace->getValueBonusOfType(athletics) + getArmorSkillPenalty()/* + misc*/);
}

int Character::getBluff() const {
    return (mSkills.getSkillValue(bluff) +
            getChrMod() + mLevel/2 +
            mRace->getValueBonusOfType(bluff)/* + misc*/);
}

int Character::getDiplomacy() const {
    return (mSkills.getSkillValue(diplomacy) +
            getChrMod() + mLevel/2 +
            mRace->getValueBonusOfType(diplomacy)/* + misc*/);
}

int Character::getDungeoneering() const {
    return (mSkills.getSkillValue(dungeoneering) +
            getWisMod() + mLevel/2 +
            mRace->getValueBonusOfType(dungeoneering)/* + misc*/);
}

int Character::getEndurance() const {
    return (mSkills.getSkillValue(endurance) +
            getConMod() + mLevel/2 +
            mRace->getValueBonusOfType(endurance) + getArmorSkillPenalty()/* + misc*/);
}

int Character::getHeal() const {
    return (mSkills.getSkillValue(heal) +
            getWisMod() + mLevel/2 +
            mRace->getValueBonusOfType(heal)/* + misc*/);
}

int Character::getHistory() const {
    return (mSkills.getSkillValue(history) +
            getIntMod() + mLevel/2 +
            mRace->getValueBonusOfType(history)/* + misc*/);
}

int Character::getInsight() const {
    return (mSkills.getSkillValue(insight) +
            getWisMod() + mLevel/2 +
            mRace->getValueBonusOfType(insight)/* + misc*/);
}

int Character::getIntimidate() const {
    return (mSkills.getSkillValue(intimidate) +
            getChrMod() + mLevel/2 +
            mRace->getValueBonusOfType(intimidate)/* + misc*/);
}

int Character::getNature() const {
    return (mSkills.getSkillValue(nature) +
            getWisMod() + mLevel/2 +
            mRace->getValueBonusOfType(nature)/* + misc*/);
}

int Character::getPerception() const {
    return (mSkills.getSkillValue(perception) +
            getWisMod() + mLevel/2 +
            mRace->getValueBonusOfType(perception)/* + misc*/);
}

int Character::getReligion() const {
    return (mSkills.getSkillValue(religion) +
            getIntMod() + mLevel/2 +
            mRace->getValueBonusOfType(religion)/* + misc*/);
}

int Character::getStealth() const {
    return (mSkills.getSkillValue(stealth) +
            getDexMod() + mLevel/2 +
            mRace->getValueBonusOfType(stealth) + getArmorSkillPenalty()/* + misc*/);
}

int Character::getStreetwise() const {
    return (mSkills.getSkillValue(streetwise) +
            getChrMod() + mLevel/2 +
            mRace->getValueBonusOfType(streetwise)/* + misc*/);
}

int Character::getThievery() const {
    return (mSkills.getSkillValue(thievery) +
            getDexMod() + mLevel/2 +
            mRace->getValueBonusOfType(thievery) + getArmorSkillPenalty()/* + misc*/);
}

int Character::getLevel() const {
    return mLevel;
}

int Character::getTotalExpereance() const {
    return expereance;
}

RaceType Character::getRace() const {
    return mRace->getRace();
}

ClassType Character::getClass() const {
    return mClassCharacter->getClass();
}

Size Character::getSize() const {
    return mRace->getSize();
}

int Character::getInitiative() const {
    return (getDexMod() + mLevel/2/* + feat + misc*/);
}

int Character::getMaxHitPoint() const {    
    int extraHP = mClassCharacter->getHitPointPerLevel() * (mLevel - 1);
    return (extraHP + mClassCharacter->getHitPointAtFirstLevel() + getConScore()/* + feat + misc*/);
}

int Character::getBloodied() const {
    return (getMaxHitPoint()/2);
}

int Character::getHealingSurgesPerDay() const {
    return (mClassCharacter->getHealingSurgesPerDay() + getConMod()/* + feat + misc*/);
}

int Character::getHealingSurgesValue() const {
    return (getMaxHitPoint()/4);
}

int Character::getActionPoints() const {
    return 1;
}

int Character::getSpeed() const {
    return (mRace->getSpeed() + getArmorSpeedPenalty()/* + item + misc*/);
}

int Character::getPassiveInsight() const {
    return (10 + getInsight());
}

int Character::getPassivePerception() const {
    return (10 + getPerception());
}

Vision Character::getVision() const {
    return mRace->getVision();
}

int Character::getAverageMinHeight() const {
    return mRace->getAverageMinHeight();
}

int Character::getAverageMaxHeight() const {
    return mRace->getAverageMinHeight();
}

int Character::getAverageMinWeight() const {
    return mRace->getAverageMinWeight();
}

int Character::getAverageMaxWeight() const {
    return mRace->getAverageMaxWeight();
}

int Character::getAverageAge() const {
    return mRace->getAverageAge();
}

const std::vector &Character::getLanguage() const {
    return mLanguages;
}

int Character::getCountLanguage() const {
    return mCountLanguage;
}

RoleType Character::getRole() const {
    return mClassCharacter->getRoleType();
}

PowerSource Character::getPowerSource() const {
    return mClassCharacter->getPowerSource();
}

AbilityType const * Character::getKeyAbility() const {
    return mClassCharacter->getKeyAbility();
}

int Character::getCountKeyAbility() const {
    return mClassCharacter->getCountKeyAbility();
}

ImplementType const * Character::getImplements() const {
    return mClassCharacter->getImplements();
}

int Character::getCountImplement() const {
    return mClassCharacter->getCountImplement();
}

int Character::setSkillTrained(SkillType skillType) {
    if (getRestCountSkillTrain() >= mCountMaxSkill) {
        return -3;
    }
    SkillType const * classSkill = mClassCharacter->getClassSkill();
    int countClassSkill = mClassCharacter->getCountClassSkill();
    for (int i = 0; i < countClassSkill; ++i) {
        if (skillType == classSkill[i]) {
            return mSkills.setTrainSkill(skillType);
        }
    }
    return -4;
}

int Character::getRestCountSkillTrain() const {
    return (mSkills.getCountTrainedSkill() - mClassCharacter->getCountTrainedSkill()/* - featTrainedSkill*/);
}

int Character::setDeity(IDeity *deity) {
    if (!mFlagSetAlignment) {
        delete mDeity;
        mDeity = deity;
        return 0;
    }
    else if (deity->isCompatibleAlignment(mAlignment)) {
        delete mDeity;
        mDeity = deity;
        return 0;
    }
    return -5;
}

int Character::setAlignment(Alignment alignment) {
    if (mDeity == 0) {
        mAlignment = alignment;
        mFlagSetAlignment = true;
    } else if (mDeity->isCompatibleAlignment(alignment)) {
        mAlignment = alignment;
        mFlagSetAlignment = true;
    }
    else {
        return -6;
    }
    return 0;
}

int Character::setLanguage(Language language) {
    for (int i = 0; i < mCountLanguage; ++i) {
        Language lang = mLanguages[i];
        if (lang == language) {
            return -8;
        }
        if (lang == ) {
            mLanguages[i] = language;
            return 0;
        }
    }
    return -7;
}

void Character::setArmor(ArmorType armorType) {
    mEquipment.setArmor(armorType);
}
