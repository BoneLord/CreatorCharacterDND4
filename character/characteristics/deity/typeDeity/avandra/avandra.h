#ifndef AVANDRA_H
#define AVANDRA_H

#include "character/characteristics/deity/ideity.h"
#include "character/characteristics/alignment.h"
#include "character/characteristics/deity/typeDeity/avandra/avandradestroyer.h"
#include <cstring>

class Avandra : public IDeity {
    static Avandra * pAvandra;
    static AvandraDestroyer destroyer;
protected:
    Avandra();
    Avandra(const Avandra& b);
    Avandra& operator=(const Avandra& b);
    ~Avandra();
    friend class AvandraDestroyer;
public:
    bool isCompatibleAlignment(Alignment alignment) const;
    const char * toString() const;
    static Avandra& getInstance();
};

#endif // AVANDRA_H
