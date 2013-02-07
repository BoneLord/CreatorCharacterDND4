#ifndef BONUS_H
#define BONUS_H

class Bonus {
protected:
    int value;
public:
    Bonus(int val = 0);
    virtual ~Bonus();
    int getValBonus() const;
};

#endif // BONUS_H
