#ifndef DECRYPTEUR_H
#define DECRYPTEUR_H

#include <string>
#include <memory>

class Decrypteur {
public:
    virtual ~Decrypteur() = default;
    virtual std::string decrypter(const std::string& message) = 0;
};

std::unique_ptr<Decrypteur> createDecrypteur(const std::string& type, int key);

#endif 
