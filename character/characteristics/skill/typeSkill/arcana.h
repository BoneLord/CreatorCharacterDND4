#ifndef ARCANA_H
#define ARCANA_H

#include "character/characteristics/skill/skill.h"

class Arcana : public Skill {
public:
    Arcana(bool trndFlag = false);
    ~Arcana();
    void setBonus(const Bonus * const bonus);
    const char * toString() const;
};

#endif // ARCANA_H
