#ifndef PELORDESTROYER_H
#define PELORDESTROYER_H

class Pelor;

class PelorDestroyer {
    Pelor * pPelor;
    PelorDestroyer(const PelorDestroyer& bd);
    PelorDestroyer& operator=(const PelorDestroyer& bd);
public:
    PelorDestroyer();
    ~PelorDestroyer();
    void initialize(Pelor *p);
};

#endif // PELORDESTROYER_H
