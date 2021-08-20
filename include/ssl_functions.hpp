/**
 * Ulisesten
 * Agosto 1, 2021
 * Función para obtener la información de los certificados DER con extensión .cer
*/

#ifndef SSL_FUNCTION_HPP
#define SSL_FUNCTION_HPP

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <openssl/bio.h>
#include <openssl/x509.h>
#include <openssl/sha.h>

typedef struct{
    char* serial_number;
    char* encoded;
}DCert;

DCert s_readCER(const char* file_name);
char* encryption(char* cad);
size_t b64_encoded_size(size_t inlen);
char *b64_encode(const unsigned char *in, size_t len);

#endif