#include "ssl_functions.hpp"
#include <iostream>
#include <string.h>
#include <CkCert.h>
#include <CkPublicKey.h>

Cer_Info s_readCER(const char* filename){
    CkCert cert;
    CkString str;
    struct Cer_Info cer_info;
    char number[20];

    bool success = cert.LoadFromFile(filename);
    if (success == false) {
        std::cout << "error" << "\r\n";
    }

    r_resize_number(cert.serialNumber(), cer_info.number );

    cer_info.b64Encoded = (char*) malloc(sizeof(char*) * strlen(cert.getEncoded()));
    strcpy(cer_info.b64Encoded, cert.getEncoded());

    return cer_info;

}

void r_resize_number(const char* serialNumber, char resizedNumber[20]){
    //version: 3
    //input:   33 30 30 30 31 30 30 30 30 30 30 34 30 30 30 30 32 34 35 31
    //output:  30001000000400002451

    int newNumberIndex = 0;
    for(int i = 1; i < 40; i+=2){
        resizedNumber[newNumberIndex] = serialNumber[i];
        newNumberIndex++;
    }

    resizedNumber[newNumberIndex] = '\0';

}