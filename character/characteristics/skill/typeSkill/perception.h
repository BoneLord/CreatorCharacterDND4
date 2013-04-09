#ifndef PERCEPTION_H
#define PERCEPTION_H

#include "character/characteristics/skill/skill.h"

class Perception : public Skill {
public:
    Perception(bool trndFlag = false);
    ~Perception();
    void addBonus(const Bonus * const bonus);
    void subBonus(const Bonus * const bonus);
    const char * toString() const;
};

#endif // PERCEPTION_H
