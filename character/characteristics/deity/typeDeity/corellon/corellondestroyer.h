#ifndef CORELLONDESTROYER_H
#define CORELLONDESTROYER_H

class Corellon;

class CorellonDestroyer {
    Corellon * pCorellon;
    CorellonDestroyer(const CorellonDestroyer& bd);
    CorellonDestroyer& operator=(const CorellonDestroyer& bd);
public:
    CorellonDestroyer();
    ~CorellonDestroyer();
    void initialize(Corellon *p);
};

#endif // CORELLONDESTROYER_H
