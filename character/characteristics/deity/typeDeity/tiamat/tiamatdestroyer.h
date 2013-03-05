#ifndef TIAMATDESTROYER_H
#define TIAMATDESTROYER_H

class Tiamat;

class TiamatDestroyer {
    Tiamat * pTiamat;
    TiamatDestroyer(const TiamatDestroyer& bd);
    TiamatDestroyer& operator=(const TiamatDestroyer& bd);
public:
    TiamatDestroyer();
    ~TiamatDestroyer();
    void initialize(Tiamat *p);
};

#endif // TIAMATDESTROYER_H
