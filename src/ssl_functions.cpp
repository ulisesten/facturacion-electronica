/**
 * Ulisesten
 * 2021
 * https://github.com/ulisesten
 * 
 * functions to read certificates
 * functions to encrypt
*/

#include "ssl_functions.hpp"


DCert s_readCER(const char* file_name){
    BIO *bio;
    X509 *certificate;
    FILE* file;
    DCert cer_info;
    unsigned char* out = NULL;
    int len;
    
    /**opening file*/
    file = fopen(file_name, "r");

    /**preparing file*/
    certificate = d2i_X509_fp(file, NULL);

    /**copy content file*/
    len = i2d_X509(certificate, &out);

    /**encoding entyre file*/
    cer_info.encoded = b64_encode(out, len);

    /**getting certificate serial number*/
    cer_info.serial_number = (char*)X509_get_serialNumber (certificate)->data;
    
    fclose(file);

    return cer_info;
}

char* s_encryptRSA(char* input, char* priv_key_file, char* password){
	PKCS8_PRIV_KEY_INFO * p8inf       =  NULL;
	X509_SIG            * info_sig    =  NULL;
	FILE                * file        =  NULL;
	unsigned char       * out         =  NULL;
	int len;

    file = fopen (priv_key_file, "r");
	
    if( file != NULL) {
		
	    info_sig = d2i_PKCS8_fp (file, NULL);
		       
		if( info_sig != NULL ) {

		    p8inf = PKCS8_decrypt(info_sig, password, (int)strlen((const char*)password));
			if( p8inf ) {

                len = i2d_PKCS8_PRIV_KEY_INFO(p8inf, &out);
				
				/**for(int i = 0; i < len; i++)
                    std::cout << out[i];
				
				std::cout << std::endl;*/

			} else
			    std::cout << "PKCS8_PRIV_KEY_INFO err " << std::endl;
		    
		} else
            std::cout << "X509_Sig err " << std::endl;
	
	} else {
        printf ("Unable to open file %s\n", priv_key_file);
        return NULL;
    }


	fclose(file);
	return "test";
}

char* s_encryptSHA256(char* cad) {
	unsigned char hash[SHA256_DIGEST_LENGTH];
	char outputBuffer[65];
	size_t len = strlen(cad);
	int i;

    SHA256_CTX context;
    if(!SHA256_Init(&context))
        return NULL;
	
    if (!SHA256_Update( &context, cad, len ))
	    return NULL;

    if(!SHA256_Final(hash, &context))
        return NULL;

	for(i = 0; i < SHA256_DIGEST_LENGTH; i++){
        sprintf(&outputBuffer[i * 2], "%02x", hash[i]);
    }

    outputBuffer[64] = 0;
	//std::cout << outputBuffer << std::endl;

	return outputBuffer;
}


size_t b64_encoded_size(size_t inlen) {
	size_t ret;

	ret = inlen;
	if (inlen % 3 != 0)
		ret += 3 - (inlen % 3);
	ret /= 3;
	ret *= 4;

	return ret;
}


char *b64_encode(const unsigned char *in, size_t len)
{
	char   *out;
	size_t  elen;
	size_t  i;
	size_t  j;
	size_t  v;
    const char b64chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

	if (in == NULL || len == 0)
		return NULL;

	elen = b64_encoded_size(len);
	out  = (char*)malloc(elen+1);
	out[elen] = '\0';

	for (i=0, j=0; i<len; i+=3, j+=4) {
		v = in[i];
		v = i+1 < len ? v << 8 | in[i+1] : v << 8;
		v = i+2 < len ? v << 8 | in[i+2] : v << 8;

		out[j]   = b64chars[(v >> 18) & 0x3F];
		out[j+1] = b64chars[(v >> 12) & 0x3F];
		if (i+1 < len) {
			out[j+2] = b64chars[(v >> 6) & 0x3F];
		} else {
			out[j+2] = '=';
		}
		if (i+2 < len) {
			out[j+3] = b64chars[v & 0x3F];
		} else {
			out[j+3] = '=';
		}
	}

	return out;
}

