#ifndef HEAL_H
#define HEAL_H

#include "character/characteristics/skill/skill.h"

class Heal : public Skill {
public:
    Heal(bool trndFlag = false);
    ~Heal();
    void addBonus(const Bonus * const bonus);
    void subBonus(const Bonus * const bonus);
    const char * toString() const;
};

#endif // HEAL_H
