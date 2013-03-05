#ifndef TOROGDESTROYER_H
#define TOROGDESTROYER_H

class Torog;

class TorogDestroyer {
    Torog * pTorog;
    TorogDestroyer(const TorogDestroyer& bd);
    TorogDestroyer& operator=(const TorogDestroyer& bd);
public:
    TorogDestroyer();
    ~TorogDestroyer();
    void initialize(Torog *p);
};

#endif // TOROGDESTROYER_H
