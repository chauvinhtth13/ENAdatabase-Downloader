/* Generated code for Python source for module 'cryptography.hazmat.backends.openssl.aead'
 * created by Nuitka version 0.5.30
 *
 * This code is in part copyright 2018 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The _module_cryptography$hazmat$backends$openssl$aead is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$backends$openssl$aead;
PyDictObject *moduledict_cryptography$hazmat$backends$openssl$aead;

/* The module constants used, if any. */
static PyObject *const_str_digest_8f6206d93f29c1a41fb463cbda41f3c0;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_digest_82e5b7f1075745a8638e06059354d03c;
extern PyObject *const_str_plain_EVP_CTRL_AEAD_GET_TAG;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_key_ptr;
extern PyObject *const_str_plain_AESCCM;
static PyObject *const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple;
extern PyObject *const_str_plain_operation;
static PyObject *const_str_digest_81522bfb2862ed49bf115532c52ac279;
extern PyObject *const_str_plain_EVP_CipherInit_ex;
static PyObject *const_tuple_e17aa2e96797d8b56233a9320929bf1e_tuple;
extern PyObject *const_str_plain_backend;
extern PyObject *const_str_plain_from_buffer;
extern PyObject *const_str_plain_key;
static PyObject *const_tuple_d2dbf38e48ec663ba80da175fce07805_tuple;
extern PyObject *const_str_plain_EVP_CTRL_AEAD_SET_IVLEN;
extern PyObject *const_str_plain_encode;
static PyObject *const_tuple_cec3d8065d06745b9083a0228d7945a0_tuple;
extern PyObject *const_str_plain_EVP_CipherFinal_ex;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_336255be11d158429da8946aefa0f283;
static PyObject *const_str_plain_processed_data;
extern PyObject *const_str_plain_tag_buf;
extern PyObject *const_str_plain__encrypt;
extern PyObject *const_str_plain_cipher_name;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_digest_3b3aae0d4ec6dd9681b22e6097ce791a;
extern PyObject *const_str_plain_EVP_CipherUpdate;
static PyObject *const_str_digest_013b0351da76eb3c78ef643ab8fcf5b0;
extern PyObject *const_str_plain_gc;
static PyObject *const_tuple_str_plain_AESCCM_tuple;
static PyObject *const_tuple_55c0c2b9ad7075dc8f14a1e062442fd4_tuple;
extern PyObject *const_str_plain_buf;
extern PyObject *const_str_plain_ascii;
static PyObject *const_str_plain__process_data;
static PyObject *const_str_plain__set_length;
static PyObject *const_tuple_3464ba7cd4c62c6c5465c486aad9aa6e_tuple;
extern PyObject *const_str_plain_tag;
extern PyObject *const_str_plain_NULL;
static PyObject *const_str_digest_0200c5f381fa9051b8fa2aec882acd07;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_7f1f5e3a0003d7597f6f62fb992555f5;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_EVP_get_cipherbyname;
extern PyObject *const_int_pos_8;
extern PyObject *const_str_plain_AESGCM;
static PyObject *const_str_plain__process_aad;
extern PyObject *const_str_plain__key;
extern PyObject *const_str_plain__aead_cipher_name;
extern PyObject *const_str_plain_new;
extern PyObject *const_str_plain_EVP_CIPHER_CTX_ctrl;
extern PyObject *const_str_plain__decrypt;
extern PyObject *const_str_plain_EVP_CIPHER_CTX_new;
extern PyObject *const_str_plain__DECRYPT;
extern PyObject *const_str_plain_ChaCha20Poly1305;
static PyObject *const_str_digest_912aa4d9acf31d99406188fc060be979;
extern PyObject *const_str_plain__consume_errors;
static PyObject *const_str_plain_tag_len;
extern PyObject *const_str_plain_res;
extern PyObject *const_str_plain_EVP_CIPHER_CTX_free;
extern PyObject *const_str_plain_endswith;
extern PyObject *const_str_plain_nonce;
extern PyObject *const_str_plain_evp_cipher;
static PyObject *const_str_plain__aead_setup;
extern PyObject *const_str_plain_buffer;
extern PyObject *const_str_plain_tag_length;
extern PyObject *const_tuple_str_plain_ascii_tuple;
static PyObject *const_str_plain_nonce_ptr;
extern PyObject *const_str_plain_associated_data;
static PyObject *const_str_plain_intptr;
extern PyObject *const_str_plain_ctx;
extern PyObject *const_str_plain__ENCRYPT;
extern PyObject *const_str_plain_InvalidTag;
static PyObject *const_tuple_str_digest_912aa4d9acf31d99406188fc060be979_tuple;
static PyObject *const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple;
extern PyObject *const_str_plain_openssl_assert;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_digest_81f1b0dfcc7a862e6940580ec4cc42d3;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_plain_AESCCM_str_plain_AESGCM_str_plain_ChaCha20Poly1305_tuple;
extern PyObject *const_str_plain_outlen;
extern PyObject *const_str_plain_cipher;
extern PyObject *const_str_plain_EVP_CTRL_AEAD_SET_TAG;
extern PyObject *const_str_plain_division;
static PyObject *const_tuple_str_plain_InvalidTag_tuple;
extern PyObject *const_tuple_str_digest_3b3aae0d4ec6dd9681b22e6097ce791a_tuple;
static PyObject *const_str_digest_f013577484eb102b5e57aa69da980e93;
extern PyObject *const_str_plain_data_len;
extern PyObject *const_str_plain_EVP_CIPHER_CTX_set_key_length;
extern PyObject *const_str_plain__ffi;
extern PyObject *const_str_plain__lib;
extern PyObject *const_str_plain_print_function;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_8f6206d93f29c1a41fb463cbda41f3c0 = UNSTREAM_STRING( &constant_bin[ 645152 ], 10, 0 );
    const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple, 0, const_str_plain_backend ); Py_INCREF( const_str_plain_backend );
    PyTuple_SET_ITEM( const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple, 1, const_str_plain_cipher ); Py_INCREF( const_str_plain_cipher );
    PyTuple_SET_ITEM( const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple, 2, const_str_plain_nonce ); Py_INCREF( const_str_plain_nonce );
    PyTuple_SET_ITEM( const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple, 3, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple, 4, const_str_plain_associated_data ); Py_INCREF( const_str_plain_associated_data );
    PyTuple_SET_ITEM( const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple, 5, const_str_plain_tag_length ); Py_INCREF( const_str_plain_tag_length );
    PyTuple_SET_ITEM( const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple, 6, const_str_plain_buf ); Py_INCREF( const_str_plain_buf );
    PyTuple_SET_ITEM( const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple, 7, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple, 8, const_str_plain_cipher_name ); Py_INCREF( const_str_plain_cipher_name );
    PyTuple_SET_ITEM( const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple, 9, const_str_plain_tag ); Py_INCREF( const_str_plain_tag );
    PyTuple_SET_ITEM( const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple, 10, const_str_plain_AESCCM ); Py_INCREF( const_str_plain_AESCCM );
    PyTuple_SET_ITEM( const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple, 11, const_str_plain_outlen ); Py_INCREF( const_str_plain_outlen );
    const_str_plain_processed_data = UNSTREAM_STRING( &constant_bin[ 645162 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple, 12, const_str_plain_processed_data ); Py_INCREF( const_str_plain_processed_data );
    PyTuple_SET_ITEM( const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple, 13, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_str_digest_81522bfb2862ed49bf115532c52ac279 = UNSTREAM_STRING( &constant_bin[ 645176 ], 41, 0 );
    const_tuple_e17aa2e96797d8b56233a9320929bf1e_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_e17aa2e96797d8b56233a9320929bf1e_tuple, 0, const_str_plain_backend ); Py_INCREF( const_str_plain_backend );
    PyTuple_SET_ITEM( const_tuple_e17aa2e96797d8b56233a9320929bf1e_tuple, 1, const_str_plain_cipher_name ); Py_INCREF( const_str_plain_cipher_name );
    PyTuple_SET_ITEM( const_tuple_e17aa2e96797d8b56233a9320929bf1e_tuple, 2, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_e17aa2e96797d8b56233a9320929bf1e_tuple, 3, const_str_plain_nonce ); Py_INCREF( const_str_plain_nonce );
    PyTuple_SET_ITEM( const_tuple_e17aa2e96797d8b56233a9320929bf1e_tuple, 4, const_str_plain_tag ); Py_INCREF( const_str_plain_tag );
    const_str_plain_tag_len = UNSTREAM_STRING( &constant_bin[ 645217 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_e17aa2e96797d8b56233a9320929bf1e_tuple, 5, const_str_plain_tag_len ); Py_INCREF( const_str_plain_tag_len );
    PyTuple_SET_ITEM( const_tuple_e17aa2e96797d8b56233a9320929bf1e_tuple, 6, const_str_plain_operation ); Py_INCREF( const_str_plain_operation );
    const_str_plain_nonce_ptr = UNSTREAM_STRING( &constant_bin[ 645224 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_e17aa2e96797d8b56233a9320929bf1e_tuple, 7, const_str_plain_nonce_ptr ); Py_INCREF( const_str_plain_nonce_ptr );
    PyTuple_SET_ITEM( const_tuple_e17aa2e96797d8b56233a9320929bf1e_tuple, 8, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    PyTuple_SET_ITEM( const_tuple_e17aa2e96797d8b56233a9320929bf1e_tuple, 9, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_e17aa2e96797d8b56233a9320929bf1e_tuple, 10, const_str_plain_key_ptr ); Py_INCREF( const_str_plain_key_ptr );
    PyTuple_SET_ITEM( const_tuple_e17aa2e96797d8b56233a9320929bf1e_tuple, 11, const_str_plain_evp_cipher ); Py_INCREF( const_str_plain_evp_cipher );
    const_tuple_d2dbf38e48ec663ba80da175fce07805_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_d2dbf38e48ec663ba80da175fce07805_tuple, 0, const_str_plain_cipher ); Py_INCREF( const_str_plain_cipher );
    PyTuple_SET_ITEM( const_tuple_d2dbf38e48ec663ba80da175fce07805_tuple, 1, const_str_plain_AESCCM ); Py_INCREF( const_str_plain_AESCCM );
    PyTuple_SET_ITEM( const_tuple_d2dbf38e48ec663ba80da175fce07805_tuple, 2, const_str_plain_ChaCha20Poly1305 ); Py_INCREF( const_str_plain_ChaCha20Poly1305 );
    PyTuple_SET_ITEM( const_tuple_d2dbf38e48ec663ba80da175fce07805_tuple, 3, const_str_plain_AESGCM ); Py_INCREF( const_str_plain_AESGCM );
    const_tuple_cec3d8065d06745b9083a0228d7945a0_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_cec3d8065d06745b9083a0228d7945a0_tuple, 0, const_str_plain_backend ); Py_INCREF( const_str_plain_backend );
    PyTuple_SET_ITEM( const_tuple_cec3d8065d06745b9083a0228d7945a0_tuple, 1, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_cec3d8065d06745b9083a0228d7945a0_tuple, 2, const_str_plain_data_len ); Py_INCREF( const_str_plain_data_len );
    const_str_plain_intptr = UNSTREAM_STRING( &constant_bin[ 645233 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_cec3d8065d06745b9083a0228d7945a0_tuple, 3, const_str_plain_intptr ); Py_INCREF( const_str_plain_intptr );
    PyTuple_SET_ITEM( const_tuple_cec3d8065d06745b9083a0228d7945a0_tuple, 4, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_str_digest_013b0351da76eb3c78ef643ab8fcf5b0 = UNSTREAM_STRING( &constant_bin[ 645239 ], 17, 0 );
    const_tuple_str_plain_AESCCM_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_AESCCM_tuple, 0, const_str_plain_AESCCM ); Py_INCREF( const_str_plain_AESCCM );
    const_tuple_55c0c2b9ad7075dc8f14a1e062442fd4_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_55c0c2b9ad7075dc8f14a1e062442fd4_tuple, 0, const_str_plain_backend ); Py_INCREF( const_str_plain_backend );
    PyTuple_SET_ITEM( const_tuple_55c0c2b9ad7075dc8f14a1e062442fd4_tuple, 1, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_55c0c2b9ad7075dc8f14a1e062442fd4_tuple, 2, const_str_plain_associated_data ); Py_INCREF( const_str_plain_associated_data );
    PyTuple_SET_ITEM( const_tuple_55c0c2b9ad7075dc8f14a1e062442fd4_tuple, 3, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    PyTuple_SET_ITEM( const_tuple_55c0c2b9ad7075dc8f14a1e062442fd4_tuple, 4, const_str_plain_outlen ); Py_INCREF( const_str_plain_outlen );
    const_str_plain__process_data = UNSTREAM_STRING( &constant_bin[ 645256 ], 13, 1 );
    const_str_plain__set_length = UNSTREAM_STRING( &constant_bin[ 645269 ], 11, 1 );
    const_tuple_3464ba7cd4c62c6c5465c486aad9aa6e_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_3464ba7cd4c62c6c5465c486aad9aa6e_tuple, 0, const_str_plain_backend ); Py_INCREF( const_str_plain_backend );
    PyTuple_SET_ITEM( const_tuple_3464ba7cd4c62c6c5465c486aad9aa6e_tuple, 1, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_3464ba7cd4c62c6c5465c486aad9aa6e_tuple, 2, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_3464ba7cd4c62c6c5465c486aad9aa6e_tuple, 3, const_str_plain_outlen ); Py_INCREF( const_str_plain_outlen );
    PyTuple_SET_ITEM( const_tuple_3464ba7cd4c62c6c5465c486aad9aa6e_tuple, 4, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    PyTuple_SET_ITEM( const_tuple_3464ba7cd4c62c6c5465c486aad9aa6e_tuple, 5, const_str_plain_buf ); Py_INCREF( const_str_plain_buf );
    const_str_digest_0200c5f381fa9051b8fa2aec882acd07 = UNSTREAM_STRING( &constant_bin[ 645280 ], 50, 0 );
    const_str_digest_7f1f5e3a0003d7597f6f62fb992555f5 = UNSTREAM_STRING( &constant_bin[ 645330 ], 10, 0 );
    const_str_plain__process_aad = UNSTREAM_STRING( &constant_bin[ 645340 ], 12, 1 );
    const_str_digest_912aa4d9acf31d99406188fc060be979 = UNSTREAM_STRING( &constant_bin[ 645336 ], 4, 0 );
    const_str_plain__aead_setup = UNSTREAM_STRING( &constant_bin[ 645352 ], 11, 1 );
    const_tuple_str_digest_912aa4d9acf31d99406188fc060be979_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_912aa4d9acf31d99406188fc060be979_tuple, 0, const_str_digest_912aa4d9acf31d99406188fc060be979 ); Py_INCREF( const_str_digest_912aa4d9acf31d99406188fc060be979 );
    const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple, 0, const_str_plain_backend ); Py_INCREF( const_str_plain_backend );
    PyTuple_SET_ITEM( const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple, 1, const_str_plain_cipher ); Py_INCREF( const_str_plain_cipher );
    PyTuple_SET_ITEM( const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple, 2, const_str_plain_nonce ); Py_INCREF( const_str_plain_nonce );
    PyTuple_SET_ITEM( const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple, 3, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple, 4, const_str_plain_associated_data ); Py_INCREF( const_str_plain_associated_data );
    PyTuple_SET_ITEM( const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple, 5, const_str_plain_tag_length ); Py_INCREF( const_str_plain_tag_length );
    PyTuple_SET_ITEM( const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple, 6, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    PyTuple_SET_ITEM( const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple, 7, const_str_plain_cipher_name ); Py_INCREF( const_str_plain_cipher_name );
    PyTuple_SET_ITEM( const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple, 8, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple, 9, const_str_plain_AESCCM ); Py_INCREF( const_str_plain_AESCCM );
    PyTuple_SET_ITEM( const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple, 10, const_str_plain_outlen ); Py_INCREF( const_str_plain_outlen );
    PyTuple_SET_ITEM( const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple, 11, const_str_plain_processed_data ); Py_INCREF( const_str_plain_processed_data );
    PyTuple_SET_ITEM( const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple, 12, const_str_plain_tag_buf ); Py_INCREF( const_str_plain_tag_buf );
    PyTuple_SET_ITEM( const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple, 13, const_str_plain_tag ); Py_INCREF( const_str_plain_tag );
    const_tuple_str_plain_AESCCM_str_plain_AESGCM_str_plain_ChaCha20Poly1305_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_AESCCM_str_plain_AESGCM_str_plain_ChaCha20Poly1305_tuple, 0, const_str_plain_AESCCM ); Py_INCREF( const_str_plain_AESCCM );
    PyTuple_SET_ITEM( const_tuple_str_plain_AESCCM_str_plain_AESGCM_str_plain_ChaCha20Poly1305_tuple, 1, const_str_plain_AESGCM ); Py_INCREF( const_str_plain_AESGCM );
    PyTuple_SET_ITEM( const_tuple_str_plain_AESCCM_str_plain_AESGCM_str_plain_ChaCha20Poly1305_tuple, 2, const_str_plain_ChaCha20Poly1305 ); Py_INCREF( const_str_plain_ChaCha20Poly1305 );
    const_tuple_str_plain_InvalidTag_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InvalidTag_tuple, 0, const_str_plain_InvalidTag ); Py_INCREF( const_str_plain_InvalidTag );
    const_str_digest_f013577484eb102b5e57aa69da980e93 = UNSTREAM_STRING( &constant_bin[ 645363 ], 44, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$hazmat$backends$openssl$aead( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_58fda605d83b0dffb1082a89d39be381;
static PyCodeObject *codeobj_1aabfee1ae3ec94246904b16240e52a0;
static PyCodeObject *codeobj_c2f276d40f34e78841ccbab368c78ab9;
static PyCodeObject *codeobj_ac2800a87b9db12a58451877f24c4b83;
static PyCodeObject *codeobj_333b15f7ee267bb9edc74ed6c60efa1e;
static PyCodeObject *codeobj_2d4a5148b8f7be681c49bb00f1b633e2;
static PyCodeObject *codeobj_ea0e0ad8f4c16c7167a1172ffcfbcae4;
static PyCodeObject *codeobj_78aaca893719dab90b1a319c447bec4e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_f013577484eb102b5e57aa69da980e93 );
    codeobj_58fda605d83b0dffb1082a89d39be381 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_0200c5f381fa9051b8fa2aec882acd07, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1aabfee1ae3ec94246904b16240e52a0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__aead_cipher_name, 14, const_tuple_d2dbf38e48ec663ba80da175fce07805_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c2f276d40f34e78841ccbab368c78ab9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__aead_setup, 27, const_tuple_e17aa2e96797d8b56233a9320929bf1e_tuple, 7, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ac2800a87b9db12a58451877f24c4b83 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__decrypt, 127, const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_333b15f7ee267bb9edc74ed6c60efa1e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__encrypt, 100, const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2d4a5148b8f7be681c49bb00f1b633e2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__process_aad, 84, const_tuple_55c0c2b9ad7075dc8f14a1e062442fd4_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ea0e0ad8f4c16c7167a1172ffcfbcae4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__process_data, 92, const_tuple_3464ba7cd4c62c6c5465c486aad9aa6e_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_78aaca893719dab90b1a319c447bec4e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__set_length, 72, const_tuple_cec3d8065d06745b9083a0228d7945a0_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_1__aead_cipher_name(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_2__aead_setup(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_3__set_length(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_4__process_aad(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_5__process_data(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_6__encrypt(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_7__decrypt(  );


// The module function definitions.
static PyObject *impl_cryptography$hazmat$backends$openssl$aead$$$function_1__aead_cipher_name( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cipher = python_pars[ 0 ];
    PyObject *var_AESCCM = NULL;
    PyObject *var_ChaCha20Poly1305 = NULL;
    PyObject *var_AESGCM = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_cls_3;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_isinstance_inst_3;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    static struct Nuitka_FrameObject *cache_frame_1aabfee1ae3ec94246904b16240e52a0 = NULL;

    struct Nuitka_FrameObject *frame_1aabfee1ae3ec94246904b16240e52a0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1aabfee1ae3ec94246904b16240e52a0, codeobj_1aabfee1ae3ec94246904b16240e52a0, module_cryptography$hazmat$backends$openssl$aead, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1aabfee1ae3ec94246904b16240e52a0 = cache_frame_1aabfee1ae3ec94246904b16240e52a0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1aabfee1ae3ec94246904b16240e52a0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1aabfee1ae3ec94246904b16240e52a0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_digest_336255be11d158429da8946aefa0f283;
    tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$backends$openssl$aead;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_AESCCM_str_plain_AESGCM_str_plain_ChaCha20Poly1305_tuple;
    tmp_level_name_1 = const_int_0;
    frame_1aabfee1ae3ec94246904b16240e52a0->m_frame.f_lineno = 15;
    tmp_assign_source_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_1;

    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_AESCCM );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( var_AESCCM == NULL );
    var_AESCCM = tmp_assign_source_2;

    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_AESGCM );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( var_AESGCM == NULL );
    var_AESGCM = tmp_assign_source_3;

    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_ChaCha20Poly1305 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( var_ChaCha20Poly1305 == NULL );
    var_ChaCha20Poly1305 = tmp_assign_source_4;

    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    tmp_isinstance_inst_1 = par_cipher;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = var_ChaCha20Poly1305;

    CHECK_OBJECT( tmp_isinstance_cls_1 );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = const_str_digest_013b0351da76eb3c78ef643ab8fcf5b0;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_isinstance_inst_2 = par_cipher;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_isinstance_cls_2 = var_AESCCM;

    CHECK_OBJECT( tmp_isinstance_cls_2 );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_1 = const_str_digest_7f1f5e3a0003d7597f6f62fb992555f5;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
    assert( tmp_called_name_1 != NULL );
    tmp_source_name_2 = par_cipher;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__key );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 21;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 21;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_8;
    tmp_args_element_name_1 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 21;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_1aabfee1ae3ec94246904b16240e52a0->m_frame.f_lineno = 21;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_1aabfee1ae3ec94246904b16240e52a0->m_frame.f_lineno = 21;
    tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_plain_ascii_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_isinstance_inst_3 = par_cipher;

    CHECK_OBJECT( tmp_isinstance_inst_3 );
    tmp_isinstance_cls_3 = var_AESGCM;

    CHECK_OBJECT( tmp_isinstance_cls_3 );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_raise_type_1 = PyExc_AssertionError;
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 23;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_source_name_3 = const_str_digest_8f6206d93f29c1a41fb463cbda41f3c0;
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_format );
    assert( tmp_called_name_2 != NULL );
    tmp_source_name_4 = par_cipher;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_len_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__key );
    if ( tmp_len_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 24;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = BUILTIN_LEN( tmp_len_arg_2 );
    Py_DECREF( tmp_len_arg_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 24;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_pos_8;
    tmp_args_element_name_2 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 24;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_1aabfee1ae3ec94246904b16240e52a0->m_frame.f_lineno = 24;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_called_instance_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_1aabfee1ae3ec94246904b16240e52a0->m_frame.f_lineno = 24;
    tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_plain_ascii_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_2:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1aabfee1ae3ec94246904b16240e52a0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1aabfee1ae3ec94246904b16240e52a0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1aabfee1ae3ec94246904b16240e52a0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1aabfee1ae3ec94246904b16240e52a0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1aabfee1ae3ec94246904b16240e52a0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1aabfee1ae3ec94246904b16240e52a0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1aabfee1ae3ec94246904b16240e52a0,
        type_description_1,
        par_cipher,
        var_AESCCM,
        var_ChaCha20Poly1305,
        var_AESGCM
    );


    // Release cached frame.
    if ( frame_1aabfee1ae3ec94246904b16240e52a0 == cache_frame_1aabfee1ae3ec94246904b16240e52a0 )
    {
        Py_DECREF( frame_1aabfee1ae3ec94246904b16240e52a0 );
    }
    cache_frame_1aabfee1ae3ec94246904b16240e52a0 = NULL;

    assertFrameObject( frame_1aabfee1ae3ec94246904b16240e52a0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$aead$$$function_1__aead_cipher_name );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_AESCCM );
    Py_DECREF( var_AESCCM );
    var_AESCCM = NULL;

    CHECK_OBJECT( (PyObject *)par_cipher );
    Py_DECREF( par_cipher );
    par_cipher = NULL;

    CHECK_OBJECT( (PyObject *)var_ChaCha20Poly1305 );
    Py_DECREF( var_ChaCha20Poly1305 );
    var_ChaCha20Poly1305 = NULL;

    CHECK_OBJECT( (PyObject *)var_AESGCM );
    Py_DECREF( var_AESGCM );
    var_AESGCM = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_AESCCM );
    var_AESCCM = NULL;

    CHECK_OBJECT( (PyObject *)par_cipher );
    Py_DECREF( par_cipher );
    par_cipher = NULL;

    Py_XDECREF( var_ChaCha20Poly1305 );
    var_ChaCha20Poly1305 = NULL;

    Py_XDECREF( var_AESGCM );
    var_AESGCM = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$aead$$$function_1__aead_cipher_name );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$openssl$aead$$$function_2__aead_setup( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend = python_pars[ 0 ];
    PyObject *par_cipher_name = python_pars[ 1 ];
    PyObject *par_key = python_pars[ 2 ];
    PyObject *par_nonce = python_pars[ 3 ];
    PyObject *par_tag = python_pars[ 4 ];
    PyObject *par_tag_len = python_pars[ 5 ];
    PyObject *par_operation = python_pars[ 6 ];
    PyObject *var_nonce_ptr = NULL;
    PyObject *var_res = NULL;
    PyObject *var_ctx = NULL;
    PyObject *var_key_ptr = NULL;
    PyObject *var_evp_cipher = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_args_element_name_17;
    PyObject *tmp_args_element_name_18;
    PyObject *tmp_args_element_name_19;
    PyObject *tmp_args_element_name_20;
    PyObject *tmp_args_element_name_21;
    PyObject *tmp_args_element_name_22;
    PyObject *tmp_args_element_name_23;
    PyObject *tmp_args_element_name_24;
    PyObject *tmp_args_element_name_25;
    PyObject *tmp_args_element_name_26;
    PyObject *tmp_args_element_name_27;
    PyObject *tmp_args_element_name_28;
    PyObject *tmp_args_element_name_29;
    PyObject *tmp_args_element_name_30;
    PyObject *tmp_args_element_name_31;
    PyObject *tmp_args_element_name_32;
    PyObject *tmp_args_element_name_33;
    PyObject *tmp_args_element_name_34;
    PyObject *tmp_args_element_name_35;
    PyObject *tmp_args_element_name_36;
    PyObject *tmp_args_element_name_37;
    PyObject *tmp_args_element_name_38;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
    PyObject *tmp_called_name_13;
    PyObject *tmp_called_name_14;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_left_7;
    PyObject *tmp_compexpr_left_8;
    PyObject *tmp_compexpr_left_9;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    PyObject *tmp_compexpr_right_6;
    PyObject *tmp_compexpr_right_7;
    PyObject *tmp_compexpr_right_8;
    PyObject *tmp_compexpr_right_9;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_int_arg_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
    PyObject *tmp_source_name_24;
    PyObject *tmp_source_name_25;
    PyObject *tmp_source_name_26;
    PyObject *tmp_source_name_27;
    PyObject *tmp_source_name_28;
    PyObject *tmp_source_name_29;
    PyObject *tmp_source_name_30;
    PyObject *tmp_source_name_31;
    PyObject *tmp_source_name_32;
    PyObject *tmp_source_name_33;
    PyObject *tmp_source_name_34;
    PyObject *tmp_source_name_35;
    PyObject *tmp_source_name_36;
    PyObject *tmp_source_name_37;
    PyObject *tmp_source_name_38;
    PyObject *tmp_source_name_39;
    PyObject *tmp_source_name_40;
    PyObject *tmp_source_name_41;
    PyObject *tmp_source_name_42;
    PyObject *tmp_source_name_43;
    PyObject *tmp_source_name_44;
    PyObject *tmp_source_name_45;
    PyObject *tmp_source_name_46;
    PyObject *tmp_source_name_47;
    PyObject *tmp_source_name_48;
    PyObject *tmp_source_name_49;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c2f276d40f34e78841ccbab368c78ab9 = NULL;

    struct Nuitka_FrameObject *frame_c2f276d40f34e78841ccbab368c78ab9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c2f276d40f34e78841ccbab368c78ab9, codeobj_c2f276d40f34e78841ccbab368c78ab9, module_cryptography$hazmat$backends$openssl$aead, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c2f276d40f34e78841ccbab368c78ab9 = cache_frame_c2f276d40f34e78841ccbab368c78ab9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c2f276d40f34e78841ccbab368c78ab9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c2f276d40f34e78841ccbab368c78ab9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_backend;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__lib );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_cipher_name;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_c2f276d40f34e78841ccbab368c78ab9->m_frame.f_lineno = 28;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_EVP_get_cipherbyname, call_args );
    }

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_evp_cipher == NULL );
    var_evp_cipher = tmp_assign_source_1;

    tmp_source_name_2 = par_backend;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_openssl_assert );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_1 = var_evp_cipher;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_source_name_4 = par_backend;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__ffi );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 29;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_NULL );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 29;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 29;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_c2f276d40f34e78841ccbab368c78ab9->m_frame.f_lineno = 29;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = par_backend;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__lib );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_c2f276d40f34e78841ccbab368c78ab9->m_frame.f_lineno = 30;
    tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_EVP_CIPHER_CTX_new );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_ctx == NULL );
    var_ctx = tmp_assign_source_2;

    tmp_source_name_7 = par_backend;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__ffi );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_gc );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_ctx;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_source_name_9 = par_backend;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__lib );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 31;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_EVP_CIPHER_CTX_free );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 31;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_c2f276d40f34e78841ccbab368c78ab9->m_frame.f_lineno = 31;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_ctx;
        assert( old != NULL );
        var_ctx = tmp_assign_source_3;
        Py_DECREF( old );
    }

    tmp_source_name_11 = par_backend;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__lib );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_EVP_CipherInit_ex );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = var_ctx;

    CHECK_OBJECT( tmp_args_element_name_5 );
    tmp_args_element_name_6 = var_evp_cipher;

    CHECK_OBJECT( tmp_args_element_name_6 );
    tmp_source_name_13 = par_backend;

    CHECK_OBJECT( tmp_source_name_13 );
    tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__ffi );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 34;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_NULL );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 34;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_15 = par_backend;

    CHECK_OBJECT( tmp_source_name_15 );
    tmp_source_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain__ffi );
    if ( tmp_source_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_7 );

        exception_lineno = 35;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_NULL );
    Py_DECREF( tmp_source_name_14 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_7 );

        exception_lineno = 35;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_17 = par_backend;

    CHECK_OBJECT( tmp_source_name_17 );
    tmp_source_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain__ffi );
    if ( tmp_source_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_7 );
        Py_DECREF( tmp_args_element_name_8 );

        exception_lineno = 36;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_NULL );
    Py_DECREF( tmp_source_name_16 );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_7 );
        Py_DECREF( tmp_args_element_name_8 );

        exception_lineno = 36;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_2 = par_operation;

    CHECK_OBJECT( tmp_compexpr_left_2 );
    tmp_compexpr_right_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__ENCRYPT );

    if (unlikely( tmp_compexpr_right_2 == NULL ))
    {
        tmp_compexpr_right_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ENCRYPT );
    }

    if ( tmp_compexpr_right_2 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_7 );
        Py_DECREF( tmp_args_element_name_8 );
        Py_DECREF( tmp_args_element_name_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_ENCRYPT" );
        exception_tb = NULL;

        exception_lineno = 37;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_int_arg_1 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_7 );
        Py_DECREF( tmp_args_element_name_8 );
        Py_DECREF( tmp_args_element_name_9 );

        exception_lineno = 37;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_10 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_7 );
        Py_DECREF( tmp_args_element_name_8 );
        Py_DECREF( tmp_args_element_name_9 );

        exception_lineno = 37;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_c2f276d40f34e78841ccbab368c78ab9->m_frame.f_lineno = 32;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_7 );
    Py_DECREF( tmp_args_element_name_8 );
    Py_DECREF( tmp_args_element_name_9 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_4;

    tmp_source_name_18 = par_backend;

    CHECK_OBJECT( tmp_source_name_18 );
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_openssl_assert );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_3 = var_res;

    CHECK_OBJECT( tmp_compexpr_left_3 );
    tmp_compexpr_right_3 = const_int_0;
    tmp_args_element_name_11 = RICH_COMPARE_NE( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 39;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_c2f276d40f34e78841ccbab368c78ab9->m_frame.f_lineno = 39;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_20 = par_backend;

    CHECK_OBJECT( tmp_source_name_20 );
    tmp_source_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain__lib );
    if ( tmp_source_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_EVP_CIPHER_CTX_set_key_length );
    Py_DECREF( tmp_source_name_19 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_12 = var_ctx;

    CHECK_OBJECT( tmp_args_element_name_12 );
    tmp_len_arg_1 = par_key;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_args_element_name_13 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_args_element_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 40;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_c2f276d40f34e78841ccbab368c78ab9->m_frame.f_lineno = 40;
    {
        PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_res;
        assert( old != NULL );
        var_res = tmp_assign_source_5;
        Py_DECREF( old );
    }

    tmp_source_name_21 = par_backend;

    CHECK_OBJECT( tmp_source_name_21 );
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_openssl_assert );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_4 = var_res;

    CHECK_OBJECT( tmp_compexpr_left_4 );
    tmp_compexpr_right_4 = const_int_0;
    tmp_args_element_name_14 = RICH_COMPARE_NE( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_args_element_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 41;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_c2f276d40f34e78841ccbab368c78ab9->m_frame.f_lineno = 41;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_14 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_23 = par_backend;

    CHECK_OBJECT( tmp_source_name_23 );
    tmp_source_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain__lib );
    if ( tmp_source_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_EVP_CIPHER_CTX_ctrl );
    Py_DECREF( tmp_source_name_22 );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_15 = var_ctx;

    CHECK_OBJECT( tmp_args_element_name_15 );
    tmp_source_name_25 = par_backend;

    CHECK_OBJECT( tmp_source_name_25 );
    tmp_source_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain__lib );
    if ( tmp_source_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 43;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_EVP_CTRL_AEAD_SET_IVLEN );
    Py_DECREF( tmp_source_name_24 );
    if ( tmp_args_element_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 43;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_2 = par_nonce;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_args_element_name_17 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_args_element_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_16 );

        exception_lineno = 43;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_27 = par_backend;

    CHECK_OBJECT( tmp_source_name_27 );
    tmp_source_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain__ffi );
    if ( tmp_source_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_16 );
        Py_DECREF( tmp_args_element_name_17 );

        exception_lineno = 44;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_NULL );
    Py_DECREF( tmp_source_name_26 );
    if ( tmp_args_element_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_16 );
        Py_DECREF( tmp_args_element_name_17 );

        exception_lineno = 44;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_c2f276d40f34e78841ccbab368c78ab9->m_frame.f_lineno = 42;
    {
        PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_16 );
    Py_DECREF( tmp_args_element_name_17 );
    Py_DECREF( tmp_args_element_name_18 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_res;
        assert( old != NULL );
        var_res = tmp_assign_source_6;
        Py_DECREF( old );
    }

    tmp_source_name_28 = par_backend;

    CHECK_OBJECT( tmp_source_name_28 );
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_openssl_assert );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_5 = var_res;

    CHECK_OBJECT( tmp_compexpr_left_5 );
    tmp_compexpr_right_5 = const_int_0;
    tmp_args_element_name_19 = RICH_COMPARE_NE( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    if ( tmp_args_element_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 46;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_c2f276d40f34e78841ccbab368c78ab9->m_frame.f_lineno = 46;
    {
        PyObject *call_args[] = { tmp_args_element_name_19 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_19 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_compare_left_1 = par_operation;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__DECRYPT );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__DECRYPT );
    }

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_DECRYPT" );
        exception_tb = NULL;

        exception_lineno = 47;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_30 = par_backend;

    CHECK_OBJECT( tmp_source_name_30 );
    tmp_source_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain__lib );
    if ( tmp_source_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_EVP_CIPHER_CTX_ctrl );
    Py_DECREF( tmp_source_name_29 );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_20 = var_ctx;

    CHECK_OBJECT( tmp_args_element_name_20 );
    tmp_source_name_32 = par_backend;

    CHECK_OBJECT( tmp_source_name_32 );
    tmp_source_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain__lib );
    if ( tmp_source_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 49;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_EVP_CTRL_AEAD_SET_TAG );
    Py_DECREF( tmp_source_name_31 );
    if ( tmp_args_element_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 49;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_3 = par_tag;

    CHECK_OBJECT( tmp_len_arg_3 );
    tmp_args_element_name_22 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_args_element_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_21 );

        exception_lineno = 49;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_23 = par_tag;

    CHECK_OBJECT( tmp_args_element_name_23 );
    frame_c2f276d40f34e78841ccbab368c78ab9->m_frame.f_lineno = 48;
    {
        PyObject *call_args[] = { tmp_args_element_name_20, tmp_args_element_name_21, tmp_args_element_name_22, tmp_args_element_name_23 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_21 );
    Py_DECREF( tmp_args_element_name_22 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_res;
        assert( old != NULL );
        var_res = tmp_assign_source_7;
        Py_DECREF( old );
    }

    tmp_source_name_33 = par_backend;

    CHECK_OBJECT( tmp_source_name_33 );
    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_openssl_assert );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_6 = var_res;

    CHECK_OBJECT( tmp_compexpr_left_6 );
    tmp_compexpr_right_6 = const_int_0;
    tmp_args_element_name_24 = RICH_COMPARE_NE( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    if ( tmp_args_element_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );

        exception_lineno = 51;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_c2f276d40f34e78841ccbab368c78ab9->m_frame.f_lineno = 51;
    {
        PyObject *call_args[] = { tmp_args_element_name_24 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_element_name_24 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_1;
    branch_no_1:;
    tmp_called_instance_3 = par_cipher_name;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_c2f276d40f34e78841ccbab368c78ab9->m_frame.f_lineno = 52;
    tmp_cond_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_endswith, &PyTuple_GET_ITEM( const_tuple_str_digest_912aa4d9acf31d99406188fc060be979_tuple, 0 ) );

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 52;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_35 = par_backend;

    CHECK_OBJECT( tmp_source_name_35 );
    tmp_source_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain__lib );
    if ( tmp_source_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_EVP_CIPHER_CTX_ctrl );
    Py_DECREF( tmp_source_name_34 );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_25 = var_ctx;

    CHECK_OBJECT( tmp_args_element_name_25 );
    tmp_source_name_37 = par_backend;

    CHECK_OBJECT( tmp_source_name_37 );
    tmp_source_name_36 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain__lib );
    if ( tmp_source_name_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 54;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_EVP_CTRL_AEAD_SET_TAG );
    Py_DECREF( tmp_source_name_36 );
    if ( tmp_args_element_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 54;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_27 = par_tag_len;

    CHECK_OBJECT( tmp_args_element_name_27 );
    tmp_source_name_39 = par_backend;

    CHECK_OBJECT( tmp_source_name_39 );
    tmp_source_name_38 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain__ffi );
    if ( tmp_source_name_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_args_element_name_26 );

        exception_lineno = 54;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_NULL );
    Py_DECREF( tmp_source_name_38 );
    if ( tmp_args_element_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_args_element_name_26 );

        exception_lineno = 54;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_c2f276d40f34e78841ccbab368c78ab9->m_frame.f_lineno = 53;
    {
        PyObject *call_args[] = { tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27, tmp_args_element_name_28 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_element_name_26 );
    Py_DECREF( tmp_args_element_name_28 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_res;
        assert( old != NULL );
        var_res = tmp_assign_source_8;
        Py_DECREF( old );
    }

    tmp_source_name_40 = par_backend;

    CHECK_OBJECT( tmp_source_name_40 );
    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_openssl_assert );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_7 = var_res;

    CHECK_OBJECT( tmp_compexpr_left_7 );
    tmp_compexpr_right_7 = const_int_0;
    tmp_args_element_name_29 = RICH_COMPARE_NE( tmp_compexpr_left_7, tmp_compexpr_right_7 );
    if ( tmp_args_element_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );

        exception_lineno = 56;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_c2f276d40f34e78841ccbab368c78ab9->m_frame.f_lineno = 56;
    {
        PyObject *call_args[] = { tmp_args_element_name_29 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    Py_DECREF( tmp_args_element_name_29 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    branch_end_1:;
    tmp_source_name_41 = par_backend;

    CHECK_OBJECT( tmp_source_name_41 );
    tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain__ffi );
    if ( tmp_called_instance_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_30 = par_nonce;

    CHECK_OBJECT( tmp_args_element_name_30 );
    frame_c2f276d40f34e78841ccbab368c78ab9->m_frame.f_lineno = 58;
    {
        PyObject *call_args[] = { tmp_args_element_name_30 };
        tmp_assign_source_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_from_buffer, call_args );
    }

    Py_DECREF( tmp_called_instance_4 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_nonce_ptr == NULL );
    var_nonce_ptr = tmp_assign_source_9;

    tmp_source_name_42 = par_backend;

    CHECK_OBJECT( tmp_source_name_42 );
    tmp_called_instance_5 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain__ffi );
    if ( tmp_called_instance_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_31 = par_key;

    CHECK_OBJECT( tmp_args_element_name_31 );
    frame_c2f276d40f34e78841ccbab368c78ab9->m_frame.f_lineno = 59;
    {
        PyObject *call_args[] = { tmp_args_element_name_31 };
        tmp_assign_source_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_from_buffer, call_args );
    }

    Py_DECREF( tmp_called_instance_5 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_key_ptr == NULL );
    var_key_ptr = tmp_assign_source_10;

    tmp_source_name_44 = par_backend;

    CHECK_OBJECT( tmp_source_name_44 );
    tmp_source_name_43 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain__lib );
    if ( tmp_source_name_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_EVP_CipherInit_ex );
    Py_DECREF( tmp_source_name_43 );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_32 = var_ctx;

    CHECK_OBJECT( tmp_args_element_name_32 );
    tmp_source_name_46 = par_backend;

    CHECK_OBJECT( tmp_source_name_46 );
    tmp_source_name_45 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain__ffi );
    if ( tmp_source_name_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_13 );

        exception_lineno = 62;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_NULL );
    Py_DECREF( tmp_source_name_45 );
    if ( tmp_args_element_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_13 );

        exception_lineno = 62;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_48 = par_backend;

    CHECK_OBJECT( tmp_source_name_48 );
    tmp_source_name_47 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain__ffi );
    if ( tmp_source_name_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_33 );

        exception_lineno = 63;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain_NULL );
    Py_DECREF( tmp_source_name_47 );
    if ( tmp_args_element_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_33 );

        exception_lineno = 63;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_35 = var_key_ptr;

    CHECK_OBJECT( tmp_args_element_name_35 );
    tmp_args_element_name_36 = var_nonce_ptr;

    CHECK_OBJECT( tmp_args_element_name_36 );
    tmp_compexpr_left_8 = par_operation;

    CHECK_OBJECT( tmp_compexpr_left_8 );
    tmp_compexpr_right_8 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__ENCRYPT );

    if (unlikely( tmp_compexpr_right_8 == NULL ))
    {
        tmp_compexpr_right_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ENCRYPT );
    }

    if ( tmp_compexpr_right_8 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_33 );
        Py_DECREF( tmp_args_element_name_34 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_ENCRYPT" );
        exception_tb = NULL;

        exception_lineno = 66;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_int_arg_2 = RICH_COMPARE_EQ( tmp_compexpr_left_8, tmp_compexpr_right_8 );
    if ( tmp_int_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_33 );
        Py_DECREF( tmp_args_element_name_34 );

        exception_lineno = 66;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_37 = PyNumber_Int( tmp_int_arg_2 );
    Py_DECREF( tmp_int_arg_2 );
    if ( tmp_args_element_name_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_33 );
        Py_DECREF( tmp_args_element_name_34 );

        exception_lineno = 66;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_c2f276d40f34e78841ccbab368c78ab9->m_frame.f_lineno = 60;
    {
        PyObject *call_args[] = { tmp_args_element_name_32, tmp_args_element_name_33, tmp_args_element_name_34, tmp_args_element_name_35, tmp_args_element_name_36, tmp_args_element_name_37 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_called_name_13 );
    Py_DECREF( tmp_args_element_name_33 );
    Py_DECREF( tmp_args_element_name_34 );
    Py_DECREF( tmp_args_element_name_37 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_res;
        var_res = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_source_name_49 = par_backend;

    CHECK_OBJECT( tmp_source_name_49 );
    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain_openssl_assert );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_9 = var_res;

    CHECK_OBJECT( tmp_compexpr_left_9 );
    tmp_compexpr_right_9 = const_int_0;
    tmp_args_element_name_38 = RICH_COMPARE_NE( tmp_compexpr_left_9, tmp_compexpr_right_9 );
    if ( tmp_args_element_name_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_14 );

        exception_lineno = 68;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_c2f276d40f34e78841ccbab368c78ab9->m_frame.f_lineno = 68;
    {
        PyObject *call_args[] = { tmp_args_element_name_38 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_called_name_14 );
    Py_DECREF( tmp_args_element_name_38 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c2f276d40f34e78841ccbab368c78ab9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c2f276d40f34e78841ccbab368c78ab9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c2f276d40f34e78841ccbab368c78ab9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c2f276d40f34e78841ccbab368c78ab9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c2f276d40f34e78841ccbab368c78ab9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c2f276d40f34e78841ccbab368c78ab9,
        type_description_1,
        par_backend,
        par_cipher_name,
        par_key,
        par_nonce,
        par_tag,
        par_tag_len,
        par_operation,
        var_nonce_ptr,
        var_res,
        var_ctx,
        var_key_ptr,
        var_evp_cipher
    );


    // Release cached frame.
    if ( frame_c2f276d40f34e78841ccbab368c78ab9 == cache_frame_c2f276d40f34e78841ccbab368c78ab9 )
    {
        Py_DECREF( frame_c2f276d40f34e78841ccbab368c78ab9 );
    }
    cache_frame_c2f276d40f34e78841ccbab368c78ab9 = NULL;

    assertFrameObject( frame_c2f276d40f34e78841ccbab368c78ab9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_ctx;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$aead$$$function_2__aead_setup );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_nonce );
    Py_DECREF( par_nonce );
    par_nonce = NULL;

    CHECK_OBJECT( (PyObject *)var_nonce_ptr );
    Py_DECREF( var_nonce_ptr );
    var_nonce_ptr = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)par_cipher_name );
    Py_DECREF( par_cipher_name );
    par_cipher_name = NULL;

    CHECK_OBJECT( (PyObject *)var_ctx );
    Py_DECREF( var_ctx );
    var_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_tag );
    Py_DECREF( par_tag );
    par_tag = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    CHECK_OBJECT( (PyObject *)var_key_ptr );
    Py_DECREF( var_key_ptr );
    var_key_ptr = NULL;

    CHECK_OBJECT( (PyObject *)var_evp_cipher );
    Py_DECREF( var_evp_cipher );
    var_evp_cipher = NULL;

    CHECK_OBJECT( (PyObject *)par_operation );
    Py_DECREF( par_operation );
    par_operation = NULL;

    CHECK_OBJECT( (PyObject *)par_tag_len );
    Py_DECREF( par_tag_len );
    par_tag_len = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_nonce );
    Py_DECREF( par_nonce );
    par_nonce = NULL;

    Py_XDECREF( var_nonce_ptr );
    var_nonce_ptr = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)par_cipher_name );
    Py_DECREF( par_cipher_name );
    par_cipher_name = NULL;

    Py_XDECREF( var_ctx );
    var_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_tag );
    Py_DECREF( par_tag );
    par_tag = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    Py_XDECREF( var_key_ptr );
    var_key_ptr = NULL;

    Py_XDECREF( var_evp_cipher );
    var_evp_cipher = NULL;

    CHECK_OBJECT( (PyObject *)par_operation );
    Py_DECREF( par_operation );
    par_operation = NULL;

    CHECK_OBJECT( (PyObject *)par_tag_len );
    Py_DECREF( par_tag_len );
    par_tag_len = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$aead$$$function_2__aead_setup );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$openssl$aead$$$function_3__set_length( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend = python_pars[ 0 ];
    PyObject *par_ctx = python_pars[ 1 ];
    PyObject *par_data_len = python_pars[ 2 ];
    PyObject *var_intptr = NULL;
    PyObject *var_res = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_78aaca893719dab90b1a319c447bec4e = NULL;

    struct Nuitka_FrameObject *frame_78aaca893719dab90b1a319c447bec4e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_78aaca893719dab90b1a319c447bec4e, codeobj_78aaca893719dab90b1a319c447bec4e, module_cryptography$hazmat$backends$openssl$aead, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_78aaca893719dab90b1a319c447bec4e = cache_frame_78aaca893719dab90b1a319c447bec4e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_78aaca893719dab90b1a319c447bec4e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_78aaca893719dab90b1a319c447bec4e ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_backend;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__ffi );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_78aaca893719dab90b1a319c447bec4e->m_frame.f_lineno = 73;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_new, &PyTuple_GET_ITEM( const_tuple_str_digest_3b3aae0d4ec6dd9681b22e6097ce791a_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_intptr == NULL );
    var_intptr = tmp_assign_source_1;

    tmp_source_name_3 = par_backend;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__lib );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_EVP_CipherUpdate );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_ctx;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_source_name_5 = par_backend;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__ffi );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 76;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_NULL );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 76;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_intptr;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_source_name_7 = par_backend;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__ffi );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 78;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_NULL );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 78;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = par_data_len;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_78aaca893719dab90b1a319c447bec4e->m_frame.f_lineno = 74;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_2;

    tmp_source_name_8 = par_backend;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_openssl_assert );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_1 = var_res;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = const_int_0;
    tmp_args_element_name_6 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 81;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_78aaca893719dab90b1a319c447bec4e->m_frame.f_lineno = 81;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_78aaca893719dab90b1a319c447bec4e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_78aaca893719dab90b1a319c447bec4e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_78aaca893719dab90b1a319c447bec4e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_78aaca893719dab90b1a319c447bec4e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_78aaca893719dab90b1a319c447bec4e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_78aaca893719dab90b1a319c447bec4e,
        type_description_1,
        par_backend,
        par_ctx,
        par_data_len,
        var_intptr,
        var_res
    );


    // Release cached frame.
    if ( frame_78aaca893719dab90b1a319c447bec4e == cache_frame_78aaca893719dab90b1a319c447bec4e )
    {
        Py_DECREF( frame_78aaca893719dab90b1a319c447bec4e );
    }
    cache_frame_78aaca893719dab90b1a319c447bec4e = NULL;

    assertFrameObject( frame_78aaca893719dab90b1a319c447bec4e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$aead$$$function_3__set_length );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_data_len );
    Py_DECREF( par_data_len );
    par_data_len = NULL;

    CHECK_OBJECT( (PyObject *)var_intptr );
    Py_DECREF( var_intptr );
    var_intptr = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_data_len );
    Py_DECREF( par_data_len );
    par_data_len = NULL;

    Py_XDECREF( var_intptr );
    var_intptr = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$aead$$$function_3__set_length );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$openssl$aead$$$function_4__process_aad( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend = python_pars[ 0 ];
    PyObject *par_ctx = python_pars[ 1 ];
    PyObject *par_associated_data = python_pars[ 2 ];
    PyObject *var_res = NULL;
    PyObject *var_outlen = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_2d4a5148b8f7be681c49bb00f1b633e2 = NULL;

    struct Nuitka_FrameObject *frame_2d4a5148b8f7be681c49bb00f1b633e2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2d4a5148b8f7be681c49bb00f1b633e2, codeobj_2d4a5148b8f7be681c49bb00f1b633e2, module_cryptography$hazmat$backends$openssl$aead, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2d4a5148b8f7be681c49bb00f1b633e2 = cache_frame_2d4a5148b8f7be681c49bb00f1b633e2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2d4a5148b8f7be681c49bb00f1b633e2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2d4a5148b8f7be681c49bb00f1b633e2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_backend;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__ffi );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_2d4a5148b8f7be681c49bb00f1b633e2->m_frame.f_lineno = 85;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_new, &PyTuple_GET_ITEM( const_tuple_str_digest_3b3aae0d4ec6dd9681b22e6097ce791a_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_outlen == NULL );
    var_outlen = tmp_assign_source_1;

    tmp_source_name_3 = par_backend;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__lib );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_EVP_CipherUpdate );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_ctx;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_source_name_5 = par_backend;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__ffi );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 87;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_NULL );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 87;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_outlen;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = par_associated_data;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_len_arg_1 = par_associated_data;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_args_element_name_5 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 87;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_2d4a5148b8f7be681c49bb00f1b633e2->m_frame.f_lineno = 86;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_2;

    tmp_source_name_6 = par_backend;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_openssl_assert );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_1 = var_res;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = const_int_0;
    tmp_args_element_name_6 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 89;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_2d4a5148b8f7be681c49bb00f1b633e2->m_frame.f_lineno = 89;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d4a5148b8f7be681c49bb00f1b633e2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d4a5148b8f7be681c49bb00f1b633e2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2d4a5148b8f7be681c49bb00f1b633e2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2d4a5148b8f7be681c49bb00f1b633e2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2d4a5148b8f7be681c49bb00f1b633e2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2d4a5148b8f7be681c49bb00f1b633e2,
        type_description_1,
        par_backend,
        par_ctx,
        par_associated_data,
        var_res,
        var_outlen
    );


    // Release cached frame.
    if ( frame_2d4a5148b8f7be681c49bb00f1b633e2 == cache_frame_2d4a5148b8f7be681c49bb00f1b633e2 )
    {
        Py_DECREF( frame_2d4a5148b8f7be681c49bb00f1b633e2 );
    }
    cache_frame_2d4a5148b8f7be681c49bb00f1b633e2 = NULL;

    assertFrameObject( frame_2d4a5148b8f7be681c49bb00f1b633e2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$aead$$$function_4__process_aad );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)par_associated_data );
    Py_DECREF( par_associated_data );
    par_associated_data = NULL;

    CHECK_OBJECT( (PyObject *)var_outlen );
    Py_DECREF( var_outlen );
    var_outlen = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)par_associated_data );
    Py_DECREF( par_associated_data );
    par_associated_data = NULL;

    Py_XDECREF( var_outlen );
    var_outlen = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$aead$$$function_4__process_aad );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$openssl$aead$$$function_5__process_data( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend = python_pars[ 0 ];
    PyObject *par_ctx = python_pars[ 1 ];
    PyObject *par_data = python_pars[ 2 ];
    PyObject *var_outlen = NULL;
    PyObject *var_res = NULL;
    PyObject *var_buf = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ea0e0ad8f4c16c7167a1172ffcfbcae4 = NULL;

    struct Nuitka_FrameObject *frame_ea0e0ad8f4c16c7167a1172ffcfbcae4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ea0e0ad8f4c16c7167a1172ffcfbcae4, codeobj_ea0e0ad8f4c16c7167a1172ffcfbcae4, module_cryptography$hazmat$backends$openssl$aead, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ea0e0ad8f4c16c7167a1172ffcfbcae4 = cache_frame_ea0e0ad8f4c16c7167a1172ffcfbcae4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ea0e0ad8f4c16c7167a1172ffcfbcae4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ea0e0ad8f4c16c7167a1172ffcfbcae4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_backend;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__ffi );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_ea0e0ad8f4c16c7167a1172ffcfbcae4->m_frame.f_lineno = 93;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_new, &PyTuple_GET_ITEM( const_tuple_str_digest_3b3aae0d4ec6dd9681b22e6097ce791a_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_outlen == NULL );
    var_outlen = tmp_assign_source_1;

    tmp_source_name_3 = par_backend;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__ffi );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_new );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_digest_81f1b0dfcc7a862e6940580ec4cc42d3;
    tmp_len_arg_1 = par_data;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_args_element_name_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 94;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_ea0e0ad8f4c16c7167a1172ffcfbcae4->m_frame.f_lineno = 94;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_buf == NULL );
    var_buf = tmp_assign_source_2;

    tmp_source_name_5 = par_backend;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__lib );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_EVP_CipherUpdate );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_ctx;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = var_buf;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_args_element_name_5 = var_outlen;

    CHECK_OBJECT( tmp_args_element_name_5 );
    tmp_args_element_name_6 = par_data;

    CHECK_OBJECT( tmp_args_element_name_6 );
    tmp_len_arg_2 = par_data;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_args_element_name_7 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 95;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_ea0e0ad8f4c16c7167a1172ffcfbcae4->m_frame.f_lineno = 95;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_3;

    tmp_source_name_6 = par_backend;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_openssl_assert );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_1 = var_res;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = const_int_0;
    tmp_args_element_name_8 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 96;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_ea0e0ad8f4c16c7167a1172ffcfbcae4->m_frame.f_lineno = 96;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_source_name_8 = par_backend;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__ffi );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_buffer );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = var_buf;

    CHECK_OBJECT( tmp_args_element_name_9 );
    tmp_subscribed_name_1 = var_outlen;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_args_element_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 97;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_ea0e0ad8f4c16c7167a1172ffcfbcae4->m_frame.f_lineno = 97;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_slice_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ea0e0ad8f4c16c7167a1172ffcfbcae4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ea0e0ad8f4c16c7167a1172ffcfbcae4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ea0e0ad8f4c16c7167a1172ffcfbcae4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ea0e0ad8f4c16c7167a1172ffcfbcae4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ea0e0ad8f4c16c7167a1172ffcfbcae4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ea0e0ad8f4c16c7167a1172ffcfbcae4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ea0e0ad8f4c16c7167a1172ffcfbcae4,
        type_description_1,
        par_backend,
        par_ctx,
        par_data,
        var_outlen,
        var_res,
        var_buf
    );


    // Release cached frame.
    if ( frame_ea0e0ad8f4c16c7167a1172ffcfbcae4 == cache_frame_ea0e0ad8f4c16c7167a1172ffcfbcae4 )
    {
        Py_DECREF( frame_ea0e0ad8f4c16c7167a1172ffcfbcae4 );
    }
    cache_frame_ea0e0ad8f4c16c7167a1172ffcfbcae4 = NULL;

    assertFrameObject( frame_ea0e0ad8f4c16c7167a1172ffcfbcae4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$aead$$$function_5__process_data );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)var_outlen );
    Py_DECREF( var_outlen );
    var_outlen = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)var_buf );
    Py_DECREF( var_buf );
    var_buf = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    Py_XDECREF( var_outlen );
    var_outlen = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_buf );
    var_buf = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$aead$$$function_5__process_data );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$openssl$aead$$$function_6__encrypt( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend = python_pars[ 0 ];
    PyObject *par_cipher = python_pars[ 1 ];
    PyObject *par_nonce = python_pars[ 2 ];
    PyObject *par_data = python_pars[ 3 ];
    PyObject *par_associated_data = python_pars[ 4 ];
    PyObject *par_tag_length = python_pars[ 5 ];
    PyObject *var_res = NULL;
    PyObject *var_cipher_name = NULL;
    PyObject *var_ctx = NULL;
    PyObject *var_AESCCM = NULL;
    PyObject *var_outlen = NULL;
    PyObject *var_processed_data = NULL;
    PyObject *var_tag_buf = NULL;
    PyObject *var_tag = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_args_element_name_17;
    PyObject *tmp_args_element_name_18;
    PyObject *tmp_args_element_name_19;
    PyObject *tmp_args_element_name_20;
    PyObject *tmp_args_element_name_21;
    PyObject *tmp_args_element_name_22;
    PyObject *tmp_args_element_name_23;
    PyObject *tmp_args_element_name_24;
    PyObject *tmp_args_element_name_25;
    PyObject *tmp_args_element_name_26;
    PyObject *tmp_args_element_name_27;
    PyObject *tmp_args_element_name_28;
    PyObject *tmp_args_element_name_29;
    PyObject *tmp_args_element_name_30;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_333b15f7ee267bb9edc74ed6c60efa1e = NULL;

    struct Nuitka_FrameObject *frame_333b15f7ee267bb9edc74ed6c60efa1e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_333b15f7ee267bb9edc74ed6c60efa1e, codeobj_333b15f7ee267bb9edc74ed6c60efa1e, module_cryptography$hazmat$backends$openssl$aead, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_333b15f7ee267bb9edc74ed6c60efa1e = cache_frame_333b15f7ee267bb9edc74ed6c60efa1e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_333b15f7ee267bb9edc74ed6c60efa1e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_333b15f7ee267bb9edc74ed6c60efa1e ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_digest_336255be11d158429da8946aefa0f283;
    tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$backends$openssl$aead;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_AESCCM_tuple;
    tmp_level_name_1 = const_int_0;
    frame_333b15f7ee267bb9edc74ed6c60efa1e->m_frame.f_lineno = 101;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_AESCCM );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_AESCCM == NULL );
    var_AESCCM = tmp_assign_source_1;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__aead_cipher_name );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__aead_cipher_name );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_aead_cipher_name" );
        exception_tb = NULL;

        exception_lineno = 102;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_cipher;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_333b15f7ee267bb9edc74ed6c60efa1e->m_frame.f_lineno = 102;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_cipher_name == NULL );
    var_cipher_name = tmp_assign_source_2;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__aead_setup );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__aead_setup );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_aead_setup" );
        exception_tb = NULL;

        exception_lineno = 103;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_backend;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = var_cipher_name;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_source_name_1 = par_cipher;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__key );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = par_nonce;

    CHECK_OBJECT( tmp_args_element_name_5 );
    tmp_args_element_name_6 = Py_None;
    tmp_args_element_name_7 = par_tag_length;

    CHECK_OBJECT( tmp_args_element_name_7 );
    tmp_args_element_name_8 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__ENCRYPT );

    if (unlikely( tmp_args_element_name_8 == NULL ))
    {
        tmp_args_element_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ENCRYPT );
    }

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_args_element_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_ENCRYPT" );
        exception_tb = NULL;

        exception_lineno = 104;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_333b15f7ee267bb9edc74ed6c60efa1e->m_frame.f_lineno = 103;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_ctx == NULL );
    var_ctx = tmp_assign_source_3;

    tmp_isinstance_inst_1 = par_cipher;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = var_AESCCM;

    CHECK_OBJECT( tmp_isinstance_cls_1 );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__set_length );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__set_length );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_set_length" );
        exception_tb = NULL;

        exception_lineno = 109;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = par_backend;

    CHECK_OBJECT( tmp_args_element_name_9 );
    tmp_args_element_name_10 = var_ctx;

    CHECK_OBJECT( tmp_args_element_name_10 );
    tmp_len_arg_1 = par_data;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_args_element_name_11 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_333b15f7ee267bb9edc74ed6c60efa1e->m_frame.f_lineno = 109;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__process_aad );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__process_aad );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_process_aad" );
        exception_tb = NULL;

        exception_lineno = 111;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = par_backend;

    CHECK_OBJECT( tmp_args_element_name_12 );
    tmp_args_element_name_13 = var_ctx;

    CHECK_OBJECT( tmp_args_element_name_13 );
    tmp_args_element_name_14 = par_associated_data;

    CHECK_OBJECT( tmp_args_element_name_14 );
    frame_333b15f7ee267bb9edc74ed6c60efa1e->m_frame.f_lineno = 111;
    {
        PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__process_data );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__process_data );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_process_data" );
        exception_tb = NULL;

        exception_lineno = 112;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_15 = par_backend;

    CHECK_OBJECT( tmp_args_element_name_15 );
    tmp_args_element_name_16 = var_ctx;

    CHECK_OBJECT( tmp_args_element_name_16 );
    tmp_args_element_name_17 = par_data;

    CHECK_OBJECT( tmp_args_element_name_17 );
    frame_333b15f7ee267bb9edc74ed6c60efa1e->m_frame.f_lineno = 112;
    {
        PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_processed_data == NULL );
    var_processed_data = tmp_assign_source_4;

    tmp_source_name_2 = par_backend;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__ffi );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_333b15f7ee267bb9edc74ed6c60efa1e->m_frame.f_lineno = 113;
    tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_new, &PyTuple_GET_ITEM( const_tuple_str_digest_3b3aae0d4ec6dd9681b22e6097ce791a_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_outlen == NULL );
    var_outlen = tmp_assign_source_5;

    tmp_source_name_4 = par_backend;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__lib );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_EVP_CipherFinal_ex );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_18 = var_ctx;

    CHECK_OBJECT( tmp_args_element_name_18 );
    tmp_source_name_6 = par_backend;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__ffi );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 114;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_NULL );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_args_element_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 114;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_20 = var_outlen;

    CHECK_OBJECT( tmp_args_element_name_20 );
    frame_333b15f7ee267bb9edc74ed6c60efa1e->m_frame.f_lineno = 114;
    {
        PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_19 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_6;

    tmp_source_name_7 = par_backend;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_openssl_assert );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_1 = var_res;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = const_int_0;
    tmp_args_element_name_21 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_args_element_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 115;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_333b15f7ee267bb9edc74ed6c60efa1e->m_frame.f_lineno = 115;
    {
        PyObject *call_args[] = { tmp_args_element_name_21 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_21 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_8 = par_backend;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_openssl_assert );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_1 = var_outlen;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 116;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = const_int_0;
    tmp_args_element_name_22 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_args_element_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 116;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_333b15f7ee267bb9edc74ed6c60efa1e->m_frame.f_lineno = 116;
    {
        PyObject *call_args[] = { tmp_args_element_name_22 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_22 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_9 = par_backend;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__ffi );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_23 = const_str_digest_81f1b0dfcc7a862e6940580ec4cc42d3;
    tmp_args_element_name_24 = par_tag_length;

    CHECK_OBJECT( tmp_args_element_name_24 );
    frame_333b15f7ee267bb9edc74ed6c60efa1e->m_frame.f_lineno = 117;
    {
        PyObject *call_args[] = { tmp_args_element_name_23, tmp_args_element_name_24 };
        tmp_assign_source_7 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_new, call_args );
    }

    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_tag_buf == NULL );
    var_tag_buf = tmp_assign_source_7;

    tmp_source_name_11 = par_backend;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__lib );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_EVP_CIPHER_CTX_ctrl );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_25 = var_ctx;

    CHECK_OBJECT( tmp_args_element_name_25 );
    tmp_source_name_13 = par_backend;

    CHECK_OBJECT( tmp_source_name_13 );
    tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__lib );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 119;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_EVP_CTRL_AEAD_GET_TAG );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_args_element_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 119;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_27 = par_tag_length;

    CHECK_OBJECT( tmp_args_element_name_27 );
    tmp_args_element_name_28 = var_tag_buf;

    CHECK_OBJECT( tmp_args_element_name_28 );
    frame_333b15f7ee267bb9edc74ed6c60efa1e->m_frame.f_lineno = 118;
    {
        PyObject *call_args[] = { tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27, tmp_args_element_name_28 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_26 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_res;
        assert( old != NULL );
        var_res = tmp_assign_source_8;
        Py_DECREF( old );
    }

    tmp_source_name_14 = par_backend;

    CHECK_OBJECT( tmp_source_name_14 );
    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_openssl_assert );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_3 = var_res;

    CHECK_OBJECT( tmp_compexpr_left_3 );
    tmp_compexpr_right_3 = const_int_0;
    tmp_args_element_name_29 = RICH_COMPARE_NE( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_args_element_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );

        exception_lineno = 121;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_333b15f7ee267bb9edc74ed6c60efa1e->m_frame.f_lineno = 121;
    {
        PyObject *call_args[] = { tmp_args_element_name_29 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_element_name_29 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_source_name_15 = par_backend;

    CHECK_OBJECT( tmp_source_name_15 );
    tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain__ffi );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_30 = var_tag_buf;

    CHECK_OBJECT( tmp_args_element_name_30 );
    frame_333b15f7ee267bb9edc74ed6c60efa1e->m_frame.f_lineno = 122;
    {
        PyObject *call_args[] = { tmp_args_element_name_30 };
        tmp_slice_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_buffer, call_args );
    }

    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_tag == NULL );
    var_tag = tmp_assign_source_9;

    tmp_left_name_1 = var_processed_data;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = var_tag;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_return_value = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_333b15f7ee267bb9edc74ed6c60efa1e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_333b15f7ee267bb9edc74ed6c60efa1e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_333b15f7ee267bb9edc74ed6c60efa1e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_333b15f7ee267bb9edc74ed6c60efa1e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_333b15f7ee267bb9edc74ed6c60efa1e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_333b15f7ee267bb9edc74ed6c60efa1e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_333b15f7ee267bb9edc74ed6c60efa1e,
        type_description_1,
        par_backend,
        par_cipher,
        par_nonce,
        par_data,
        par_associated_data,
        par_tag_length,
        var_res,
        var_cipher_name,
        var_ctx,
        var_AESCCM,
        var_outlen,
        var_processed_data,
        var_tag_buf,
        var_tag
    );


    // Release cached frame.
    if ( frame_333b15f7ee267bb9edc74ed6c60efa1e == cache_frame_333b15f7ee267bb9edc74ed6c60efa1e )
    {
        Py_DECREF( frame_333b15f7ee267bb9edc74ed6c60efa1e );
    }
    cache_frame_333b15f7ee267bb9edc74ed6c60efa1e = NULL;

    assertFrameObject( frame_333b15f7ee267bb9edc74ed6c60efa1e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$aead$$$function_6__encrypt );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_nonce );
    Py_DECREF( par_nonce );
    par_nonce = NULL;

    CHECK_OBJECT( (PyObject *)par_associated_data );
    Py_DECREF( par_associated_data );
    par_associated_data = NULL;

    CHECK_OBJECT( (PyObject *)par_tag_length );
    Py_DECREF( par_tag_length );
    par_tag_length = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)var_cipher_name );
    Py_DECREF( var_cipher_name );
    var_cipher_name = NULL;

    CHECK_OBJECT( (PyObject *)var_ctx );
    Py_DECREF( var_ctx );
    var_ctx = NULL;

    CHECK_OBJECT( (PyObject *)var_AESCCM );
    Py_DECREF( var_AESCCM );
    var_AESCCM = NULL;

    CHECK_OBJECT( (PyObject *)var_outlen );
    Py_DECREF( var_outlen );
    var_outlen = NULL;

    CHECK_OBJECT( (PyObject *)par_cipher );
    Py_DECREF( par_cipher );
    par_cipher = NULL;

    CHECK_OBJECT( (PyObject *)var_processed_data );
    Py_DECREF( var_processed_data );
    var_processed_data = NULL;

    CHECK_OBJECT( (PyObject *)var_tag_buf );
    Py_DECREF( var_tag_buf );
    var_tag_buf = NULL;

    CHECK_OBJECT( (PyObject *)var_tag );
    Py_DECREF( var_tag );
    var_tag = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_nonce );
    Py_DECREF( par_nonce );
    par_nonce = NULL;

    CHECK_OBJECT( (PyObject *)par_associated_data );
    Py_DECREF( par_associated_data );
    par_associated_data = NULL;

    CHECK_OBJECT( (PyObject *)par_tag_length );
    Py_DECREF( par_tag_length );
    par_tag_length = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_cipher_name );
    var_cipher_name = NULL;

    Py_XDECREF( var_ctx );
    var_ctx = NULL;

    Py_XDECREF( var_AESCCM );
    var_AESCCM = NULL;

    Py_XDECREF( var_outlen );
    var_outlen = NULL;

    CHECK_OBJECT( (PyObject *)par_cipher );
    Py_DECREF( par_cipher );
    par_cipher = NULL;

    Py_XDECREF( var_processed_data );
    var_processed_data = NULL;

    Py_XDECREF( var_tag_buf );
    var_tag_buf = NULL;

    Py_XDECREF( var_tag );
    var_tag = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$aead$$$function_6__encrypt );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$openssl$aead$$$function_7__decrypt( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend = python_pars[ 0 ];
    PyObject *par_cipher = python_pars[ 1 ];
    PyObject *par_nonce = python_pars[ 2 ];
    PyObject *par_data = python_pars[ 3 ];
    PyObject *par_associated_data = python_pars[ 4 ];
    PyObject *par_tag_length = python_pars[ 5 ];
    PyObject *var_buf = NULL;
    PyObject *var_ctx = NULL;
    PyObject *var_cipher_name = NULL;
    PyObject *var_tag = NULL;
    PyObject *var_AESCCM = NULL;
    PyObject *var_outlen = NULL;
    PyObject *var_processed_data = NULL;
    PyObject *var_res = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_args_element_name_17;
    PyObject *tmp_args_element_name_18;
    PyObject *tmp_args_element_name_19;
    PyObject *tmp_args_element_name_20;
    PyObject *tmp_args_element_name_21;
    PyObject *tmp_args_element_name_22;
    PyObject *tmp_args_element_name_23;
    PyObject *tmp_args_element_name_24;
    PyObject *tmp_args_element_name_25;
    PyObject *tmp_args_element_name_26;
    PyObject *tmp_args_element_name_27;
    PyObject *tmp_args_element_name_28;
    PyObject *tmp_args_element_name_29;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Lt_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_len_arg_4;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    int tmp_res;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_lower_1;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_source_3;
    PyObject *tmp_slice_upper_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ac2800a87b9db12a58451877f24c4b83 = NULL;

    struct Nuitka_FrameObject *frame_ac2800a87b9db12a58451877f24c4b83;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ac2800a87b9db12a58451877f24c4b83, codeobj_ac2800a87b9db12a58451877f24c4b83, module_cryptography$hazmat$backends$openssl$aead, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ac2800a87b9db12a58451877f24c4b83 = cache_frame_ac2800a87b9db12a58451877f24c4b83;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ac2800a87b9db12a58451877f24c4b83 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ac2800a87b9db12a58451877f24c4b83 ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_digest_336255be11d158429da8946aefa0f283;
    tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$backends$openssl$aead;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_AESCCM_tuple;
    tmp_level_name_1 = const_int_0;
    frame_ac2800a87b9db12a58451877f24c4b83->m_frame.f_lineno = 128;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_AESCCM );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_AESCCM == NULL );
    var_AESCCM = tmp_assign_source_1;

    tmp_len_arg_1 = par_data;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = par_tag_length;

    CHECK_OBJECT( tmp_compare_right_1 );
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 129;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain_InvalidTag );

    if (unlikely( tmp_raise_type_1 == NULL ))
    {
        tmp_raise_type_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InvalidTag );
    }

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "InvalidTag" );
        exception_tb = NULL;

        exception_lineno = 130;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 130;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_slice_source_1 = par_data;

    CHECK_OBJECT( tmp_slice_source_1 );
    tmp_operand_name_1 = par_tag_length;

    CHECK_OBJECT( tmp_operand_name_1 );
    tmp_slice_lower_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    if ( tmp_slice_lower_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = LOOKUP_SLICE( tmp_slice_source_1, tmp_slice_lower_1, Py_None );
    Py_DECREF( tmp_slice_lower_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_tag == NULL );
    var_tag = tmp_assign_source_2;

    tmp_slice_source_2 = par_data;

    CHECK_OBJECT( tmp_slice_source_2 );
    tmp_operand_name_2 = par_tag_length;

    CHECK_OBJECT( tmp_operand_name_2 );
    tmp_slice_upper_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
    if ( tmp_slice_upper_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = LOOKUP_SLICE( tmp_slice_source_2, Py_None, tmp_slice_upper_1 );
    Py_DECREF( tmp_slice_upper_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_data;
        assert( old != NULL );
        par_data = tmp_assign_source_3;
        Py_DECREF( old );
    }

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__aead_cipher_name );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__aead_cipher_name );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_aead_cipher_name" );
        exception_tb = NULL;

        exception_lineno = 133;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_cipher;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_ac2800a87b9db12a58451877f24c4b83->m_frame.f_lineno = 133;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_cipher_name == NULL );
    var_cipher_name = tmp_assign_source_4;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__aead_setup );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__aead_setup );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_aead_setup" );
        exception_tb = NULL;

        exception_lineno = 134;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_backend;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = var_cipher_name;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_source_name_1 = par_cipher;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__key );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = par_nonce;

    CHECK_OBJECT( tmp_args_element_name_5 );
    tmp_args_element_name_6 = var_tag;

    CHECK_OBJECT( tmp_args_element_name_6 );
    tmp_args_element_name_7 = par_tag_length;

    CHECK_OBJECT( tmp_args_element_name_7 );
    tmp_args_element_name_8 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__DECRYPT );

    if (unlikely( tmp_args_element_name_8 == NULL ))
    {
        tmp_args_element_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__DECRYPT );
    }

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_args_element_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_DECRYPT" );
        exception_tb = NULL;

        exception_lineno = 135;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_ac2800a87b9db12a58451877f24c4b83->m_frame.f_lineno = 134;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_ctx == NULL );
    var_ctx = tmp_assign_source_5;

    tmp_isinstance_inst_1 = par_cipher;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = var_AESCCM;

    CHECK_OBJECT( tmp_isinstance_cls_1 );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__set_length );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__set_length );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_set_length" );
        exception_tb = NULL;

        exception_lineno = 140;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = par_backend;

    CHECK_OBJECT( tmp_args_element_name_9 );
    tmp_args_element_name_10 = var_ctx;

    CHECK_OBJECT( tmp_args_element_name_10 );
    tmp_len_arg_2 = par_data;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_args_element_name_11 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_ac2800a87b9db12a58451877f24c4b83->m_frame.f_lineno = 140;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__process_aad );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__process_aad );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_process_aad" );
        exception_tb = NULL;

        exception_lineno = 142;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = par_backend;

    CHECK_OBJECT( tmp_args_element_name_12 );
    tmp_args_element_name_13 = var_ctx;

    CHECK_OBJECT( tmp_args_element_name_13 );
    tmp_args_element_name_14 = par_associated_data;

    CHECK_OBJECT( tmp_args_element_name_14 );
    frame_ac2800a87b9db12a58451877f24c4b83->m_frame.f_lineno = 142;
    {
        PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_isinstance_inst_2 = par_cipher;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_isinstance_cls_2 = var_AESCCM;

    CHECK_OBJECT( tmp_isinstance_cls_2 );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_2 = par_backend;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__ffi );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_ac2800a87b9db12a58451877f24c4b83->m_frame.f_lineno = 146;
    tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_new, &PyTuple_GET_ITEM( const_tuple_str_digest_3b3aae0d4ec6dd9681b22e6097ce791a_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_outlen == NULL );
    var_outlen = tmp_assign_source_6;

    tmp_source_name_4 = par_backend;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__ffi );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_new );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_15 = const_str_digest_81f1b0dfcc7a862e6940580ec4cc42d3;
    tmp_len_arg_3 = par_data;

    CHECK_OBJECT( tmp_len_arg_3 );
    tmp_args_element_name_16 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_args_element_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 147;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_ac2800a87b9db12a58451877f24c4b83->m_frame.f_lineno = 147;
    {
        PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_16 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_buf == NULL );
    var_buf = tmp_assign_source_7;

    tmp_source_name_6 = par_backend;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__lib );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_EVP_CipherUpdate );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_17 = var_ctx;

    CHECK_OBJECT( tmp_args_element_name_17 );
    tmp_args_element_name_18 = var_buf;

    CHECK_OBJECT( tmp_args_element_name_18 );
    tmp_args_element_name_19 = var_outlen;

    CHECK_OBJECT( tmp_args_element_name_19 );
    tmp_args_element_name_20 = par_data;

    CHECK_OBJECT( tmp_args_element_name_20 );
    tmp_len_arg_4 = par_data;

    CHECK_OBJECT( tmp_len_arg_4 );
    tmp_args_element_name_21 = BUILTIN_LEN( tmp_len_arg_4 );
    if ( tmp_args_element_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 148;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_ac2800a87b9db12a58451877f24c4b83->m_frame.f_lineno = 148;
    {
        PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_21 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_8;

    tmp_compare_left_2 = var_res;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = const_int_pos_1;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_instance_2 = par_backend;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_ac2800a87b9db12a58451877f24c4b83->m_frame.f_lineno = 150;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain__consume_errors );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_raise_type_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain_InvalidTag );

    if (unlikely( tmp_raise_type_2 == NULL ))
    {
        tmp_raise_type_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InvalidTag );
    }

    if ( tmp_raise_type_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "InvalidTag" );
        exception_tb = NULL;

        exception_lineno = 151;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_2;
    Py_INCREF( tmp_raise_type_2 );
    exception_lineno = 151;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_source_name_8 = par_backend;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__ffi );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_buffer );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_22 = var_buf;

    CHECK_OBJECT( tmp_args_element_name_22 );
    tmp_subscribed_name_1 = var_outlen;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_args_element_name_23 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_args_element_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 153;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_ac2800a87b9db12a58451877f24c4b83->m_frame.f_lineno = 153;
    {
        PyObject *call_args[] = { tmp_args_element_name_22, tmp_args_element_name_23 };
        tmp_slice_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_23 );
    if ( tmp_slice_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = LOOKUP_INDEX_SLICE( tmp_slice_source_3, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    Py_DECREF( tmp_slice_source_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_processed_data == NULL );
    var_processed_data = tmp_assign_source_9;

    goto branch_end_3;
    branch_no_3:;
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__process_data );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__process_data );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_process_data" );
        exception_tb = NULL;

        exception_lineno = 155;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_24 = par_backend;

    CHECK_OBJECT( tmp_args_element_name_24 );
    tmp_args_element_name_25 = var_ctx;

    CHECK_OBJECT( tmp_args_element_name_25 );
    tmp_args_element_name_26 = par_data;

    CHECK_OBJECT( tmp_args_element_name_26 );
    frame_ac2800a87b9db12a58451877f24c4b83->m_frame.f_lineno = 155;
    {
        PyObject *call_args[] = { tmp_args_element_name_24, tmp_args_element_name_25, tmp_args_element_name_26 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_8, call_args );
    }

    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_processed_data == NULL );
    var_processed_data = tmp_assign_source_10;

    tmp_source_name_9 = par_backend;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__ffi );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_ac2800a87b9db12a58451877f24c4b83->m_frame.f_lineno = 156;
    tmp_assign_source_11 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_new, &PyTuple_GET_ITEM( const_tuple_str_digest_3b3aae0d4ec6dd9681b22e6097ce791a_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_outlen == NULL );
    var_outlen = tmp_assign_source_11;

    tmp_source_name_11 = par_backend;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__lib );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_EVP_CipherFinal_ex );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_27 = var_ctx;

    CHECK_OBJECT( tmp_args_element_name_27 );
    tmp_source_name_13 = par_backend;

    CHECK_OBJECT( tmp_source_name_13 );
    tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__ffi );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 157;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_NULL );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_args_element_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 157;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_29 = var_outlen;

    CHECK_OBJECT( tmp_args_element_name_29 );
    frame_ac2800a87b9db12a58451877f24c4b83->m_frame.f_lineno = 157;
    {
        PyObject *call_args[] = { tmp_args_element_name_27, tmp_args_element_name_28, tmp_args_element_name_29 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_28 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_12;

    tmp_compare_left_3 = var_res;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_instance_4 = par_backend;

    CHECK_OBJECT( tmp_called_instance_4 );
    frame_ac2800a87b9db12a58451877f24c4b83->m_frame.f_lineno = 159;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain__consume_errors );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_raise_type_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain_InvalidTag );

    if (unlikely( tmp_raise_type_3 == NULL ))
    {
        tmp_raise_type_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InvalidTag );
    }

    if ( tmp_raise_type_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "InvalidTag" );
        exception_tb = NULL;

        exception_lineno = 160;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_3;
    Py_INCREF( tmp_raise_type_3 );
    exception_lineno = 160;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_5:;
    branch_end_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ac2800a87b9db12a58451877f24c4b83 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ac2800a87b9db12a58451877f24c4b83 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ac2800a87b9db12a58451877f24c4b83, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ac2800a87b9db12a58451877f24c4b83->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ac2800a87b9db12a58451877f24c4b83, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ac2800a87b9db12a58451877f24c4b83,
        type_description_1,
        par_backend,
        par_cipher,
        par_nonce,
        par_data,
        par_associated_data,
        par_tag_length,
        var_buf,
        var_ctx,
        var_cipher_name,
        var_tag,
        var_AESCCM,
        var_outlen,
        var_processed_data,
        var_res
    );


    // Release cached frame.
    if ( frame_ac2800a87b9db12a58451877f24c4b83 == cache_frame_ac2800a87b9db12a58451877f24c4b83 )
    {
        Py_DECREF( frame_ac2800a87b9db12a58451877f24c4b83 );
    }
    cache_frame_ac2800a87b9db12a58451877f24c4b83 = NULL;

    assertFrameObject( frame_ac2800a87b9db12a58451877f24c4b83 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_processed_data;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$aead$$$function_7__decrypt );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_nonce );
    Py_DECREF( par_nonce );
    par_nonce = NULL;

    CHECK_OBJECT( (PyObject *)par_associated_data );
    Py_DECREF( par_associated_data );
    par_associated_data = NULL;

    CHECK_OBJECT( (PyObject *)par_tag_length );
    Py_DECREF( par_tag_length );
    par_tag_length = NULL;

    Py_XDECREF( var_buf );
    var_buf = NULL;

    CHECK_OBJECT( (PyObject *)var_ctx );
    Py_DECREF( var_ctx );
    var_ctx = NULL;

    CHECK_OBJECT( (PyObject *)var_cipher_name );
    Py_DECREF( var_cipher_name );
    var_cipher_name = NULL;

    CHECK_OBJECT( (PyObject *)var_tag );
    Py_DECREF( var_tag );
    var_tag = NULL;

    CHECK_OBJECT( (PyObject *)var_AESCCM );
    Py_DECREF( var_AESCCM );
    var_AESCCM = NULL;

    CHECK_OBJECT( (PyObject *)var_outlen );
    Py_DECREF( var_outlen );
    var_outlen = NULL;

    CHECK_OBJECT( (PyObject *)par_cipher );
    Py_DECREF( par_cipher );
    par_cipher = NULL;

    CHECK_OBJECT( (PyObject *)var_processed_data );
    Py_DECREF( var_processed_data );
    var_processed_data = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_nonce );
    Py_DECREF( par_nonce );
    par_nonce = NULL;

    CHECK_OBJECT( (PyObject *)par_associated_data );
    Py_DECREF( par_associated_data );
    par_associated_data = NULL;

    CHECK_OBJECT( (PyObject *)par_tag_length );
    Py_DECREF( par_tag_length );
    par_tag_length = NULL;

    Py_XDECREF( var_buf );
    var_buf = NULL;

    Py_XDECREF( var_ctx );
    var_ctx = NULL;

    Py_XDECREF( var_cipher_name );
    var_cipher_name = NULL;

    Py_XDECREF( var_tag );
    var_tag = NULL;

    Py_XDECREF( var_AESCCM );
    var_AESCCM = NULL;

    Py_XDECREF( var_outlen );
    var_outlen = NULL;

    CHECK_OBJECT( (PyObject *)par_cipher );
    Py_DECREF( par_cipher );
    par_cipher = NULL;

    Py_XDECREF( var_processed_data );
    var_processed_data = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_backend );
    Py_DECREF( par_backend );
    par_backend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$openssl$aead$$$function_7__decrypt );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_1__aead_cipher_name(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$aead$$$function_1__aead_cipher_name,
        const_str_plain__aead_cipher_name,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1aabfee1ae3ec94246904b16240e52a0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$openssl$aead,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_2__aead_setup(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$aead$$$function_2__aead_setup,
        const_str_plain__aead_setup,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c2f276d40f34e78841ccbab368c78ab9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$openssl$aead,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_3__set_length(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$aead$$$function_3__set_length,
        const_str_plain__set_length,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_78aaca893719dab90b1a319c447bec4e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$openssl$aead,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_4__process_aad(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$aead$$$function_4__process_aad,
        const_str_plain__process_aad,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2d4a5148b8f7be681c49bb00f1b633e2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$openssl$aead,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_5__process_data(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$aead$$$function_5__process_data,
        const_str_plain__process_data,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ea0e0ad8f4c16c7167a1172ffcfbcae4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$openssl$aead,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_6__encrypt(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$aead$$$function_6__encrypt,
        const_str_plain__encrypt,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_333b15f7ee267bb9edc74ed6c60efa1e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$openssl$aead,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_7__decrypt(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$aead$$$function_7__decrypt,
        const_str_plain__decrypt,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ac2800a87b9db12a58451877f24c4b83,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$openssl$aead,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_cryptography$hazmat$backends$openssl$aead =
{
    PyModuleDef_HEAD_INIT,
    "cryptography.hazmat.backends.openssl.aead",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

extern PyObject *const_str_plain___package__;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;
#endif
#if PYTHON_VERSION >= 330
extern PyObject *const_str_plain___loader__;
extern PyObject *metapath_based_loader;
#endif
#if PYTHON_VERSION >= 330
extern PyObject *const_str_plain___spec__;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( cryptography$hazmat$backends$openssl$aead )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_cryptography$hazmat$backends$openssl$aead );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.backends.openssl.aead: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.backends.openssl.aead: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.backends.openssl.aead: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcryptography$hazmat$backends$openssl$aead" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_cryptography$hazmat$backends$openssl$aead = Py_InitModule4(
        "cryptography.hazmat.backends.openssl.aead",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_cryptography$hazmat$backends$openssl$aead = PyModule_Create( &mdef_cryptography$hazmat$backends$openssl$aead );
#endif

    moduledict_cryptography$hazmat$backends$openssl$aead = MODULE_DICT( module_cryptography$hazmat$backends$openssl$aead );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_cryptography$hazmat$backends$openssl$aead,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$backends$openssl$aead,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_cryptography$hazmat$backends$openssl$aead,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$backends$openssl$aead,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_cryptography$hazmat$backends$openssl$aead );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_81522bfb2862ed49bf115532c52ac279, module_cryptography$hazmat$backends$openssl$aead );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    struct Nuitka_FrameObject *frame_58fda605d83b0dffb1082a89d39be381;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyImport_ImportModule("__future__");
    assert( tmp_assign_source_3 != NULL );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_3 );
    tmp_import_from_1__module = tmp_assign_source_3;

    // Frame without reuse.
    frame_58fda605d83b0dffb1082a89d39be381 = MAKE_MODULE_FRAME( codeobj_58fda605d83b0dffb1082a89d39be381, module_cryptography$hazmat$backends$openssl$aead );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_58fda605d83b0dffb1082a89d39be381 );
    assert( Py_REFCNT( frame_58fda605d83b0dffb1082a89d39be381 ) == 2 );

    // Framed code:
    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_division );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    tmp_name_name_1 = const_str_digest_82e5b7f1075745a8638e06059354d03c;
    tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$backends$openssl$aead;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_InvalidTag_tuple;
    tmp_level_name_1 = const_int_0;
    frame_58fda605d83b0dffb1082a89d39be381->m_frame.f_lineno = 7;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_InvalidTag );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain_InvalidTag, tmp_assign_source_7 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_58fda605d83b0dffb1082a89d39be381 );
