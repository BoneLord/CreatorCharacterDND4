#ifndef ENDURANCE_H
#define ENDURANCE_H

#include "character/characteristics/skill/skill.h"

class Endurance : public Skill {
public:
    Endurance(bool trndFlag = false);
    ~Endurance();
    void setBonus(const Bonus * const bonus);
    const char * toString() const;
};

#endif // ENDURANCE_H
