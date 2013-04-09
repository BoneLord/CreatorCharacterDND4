#ifndef ARCANA_H
#define ARCANA_H

#include "character/characteristics/skill/skill.h"

class Arcana : public Skill {
public:
    Arcana(bool trndFlag = false);
    ~Arcana();
    void addBonus(const Bonus * const bonus);
    void subBonus(const Bonus * const bonus);
    const char * toString() const;
};

#endif // ARCANA_H
