#ifndef SSL_FUNCTION_HPP
#define SSL_FUNCTION_HPP

struct Cer_Info {
    char number[20];
    char* b64Encoded;
};

Cer_Info s_readCER(const char* filename);
void r_resize_number(const char* serialNumber, char resizedNumber[20]);

#endif