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

Skill::Skill(bool trndFlag): trainedFlag(trndFlag) {
}

Skill::~Skill() {
}

int Skill::setTrain() {
    if (!trainedFlag) {
        trainedFlag = true;
        return 0;
    }
    return -1;
}

int Skill::setUnTrain() {
    if (trainedFlag) {
        trainedFlag = false;
        return 0;
    }
    return -2;
}

int Skill::getValue() const {
    if (trainedFlag) {
        return 5;
    }
    return 0;
}

AbilityType Skill::getBaseAbility() const {
    return ability;
}

bool Skill::isTrained() const {
    return trainedFlag;
}

Skill* Skill::createSkill(SkillType skillType, bool trndFlag) {
    Skill *skill;
    switch (skillType) {
    case acrobatics:
        skill = new Acrobatics(trndFlag);
        break;
    case arcana:
        skill = new Arcana(trndFlag);
        break;
    case athletics:
        skill = new Athletics(trndFlag);
        break;
    case bluff:
        skill = new Bluff(trndFlag);
        break;
    case diplomacy:
        skill = new Diplomacy(trndFlag);
        break;
    case dungeoneering:
        skill = new Dungeoneering(trndFlag);
        break;
    case endurance:
        skill = new Endurance(trndFlag);
        break;
    case heal:
        skill = new Heal(trndFlag);
        break;
    case history:
        skill = new History(trndFlag);
        break;
    case insight:
        skill = new Insight(trndFlag);
        break;
    case intimidate:
        skill = new Intimidate(trndFlag);
        break;
    case nature:
        skill = new Nature(trndFlag);
        break;
    case perception:
        skill = new Perception(trndFlag);
        break;
    case religion:
        skill = new Religion(trndFlag);
        break;
    case stealth:
        skill = new Stealth(trndFlag);
        break;
    case streetwise:
        skill = new Streetwise(trndFlag);
        break;
    case thievery:
        skill = new Thievery(trndFlag);
        break;
    default:
        skill = 0;
    }
    return skill;
}
