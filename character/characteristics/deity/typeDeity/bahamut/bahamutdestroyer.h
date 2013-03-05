#ifndef BAHAMUTDESTROYER_H
#define BAHAMUTDESTROYER_H

class Bahamut;

class BahamutDestroyer {
    Bahamut * pBahamut;
    BahamutDestroyer(const BahamutDestroyer& bd);
    BahamutDestroyer& operator=(const BahamutDestroyer& bd);
public:
    BahamutDestroyer();
    ~BahamutDestroyer();
    void initialize(Bahamut *p);
};

#endif // BAHAMUTDESTROYER_H
