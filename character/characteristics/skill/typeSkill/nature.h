#ifndef NATURE_H
#define NATURE_H

#include "character/characteristics/skill/skill.h"

class Nature : public Skill {
public:
    Nature(bool trndFlag = false);
    ~Nature();
    void addBonus(const Bonus * const bonus);
    void subBonus(const Bonus * const bonus);
    const char * toString() const;
};

#endif // NATURE_H
