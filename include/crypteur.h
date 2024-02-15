#ifndef CRYPTEUR_H
#define CRYPTEUR_H

#include <string>

class Crypteur {
public:
    explicit Crypteur(int decalage);
    std::string crypter(const std::string& message);

private:
    int decalage;
};

#endif // CRYPTEUR_H
