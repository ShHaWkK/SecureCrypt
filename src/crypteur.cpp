#include "../include/crypteur.h"

Crypteur::Crypteur(int decalage) : decalage(decalage) {}

std::string Crypteur::crypter(const std::string& message) {
    std::string messageCrypte = message;

    for (char &c : messageCrypte) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            c = (c - base + decalage) % 26 + base;
        }
    }

    return messageCrypte;
}
