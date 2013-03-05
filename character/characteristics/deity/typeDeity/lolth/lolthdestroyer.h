#ifndef LOLTHDESTROYER_H
#define LOLTHDESTROYER_H

class Lolth;

class LolthDestroyer {
    Lolth * pLolth;
    LolthDestroyer(const LolthDestroyer& bd);
    LolthDestroyer& operator=(const LolthDestroyer& bd);
public:
    LolthDestroyer();
    ~LolthDestroyer();
    void initialize(Lolth *p);
};

#endif // LOLTHDESTROYER_H
