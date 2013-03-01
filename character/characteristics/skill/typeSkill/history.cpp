#include "character/characteristics/skill/typeSkill/history.h"

History::History(bool trndFlag) : Skill(trndFlag) {
    skill = history;
    ability = intellect_t;
}

History::~History() {
}
