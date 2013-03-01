#include "character/character.h"

Character::Character(RaceType raceType, ClassType classType,
                     char nameChr[], char namePlr[], char nameCmnd[],
                     int _age, Gender _gender, int _height,
                     int _weight, int _strength, int _constitution,
                     int _dexterity, int _intellect, int _wisdom,
                     int _charisma, int _level) :
    race(Race::createRace(raceType)),
    classCharacter(ClassCharacter::createClass(classType)),
    age(_age),
    gender(_gender),
    height(_height),
    weight(_weight),
    strength(_strength),
    constitution(_constitution),
    dexterity(_dexterity),
    intellect(_intellect),
    wisdom(_wisdom),
    charisma(_charisma),
    level(_level) {
    namePlayer = new char [strlen(namePlr)+1];
    nameCharacter = new char [strlen(nameChr)+1];
    nameCommand = new char [strlen(nameCmnd)+1];
    strcpy(namePlayer, namePlr);
    strcpy(nameCharacter, nameChr);
    strcpy(nameCommand, nameCmnd);
    SkillType const * trainedSkill = classCharacter->getTrainedSkill();
    int countTrainedSkill = classCharacter->getCountTrainedSkill();
    for (int i = 0; i < countTrainedSkill; ++i) {
        skills.setTrainSkill(trainedSkill[i]);
    }
    countMaxSkill = classCharacter->getCountSkill();
    flagSetAlignment = false;
    flagSetDeity = false;
    countLanguage = race->countLanguages();
    languages = new Language [countLanguage];
    memcpy(languages, race->getLanguages(),(sizeof(Language) * countLanguage));
//    Language const * lan = race->getLanguages();
//    for (int i = 0; i < countLanguage; ++i) {
//        languages[i] = lan[i];
//    }
}

Character::~Character() {
    delete [] nameCharacter;
    delete [] namePlayer;
    delete [] nameCommand;
    delete race;
    delete classCharacter;
    delete languages;
}

const char *Character::getNameCharacter() const {
    return nameCharacter;
}

const char *Character::getNamePlayer() const {
    return namePlayer;
}

const char *Character::getNameCommand() const {
    return nameCommand;
}

Gender Character::getGender() const {
    return gender;
}

Alignment Character::getAlignment() const {
    return alignment;
}

DeityType Character::getDeityType() const {
    return deityType;
}

int Character::getWeight() const {
    return weight;
}

int Character::getHeight() const {
    return height;
}

int Character::getAge() const {
    return age;
}

int Character::getPositiveMod(int value) const {
    if (value < 0) {
        return 0;
    }
    return value;
}

int Character::getArmorSpeedPenalty() const {
    Armor const * const armor = equipment.getArmor();
    if (armor == 0) {
        return 0;
    }
    return armor->getSpeedPenalty();
}

int Character::getArmorSkillPenalty() const {
    Armor const * const armor = equipment.getArmor();
    if (armor == 0) {
        return 0;
    }
    return armor->getSkillPenalty();
}

int Character::getStrMod() const {
    return ((strength + race->getValueBonusOfType(strength_t))/2 - 5);
}

int Character::getConMod() const {
    return ((constitution + race->getValueBonusOfType(constitution_t))/2 -5);
}

int Character::getDexMod() const {
    return ((dexterity + race->getValueBonusOfType(dexterity_t))/2 - 5);
}

int Character::getIntMod() const {
    return ((intellect + race->getValueBonusOfType(intellect_t))/2 - 5);
}

int Character::getWisMod() const {
    return ((wisdom + race->getValueBonusOfType(wisdom_t))/2 - 5);
}

int Character::getChrMod() const {
    return ((charisma + race->getValueBonusOfType(charisma_t))/2 - 5);
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
    return (strength + race->getValueBonusOfType(strength_t));
}

int Character::getConScore() const {
    return (constitution + race->getValueBonusOfType(constitution_t));
}

int Character::getDexScore() const {
    return (dexterity + race->getValueBonusOfType(dexterity_t));
}

