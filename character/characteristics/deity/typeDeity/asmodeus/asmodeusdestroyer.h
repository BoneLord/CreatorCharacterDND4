#ifndef ASMODEUSDESTROYER_H
#define ASMODEUSDESTROYER_H

class Asmodeus;

class AsmodeusDestroyer {
    Asmodeus * pAsmodeus;
    AsmodeusDestroyer(const AsmodeusDestroyer& bd);
    AsmodeusDestroyer& operator=(const AsmodeusDestroyer& bd);
public:
    AsmodeusDestroyer();
    ~AsmodeusDestroyer();
    void initialize(Asmodeus *p);
};

#endif // ASMODEUSDESTROYER_H
