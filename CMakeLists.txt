cmake_minimum_required(VERSION 3.23)
project(SecureCrypt)

set(CMAKE_CXX_STANDARD 14)

find_package(OpenSSL REQUIRED)

# Inclure les dossiers d'en-têtes d'OpenSSL
set(OPENSSL_ROOT_DIR "chemin/vers/openssl")


# Ajouter l'exécutable
add_executable(SecureCrypt src/main.cpp)

# Lier OpenSSL avec l'exécutable SecureCrypt
target_link_libraries(SecureCrypt OpenSSL::SSL OpenSSL::Crypto)
