#ifndef THERAVENQUEEN_H
#define THERAVENQUEEN_H

#include "character/characteristics/deity/ideity.h"
#include "character/characteristics/alignment.h"
#include "character/characteristics/deity/typeDeity/theravenqueen/theravenqueendestroyer.h"
#include <cstring>

class TheRavenQueen : public IDeity {
    static TheRavenQueen * pTheRavenQueen;
    static TheRavenQueenDestroyer destroyer;
protected:
    TheRavenQueen();
    TheRavenQueen(const TheRavenQueen& b);
    TheRavenQueen& operator=(const TheRavenQueen& b);
    ~TheRavenQueen();
    friend class TheRavenQueenDestroyer;
public:
    bool isCompatibleAlignment(Alignment alignment) const;
    const char * toString() const;
    static TheRavenQueen& getInstance();
};

#endif // THERAVENQUEEN_H
