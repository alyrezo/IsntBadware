#ifndef _BASE64_H_
#define _BASE64_H_

#include <string>

// Please note: The following declaration has been added by Christian Roggia
#define base64_encode base64_encodeW

// Please note: The following function has been added by Christian Roggia
wchar_t *base64_encodeW(unsigned int in_size, unsigned char const* bytes_to_encode);
// Please note: The following function has been modified by Christian Roggia
char    *base64_encodeA(unsigned char const* bytes_to_encode, unsigned int in_len);

// Please note: The following function has been modified by Christian Roggia
unsigned char *base64_decode(char *encoded_string, int in_len, int *out_len);

#endif 