#ifndef THERAVENQUEENDESTROYER_H
#define THERAVENQUEENDESTROYER_H

class TheRavenQueen;

class TheRavenQueenDestroyer {
    TheRavenQueen * pTheRavenQueen;
    TheRavenQueenDestroyer(const TheRavenQueenDestroyer& bd);
    TheRavenQueenDestroyer& operator=(const TheRavenQueenDestroyer& bd);
public:
    TheRavenQueenDestroyer();
    ~TheRavenQueenDestroyer();
    void initialize(TheRavenQueen *p);
};

#endif // THERAVENQUEENDESTROYER_H
