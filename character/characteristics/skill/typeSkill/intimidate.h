#ifndef INTIMIDATE_H
#define INTIMIDATE_H

#include "character/characteristics/skill/skill.h"

class Intimidate : public Skill {
public:
    Intimidate(bool trndFlag = false);
    ~Intimidate();
    void addBonus(const Bonus * const bonus);
    void subBonus(const Bonus * const bonus);
    const char * toString() const;
};

#endif // INTIMIDATE_H
