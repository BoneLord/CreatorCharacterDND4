#ifndef IOUNDESTROYER_H
#define IOUNDESTROYER_H

class Ioun;

class IounDestroyer {
    Ioun * pIoun;
    IounDestroyer(const IounDestroyer& bd);
    IounDestroyer& operator=(const IounDestroyer& bd);
public:
    IounDestroyer();
    ~IounDestroyer();
    void initialize(Ioun *p);
};

#endif // IOUNDESTROYER_H
