#ifndef RELIGION_H
#define RELIGION_H

#include "character/characteristics/skill/skill.h"

class Religion : public Skill {
public:
    Religion(bool trndFlag = false);
    ~Religion();
    void setBonus(const Bonus * const bonus);
    const char * toString() const;
};

#endif // RELIGION_H
