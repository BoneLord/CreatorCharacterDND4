#ifndef AVANDRADESTROYER_H
#define AVANDRADESTROYER_H

class Avandra;

class AvandraDestroyer {
    Avandra * pAvandra;
    AvandraDestroyer(const AvandraDestroyer& bd);
    AvandraDestroyer& operator=(const AvandraDestroyer& bd);
public:
    AvandraDestroyer();
    ~AvandraDestroyer();
    void initialize(Avandra *p);
};

#endif // AVANDRADESTROYER_H
