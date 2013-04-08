#ifndef INTIMIDATE_H
#define INTIMIDATE_H

#include "character/characteristics/skill/skill.h"

class Intimidate : public Skill {
public:
    Intimidate(bool trndFlag = false);
    ~Intimidate();
    void setBonus(const Bonus * const bonus);
    const char * toString() const;
};

#endif // INTIMIDATE_H
