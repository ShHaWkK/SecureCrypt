cmake_minimum_required(VERSION 3.23)
project(SecureCrypt)

set(CMAKE_CXX_STANDARD 14)

# Définir le chemin d'OpenSSL
set(OPENSSL_ROOT_DIR "C:/C_libraries/openssl-3.2.1/openssl-3.2.1/")
set(OPENSSL_ROOT_DIR "C:/Program Files/OpenSSL-Win64")
set(OPENSSL_SSL_LIBRARY "C:/Program Files/OpenSSL-Win64/lib/libssl.lib")
set(OPENSSL_CRYPTO_LIBRARY "C:/Program Files/OpenSSL-Win64/lib/libcrypto.lib")
set(OPENSSL_INCLUDE_DIR "C:/Program Files/OpenSSL-Win64/include")
set(OPENSSL_INCLUDE_DIR "C:/C_libraries/openssl-3.2.1/openssl-3.2.1/include")
set(OPENSSL_INCLUDE_DIR "C:/C_libraries/openssl-3.2.1/openssl-3.2.1/include/crypto")
set(OPENSSL_INCLUDE_DIR "C:/C_libraries/openssl-3.2.1/openssl-3.2.1/include/internal")
set(OPENSSL_INCLUDE_DIR "C:/C_libraries/openssl-3.2.1/openssl-3.2.1/include/openssl")
set(OPENSSL_CRYPTO_LIBRARY "C:/C_libraries/openssl-3.2.1/openssl-3.2.1/crypto)
# Trouver le paquet OpenSSL
find_package(OpenSSL REQUIRED)

# Ajouter l'exécutable
add_executable(SecureCrypt src/main.cpp)

# Lier OpenSSL avec l'exécutable SecureCrypt
target_link_libraries(SecureCrypt OpenSSL::SSL OpenSSL::Crypto)
