#ifndef ERATHISDESTROYER_H
#define ERATHISDESTROYER_H

class Erathis;

class ErathisDestroyer {
    Erathis * pErathis;
    ErathisDestroyer(const ErathisDestroyer& bd);
    ErathisDestroyer& operator=(const ErathisDestroyer& bd);
public:
    ErathisDestroyer();
    ~ErathisDestroyer();
    void initialize(Erathis *p);
};

#endif // ERATHISDESTROYER_H
