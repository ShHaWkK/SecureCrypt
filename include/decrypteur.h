#ifndef DECRYPTEUR_H
#define DECRYPTEUR_H

#include <string>

class Decrypteur {
public:
    explicit Decrypteur(int decalage);
    std::string decrypter(const std::string& message);

private:
    int decalage;
};

#endif // DECRYPTEUR_H
