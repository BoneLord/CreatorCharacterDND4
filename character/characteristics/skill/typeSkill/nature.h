#ifndef NATURE_H
#define NATURE_H

#include "character/characteristics/skill/skill.h"

class Nature : public Skill {
public:
    Nature(bool trndFlag = false);
    ~Nature();
    void setBonus(const Bonus * const bonus);
    const char * toString() const;
};

#endif // NATURE_H
