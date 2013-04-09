#ifndef ACROBATICS_H
#define ACROBATICS_H

#include "character/characteristics/skill/skill.h"

class Acrobatics : public Skill {
public:
    Acrobatics(bool trndFlag = false);
    ~Acrobatics();
    void addBonus(const Bonus * const bonus);
    void subBonus(const Bonus * const bonus);
    const char * toString() const;
};

#endif // ACROBATICS_H
