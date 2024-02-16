#ifndef INTERFACE_H
#define INTERFACE_H

#include <string>

class CryptageInterface {
public:
    virtual ~CryptageInterface() = default;

    virtual std::string crypter(const std::string& message) = 0;
    virtual std::string decrypter(const std::string& message) = 0;
};

#endif 
