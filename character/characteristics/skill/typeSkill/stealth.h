#ifndef STEALTH_H
#define STEALTH_H

#include "character/characteristics/skill/skill.h"

class Stealth : public Skill {
public:
    Stealth(bool trndFlag = false);
    ~Stealth();
    void addBonus(const Bonus * const bonus);
    void subBonus(const Bonus * const bonus);
    const char * toString() const;
};

#endif // STEALTH_H
