#include <iostream>
#include <string>
#include "../include/crypteur.h"
#include "../include/decrypteur.h"

int main() {
    std::string type, message;
    int key;

    std::cout << "Entrez le type de chiffrement (cesar/vigenere/etc): ";
    std::cin >> type;
    std::cout << "Entrez la clé (nombre pour cesar, mot pour vigenere): ";
    std::cin >> key;

    std::cout << "Entrez le message à crypter: ";
    std::cin.ignore();
    std::getline(std::cin, message);

    auto crypteur = createCrypteur(type, key);
    auto decrypteur = createDecrypteur(type, key);

    std::string messageCrypte = crypteur->crypter(message);
    std::string messageDecrypte = decrypteur->decrypter(messageCrypte);

    std::cout << "Message crypté: " << messageCrypte << std::endl;
    std::cout << "Message décrypté: " << messageDecrypte << std::endl;

    return 0;
}