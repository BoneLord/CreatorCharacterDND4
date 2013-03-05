#include "character/characteristics/deity/typeDeity/avandra/avandradestroyer.h"
#include "character/characteristics/deity/typeDeity/avandra/avandra.h"

AvandraDestroyer::AvandraDestroyer() {
}

AvandraDestroyer::AvandraDestroyer(const AvandraDestroyer &bd) {
}

AvandraDestroyer &AvandraDestroyer::operator =(const AvandraDestroyer &bd) {
    return *this;
}

AvandraDestroyer::~AvandraDestroyer() {
    delete pAvandra;
}

void AvandraDestroyer::initialize(Avandra *p) {
    pAvandra = p;
}
