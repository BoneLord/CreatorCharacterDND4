#include "race.h"
#include "dragonborn.h"

Race::~Race() {
    delete [] languages;

    for (int i = 0; i < countAbltScBns; ++i) {
        delete abilityScoreBonus[i];
    }
    delete [] abilityScoreBonus;

    for (int i = 0; i < countSkllBns; ++i) {
        delete skillBonus[i];
    }
    delete [] skillBonus;

    for (int i = 0; i < countDfnsBns; ++i) {
        delete defenseBonus[i];
    }
    delete [] defenseBonus;
    delete [] feats;
}

int Race::getAverageMinHeight() const {
    return avgMinHeight;
}

int Race::getAverageMaxHeight() const {
    return avgMaxHeight;
}

int Race::getAverageMinWeight() const {
    return avgMinWeight;
}

int Race::getAverageMaxWeight() const {
    return avgMaxWeight;
}

int Race::getAverageAge() const {
    return avgAge;
}

Size Race::getSize() const {
    return size;
}

int Race::getSpeed() const {
    return speed;
}

Vision Race::getVision() const {
    return vision;
}

RaceType Race::getRace() const {
    return raceType;
}

Language const * Race::getLanguages() const {
    return languages;
}

int Race::countLanguages() const {
    return countLanguage;
}

BonusAbility const * const * Race::getAbilityScoreBonus() const {
    return abilityScoreBonus;
}

int Race::countAbilityScoreBonus() const {
    return countAbltScBns;
}

BonusSkill const * const * Race::getSkillBonus() const {
    return skillBonus;
}

int Race::countSkillBonus() const {
    return countSkllBns;
}

BonusDefense const * const * Race::getDefenseBonus() const {
    return defenseBonus;
}

int Race::countDefenseBonus() const {
    return countDfnsBns;
}

int Race::getValueBonusOfType(AbilityType abltType) const {
    int val = 0;
    for (int i = 0; i < countAbltScBns; ++i) {
        if (abilityScoreBonus[i]->getBonusAbility() == abltType) {
            val = abilityScoreBonus[i]->getValBonus();
        }
    }
    return val;
}

int Race::getValueBonusOfType(SkillType skillType) const {
    int val = 0;
    for (int i = 0; i < countSkllBns; ++i) {
        if (skillBonus[i]->getBonusSkill() == skillType) {
            val = skillBonus[i]->getValBonus();
        }
    }
    return val;
}

int Race::getValueBonusOfType(DefenseType dfnsType) const {
    int val = 0;
    for (int i = 0; i < countDfnsBns; ++i) {
        if (defenseBonus[i]->getBonusDefense() == dfnsType) {
            val = defenseBonus[i]->getValBonus();
        }
    }
    return val;
}

const FeatType *const Race::getFeats() const {
    return feats;
}

int Race::getCountFeat() const {
    return countFeat;
}

Race* Race::createRace(RaceType raceType) {
    Race *race;
    switch (raceType) {
    case dragonBorn:
        race = new Dragonborn();
        break;
//    case dwarf:
//        race = new Dwarf();
//        break;
//    case eladrin:
//        race = new Eladrin();
//        break;
//    case elf:
//        race = new Elf();
//        break;
//    case halfElf:
//        race = new HalfElf();
//        break;
//    case halfling:
//        race = new Halfling();
//        break;
//    case human:
//        race = new Human();
//        break;
//    case tiefling:
//        race = new Tiefling();
//        break;
    default:
        return 0;
    }
    return race;
}
