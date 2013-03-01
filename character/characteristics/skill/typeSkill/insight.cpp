#include "character/characteristics/skill/typeSkill/insight.h"

Insight::Insight(bool trndFlag) : Skill(trndFlag) {
    skill = insight;
    ability = wisdom_t;
}

Insight::~Insight() {
}
