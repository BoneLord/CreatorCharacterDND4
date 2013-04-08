#ifndef STEALTH_H
#define STEALTH_H

#include "character/characteristics/skill/skill.h"

class Stealth : public Skill {
public:
    Stealth(bool trndFlag = false);
    ~Stealth();
    void setBonus(const Bonus * const bonus);
    const char * toString() const;
};

#endif // STEALTH_H