int Character::getIntScore() const {
    return (intellect + race->getValueBonusOfType(intellect_t));
}

int Character::getWisScore() const {
    return (wisdom + race->getValueBonusOfType(wisdom_t));
}

int Character::getChrScore() const {
    return (charisma + race->getValueBonusOfType(charisma_t));
}

int Character::getArmorClass() const {
    Armor const * const armor = equipment.getArmor();
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
    return (10 + level/2 + classCharacter->getDefenseValue(armorClass) + bonusArmor/*shield + feat + misc + misc*/);
}

int Character::getFortitude() const {
    int abilityMod = getStrMod();
    if (getConMod() > abilityMod) {
        abilityMod = getConMod();
    }
    return (10 + level/2 + abilityMod + classCharacter->getDefenseValue(fortitude)/* + feat + enhancement + misc + misc*/);
}

int Character::getReflex() const {
    int abilityMod = getDexMod();
    if (getIntMod() > abilityMod) {
        abilityMod = getIntMod();
    }
    return (10 + level/2 + abilityMod + classCharacter->getDefenseValue(reflex)/* + feat + enhancement + misc + misc*/);
}

int Character::getWill() const {
    int abilityMod = getWisMod();
    if (getChrMod() > abilityMod) {
        abilityMod = getChrMod();
    }
    return (10 + level/2 + abilityMod + classCharacter->getDefenseValue(will)/* + feat + enhancement + misc + misc*/);
}

int Character::getAcrobatics() const {
    return (skills.getSkillValue(acrobatics) +
            getDexMod() + level/2 +
            race->getValueBonusOfType(acrobatics) + getArmorSkillPenalty()/* + misc*/);
}

int Character::getArcana() const {
    return (skills.getSkillValue(arcana) +
            getIntMod() + level/2 +
            race->getValueBonusOfType(arcana)/* + misc*/);
}

int Character::getAthletics() const {
    return (skills.getSkillValue(athletics) +
            getStrMod() + level/2 +
            race->getValueBonusOfType(athletics) + getArmorSkillPenalty()/* + misc*/);
}

int Character::getBluff() const {
    return (skills.getSkillValue(bluff) +
            getChrMod() + level/2 +
            race->getValueBonusOfType(bluff)/* + misc*/);
}

int Character::getDiplomacy() const {
    return (skills.getSkillValue(diplomacy) +
            getChrMod() + level/2 +
            race->getValueBonusOfType(diplomacy)/* + misc*/);
}

int Character::getDungeoneering() const {
    return (skills.getSkillValue(dungeoneering) +
            getWisMod() + level/2 +
            race->getValueBonusOfType(dungeoneering)/* + misc*/);
}

int Character::getEndurance() const {
    return (skills.getSkillValue(endurance) +
            getConMod() + level/2 +
            race->getValueBonusOfType(endurance) + getArmorSkillPenalty()/* + misc*/);
}

int Character::getHeal() const {
    return (skills.getSkillValue(heal) +
            getWisMod() + level/2 +
            race->getValueBonusOfType(heal)/* + misc*/);
}

int Character::getHistory() const {
    return (skills.getSkillValue(history) +
            getIntMod() + level/2 +
            race->getValueBonusOfType(history)/* + misc*/);
}

int Character::getInsight() const {
    return (skills.getSkillValue(insight) +
            getWisMod() + level/2 +
            race->getValueBonusOfType(insight)/* + misc*/);
}

int Character::getIntimidate() const {
    return (skills.getSkillValue(intimidate) +
            getChrMod() + level/2 +
            race->getValueBonusOfType(intimidate)/* + misc*/);
}

int Character::getNature() const {
    return (skills.getSkillValue(nature) +
            getWisMod() + level/2 +
            race->getValueBonusOfType(nature)/* + misc*/);
}

int Character::getPerception() const {
    return (skills.getSkillValue(perception) +
            getWisMod() + level/2 +
            race->getValueBonusOfType(perception)/* + misc*/);
}

