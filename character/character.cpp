#include "character/character.h"

Character::Character() {
    mArmor = 0;
//    mArms = 0;
    mFlagSetAlignment = false;
    mNameCharacter = 0;
    mNameCommand = 0;
    mNamePlayer = 0;
    mClassCharacter = 0;
    mCountTrainSkill = 0;
//    mFeet = 0;
//    mHands = 0;
//    mHead = 0;
    mDeity = 0;
    mAge = 0;
    mArmorClass = 10;
    mAttack = 0;
    mCharisma = 8;
    mConstitution = 8;
    mCountMaxSkill = 0;
    mDexterity = 8;
    mExpereance = 0;
    mFortitude = 10;
    mHealingSurgesPerDay = 0;
    mHeight = 0;
    mHitPoint = 0;
    mInitiative = 0;
    mIntellect = 8;
    mLevel = 1;
    mMaxHitPoint = 0;
    mReflex = 10;
    mSpeed = 0;
    mStrength = 8;
    mWeight = 0;
    mWill = 10;
    mWisdom = 8;
//    mNeck = 0;
    mRace = 0;
//    mRing1 = 0;
//    mRing2 = 0;
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
//    mWaist = 0;
    mWeapon = 0;
    initTableExp();
}

void Character::initTableExp() {
//    mExpereanceTable.insert(std::make_pair(1, 0));
//    mExpereanceTable.insert(std::make_pair(2, 1000));
//    mExpereanceTable.insert(std::make_pair(3, 2250));
//    mExpereanceTable.insert(std::make_pair(4, 3750));
//    mExpereanceTable.insert(std::make_pair(5, 5500));
//    mExpereanceTable.insert(std::make_pair(6, 7500));
//    mExpereanceTable.insert(std::make_pair(7, 10000));
//    mExpereanceTable.insert(std::make_pair(8, 13000));
//    mExpereanceTable.insert(std::make_pair(9, 16500));
//    mExpereanceTable.insert(std::make_pair(10, 20500));
//    mExpereanceTable.insert(std::make_pair(11, 26000));
//    mExpereanceTable.insert(std::make_pair(12, 32000));
//    mExpereanceTable.insert(std::make_pair(13, 39000));
//    mExpereanceTable.insert(std::make_pair(14, 47000));
//    mExpereanceTable.insert(std::make_pair(15, 57000));
//    mExpereanceTable.insert(std::make_pair(16, 69000));
//    mExpereanceTable.insert(std::make_pair(17, 83000));
//    mExpereanceTable.insert(std::make_pair(18, 99000));
//    mExpereanceTable.insert(std::make_pair(19, 119000));
//    mExpereanceTable.insert(std::make_pair(20, 143000));
//    mExpereanceTable.insert(std::make_pair(21, 175000));
//    mExpereanceTable.insert(std::make_pair(22, 210000));
//    mExpereanceTable.insert(std::make_pair(23, 255000));
//    mExpereanceTable.insert(std::make_pair(24, 310000));
//    mExpereanceTable.insert(std::make_pair(25, 375000));
//    mExpereanceTable.insert(std::make_pair(26, 450000));
//    mExpereanceTable.insert(std::make_pair(27, 550000));
//    mExpereanceTable.insert(std::make_pair(28, 675000));
//    mExpereanceTable.insert(std::make_pair(29, 825000));
//    mExpereanceTable.insert(std::make_pair(30, 1000000));

    mExpereanceTable.insert(std::make_pair(0, 1));
    mExpereanceTable.insert(std::make_pair(1000, 2));
    mExpereanceTable.insert(std::make_pair(2250, 3));
    mExpereanceTable.insert(std::make_pair(3750, 4));
    mExpereanceTable.insert(std::make_pair(5500, 5));
    mExpereanceTable.insert(std::make_pair(7500, 6));
    mExpereanceTable.insert(std::make_pair(10000, 7));
    mExpereanceTable.insert(std::make_pair(13000, 8));
    mExpereanceTable.insert(std::make_pair(16500, 9));
    mExpereanceTable.insert(std::make_pair(20500, 10));
    mExpereanceTable.insert(std::make_pair(26000, 11));
    mExpereanceTable.insert(std::make_pair(32000, 12));
    mExpereanceTable.insert(std::make_pair(39000, 13));
    mExpereanceTable.insert(std::make_pair(47000, 14));
    mExpereanceTable.insert(std::make_pair(57000, 15));
    mExpereanceTable.insert(std::make_pair(69000, 16));
    mExpereanceTable.insert(std::make_pair(83000, 17));
    mExpereanceTable.insert(std::make_pair(99000, 18));
    mExpereanceTable.insert(std::make_pair(119000, 19));
    mExpereanceTable.insert(std::make_pair(143000, 20));
    mExpereanceTable.insert(std::make_pair(175000, 21));
    mExpereanceTable.insert(std::make_pair(210000, 22));
    mExpereanceTable.insert(std::make_pair(255000, 23));
    mExpereanceTable.insert(std::make_pair(310000, 24));
    mExpereanceTable.insert(std::make_pair(375000, 25));
    mExpereanceTable.insert(std::make_pair(450000, 26));
    mExpereanceTable.insert(std::make_pair(550000, 27));
    mExpereanceTable.insert(std::make_pair(675000, 28));
    mExpereanceTable.insert(std::make_pair(825000, 29));
    mExpereanceTable.insert(std::make_pair(1000000, 30));
}

