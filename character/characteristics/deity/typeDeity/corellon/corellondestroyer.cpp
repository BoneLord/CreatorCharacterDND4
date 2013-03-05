#include "character/characteristics/deity/typeDeity/corellon/corellondestroyer.h"
#include "character/characteristics/deity/typeDeity/corellon/corellon.h"

CorellonDestroyer::CorellonDestroyer() {
}

CorellonDestroyer::CorellonDestroyer(const CorellonDestroyer &bd) {
}

CorellonDestroyer &CorellonDestroyer::operator =(const CorellonDestroyer &bd) {
    return *this;
}

CorellonDestroyer::~CorellonDestroyer() {
    delete pCorellon;
}

void CorellonDestroyer::initialize(Corellon *p) {
    pCorellon = p;
}
