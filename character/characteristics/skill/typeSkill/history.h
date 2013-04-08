#ifndef HISTORY_H
#define HISTORY_H

#include "character/characteristics/skill/skill.h"

class History : public Skill {
public:
    History(bool trndFlag = false);
    ~History();
    void setBonus(const Bonus * const bonus);
    const char * toString() const;
};

#endif // HISTORY_H