#endif
    popFrameStack();

    assertFrameObject( frame_58fda605d83b0dffb1082a89d39be381 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_58fda605d83b0dffb1082a89d39be381 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_58fda605d83b0dffb1082a89d39be381, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_58fda605d83b0dffb1082a89d39be381->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_58fda605d83b0dffb1082a89d39be381, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_8 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__ENCRYPT, tmp_assign_source_8 );
    tmp_assign_source_9 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__DECRYPT, tmp_assign_source_9 );
    tmp_assign_source_10 = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_1__aead_cipher_name(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__aead_cipher_name, tmp_assign_source_10 );
    tmp_assign_source_11 = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_2__aead_setup(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__aead_setup, tmp_assign_source_11 );
    tmp_assign_source_12 = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_3__set_length(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__set_length, tmp_assign_source_12 );
    tmp_assign_source_13 = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_4__process_aad(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__process_aad, tmp_assign_source_13 );
    tmp_assign_source_14 = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_5__process_data(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__process_data, tmp_assign_source_14 );
    tmp_assign_source_15 = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_6__encrypt(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__encrypt, tmp_assign_source_15 );
    tmp_assign_source_16 = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_7__decrypt(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__decrypt, tmp_assign_source_16 );

    return MOD_RETURN_VALUE( module_cryptography$hazmat$backends$openssl$aead );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
