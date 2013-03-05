#ifndef GRUUMSHDESTROYER_H
#define GRUUMSHDESTROYER_H

class Gruumsh;

class GruumshDestroyer {
    Gruumsh * pGruumsh;
    GruumshDestroyer(const GruumshDestroyer& bd);
    GruumshDestroyer& operator=(const GruumshDestroyer& bd);
public:
    GruumshDestroyer();
    ~GruumshDestroyer();
    void initialize(Gruumsh *p);
};

#endif // GRUUMSHDESTROYER_H