int Character::getReligion() const {
    return (skills.getSkillValue(religion) +
            getIntMod() + level/2 +
            race->getValueBonusOfType(religion)/* + misc*/);
}

int Character::getStealth() const {
    return (skills.getSkillValue(stealth) +
            getDexMod() + level/2 +
            race->getValueBonusOfType(stealth) + getArmorSkillPenalty()/* + misc*/);
}

int Character::getStreetwise() const {
    return (skills.getSkillValue(streetwise) +
            getChrMod() + level/2 +
            race->getValueBonusOfType(streetwise)/* + misc*/);
}

int Character::getThievery() const {
    return (skills.getSkillValue(thievery) +
            getDexMod() + level/2 +
            race->getValueBonusOfType(thievery) + getArmorSkillPenalty()/* + misc*/);
}

int Character::getLevel() const {
    return level;
}

int Character::getTotalExpereance() const {
    return expereance;
}

RaceType Character::getRace() const {
    return race->getRace();
}

ClassType Character::getClass() const {
    return classCharacter->getClass();
}

Size Character::getSize() const {
    return race->getSize();
}

int Character::getInitiative() const {
    return (getDexMod() + level/2/* + feat + misc*/);
}

int Character::getMaxHitPoint() const {    
    int extraHP = classCharacter->getHitPointPerLevel() * (level - 1);
    return (extraHP + classCharacter->getHitPointAtFirstLevel() + getConScore()/* + feat + misc*/);
}

int Character::getBloodied() const {
    return (getMaxHitPoint()/2);
}

int Character::getHealingSurgesPerDay() const {
    return (classCharacter->getHealingSurgesPerDay() + getConMod()/* + feat + misc*/);
}

int Character::getHealingSurgesValue() const {
    return (getMaxHitPoint()/4);
}

int Character::getActionPoints() const {
    return 1;
}

int Character::getSpeed() const {
    return (race->getSpeed() + getArmorSpeedPenalty()/* + item + misc*/);
}

int Character::getPassiveInsight() const {
    return (10 + getInsight());
}

int Character::getPassivePerception() const {
    return (10 + getPerception());
}

Vision Character::getVision() const {
    return race->getVision();
}

int Character::getAverageMinHeight() const {
    return race->getAverageMinHeight();
}

int Character::getAverageMaxHeight() const {
    return race->getAverageMinHeight();
}

int Character::getAverageMinWeight() const {
    return race->getAverageMinWeight();
}

int Character::getAverageMaxWeight() const {
    return race->getAverageMaxWeight();
}

int Character::getAverageAge() const {
    return race->getAverageAge();
}

Language const * Character::getLanguage() const {
    return languages;
}

int Character::getCountLanguage() const {
    return countLanguage;
}

RoleType Character::getRole() const {
    return classCharacter->getRoleType();
}

PowerSource Character::getPowerSource() const {
    return classCharacter->getPowerSource();
}

AbilityType const * Character::getKeyAbility() const {
    return classCharacter->getKeyAbility();
}

int Character::getCountKeyAbility() const {
    return classCharacter->getCountKeyAbility();
}

ImplementType const * Character::getImplements() const {
    return classCharacter->getImplements();
}

int Character::getCountImplement() const {
    return classCharacter->getCountImplement();
}

int Character::setSkillTrained(SkillType skillType) {
    if (getRestCountSkillTrain() >= countMaxSkill) {
        return -3;
    }
    SkillType const * classSkill = classCharacter->getClassSkill();
    int countClassSkill = classCharacter->getCountClassSkill();
    for (int i = 0; i < countClassSkill; ++i) {
        if (skillType == classSkill[i]) {
            return skills.setTrainSkill(skillType);
        }
    }
    return -4;
}

int Character::getRestCountSkillTrain() const {
    return (skills.getCountTrainedSkill() - classCharacter->getCountTrainedSkill()/* - featTrainedSkill*/);
}

