#ifndef MBEDTLS_CONFIG_H
#define MBEDTLS_CONFIG_H
#if defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
#define _CRT_SECURE_NO_DEPRECATE 1
#endif

#define MBEDTLS_NET_C
#define MBEDTLS_FS_IO
#define MBEDTLS_DEBUG_C
#define MBEDTLS_SHA512_C /* pre-req for MBEDTLS_ENTROPY_C */
#define MBEDTLS_ENTROPY_C
#define MBEDTLS_HAVE_ASM /* pre-req for MBEDTLS_AESNI_C */
#define MBEDTLS_AESNI_C
#define MBEDTLS_CUSTOM_HAS_AESNI
#define MBEDTLS_CUSTOM_HAS_PADLOCK
#define MBEDTLS_AES_ENCRYPT_ALT
#define MBEDTLS_AES_DECRYPT_ALT
#define MBEDTLS_THREADING_IMPL
#define MBEDTLS_VERSION_C /* necessary for cargo test querying mbedTLS version */

/* not sure if this is necessary 

#if defined(TARGET_LIKE_MBED)
#include "mbedtls/target_config.h"
#endif
*/

#include <mbedtls/check_config.h>
#endif /* MBEDTLS_CONFIG_H */
