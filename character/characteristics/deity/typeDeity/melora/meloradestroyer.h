#ifndef MELORADESTROYER_H
#define MELORADESTROYER_H

class Melora;

class MeloraDestroyer {
    Melora * pMelora;
    MeloraDestroyer(const MeloraDestroyer& bd);
    MeloraDestroyer& operator=(const MeloraDestroyer& bd);
public:
    MeloraDestroyer();
    ~MeloraDestroyer();
    void initialize(Melora *p);
};

#endif // MELORADESTROYER_H
