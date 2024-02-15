#include "../include/decrypteur.h"

Decrypteur::Decrypteur(int decalage) : decalage(decalage) {}

std::string Decrypteur::decrypter(const std::string& message) {
    std::string messageDecrypte = message;

    for (char &c : messageDecrypte) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            c = (c - base - decalage + 26) % 26 + base;
        }
    }

    return messageDecrypte;
}
