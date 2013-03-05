#ifndef BANEDESTROYER_H
#define BANEDESTROYER_H

class Bane;

class BaneDestroyer {
    Bane * pBane;
    BaneDestroyer(const BaneDestroyer& bd);
    BaneDestroyer& operator=(const BaneDestroyer& bd);
public:
    BaneDestroyer();
    ~BaneDestroyer();
    void initialize(Bane *p);
};

#endif // BANEDESTROYER_H
