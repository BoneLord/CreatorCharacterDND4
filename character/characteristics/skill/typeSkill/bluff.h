#ifndef BLUFF_H
#define BLUFF_H

#include "character/characteristics/skill/skill.h"

class Bluff : public Skill {
public:
    Bluff(bool trndFlag = false);
    ~Bluff();
    void addBonus(const Bonus * const bonus);
    void subBonus(const Bonus * const bonus);
    const char * toString() const;
};

#endif // BLUFF_H
