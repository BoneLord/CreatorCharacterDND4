#ifndef ATHLETICS_H
#define ATHLETICS_H

#include "character/characteristics/skill/skill.h"

class Athletics : public Skill {
public:
    Athletics(bool trndFlag = false);
    ~Athletics();
    void setBonus(const Bonus * const bonus);
    const char * toString() const;
};

#endif // ATHLETICS_H
