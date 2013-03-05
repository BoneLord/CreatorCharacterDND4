#ifndef VECNADESTROYER_H
#define VECNADESTROYER_H

class Vecna;

class VecnaDestroyer {
    Vecna * pVecna;
    VecnaDestroyer(const VecnaDestroyer& bd);
    VecnaDestroyer& operator=(const VecnaDestroyer& bd);
public:
    VecnaDestroyer();
    ~VecnaDestroyer();
    void initialize(Vecna *p);
};

#endif // VECNADESTROYER_H
