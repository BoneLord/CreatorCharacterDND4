#ifndef DIPLOMACY_H
#define DIPLOMACY_H

#include "character/characteristics/skill/skill.h"

class Diplomacy : public Skill {
public:
    Diplomacy(bool trndFlag = false);
    ~Diplomacy();
    void setBonus(const Bonus * const bonus);
    const char * toString() const;
};

#endif // DIPLOMACY_H
