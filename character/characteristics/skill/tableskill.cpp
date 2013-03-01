#include "character/characteristics/skill/tableskill.h"

TableSkill::TableSkill() {
    skills = new Skill * [SKILLCOUNT];
    skills[0] = Skill::createSkill(acrobatics);
    skills[1] = Skill::createSkill(arcana);
    skills[2] = Skill::createSkill(athletics);
    skills[3] = Skill::createSkill(bluff);
    skills[4] = Skill::createSkill(diplomacy);
    skills[5] = Skill::createSkill(dungeoneering);
    skills[6] = Skill::createSkill(endurance);
    skills[7] = Skill::createSkill(heal);
    skills[8] = Skill::createSkill(history);
    skills[9] = Skill::createSkill(insight);
    skills[10] = Skill::createSkill(intimidate);
    skills[11] = Skill::createSkill(nature);
    skills[12] = Skill::createSkill(perception);
    skills[13] = Skill::createSkill(religion);
    skills[14] = Skill::createSkill(stealth);
    skills[15] = Skill::createSkill(streetwise);
    skills[16] = Skill::createSkill(thievery);
}

TableSkill::~TableSkill() {
    for (int i = 0; i < SKILLCOUNT; ++i) {
        delete skills[i];
    }
    delete [] skills;
}

int TableSkill::getSkillValue(SkillType skillType) const {
    return skills[skillType]->getValue();
}

int TableSkill::getAcrobaticsValue() const {
    return skills[acrobatics]->getValue();
}

int TableSkill::getArcanaValue() const {
    return skills[arcana]->getValue();
}

int TableSkill::getAthleticsValue() const {
    return skills[athletics]->getValue();
}

int TableSkill::getBluffValue() const {
    return skills[bluff]->getValue();
}

int TableSkill::getDiplomacyValue() const {
    return skills[diplomacy]->getValue();
}

int TableSkill::getDungeoneeringValue() const {
    return skills[dungeoneering]->getValue();
}

int TableSkill::getEnduranceValue() const {
    return skills[endurance]->getValue();
}

int TableSkill::getHealValue() const {
    return skills[heal]->getValue();
}

int TableSkill::getHistoryValue() const {
    return skills[history]->getValue();
}

int TableSkill::getInsightValue() const {
    return skills[insight]->getValue();
}

int TableSkill::getIntimidateValue() const {
    return skills[intimidate]->getValue();
}

int TableSkill::getNatureValue() const {
    return skills[nature]->getValue();
}

int TableSkill::getPerceptionValue() const {
    return skills[perception]->getValue();
}

int TableSkill::getReligionValue() const {
    return skills[religion]->getValue();
}

int TableSkill::getStealthValue() const {
    return skills[stealth]->getValue();
}

int TableSkill::getStreetwiseValue() const {
    return skills[streetwise]->getValue();
}

int TableSkill::getThieveryValue() const {
    return skills[thievery]->getValue();
}

int TableSkill::setTrainSkill(SkillType skillType) {
    return skills[skillType]->setTrain();
}

int TableSkill::setUnTrainSkill(SkillType skillType) {
    return skills[skillType]->setUnTrain();
}

int TableSkill::getCountTrainedSkill() const {
    int value = 0;
    for (int i = 0; i < SKILLCOUNT; ++i) {
        if (skills[i]->isTrained()) {
            ++value;
        }
    }
    return value;
}
