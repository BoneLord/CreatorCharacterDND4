#ifndef MORADINDESTROYER_H
#define MORADINDESTROYER_H

class Moradin;

class MoradinDestroyer {
    Moradin * pMoradin;
    MoradinDestroyer(const MoradinDestroyer& bd);
    MoradinDestroyer& operator=(const MoradinDestroyer& bd);
public:
    MoradinDestroyer();
    ~MoradinDestroyer();
    void initialize(Moradin *p);
};

#endif // MORADINDESTROYER_H
