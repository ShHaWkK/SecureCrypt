#include <iostream>
#include <string>
#include "../include/crypteur.h"
#include "../include/decrypteur.h"

int main() {
    std::string messageOriginal;
    std::string messageCrypte;
    std::string messageDecrypte;

    std::cout << "Entrez le message à crypter: ";
    getline(std::cin, messageOriginal);

    // Cryptage
    messageCrypte = crypter(messageOriginal);
    std::cout << "Message crypté: " << messageCrypte << std::endl;

    // Décryptage
    messageDecrypte = decrypter(messageCrypte);
    std::cout << "Message décrypté: " << messageDecrypte << std::endl;

    return 0;
}