Character::~Character() {
    delete [] mNameCharacter;
    delete [] mNamePlayer;
    delete [] mNameCommand;
    delete mRace;
    delete mClassCharacter;
    delete mArmor;
    delete mWeapon;
//    delete mArms;
//    delete mFeet;
//    delete mHands;
//    delete mHead;
//    delete mNeck;
//    delete mRing1;
//    delete mRing2;
//    delete mWaist;
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

int Character::getArmorSpeedPenalty() const {
    if (mArmor == 0) {
        return 0;
    }
    return mArmor->getSpeedPenalty();
}

int Character::getArmorSkillPenalty() const {
    if (mArmor == 0) {
        return 0;
    }
    return mArmor->getSkillPenalty();
}

const char * Character::getNameCharacter() const {
    return mNameCharacter;
}

const char * Character::getNamePlayer() const {
    return mNamePlayer;
}

const char * Character::getNameCommand() const {
    return mNameCommand;
}

Gender Character::getGender() const {
    return mGender;
}

Alignment Character::getAlignment() const {
    return mAlignment;
}

const IDeity * Character::getDeity() const {
    return mDeity;
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

int Character::getLevel() const {
    return mLevel;
}

int Character::getTotalExpereance() const {
    return mExpereance;
}

const Race * Character::getRace() const {
    return mRace;
}

const ClassCharacter * Character::getClass() const {
    return mClassCharacter;
}

Size Character::getSize() const {
    return mSize;
}

int Character::getInitiative() const {
    return mInitiative;
}

int Character::getMaxHitPoint() const {
    return mMaxHitPoint;
}

int Character::getHitPoint() const {
    return mHitPoint;
}

int Character::getBloodied() const {
    return (mMaxHitPoint/2);
}

int Character::getHealingSurgesPerDay() const {
    return mHealingSurgesPerDay;
}

int Character::getHealingSurgesValue() const {
    return (mMaxHitPoint/4 + getConMod());
}

int Character::getActionPoints() const {
    return 1;
}

int Character::getSpeed() const {
    return mSpeed;
}

int Character::getPassiveInsight() const {
    return (10 + mInsight->getValue());
}

int Character::getPassivePerception() const {
    return (10 + mPerception->getValue());
}

Vision Character::getVision() const {
    return mVision;
}

const std::vector<Language> * Character::getLanguage() const {
    return &mLanguages;
}

int Character::getStandartAttackBonus() const {
    return mAttack;
}

int Character::getStrScore() const {
    return mStrength;
}

int Character::getConScore() const {
    return mConstitution;
}

int Character::getDexScore() const {
    return mDexterity;
}

int Character::getIntScore() const {
    return mIntellect;
}

int Character::getWisScore() const {
    return mWisdom;
}

int Character::getChrScore() const {
    return mCharisma;
}

int Character::getStrMod() const {
    return (mStrength/2 - 5);
}

int Character::getConMod() const {
    return (mConstitution/2 - 5);
}

int Character::getDexMod() const {
    return (mDexterity/2 - 5);
}

int Character::getIntMod() const {
    return (mIntellect/2 - 5);
}

int Character::getWisMod() const {
    return (mWisdom/2 - 5);
}

int Character::getChrMod() const {
    return (mCharisma/2 - 5);
}

int Character::getAbilityModifier(AbilityType ability) const {
    switch (ability) {
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

int Character::getArmorClass() const {
    return mArmorClass;
}

int Character::getFortitude() const {
    return mFortitude;
}

int Character::getReflex() const {
    return mReflex;
}

int Character::getWill() const {
    return mWill;
}

int Character::getAcrobatics() const {
    return mAcrobatics->getValue();
}

int Character::getArcana() const {
    return mArcana->getValue();
}

int Character::getAthletics() const {
    return mAthletics->getValue();
}

int Character::getBluff() const {
    return mBluff->getValue();
}

int Character::getDiplomacy() const {
    return mDiplomacy->getValue();
}

int Character::getDungeoneering() const {
    return mDungeoneering->getValue();
}

int Character::getEndurance() const {
    return mEndurance->getValue();
}

int Character::getHeal() const {
    return mHeal->getValue();
}

int Character::getHistory() const {
    return mHistory->getValue();
}

int Character::getInsight() const {
    return mInsight->getValue();
}

int Character::getIntimidate() const {
    return mIntimidate->getValue();
}

int Character::getNature() const {
    return mNature->getValue();
}

int Character::getPerception() const {
    return mPerception->getValue();
}

int Character::getReligion() const {
    return mReligion->getValue();
}

int Character::getStealth() const {
    return mStealth->getValue();
}

int Character::getStreetwise() const {
    return mStreetwise->getValue();
}

int Character::getThievery() const {
    return mThievery->getValue();
}

const Armor * Character::getArmor() const {
    return mArmor;
}

const Weapon * Character::getWeapon() const {
    return mWeapon;
}

//const Arms * Character::getArms(Arms *arms) const {
//    return mArms;
//}

//const Feet * Character::getFeet(Feet *feet) const {
//    return mFeet;
//}

//const Hands * Character::getHands(Hands *hands) const {
//    return mHands;
//}

//const Head * Character::getHead(Head *head) const {
//    return mHead;
//}

//const Ring * Character::getRingFirst(Ring ring) {
//    return mRing1;
//}

//const Ring * Character::getRingSecond(Ring ring) {
//    return mRing2;
//}

//const Neck * Character::getNeck(Neck *neck) const {
//    return mNeck;
//}

//int Character::setSkillTrained(SkillType skillType) {
//    if (getRestCountSkillTrain() >= mCountMaxSkill) {
//        return -3;
//    }
//    SkillType const * classSkill = mClassCharacter->getClassSkill();
//    int countClassSkill = mClassCharacter->getCountClassSkill();
//    for (int i = 0; i < countClassSkill; ++i) {
//        if (skillType == classSkill[i]) {
//            return mSkills.setTrainSkill(skillType);
//        }
//    }
//    return -4;
//}

//int Character::getRestCountSkillTrain() const {
//    return (mSkills.getCountTrainedSkill() - mClassCharacter->getCountTrainedSkill()/* - featTrainedSkill*/);
//}

void Character::addBonusToSkill(const Bonus * const bonus) {
    mAcrobatics->addBonus(bonus);
    mArcana->addBonus(bonus);
    mAthletics->addBonus(bonus);
    mBluff->addBonus(bonus);
    mDiplomacy->addBonus(bonus);
    mDungeoneering->addBonus(bonus);
    mEndurance->addBonus(bonus);
    mHeal->addBonus(bonus);
    mHistory->addBonus(bonus);
    mInsight->addBonus(bonus);
    mIntimidate->addBonus(bonus);
    mNature->addBonus(bonus);
    mPerception->addBonus(bonus);
    mReligion->addBonus(bonus);
    mStealth->addBonus(bonus);
    mStreetwise->addBonus(bonus);
    mThievery->addBonus(bonus);
}

void Character::subBonusToSkill(const Bonus * const bonus) {
    mAcrobatics->subBonus(bonus);
    mArcana->subBonus(bonus);
    mAthletics->subBonus(bonus);
    mBluff->subBonus(bonus);
    mDiplomacy->subBonus(bonus);
    mDungeoneering->subBonus(bonus);
    mEndurance->subBonus(bonus);
    mHeal->subBonus(bonus);
    mHistory->subBonus(bonus);
    mInsight->subBonus(bonus);
    mIntimidate->subBonus(bonus);
    mNature->subBonus(bonus);
    mPerception->subBonus(bonus);
    mReligion->subBonus(bonus);
    mStealth->subBonus(bonus);
    mStreetwise->subBonus(bonus);
    mThievery->subBonus(bonus);
}

void Character::addBonusToAbility(const Bonus * const bonus) {
    const std::map<AbilityType, int> * const abilityBonus = bonus->getBonusToAbility();
    std::map<AbilityType, int>::const_iterator it = abilityBonus->find(strength_t);
    if (it != abilityBonus->end()) {
        mStrength += it->second;
    }
    it = abilityBonus->find(constitution_t);
    if (it != abilityBonus->end()) {
        mConstitution += it->second;
    }
    it = abilityBonus->find(intellect_t);
    if (it != abilityBonus->end()) {
        mIntellect += it->second;
    }
    it = abilityBonus->find(dexterity_t);
    if (it != abilityBonus->end()) {
        mDexterity += it->second;
    }
    it = abilityBonus->find(wisdom_t);
    if (it != abilityBonus->end()) {
        mWisdom += it->second;
    }
    it = abilityBonus->find(charisma_t);
    if (it != abilityBonus->end()) {
        mCharisma += it->second;
    }
}

void Character::subBonusToAbility(const Bonus * const bonus) {
    const std::map<AbilityType, int> * const abilityBonus = bonus->getBonusToAbility();
    std::map<AbilityType, int>::const_iterator it = abilityBonus->find(strength_t);
    if (it != abilityBonus->end()) {
        mStrength -= it->second;
    }
    it = abilityBonus->find(constitution_t);
    if (it != abilityBonus->end()) {
        mConstitution -= it->second;
    }
    it = abilityBonus->find(intellect_t);
    if (it != abilityBonus->end()) {
        mIntellect -= it->second;
    }
    it = abilityBonus->find(dexterity_t);
    if (it != abilityBonus->end()) {
        mDexterity -= it->second;
    }
    it = abilityBonus->find(wisdom_t);
    if (it != abilityBonus->end()) {
        mWisdom -= it->second;
    }
    it = abilityBonus->find(charisma_t);
    if (it != abilityBonus->end()) {
        mCharisma -= it->second;
    }
}

void Character::addBonusToDefense(const Bonus * const bonus) {
    const std::map<DefenseType, int> * const defenseBonus = bonus->getBonusToDefense();
    std::map<DefenseType, int>::const_iterator it = defenseBonus->find(armorClass);
    if (it != defenseBonus->end()) {
        mArmorClass += it->second;
    }
    it = defenseBonus->find(fortitude);
    if (it != defenseBonus->end()) {
        mFortitude += it->second;
    }
    it = defenseBonus->find(reflex);
    if (it != defenseBonus->end()) {
        mReflex += it->second;
    }
    it = defenseBonus->find(will);
    if (it != defenseBonus->end()) {
        mWill += it->second;
    }
}

void Character::subBonusToDefense(const Bonus * const bonus) {
    const std::map<DefenseType, int> * const defenseBonus = bonus->getBonusToDefense();
    std::map<DefenseType, int>::const_iterator it = defenseBonus->find(armorClass);
    if (it != defenseBonus->end()) {
        mArmorClass -= it->second;
    }
    it = defenseBonus->find(fortitude);
    if (it != defenseBonus->end()) {
        mFortitude -= it->second;
    }
    it = defenseBonus->find(reflex);
    if (it != defenseBonus->end()) {
        mReflex -= it->second;
    }
    it = defenseBonus->find(will);
    if (it != defenseBonus->end()) {
        mWill -= it->second;
    }
}

void Character::addBonusTrainedSkill(const Bonus *const bonus) {
    const std::vector<SkillType> * trainedSkill = bonus->getBonusTrainedSkill();
    for (std::vector<SkillType>::const_iterator it = trainedSkill->begin();
         it < trainedSkill->end(); ++it) {
        trainSkill(*it);
    }
}

void Character::subBonusTrainedSkill(const Bonus *const bonus) {
    const std::vector<SkillType> * trainedSkill = bonus->getBonusTrainedSkill();
    for (std::vector<SkillType>::const_iterator it = trainedSkill->begin();
         it < trainedSkill->end(); ++it) {
        unTrainSkill(*it);
    }
}

void Character::setRace(Race *race) {
    if (mRace != 0) {
        mSpeed -= mRace->getSpeed();
        mLanguages.clear();
        const Bonus * const bonus = mRace->getBonus();
        subBonusToSkill(bonus);
        subBonusToAbility(bonus);
        subBonusToDefense(bonus);
        subBonusTrainedSkill(bonus);
        // delete feats race
        delete mRace;
    }
    mRace = race;
    mSize = mRace->getSize();
    mSpeed += mRace->getSpeed();
    mVision = mRace->getVision();
    mLanguages.assign(mRace->getLanguages()->begin(), mRace->getLanguages()->end());
    const Bonus * const bonus = race->getBonus();
    addBonusToSkill(bonus);
    addBonusToAbility(bonus);
    addBonusToDefense(bonus);
    addBonusTrainedSkill(bonus);
    // set feats race
}

int Character::computeHitPointPerLevel() const {
    return mClassCharacter->getHitPointPerLevel() * (mLevel - 1);
}

void Character::setClass(ClassCharacter *classCharacter) {
    if (mClassCharacter != 0) {
        // subBonus
        const Bonus * bonus =  mClassCharacter->getBonus();
        subBonusToSkill(bonus);
        subBonusToAbility(bonus);
        subBonusToDefense(bonus);
        subBonusTrainedSkill(bonus);
        mMaxHitPoint -= mClassCharacter->getHitPointAtFirstLevel();
        mMaxHitPoint -= computeHitPointPerLevel();
        mHitPoint = mMaxHitPoint;
        mHealingSurgesPerDay -= mClassCharacter->getHealingSurgesPerDay();
        mCountMaxSkill -= mClassCharacter->getCountTrainedSkills();
        // sub feats
        // sub train skill
        delete mClassCharacter;
    }
    mClassCharacter = classCharacter;
    const Bonus * bonus =  mClassCharacter->getBonus();
    addBonusToSkill(bonus);
    addBonusToAbility(bonus);
    addBonusToDefense(bonus);
    addBonusTrainedSkill(bonus);
    mMaxHitPoint += mClassCharacter->getHitPointAtFirstLevel();
    mMaxHitPoint += computeHitPointPerLevel();
    mHitPoint = mMaxHitPoint;
    mHealingSurgesPerDay += mClassCharacter->getHealingSurgesPerDay();
    mCountMaxSkill += mClassCharacter->getCountTrainedSkills();
    // add feats
    // add train skill
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

void Character::setArmor(Armor *armor) {
    if (mArmor != 0) {
        mArmorClass -= mArmor->getArmorBonus();
        if (mArmor->isAddModifiersToArmor()) {
            int abilityMod = getDexMod();
            int intMod = getIntMod();
            if (abilityMod < intMod) {
                abilityMod = intMod;
            }
            mArmorClass -= abilityMod;
        }
        mSpeed -= getArmorSpeedPenalty();
        int skillPenalty = getArmorSkillPenalty();
        mAcrobatics->subBonus(skillPenalty);
        mAthletics->subBonus(skillPenalty);
        mStealth->subBonus(skillPenalty);
        mThievery->subBonus(skillPenalty);
        delete mArmor;
    }
    mArmor = armor;
    mArmorClass += mArmor->getArmorBonus();
    if (mArmor->isAddModifiersToArmor()) {
        int abilityMod = getDexMod();
        int intMod = getIntMod();
        if (abilityMod < intMod) {
            abilityMod = intMod;
        }
        mArmorClass += abilityMod;
    }
    mSpeed += getArmorSpeedPenalty();
    int skillPenalty = getArmorSkillPenalty();
    mAcrobatics->addBonus(skillPenalty);
    mAthletics->addBonus(skillPenalty);
    mStealth->addBonus(skillPenalty);
    mThievery->addBonus(skillPenalty);
}

void Character::setWeapon(Weapon *weapon) {
    if (mWeapon != 0 && mWeapon != weapon) {
//        update();
        delete mWeapon;
    }
    mWeapon = weapon;
//    update();
}

//void Character::setArms(Arms arms) {
//    if (mArms != 0 && mArms != arms) {
////        update();
//        delete mArms;
//    }
//    mArms = arms;
////    update();
//}

//void Character::setFeet(Feet feet) {
//    if (mFeet != 0 && mFeet != feet) {
////        update();
//        delete mFeet;
//    }
//    mFeet = feet;
////    update();
//}

//void Character::setHands(Hands *hands) {
//    if (mHands != 0 && mHands != hands) {
////        update();
//        delete mHands;
//    }
//    mHands = hands;
////    update();
//}

//void Character::setHead(Head *head) {
//    if (mHead != 0 && mHead != head) {
////        update();
//        delete mHead;
//    }
//    mHead = head;
////    update();
//}

//void Character::setNeck(Neck *neck) {
//    if (mNeck != 0 && mNeck != neck) {
////        update();
//        delete mNeck;
//    }
//    mNeck = neck;
////    update();
//}

void Character::setAge(int age) {
    mAge = age;
}

void Character::setNameCharacter(const char * const nameCharacter) {
    mNameCharacter = new char [strlen(nameCharacter)+1];
    strcpy(mNameCharacter, nameCharacter);
}

void Character::setNamePlayer(const char * const namePlayer) {
    mNamePlayer = new char [strlen(namePlayer)+1];
    strcpy(mNamePlayer, namePlayer);
}

void Character::setNameCommand(const char * const nameCommand) {
    mNameCommand = new char [strlen(nameCommand)+1];
    strcpy(mNameCommand, nameCommand);
}

void Character::setGender(Gender gender) {
    mGender = gender;
}

void Character::setWeight(int weight) {
    mWeight = weight;
}

void Character::setHeight(int height) {
    mHeight = height;
}

void Character::setLevel(int level) {
    if (mLevel != level) {
        int mod = mLevel / 2;
        mArmorClass -= mod;
        mFortitude -= mod;
        mReflex -= mod;
        mWill -= mod;
        mAcrobatics->subBonus(mod);
        mArcana->subBonus(mod);
        mAthletics->subBonus(mod);
        mBluff->subBonus(mod);
        mDiplomacy->subBonus(mod);
        mDungeoneering->subBonus(mod);
        mEndurance->subBonus(mod);
        mHeal->subBonus(mod);
        mHistory->subBonus(mod);
        mInsight->subBonus(mod);
        mIntimidate->subBonus(mod);
        mNature->subBonus(mod);
        mPerception->subBonus(mod);
        mReligion->subBonus(mod);
        mStealth->subBonus(mod);
        mStreetwise->subBonus(mod);
        mThievery->subBonus(mod);
        mInitiative -= mod;
        mMaxHitPoint -= computeHitPointPerLevel();
        mHitPoint = mMaxHitPoint;
    }
    mLevel = level;
    int mod = mLevel / 2;
    mArmorClass += mod;
    mFortitude += mod;
    mReflex += mod;
    mWill += mod;
    mAcrobatics->addBonus(mod);
    mArcana->addBonus(mod);
    mAthletics->addBonus(mod);
    mBluff->addBonus(mod);
    mDiplomacy->addBonus(mod);
    mDungeoneering->addBonus(mod);
    mEndurance->addBonus(mod);
    mHeal->addBonus(mod);
    mHistory->addBonus(mod);
    mInsight->addBonus(mod);
    mIntimidate->addBonus(mod);
    mNature->addBonus(mod);
    mPerception->addBonus(mod);
    mReligion->addBonus(mod);
    mStealth->addBonus(mod);
    mStreetwise->addBonus(mod);
    mThievery->addBonus(mod);
    mInitiative += mod;
    mMaxHitPoint += computeHitPointPerLevel();
    mHitPoint = mMaxHitPoint;
}

void Character::addExpereance(int value) {
    mExpereance += std::abs(value);
    std::map<int, int>::const_iterator it = mExpereanceTable.lower_bound(mExpereance);
    if (it != mExpereanceTable.end()) {
        setLevel(it->second);
        if (it->first != mExpereance) {
            setLevel(mLevel - 1);
        }
    }
    else {
        mExpereance = MAX_EXP;
        setLevel(MAX_LEVEL);
    }
    // check state, when level is up
}

void Character::setStrength(int strength) {
    if (mStrength != strength) {
        int strMod = getStrMod();
        mAthletics->subBonus(strMod);
        mAttack -= strMod;
        int abilityMod = getConMod();
        if (abilityMod < strMod) {
            abilityMod = strMod;
        }
        mFortitude -= abilityMod;
    }
    mStrength = strength;
    int strMod = getStrMod();
    mAthletics->addBonus(strMod);
    mAttack += strMod;
    int abilityMod = getConMod();
    if (abilityMod < strMod) {
        abilityMod = strMod;
    }
    mFortitude += abilityMod;
}

void Character::setConstitution(int constitution) {
    if (mConstitution != constitution) {
        int conMod = getConMod();
        mEndurance->subBonus(conMod);
        int abilityMod = getStrMod();
        if (abilityMod < conMod) {
            abilityMod = conMod;
        }
        mFortitude -= abilityMod;
        mMaxHitPoint -= mConstitution;
        mHitPoint = mMaxHitPoint;
    }
    mConstitution = constitution;
    int conMod = getConMod();
    mEndurance->addBonus(conMod);
    int abilityMod = getStrMod();
    if (abilityMod < conMod) {
        abilityMod = conMod;
    }
    mFortitude += abilityMod;
    mMaxHitPoint += mConstitution;
    mHitPoint = mMaxHitPoint;
}

void Character::setDexterity(int dexterity) {
    if (mDexterity != dexterity) {
        int dexMod = getDexMod();
        mAcrobatics->subBonus(dexMod);
        mStealth->subBonus(dexMod);
        mThievery->subBonus(dexMod);
        mInitiative -= dexMod;
        int abilityMod = getIntMod();
        if (abilityMod < dexMod) {
            abilityMod = dexMod;
        }
        mReflex -= abilityMod;
        if (mArmor != 0 && mArmor->isAddModifiersToArmor()) {
            mArmorClass -= abilityMod;
        }
    }
    mDexterity = dexterity;
    int dexMod = getDexMod();
    mAcrobatics->addBonus(dexMod);
    mStealth->addBonus(dexMod);
    mThievery->addBonus(dexMod);
    mInitiative += dexMod;
    int abilityMod = getIntMod();
    if (abilityMod < dexMod) {
        abilityMod = dexMod;
    }
    mReflex += abilityMod;
    if (mArmor != 0 && mArmor->isAddModifiersToArmor()) {
        mArmorClass -= abilityMod;
    }
}

void Character::setIntellect(int intellect) {
    if (mIntellect != intellect) {
        int intMod = getIntMod();
        mArcana->subBonus(intMod);
        mHistory->subBonus(intMod);
        mNature->subBonus(intMod);
        mReligion->subBonus(intMod);
        int abilityMod = getDexMod();
        if (abilityMod < intMod) {
            abilityMod = intMod;
        }
        mReflex -= abilityMod;
        if (mArmor != 0 && mArmor->isAddModifiersToArmor()) {
            mArmorClass -= abilityMod;
        }
    }
    mIntellect = intellect;
    int intMod = getIntMod();
    mArcana->addBonus(intMod);
    mHistory->addBonus(intMod);
    mNature->addBonus(intMod);
    mReligion->addBonus(intMod);
    int abilityMod = getDexMod();
    if (abilityMod < intMod) {
        abilityMod = intMod;
    }
    mReflex += abilityMod;
    if (mArmor != 0 && mArmor->isAddModifiersToArmor()) {
        mArmorClass += abilityMod;
    }
}

void Character::setWisdom(int wisdom) {
    if (mWisdom != wisdom) {
        int wisMod = getWisMod();
        mDungeoneering->subBonus(wisMod);
        mHeal->subBonus(wisMod);
        mInsight->subBonus(wisMod);
        mPerception->subBonus(wisMod);
        int abilityMod = getChrMod();
        if (abilityMod < wisMod) {
            abilityMod = wisMod;
        }
        mWill -= abilityMod;
    }
    mWisdom = wisdom;
    int wisMod = getWisMod();
    mDungeoneering->addBonus(wisMod);
    mHeal->addBonus(wisMod);
    mInsight->addBonus(wisMod);
    mPerception->addBonus(wisMod);
    int abilityMod = getChrMod();
    if (abilityMod < wisMod) {
        abilityMod = wisMod;
    }
    mWill += abilityMod;
}

void Character::setCharisma(int charisma) {
    if (mCharisma != charisma) {
        int chrMod = getChrMod();
        mBluff->subBonus(chrMod);
        mDiplomacy->subBonus(chrMod);
        mIntimidate->subBonus(chrMod);
        mStreetwise->subBonus(chrMod);
        int abilityMod = getWisMod();
        if (abilityMod < chrMod) {
            abilityMod = chrMod;
        }
        mWill -= abilityMod;
    }
    mCharisma = charisma;
    int chrMod = getChrMod();
    mBluff->addBonus(chrMod);
    mDiplomacy->addBonus(chrMod);
    mIntimidate->addBonus(chrMod);
    mStreetwise->addBonus(chrMod);
    int abilityMod = getWisMod();
    if (abilityMod < chrMod) {
        abilityMod = chrMod;
    }
    mWill += abilityMod;
}

int Character::trainSkill(SkillType skill) {
    switch (skill) {
    case acrobatics:
        return trainAcrobatics();
    case arcana:
        return trainArcana();
    case athletics:
        return trainAthletics();
    case bluff:
        return trainBluff();
    case diplomacy:
        return trainDiplomacy();
    case dungeoneering:
        return trainDungeoneering();
    case endurance:
        return trainEndurance();
    case heal:
        return trainHeal();
    case history:
        return trainHistory();
    case insight:
        return trainInsight();
    case intimidate:
        return trainIntimidate();
    case nature:
        return trainNature();
    case perception:
        return trainPerception();
    case religion:
        return trainReligion();
    case stealth:
        return trainStealth();
    case streetwise:
        return trainStreetwise();
    case thievery:
        return trainThievery();
    }
    return 0;
}

int Character::unTrainSkill(SkillType skill) {
    switch (skill) {
    case acrobatics:
        return unTrainAcrobatics();
    case arcana:
        return unTrainArcana();
    case athletics:
        return unTrainAthletics();
    case bluff:
        return unTrainBluff();
    case diplomacy:
        return unTrainDiplomacy();
    case dungeoneering:
        return unTrainDungeoneering();
    case endurance:
        return unTrainEndurance();
    case heal:
        return unTrainHeal();
    case history:
        return unTrainHistory();
    case insight:
        return unTrainInsight();
    case intimidate:
        return unTrainIntimidate();
    case nature:
        return unTrainNature();
    case perception:
        return unTrainPerception();
    case religion:
        return unTrainReligion();
    case stealth:
        return unTrainStealth();
    case streetwise:
        return unTrainStreetwise();
    case thievery:
        return unTrainThievery();
    }
    return 0;
}

bool Character::isClassSkill(SkillType skill) const {
    const Bonus * bonus = mClassCharacter->getBonus();
    const std::vector<SkillType> * skills = bonus->getBonusTrainedSkill();
    std::vector<SkillType>::const_iterator it = std::find(skills->begin(), skills->end(), skill);
    if (it != skills->end()) {
        return true;
    }
    return false;
}

int Character::trainAcrobatics() {
    if (mCountTrainSkill > mClassCharacter->getCountTrainedSkills()) {
        return -3;
    }
    if (mClassCharacter->isCanTrainSkill(acrobatics)) {
        ++mCountTrainSkill;
        return mAcrobatics->setTrain();
    }
    return -11;
}

int Character::unTrainAcrobatics() {
    if (isClassSkill(acrobatics)) {
        return -12;
    }
    int error = mAcrobatics->setUnTrain();
    if (error == 0) {
        --mCountTrainSkill;
    }
    return error;
}

int Character::trainArcana() {
    if (mCountTrainSkill > mClassCharacter->getCountTrainedSkills()) {
        return -3;
    }
    if (mClassCharacter->isCanTrainSkill(arcana)) {
        return mArcana->setTrain();
    }
    return -11;
}

int Character::unTrainArcana() {
    if (isClassSkill(arcana)) {
        return -12;
    }
    int error =  mArcana->setUnTrain();
    if (error == 0) {
        --mCountTrainSkill;
    }
    return error;
}

int Character::trainAthletics() {
    if (mCountTrainSkill > mClassCharacter->getCountTrainedSkills()) {
        return -3;
    }
    if (mClassCharacter->isCanTrainSkill(athletics)) {
        return mAthletics->setTrain();
    }
    return -11;
}

int Character::unTrainAthletics() {
    if (isClassSkill(athletics)) {
        return -12;
    }
    int error =  mAthletics->setUnTrain();
    if (error == 0) {
        --mCountTrainSkill;
    }
    return error;
}

int Character::trainBluff() {
    if (mCountTrainSkill > mClassCharacter->getCountTrainedSkills()) {
        return -3;
    }
    if (mClassCharacter->isCanTrainSkill(bluff)) {
        return mBluff->setTrain();
    }
    return -11;
}

int Character::unTrainBluff() {
    if (isClassSkill(bluff)) {
        return -12;
    }
    int error =  mBluff->setUnTrain();
    if (error == 0) {
        --mCountTrainSkill;
    }
    return error;
}

int Character::trainDiplomacy() {
    if (mCountTrainSkill > mClassCharacter->getCountTrainedSkills()) {
        return -3;
    }
    if (mClassCharacter->isCanTrainSkill(diplomacy)) {
        return mDiplomacy->setTrain();
    }
    return -11;
}

int Character::unTrainDiplomacy() {
    if (isClassSkill(diplomacy)) {
        return -12;
    }
    int error =  mDiplomacy->setUnTrain();
    if (error == 0) {
        --mCountTrainSkill;
    }
    return error;
}

int Character::trainDungeoneering() {
    if (mCountTrainSkill > mClassCharacter->getCountTrainedSkills()) {
        return -3;
    }
    if (mClassCharacter->isCanTrainSkill(dungeoneering)) {
        return mDungeoneering->setTrain();
    }
    return -11;
}

int Character::unTrainDungeoneering() {
    if (isClassSkill(dungeoneering)) {
        return -12;
    }
    int error =  mDungeoneering->setUnTrain();
    if (error == 0) {
        --mCountTrainSkill;
    }
    return error;
}

int Character::trainEndurance() {
    if (mCountTrainSkill > mClassCharacter->getCountTrainedSkills()) {
        return -3;
    }
    if (mClassCharacter->isCanTrainSkill(endurance)) {
        return mEndurance->setTrain();
    }
    return -11;
}

int Character::unTrainEndurance() {
    if (isClassSkill(endurance)) {
        return -12;
    }
    int error =  mEndurance->setUnTrain();
    if (error == 0) {
        --mCountTrainSkill;
    }
    return error;
}

int Character::trainHeal() {
    if (mCountTrainSkill > mClassCharacter->getCountTrainedSkills()) {
        return -3;
    }
    if (mClassCharacter->isCanTrainSkill(heal)) {
        return mHeal->setTrain();
    }
    return -11;
}

int Character::unTrainHeal() {
    if (isClassSkill(heal)) {
        return -12;
    }
    int error =  mHeal->setUnTrain();
    if (error == 0) {
        --mCountTrainSkill;
    }
    return error;
}

int Character::trainHistory() {
    if (mCountTrainSkill > mClassCharacter->getCountTrainedSkills()) {
        return -3;
    }
    if (mClassCharacter->isCanTrainSkill(history)) {
        return mHistory->setTrain();
    }
    return -11;
}

int Character::unTrainHistory() {
    if (isClassSkill(history)) {
        return -12;
    }
    int error =  mHistory->setUnTrain();
    if (error == 0) {
        --mCountTrainSkill;
    }
    return error;
}

int Character::trainInsight() {
    if (mCountTrainSkill > mClassCharacter->getCountTrainedSkills()) {
        return -3;
    }
    if (mClassCharacter->isCanTrainSkill(insight)) {
        return mInsight->setTrain();
    }
    return -11;
}

int Character::unTrainInsight() {
    if (isClassSkill(insight)) {
        return -12;
    }
    int error =  mInsight->setUnTrain();
    if (error == 0) {
        --mCountTrainSkill;
    }
    return error;
}

int Character::trainIntimidate() {
    if (mCountTrainSkill > mClassCharacter->getCountTrainedSkills()) {
        return -3;
    }
    if (mClassCharacter->isCanTrainSkill(intimidate)) {
        return mIntimidate->setTrain();
    }
    return -11;
}

int Character::unTrainIntimidate() {
    if (isClassSkill(intimidate)) {
        return -12;
    }
    int error =  mIntimidate->setUnTrain();
    if (error == 0) {
        --mCountTrainSkill;
    }
    return error;
}

int Character::trainNature() {
    if (mCountTrainSkill > mClassCharacter->getCountTrainedSkills()) {
        return -3;
    }
    if (mClassCharacter->isCanTrainSkill(nature)) {
        return mNature->setTrain();
    }
    return -11;
}

int Character::unTrainNature() {
    if (isClassSkill(nature)) {
        return -12;
    }
    int error =  mNature->setUnTrain();
    if (error == 0) {
        --mCountTrainSkill;
    }
    return error;
}

int Character::trainPerception() {
    if (mCountTrainSkill > mClassCharacter->getCountTrainedSkills()) {
        return -3;
    }
    if (mClassCharacter->isCanTrainSkill(perception)) {
        return mPerception->setTrain();
    }
    return -11;
}

int Character::unTrainPerception() {
    if (isClassSkill(perception)) {
        return -12;
    }
    int error =  mPerception->setUnTrain();
    if (error == 0) {
        --mCountTrainSkill;
    }
    return error;
}

int Character::trainReligion() {
    if (mCountTrainSkill > mClassCharacter->getCountTrainedSkills()) {
        return -3;
    }
    if (mClassCharacter->isCanTrainSkill(religion)) {
        return mReligion->setTrain();
    }
    return -11;
}

int Character::unTrainReligion() {
    if (isClassSkill(religion)) {
        return -12;
    }
    int error =  mReligion->setUnTrain();
    if (error == 0) {
        --mCountTrainSkill;
    }
    return error;
}

int Character::trainStealth() {
    if (mCountTrainSkill > mClassCharacter->getCountTrainedSkills()) {
        return -3;
    }
    if (mClassCharacter->isCanTrainSkill(stealth)) {
        return mStealth->setTrain();
    }
    return -11;
}

int Character::unTrainStealth() {
    if (isClassSkill(stealth)) {
        return -12;
    }
    int error =  mStealth->setUnTrain();
    if (error == 0) {
        --mCountTrainSkill;
    }
    return error;
}

int Character::trainStreetwise() {
    if (mCountTrainSkill > mClassCharacter->getCountTrainedSkills()) {
        return -3;
    }
    if (mClassCharacter->isCanTrainSkill(streetwise)) {
        return mStreetwise->setTrain();
    }
    return -11;
}

int Character::unTrainStreetwise() {
    if (isClassSkill(streetwise)) {
        return -12;
    }
    int error =  mStreetwise->setUnTrain();
    if (error == 0) {
        --mCountTrainSkill;
    }
    return error;
}

int Character::trainThievery() {
    if (mCountTrainSkill > mClassCharacter->getCountTrainedSkills()) {
        return -3;
    }
    if (mClassCharacter->isCanTrainSkill(thievery)) {
        return mThievery->setTrain();
    }
    return -11;
}

int Character::unTrainThievery() {
    if (isClassSkill(thievery)) {
        return -12;
    }
    int error =  mThievery->setUnTrain();
    if (error == 0) {
        --mCountTrainSkill;
    }
    return error;
}

