#ifndef INSIGHT_H
#define INSIGHT_H

#include "character/characteristics/skill/skill.h"

class Insight : public Skill {
public:
    Insight(bool trndFlag = false);
    ~Insight();
};

#endif // INSIGHT_H
