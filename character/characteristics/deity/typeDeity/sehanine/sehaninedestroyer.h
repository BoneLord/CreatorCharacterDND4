#ifndef SEHANINEDESTROYER_H
#define SEHANINEDESTROYER_H

class Sehanine;

class SehanineDestroyer {
    Sehanine * pSehanine;
    SehanineDestroyer(const SehanineDestroyer& bd);
    SehanineDestroyer& operator=(const SehanineDestroyer& bd);
public:
    SehanineDestroyer();
    ~SehanineDestroyer();
    void initialize(Sehanine *p);
};

#endif // SEHANINEDESTROYER_H
