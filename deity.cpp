#include "deity.h"

Deity::Deity(DeityType _deityType) :
    deityType(_deityType) {
    switch (deityType) {
    case undefined:
        alignment = unaligned;
        break;
    case Avandra:
        alignment = good;
        break;
    case Bahamut:
        alignment = lawful;
        break;
    case Corellon:
        alignment = unaligned;
        break;
    case Erathis:
        alignment = unaligned;
        break;
    case Ioun:
        alignment = unaligned;
        break;
    case Kord:
        alignment = unaligned;
        break;
    case Melora:
        alignment = unaligned;
        break;
    case Moradin:
        alignment = lawful;
        break;
    case Pelor:
        alignment = good;
        break;
    case TheRavenQueen:
        alignment = unaligned;
        break;
    case Sehanine:
        alignment = unaligned;
        break;
    case Asmodeus:
        alignment = evil;
        break;
    case Bane:
        alignment = evil;
        break;
    case Gruumsh:
        alignment = chaoticEvil;
        break;
    case Lolth:
        alignment = chaoticEvil;
        break;
    case Tiamat:
        alignment = evil;
        break;
    case Torog:
        alignment = evil;
        break;
    case Vecna:
        alignment = evil;
        break;
    case Zehir:
        alignment = evil;
        break;
    }
}

Deity::~Deity() {
}

DeityType Deity::getDeityType() const {
    return deityType;
}

Alignment Deity::getDeityAlignment() const {
    return alignment;
}
