#ifndef STREETWISE_H
#define STREETWISE_H

#include "character/characteristics/skill/skill.h"

class Streetwise : public Skill {
public:
    Streetwise(bool trndFlag = false);
    ~Streetwise();
    void setBonus(const Bonus * const bonus);
    const char * toString() const;
};

#endif // STREETWISE_H
