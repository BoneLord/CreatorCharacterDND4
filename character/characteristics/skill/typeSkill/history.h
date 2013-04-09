#ifndef HISTORY_H
#define HISTORY_H

#include "character/characteristics/skill/skill.h"

class History : public Skill {
public:
    History(bool trndFlag = false);
    ~History();
    void addBonus(const Bonus * const bonus);
    void subBonus(const Bonus * const bonus);
    const char * toString() const;
};

#endif // HISTORY_H
