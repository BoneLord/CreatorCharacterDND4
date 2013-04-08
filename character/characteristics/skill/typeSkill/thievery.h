#ifndef THIEVERY_H
#define THIEVERY_H

#include "character/characteristics/skill/skill.h"

class Thievery : public Skill {
public:
    Thievery(bool trndFlag = false);
    ~Thievery();
    void setBonus(const Bonus * const bonus);
    const char * toString() const;
};

#endif // THIEVERY_H
