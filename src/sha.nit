module sha

in "C header" `{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#if defined(__APPLE__) && defined(__MACH__)
		#define COMMON_DIGEST_FOR_OPENSSL
		#include <CommonCrypto/CommonDigest.h>
		#define SHA1 CC_SHA1
		#include <CommonCrypto/CommonHMAC.h>
		#define HMAC CCHmac
	#else
		#include <openssl/hmac.h>
		#include <openssl/sha.h>
		#include <openssl/rc4.h>
		#include <openssl/aes.h>
	#endif
`}

fun sha1(strsize: Int, str: NativeString):String import String::with_native`{

	char* c_str=str;
	unsigned char result[SHA_DIGEST_LENGTH];
	char *buf = malloc(SHA_DIGEST_LENGTH*2+1);

	SHA1(c_str, strsize, result);
	for(int i = 0; i < SHA_DIGEST_LENGTH; i++)
		sprintf(buf + i*2, "%02x", (unsigned int)result[i]);
	
	return  new_String_from_cstring(buf);
`}

