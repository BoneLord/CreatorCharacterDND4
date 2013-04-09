#ifndef INSIGHT_H
#define INSIGHT_H

#include "character/characteristics/skill/skill.h"

class Insight : public Skill {
public:
    Insight(bool trndFlag = false);
    ~Insight();
    void addBonus(const Bonus * const bonus);
    void subBonus(const Bonus * const bonus);
    const char * toString() const;
};

#endif // INSIGHT_H
