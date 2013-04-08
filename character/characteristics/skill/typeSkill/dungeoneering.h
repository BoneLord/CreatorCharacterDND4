#ifndef DUNGEONEERING_H
#define DUNGEONEERING_H

#include "character/characteristics/skill/skill.h"

class Dungeoneering : public Skill {
public:
    Dungeoneering(bool trndFlag = false);
    ~Dungeoneering();
    void setBonus(const Bonus * const bonus);
    const char * toString() const;
};

#endif // DUNGEONEERING_H
