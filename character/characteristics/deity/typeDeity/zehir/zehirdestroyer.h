#ifndef ZEHIRDESTROYER_H
#define ZEHIRDESTROYER_H

class Zehir;

class ZehirDestroyer {
    Zehir * pZehir;
    ZehirDestroyer(const ZehirDestroyer& bd);
    ZehirDestroyer& operator=(const ZehirDestroyer& bd);
public:
    ZehirDestroyer();
    ~ZehirDestroyer();
    void initialize(Zehir *p);
};

#endif // ZEHIRDESTROYER_H
