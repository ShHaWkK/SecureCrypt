#ifndef CRYPTEUR_H
#define CRYPTEUR_H

#include <string>
#include <memory>

class Crypteur {
public:
    virtual ~Crypteur() = default;
    virtual std::string crypter(const std::string& message) = 0;
};

std::unique_ptr<Crypteur> createCrypteur(const std::string& type, int key);

#endif // CRYPTEUR_H
