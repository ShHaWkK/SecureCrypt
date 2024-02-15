#ifndef AES_CRYPTAGE_H
#define AES_CRYPTAGE_H

#include "interface.h"
#include <openssl/aes.h>

class AESCryptage : public CryptageInterface {
public:
    AESCryptage(const std::string& cle); // Constructeur avec clé
    std::string crypter(const std::string& message) override;
    std::string decrypter(const std::string& message) override;

private:
    AES_KEY cleEncrypt;
    AES_KEY cleDecrypt;
};

#endif // AES_CRYPTAGE_H
