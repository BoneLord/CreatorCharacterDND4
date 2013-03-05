#ifndef KORDDESTROYER_H
#define KORDDESTROYER_H

class Kord;

class KordDestroyer {
    Kord * pKord;
    KordDestroyer(const KordDestroyer& bd);
    KordDestroyer& operator=(const KordDestroyer& bd);
public:
    KordDestroyer();
    ~KordDestroyer();
    void initialize(Kord *p);
};

#endif // KORDDESTROYER_H
