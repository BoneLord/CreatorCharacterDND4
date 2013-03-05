#include "character/characteristics/deity/typeDeity/melora/meloradestroyer.h"
#include "character/characteristics/deity/typeDeity/melora/melora.h"

MeloraDestroyer::MeloraDestroyer() {
}

MeloraDestroyer::MeloraDestroyer(const MeloraDestroyer &bd) {
}

MeloraDestroyer &MeloraDestroyer::operator =(const MeloraDestroyer &bd) {
    return *this;
}

MeloraDestroyer::~MeloraDestroyer() {
    delete pMelora;
}

void MeloraDestroyer::initialize(Melora *p) {
    pMelora = p;
}