int Character::setDeityType(DeityType _deityType) {
    if (!flagSetAlignment) {
        deityType = _deityType;
        flagSetDeity = true;
        return 0;
    }
    Deity deity(_deityType);
    Alignment deityAlignment = deity.getDeityAlignment();
    switch (alignment) {
    case good:
        if (deityAlignment == good || deityAlignment == unaligned) {
            deityType = _deityType;
            return 0;
        }
        break;
    case lawful:
        if (deityAlignment == lawful) {
            deityType = _deityType;
            return 0;
        }
        break;
    case evil:
        if (deityAlignment == evil || deityAlignment == unaligned) {
            deityType = _deityType;
            return 0;
        }
        break;
    case chaoticEvil:
        if (deityAlignment == chaoticEvil) {
            deityType = _deityType;
            return 0;
        }
        break;
    case unaligned:
        deityType = _deityType;
    }
    return -5;
}

int Character::setAlignment(Alignment _alignment) {
    if (!flagSetDeity) {
        alignment = _alignment;
        flagSetAlignment = true;
        return 0;
    }
    switch (deityType) {
    case undefined:
        alignment = _alignment;
        return 0;
    case Avandra:
        if (alignment == good || alignment == unaligned) {
            alignment = _alignment;
            return 0;
        }
        break;
    case Bahamut:
        if (alignment == lawful) {
            alignment = _alignment;
            return 0;
        }
        break;
    case Corellon:
        if (alignment == unaligned || alignment == good || alignment == evil) {
            alignment = _alignment;
            return 0;
        }
        break;
    case Erathis:
        if (alignment == unaligned || alignment == good || alignment == evil) {
            alignment = _alignment;
            return 0;
        }
        break;
    case Ioun:
        if (alignment == unaligned || alignment == good || alignment == evil) {
            alignment = _alignment;
            return 0;
        }
        break;
    case Kord:
        if (alignment == unaligned || alignment == good || alignment == evil) {
            alignment = _alignment;
            return 0;
        }
        break;
    case Melora:
        if (alignment == unaligned || alignment == good || alignment == evil) {
            alignment = _alignment;
            return 0;
        }
        break;
    case Moradin:
        if (alignment == lawful) {
            alignment = _alignment;
            return 0;
        }
        break;
    case Pelor:
        if (alignment == good || alignment == unaligned) {
            alignment = _alignment;
            return 0;
        }
        break;
    case TheRavenQueen:
        if (alignment == unaligned || alignment == good || alignment == evil) {
            alignment = _alignment;
            return 0;
        }
        break;
    case Sehanine:
        if (alignment == unaligned || alignment == good || alignment == evil) {
            alignment = _alignment;
            return 0;
        }
        break;
    case Asmodeus:
        if (alignment == evil || alignment == unaligned) {
            alignment = _alignment;
            return 0;
        }
        break;
    case Bane:
        if (alignment == evil || alignment == unaligned) {
            alignment = _alignment;
            return 0;
        }
        break;
    case Gruumsh:
        if (alignment == chaoticEvil) {
            alignment = _alignment;
            return 0;
        }
        break;
    case Lolth:
        if (alignment == chaoticEvil) {
            alignment = _alignment;
            return 0;
        }
        break;
    case Tiamat:
        if (alignment == evil || alignment == unaligned) {
            alignment = _alignment;
            return 0;
        }
        break;
    case Torog:
        if (alignment == evil || alignment == unaligned) {
            alignment = _alignment;
            return 0;
        }
        break;
    case Vecna:
        if (alignment == evil || alignment == unaligned) {
            alignment = _alignment;
            return 0;
        }
        break;
    case Zehir:
        if (alignment == evil || alignment == unaligned) {
            alignment = _alignment;
            return 0;
        }
        break;
    }
    return -6;
}

int Character::setLanguage(Language language) {
    for (int i = 0; i < countLanguage; ++i) {
        Language lang = languages[i];
        if (lang == language) {
            return -8;
        }
        if (lang == choiceOfOneOther) {
            languages[i] = language;
            return 0;
        }
    }
    return -7;
}

void Character::setArmor(ArmorType armorType) {
    equipment.setArmor(armorType);
}
