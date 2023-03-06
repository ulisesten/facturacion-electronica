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
#include <openssl/pkcs12.h>

typedef struct{
    char* serial_number;
    char* encoded;
}DCert;

/**
 * @author ulisesten
 * @brief Opens the certificate
**/
DCert s_readCER(const char* file_name);

/**
 * 
**/
char* s_encryptSHA256(char* input);

/**
 * @author ulisesten
 * @brief This function decrypts the private key file(.key extension)
 * and encrypts it with sha256 digest to an RSA algorythm
 * @param input is the sha256 digest from s_encryptSHA256() function
 * @param priv_key_file is the path to the .key file
 * @param password is the passphrase to decrypt the private ket
**/
char* s_encryptRSA(char* input, char* priv_key_file, char* password);

size_t b64_encoded_size(size_t inlen);
char *b64_encode(const unsigned char *in, size_t len);

#endif