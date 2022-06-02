/* Generated code for Python source for module 'cryptography.hazmat.bindings.openssl._conditional'
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

/* The _module_cryptography$hazmat$bindings$openssl$_conditional is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$bindings$openssl$_conditional;
PyDictObject *moduledict_cryptography$hazmat$bindings$openssl$_conditional;

/* The module constants used, if any. */
static PyObject *const_str_plain_Cryptography_HAS_CUSTOM_EXT;
static PyObject *const_str_plain_Cryptography_HAS_OPENSSL_CLEANUP;
static PyObject *const_str_plain_Cryptography_CRYPTO_set_mem_functions;
static PyObject *const_str_plain_TLS_ST_OK;
extern PyObject *const_str_digest_6c6405718530cbdfc8da1bb69c050727;
static PyObject *const_str_plain_cryptography_has_raw_key;
static PyObject *const_str_plain_Cryptography_HAS_GET_SERVER_TMP_KEY;
static PyObject *const_list_2b0156be132bced5637961a9aa48cb51_list;
static PyObject *const_list_str_plain_SSL_CTX_set_cert_cb_str_plain_SSL_set_cert_cb_list;
static PyObject *const_str_plain_cryptography_has_psk;
extern PyObject *const_dict_empty;
static PyObject *const_str_plain_SSLv3_client_method;
static PyObject *const_str_plain_X509_STORE_get_get_issuer;
static PyObject *const_str_plain_cryptography_has_102_verification_params;
static PyObject *const_str_plain_FIPS_mode;
static PyObject *const_str_digest_5ebdc304a856f17bec9566811cc3653b;
static PyObject *const_str_plain_cryptography_has_poly1305;
static PyObject *const_str_plain_X509_V_ERR_SUITE_B_INVALID_VERSION;
static PyObject *const_str_digest_2fcc949fb99081eda00ddcfc8aa01f9a;
static PyObject *const_list_str_plain_EVP_PKEY_DHX_list;
static PyObject *const_str_plain_SCT_set_source;
static PyObject *const_str_plain_cryptography_has_110_verification_params;
static PyObject *const_str_plain_X509_VERIFY_PARAM_set_hostflags;
static PyObject *const_str_digest_0134e31627bb74f9df2edcd82a96ece3;
static PyObject *const_str_plain_ENGINE_get_name;
static PyObject *const_str_plain_cryptography_has_fips;
static PyObject *const_list_str_plain_X509_CHECK_FLAG_NEVER_CHECK_SUBJECT_list;
static PyObject *const_str_digest_5e36ac0615fb0e6445b1e014cca7bd54;
static PyObject *const_str_plain_Cryptography_HAS_ED448;
static PyObject *const_str_plain_Cryptography_HAS_PSK;
static PyObject *const_list_str_plain_RSA_R_PKCS_DECODING_ERROR_list;
extern PyObject *const_str_plain_EVP_PKEY_new_raw_private_key;
static PyObject *const_str_plain_cryptography_has_cipher_details;
static PyObject *const_str_plain_SSL_CTX_use_psk_identity_hint;
static PyObject *const_list_str_plain_EVP_PKEY_ED448_str_plain_NID_ED448_list;
extern PyObject *const_str_plain_EVP_PKEY_set1_tls_encodedpoint;
static PyObject *const_str_plain_Cryptography_HAS_TLS_ST;
extern PyObject *const_str_plain_EVP_PKEY_ED25519;
static PyObject *const_list_str_plain_X509_V_FLAG_TRUSTED_FIRST_list;
static PyObject *const_str_plain_cryptography_has_tlsv13;
static PyObject *const_str_plain_X509_V_ERR_SUITE_B_LOS_NOT_ALLOWED;
static PyObject *const_str_plain_SSL_ST_OK;
static PyObject *const_list_8637a8e096edeccc96cf2940262bfd01_list;
static PyObject *const_str_plain_X509_V_FLAG_TRUSTED_FIRST;
static PyObject *const_str_plain_SSL_set_post_handshake_auth;
static PyObject *const_list_86c40a5c21cefd9f6af8769ff1175caf_list;
static PyObject *const_str_plain_DTLS_get_link_min_mtu;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_SSL_set_cert_cb;
static PyObject *const_str_plain_SSL_CTX_set_psk_client_callback;
static PyObject *const_str_plain_Cryptography_HAS_102_VERIFICATION_PARAMS;
static PyObject *const_str_plain_Cryptography_HAS_SIGALGS;
static PyObject *const_str_plain_SSL_CTX_add_client_custom_ext;
extern PyObject *const_str_plain_CONDITIONAL_NAMES;
extern PyObject *const_str_plain_EVP_DigestFinalXOF;
extern PyObject *const_str_plain_RSA_R_PKCS_DECODING_ERROR;
static PyObject *const_str_plain_cryptography_has_ed25519;
extern PyObject *const_str_plain_Cryptography_HAS_ALPN;
static PyObject *const_str_plain_SSL_OP_NO_DTLSv1;
static PyObject *const_str_plain_SSL_extension_supported;
static PyObject *const_str_plain_Cryptography_HAS_110_VERIFICATION_PARAMS;
extern PyObject *const_str_plain_SSL_get0_alpn_selected;
static PyObject *const_list_str_plain_EVP_PKEY_X448_str_plain_NID_X448_list;
static PyObject *const_str_plain_cryptography_has_rsa_oaep_label;
static PyObject *const_str_plain_SSL_get_current_compression;
static PyObject *const_list_str_plain_SSL_get_server_tmp_key_list;
extern PyObject *const_str_plain_EVP_PKEY_get_raw_private_key;
static PyObject *const_list_str_plain_EVP_PKEY_X25519_str_plain_NID_X25519_list;
static PyObject *const_str_digest_4492d7ee374a0b9e687cf99e3c6facc1;
extern PyObject *const_str_plain_EVP_PKEY_X25519;
static PyObject *const_str_plain_EVP_PKEY_POLY1305;
extern PyObject *const_str_plain_EVP_PKEY_CTX_set_rsa_oaep_md;
static PyObject *const_str_digest_fafbfe30544ba42854ed0b86baac5f84;
static PyObject *const_str_plain_SSL_get_sigalgs;
static PyObject *const_str_digest_05e8c3e45ca4a8d1991048b3b057a830;
static PyObject *const_str_plain_X509_CHECK_FLAG_NEVER_CHECK_SUBJECT;
static PyObject *const_str_plain_SCT_set1_log_id;
static PyObject *const_list_str_plain_EVP_R_MEMORY_LIMIT_EXCEEDED_list;
static PyObject *const_str_plain_X509_CHECK_FLAG_NO_PARTIAL_WILDCARDS;
static PyObject *const_str_plain_SSL_ST_INIT;
static PyObject *const_str_plain_SSL_CIPHER_get_kx_nid;
static PyObject *const_str_plain_SSL_VERIFY_POST_HANDSHAKE;
static PyObject *const_str_plain_SSL_CTX_set_max_early_data;
static PyObject *const_str_plain_cryptography_has_evp_digestfinal_xof;
static PyObject *const_str_digest_0a25da58d8b65f965de99956a1b5aad7;
static PyObject *const_str_plain_cryptography_has_custom_ext;
static PyObject *const_str_digest_9a0160a95e0c209c6b7e5d38666a9d6e;
extern PyObject *const_str_plain_SSL_set_alpn_protos;
static PyObject *const_str_plain_SSL_CIPHER_get_auth_nid;
static PyObject *const_str_plain_X509_CHECK_FLAG_MULTI_LABEL_WILDCARDS;
static PyObject *const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list;
static PyObject *const_str_plain_X509_V_ERR_EMAIL_MISMATCH;
static PyObject *const_list_9cf036427baefafa3a18cbc2378aecdb_list;
static PyObject *const_list_str_plain_NID_poly1305_str_plain_EVP_PKEY_POLY1305_list;
static PyObject *const_str_plain_cryptography_has_get_server_tmp_key;
extern PyObject *const_str_plain_Cryptography_HAS_RSA_OAEP_LABEL;
static PyObject *const_str_plain_Cryptography_HAS_FIPS;
extern PyObject *const_str_plain_ENGINE_init;
extern PyObject *const_str_plain_sk_SCT_value;
static PyObject *const_str_digest_c8d4ed7f56a6990e5028c35f4876f90c;
static PyObject *const_str_plain_SSLv3_server_method;
static PyObject *const_str_plain_Cryptography_HAS_SSL_ST;
static PyObject *const_str_plain_X509_V_ERR_IP_ADDRESS_MISMATCH;
extern PyObject *const_str_plain_Cryptography_HAS_RSA_OAEP_MD;
static PyObject *const_list_03133653ae1f779dd1ae650a3a80ba30_list;
static PyObject *const_list_70d66b11b8b83912e7ed175ae865dfed_list;
static PyObject *const_str_plain_EC_POINT_set_compressed_coordinates_GF2m;
static PyObject *const_list_a2ccfb1541ef6968650ac43562856e84_list;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_EVP_PKEY_ED448;
extern PyObject *const_str_plain_EVP_PKEY_CTX_set0_rsa_oaep_label;
static PyObject *const_str_plain_SSL_COMP_get_name;
static PyObject *const_str_plain_cryptography_has_ssl_sigalgs;
static PyObject *const_list_str_plain_TLS_ST_BEFORE_str_plain_TLS_ST_OK_list;
static PyObject *const_list_str_plain_EVP_DigestSign_str_plain_EVP_DigestVerify_list;
extern PyObject *const_str_plain_NID_X448;
static PyObject *const_str_plain_Cryptography_HAS_X25519;
static PyObject *const_list_str_plain_SSL_get0_verified_chain_list;
static PyObject *const_str_plain_SSL_CTX_set_post_handshake_auth;
extern PyObject *const_str_plain_EVP_PBE_scrypt;
extern PyObject *const_str_plain_Cryptography_HAS_LOCKING_CALLBACKS;
extern PyObject *const_str_plain_NID_X25519;
static PyObject *const_list_e5729eb47bb2bb77d896a48e0ba4a292_list;
static PyObject *const_list_str_plain_SSL_CTX_set_ecdh_auto_list;
static PyObject *const_str_plain_X509_V_ERR_HOSTNAME_MISMATCH;
static PyObject *const_str_plain_cryptography_has_tls_st;
static PyObject *const_list_a92b37e3fd97e57634d2e2c4f15929c2_list;
static PyObject *const_str_plain_SCT_set_timestamp;
extern PyObject *const_str_plain_SCT_get0_signature;
extern PyObject *const_str_plain_SSL_CTX_set_ecdh_auto;
static PyObject *const_str_digest_89c6e3f07e56ca3212435467944ee8af;
static PyObject *const_str_plain_Cryptography_HAS_CIPHER_DETAILS;
static PyObject *const_list_f501d0e9bfb78a701032fc968ff559f6_list;
static PyObject *const_str_plain_Cryptography_HAS_X448;
static PyObject *const_str_plain_TLS_ST_BEFORE;
static PyObject *const_list_str_plain_Cryptography_CRYPTO_set_mem_functions_list;
static PyObject *const_str_plain_SSL_get0_param;
extern PyObject *const_str_digest_f2f56e52e9bead94215489df18f9e023;
static PyObject *const_str_plain_EC_POINT_set_affine_coordinates_GF2m;
static PyObject *const_str_plain_SCT_set_version;
static PyObject *const_list_str_plain_EC_curve_nid2nist_list;
static PyObject *const_str_plain_cryptography_has_set_cert_cb;
static PyObject *const_str_plain_SSL_get_current_expansion;
extern PyObject *const_str_plain_Cryptography_HAS_SCRYPT;
extern PyObject *const_str_plain_EVP_DigestVerify;
static PyObject *const_list_531063e0f807f77ec21047a47441d048_list;
extern PyObject *const_str_plain_Cryptography_add_osrandom_engine;
static PyObject *const_str_plain_SSL_SESSION_get_max_early_data;
static PyObject *const_str_plain_X509_CHECK_FLAG_NO_WILDCARDS;
extern PyObject *const_str_plain_NID_ED448;
static PyObject *const_str_plain_cryptography_has_x448;
static PyObject *const_list_str_plain_OPENSSL_cleanup_list;
static PyObject *const_str_plain_DTLS_client_method;
static PyObject *const_str_plain_X509_STORE_set_get_issuer;
static PyObject *const_str_plain_SSL_read_early_data;
static PyObject *const_str_plain_cryptography_has_verified_chain;
static PyObject *const_str_plain_SCT_new;
extern PyObject *const_str_plain_EVP_R_MEMORY_LIMIT_EXCEEDED;
extern PyObject *const_str_plain_Cryptography_HAS_EC2M;
static PyObject *const_str_plain_Cryptography_HAS_ED25519;
static PyObject *const_list_str_plain_EVP_PKEY_CTX_set0_rsa_oaep_label_list;
static PyObject *const_str_plain_SSL_CIPHER_is_aead;
static PyObject *const_str_plain_SSL_CTX_set1_sigalgs_list;
static PyObject *const_str_plain_SSL_CTX_set_ciphersuites;
static PyObject *const_str_plain_SSL_CIPHER_get_cipher_nid;
extern PyObject *const_str_plain_SSLv3_method;
static PyObject *const_str_plain_SSL_get_server_tmp_key;
static PyObject *const_str_plain_SSL_ST_RENEGOTIATE;
static PyObject *const_str_plain_cryptography_has_ssl3_method;
static PyObject *const_str_plain_DTLS_method;
static PyObject *const_str_plain_cryptography_has_generic_dtls_method;
extern PyObject *const_str_plain_SCT_get0_log_id;
static PyObject *const_str_digest_96e83fdb049b186bfc982a4b37cdf168;
static PyObject *const_list_8cf6be4317fa4d6df8e3c06784c94792_list;
static PyObject *const_str_plain_cryptography_has_ec2m;
extern PyObject *const_str_plain_EVP_PKEY_X448;
extern PyObject *const_str_plain_SSL_CTX_set_alpn_protos;
extern PyObject *const_str_plain_SSL_OP_NO_TLSv1_3;
static PyObject *const_str_digest_8f29b4e065ff2a78b40f0f2a8209f3b9;
static PyObject *const_str_plain_X509_V_FLAG_SUITEB_128_LOS_ONLY;
static PyObject *const_str_plain_cryptography_has_evp_pkey_dhx;
static PyObject *const_str_plain_SCT_set_log_entry_type;
extern PyObject *const_str_plain_NID_ED25519;
static PyObject *const_str_plain_X509_VERIFY_PARAM_set1_ip;
static PyObject *const_str_plain_cryptography_has_locking_callbacks;
static PyObject *const_str_plain_cryptography_has_rsa_oaep_md;
static PyObject *const_str_plain_Cryptography_HAS_EC_1_0_2;
static PyObject *const_str_plain_SSL_ST_BEFORE;
static PyObject *const_str_plain_Cryptography_HAS_TLSv1_3;
static PyObject *const_str_plain_Cryptography_HAS_SET_CERT_CB;
static PyObject *const_str_plain_sk_SCT_new_null;
extern PyObject *const_str_plain_NID_poly1305;
extern PyObject *const_str_plain_ENGINE_free;
static PyObject *const_list_str_plain_NID_ED25519_str_plain_EVP_PKEY_ED25519_list;
extern PyObject *const_str_plain_EVP_PKEY_get_raw_public_key;
static PyObject *const_str_plain_X509_V_FLAG_PARTIAL_CHAIN;
static PyObject *const_str_digest_d2c4bd506cf66a4d1c7adfe4f312872c;
extern PyObject *const_str_plain_EVP_DigestSign;
extern PyObject *const_str_plain_Cryptography_HAS_ENGINE;
static PyObject *const_list_99d2a9f3afa4bd958ff3177b2faaca12_list;
extern PyObject *const_str_plain_ENGINE_set_default_RAND;
static PyObject *const_str_plain_cryptography_has_ed448;
static PyObject *const_str_plain_X509_VERIFY_PARAM_set1_host;
extern PyObject *const_str_plain_SSL_CTX_set_alpn_select_cb;
extern PyObject *const_str_plain_SSL_get0_verified_chain;
static PyObject *const_str_plain_SSL_verify_client_post_handshake;
static PyObject *const_str_plain_X509_CHECK_FLAG_ALWAYS_CHECK_SUBJECT;
static PyObject *const_str_plain_X509_V_ERR_SUITE_B_INVALID_CURVE;
static PyObject *const_str_plain_FIPS_mode_set;
static PyObject *const_str_plain_SSL_CTX_set_psk_server_callback;
extern PyObject *const_str_plain_ENGINE_unregister_RAND;
static PyObject *const_str_plain_Cryptography_HAS_VERIFIED_CHAIN;
static PyObject *const_str_plain_Cryptography_HAS_SET_ECDH_AUTO;
static PyObject *const_str_plain_cryptography_has_scrypt;
static PyObject *const_str_plain_DTLS_set_link_mtu;
static PyObject *const_str_plain_sk_SCT_push;
static PyObject *const_str_plain_cryptography_has_mem_functions;
static PyObject *const_str_plain_SSL_CTX_set_cert_cb;
extern PyObject *const_str_plain_ENGINE_get_default_RAND;
static PyObject *const_str_plain_Cryptography_HAS_RAW_KEY;
static PyObject *const_str_plain_X509_V_ERR_SUITE_B_INVALID_ALGORITHM;
static PyObject *const_str_plain_EC_curve_nid2nist;
static PyObject *const_str_plain_X509_VERIFY_PARAM_set1_email;
static PyObject *const_str_plain_cryptography_has_ssl_st;
static PyObject *const_str_plain_Cryptography_HAS_SSL3_METHOD;
static PyObject *const_str_plain_X509_VERIFY_PARAM_set1_ip_asc;
static PyObject *const_str_plain_cryptography_has_ec_1_0_2;
static PyObject *const_str_plain_Cryptography_HAS_GENERIC_DTLS_METHOD;
extern PyObject *const_str_plain_Cryptography_HAS_POLY1305;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_plain_X509_V_FLAG_SUITEB_128_LOS;
static PyObject *const_str_plain_cryptography_has_compression;
static PyObject *const_list_str_plain_Cryptography_setup_ssl_threads_list;
extern PyObject *const_str_plain_EVP_PKEY_DHX;
static PyObject *const_list_69b906847d25decb1cda42670e7e5241_list;
static PyObject *const_str_digest_b2405d2434f1275e2b8933b43c529fbe;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_Cryptography_HAS_EVP_DIGESTFINAL_XOF;
static PyObject *const_str_digest_38eba4904dfc59e8c0458109674fe900;
extern PyObject *const_str_plain_ENGINE_finish;
static PyObject *const_str_plain_SSL_write_early_data;
static PyObject *const_str_plain_cryptography_has_engine;
static PyObject *const_list_str_plain_X509_V_FLAG_PARTIAL_CHAIN_list;
static PyObject *const_str_plain_Cryptography_HAS_SCT;
static PyObject *const_list_str_plain_EVP_PKEY_CTX_set_rsa_oaep_md_list;
static PyObject *const_list_136332fc21a01754e44f9a06545f3713_list;
static PyObject *const_str_plain_cryptography_has_openssl_cleanup;
static PyObject *const_str_plain_OPENSSL_cleanup;
static PyObject *const_str_digest_8535fc31daf81b5f04208070d851f01e;
extern PyObject *const_str_plain_SCT_get_version;
extern PyObject *const_str_plain_EVP_PKEY_get1_tls_encodedpoint;
static PyObject *const_str_plain_Cryptography_HAS_COMPRESSION;
static PyObject *const_list_str_plain_EVP_DigestFinalXOF_list;
static PyObject *const_str_digest_08906fb95f8ef4a836f252aa7b12b1cf;
static PyObject *const_str_plain_Cryptography_HAS_MEM_FUNCTIONS;
static PyObject *const_str_plain_SSL_OP_NO_DTLSv1_2;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_EVP_PKEY_new_raw_public_key;
extern PyObject *const_str_plain_Cryptography_HAS_EVP_PKEY_DHX;
extern PyObject *const_str_plain_sk_SCT_num;
static PyObject *const_list_29407ac2cfa5bacd5103ba17ced806aa_list;
static PyObject *const_str_plain_X509_CHECK_FLAG_SINGLE_LABEL_SUBDOMAINS;
extern PyObject *const_str_plain_EC_POINT_get_affine_coordinates_GF2m;
static PyObject *const_str_plain_X509_V_FLAG_SUITEB_192_LOS;
static PyObject *const_str_plain_DTLS_server_method;
static PyObject *const_str_plain_cryptography_has_sct;
static PyObject *const_list_d0eb343c74fa9d778f192626e2b9d53e_list;
static PyObject *const_str_digest_b532ee08e2c9464270b0cf4cd8c73f33;
static PyObject *const_str_plain_cryptography_has_set_ecdh_auto;
static PyObject *const_str_plain_cryptography_has_alpn;
extern PyObject *const_str_plain_Cryptography_setup_ssl_threads;
extern PyObject *const_str_plain_SCT_get_log_entry_type;
static PyObject *const_str_plain_cryptography_has_x25519;
extern PyObject *const_str_plain_SCT_get_timestamp;
extern PyObject *const_str_plain_ENGINE_by_id;
static PyObject *const_str_plain_SSL_CTX_add_server_custom_ext;
static PyObject *const_list_str_plain_FIPS_mode_set_str_plain_FIPS_mode_list;
static PyObject *const_list_str_plain_EVP_PBE_scrypt_list;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_ENGINE_ctrl_cmd;
static PyObject *const_str_plain_SSL_CIPHER_get_digest_nid;
extern PyObject *const_str_plain_SCT_LIST_free;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_Cryptography_HAS_CUSTOM_EXT = UNSTREAM_STRING( &constant_bin[ 667009 ], 27, 1 );
    const_str_plain_Cryptography_HAS_OPENSSL_CLEANUP = UNSTREAM_STRING( &constant_bin[ 667036 ], 32, 1 );
    const_str_plain_Cryptography_CRYPTO_set_mem_functions = UNSTREAM_STRING( &constant_bin[ 667068 ], 37, 1 );
    const_str_plain_TLS_ST_OK = UNSTREAM_STRING( &constant_bin[ 667105 ], 9, 1 );
    const_str_plain_cryptography_has_raw_key = UNSTREAM_STRING( &constant_bin[ 667114 ], 24, 1 );
    const_str_plain_Cryptography_HAS_GET_SERVER_TMP_KEY = UNSTREAM_STRING( &constant_bin[ 667138 ], 35, 1 );
    const_list_2b0156be132bced5637961a9aa48cb51_list = PyList_New( 2 );
    const_str_plain_X509_STORE_get_get_issuer = UNSTREAM_STRING( &constant_bin[ 667173 ], 25, 1 );
    PyList_SET_ITEM( const_list_2b0156be132bced5637961a9aa48cb51_list, 0, const_str_plain_X509_STORE_get_get_issuer ); Py_INCREF( const_str_plain_X509_STORE_get_get_issuer );
    const_str_plain_X509_STORE_set_get_issuer = UNSTREAM_STRING( &constant_bin[ 667198 ], 25, 1 );
    PyList_SET_ITEM( const_list_2b0156be132bced5637961a9aa48cb51_list, 1, const_str_plain_X509_STORE_set_get_issuer ); Py_INCREF( const_str_plain_X509_STORE_set_get_issuer );
    const_list_str_plain_SSL_CTX_set_cert_cb_str_plain_SSL_set_cert_cb_list = PyList_New( 2 );
    const_str_plain_SSL_CTX_set_cert_cb = UNSTREAM_STRING( &constant_bin[ 667223 ], 19, 1 );
    PyList_SET_ITEM( const_list_str_plain_SSL_CTX_set_cert_cb_str_plain_SSL_set_cert_cb_list, 0, const_str_plain_SSL_CTX_set_cert_cb ); Py_INCREF( const_str_plain_SSL_CTX_set_cert_cb );
    const_str_plain_SSL_set_cert_cb = UNSTREAM_STRING( &constant_bin[ 667242 ], 15, 1 );
    PyList_SET_ITEM( const_list_str_plain_SSL_CTX_set_cert_cb_str_plain_SSL_set_cert_cb_list, 1, const_str_plain_SSL_set_cert_cb ); Py_INCREF( const_str_plain_SSL_set_cert_cb );
    const_str_plain_cryptography_has_psk = UNSTREAM_STRING( &constant_bin[ 667257 ], 20, 1 );
    const_str_plain_SSLv3_client_method = UNSTREAM_STRING( &constant_bin[ 667277 ], 19, 1 );
    const_str_plain_cryptography_has_102_verification_params = UNSTREAM_STRING( &constant_bin[ 667296 ], 40, 1 );
    const_str_plain_FIPS_mode = UNSTREAM_STRING( &constant_bin[ 667336 ], 9, 1 );
    const_str_digest_5ebdc304a856f17bec9566811cc3653b = UNSTREAM_STRING( &constant_bin[ 667345 ], 44, 1 );
    const_str_plain_cryptography_has_poly1305 = UNSTREAM_STRING( &constant_bin[ 667389 ], 25, 1 );
    const_str_plain_X509_V_ERR_SUITE_B_INVALID_VERSION = UNSTREAM_STRING( &constant_bin[ 667414 ], 34, 1 );
    const_str_digest_2fcc949fb99081eda00ddcfc8aa01f9a = UNSTREAM_STRING( &constant_bin[ 667448 ], 45, 1 );
    const_list_str_plain_EVP_PKEY_DHX_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_EVP_PKEY_DHX_list, 0, const_str_plain_EVP_PKEY_DHX ); Py_INCREF( const_str_plain_EVP_PKEY_DHX );
    const_str_plain_SCT_set_source = UNSTREAM_STRING( &constant_bin[ 667493 ], 14, 1 );
    const_str_plain_cryptography_has_110_verification_params = UNSTREAM_STRING( &constant_bin[ 667507 ], 40, 1 );
    const_str_plain_X509_VERIFY_PARAM_set_hostflags = UNSTREAM_STRING( &constant_bin[ 667547 ], 31, 1 );
    const_str_digest_0134e31627bb74f9df2edcd82a96ece3 = UNSTREAM_STRING( &constant_bin[ 667578 ], 45, 1 );
    const_str_plain_ENGINE_get_name = UNSTREAM_STRING( &constant_bin[ 667623 ], 15, 1 );
    const_str_plain_cryptography_has_fips = UNSTREAM_STRING( &constant_bin[ 667638 ], 21, 1 );
    const_list_str_plain_X509_CHECK_FLAG_NEVER_CHECK_SUBJECT_list = PyList_New( 1 );
    const_str_plain_X509_CHECK_FLAG_NEVER_CHECK_SUBJECT = UNSTREAM_STRING( &constant_bin[ 667659 ], 35, 1 );
    PyList_SET_ITEM( const_list_str_plain_X509_CHECK_FLAG_NEVER_CHECK_SUBJECT_list, 0, const_str_plain_X509_CHECK_FLAG_NEVER_CHECK_SUBJECT ); Py_INCREF( const_str_plain_X509_CHECK_FLAG_NEVER_CHECK_SUBJECT );
    const_str_digest_5e36ac0615fb0e6445b1e014cca7bd54 = UNSTREAM_STRING( &constant_bin[ 667694 ], 47, 1 );
    const_str_plain_Cryptography_HAS_ED448 = UNSTREAM_STRING( &constant_bin[ 667741 ], 22, 1 );
    const_str_plain_Cryptography_HAS_PSK = UNSTREAM_STRING( &constant_bin[ 667763 ], 20, 1 );
    const_list_str_plain_RSA_R_PKCS_DECODING_ERROR_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_RSA_R_PKCS_DECODING_ERROR_list, 0, const_str_plain_RSA_R_PKCS_DECODING_ERROR ); Py_INCREF( const_str_plain_RSA_R_PKCS_DECODING_ERROR );
    const_str_plain_cryptography_has_cipher_details = UNSTREAM_STRING( &constant_bin[ 667783 ], 31, 1 );
    const_str_plain_SSL_CTX_use_psk_identity_hint = UNSTREAM_STRING( &constant_bin[ 667814 ], 29, 1 );
    const_list_str_plain_EVP_PKEY_ED448_str_plain_NID_ED448_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_EVP_PKEY_ED448_str_plain_NID_ED448_list, 0, const_str_plain_EVP_PKEY_ED448 ); Py_INCREF( const_str_plain_EVP_PKEY_ED448 );
    PyList_SET_ITEM( const_list_str_plain_EVP_PKEY_ED448_str_plain_NID_ED448_list, 1, const_str_plain_NID_ED448 ); Py_INCREF( const_str_plain_NID_ED448 );
    const_str_plain_Cryptography_HAS_TLS_ST = UNSTREAM_STRING( &constant_bin[ 667843 ], 23, 1 );
    const_list_str_plain_X509_V_FLAG_TRUSTED_FIRST_list = PyList_New( 1 );
    const_str_plain_X509_V_FLAG_TRUSTED_FIRST = UNSTREAM_STRING( &constant_bin[ 667866 ], 25, 1 );
    PyList_SET_ITEM( const_list_str_plain_X509_V_FLAG_TRUSTED_FIRST_list, 0, const_str_plain_X509_V_FLAG_TRUSTED_FIRST ); Py_INCREF( const_str_plain_X509_V_FLAG_TRUSTED_FIRST );
    const_str_plain_cryptography_has_tlsv13 = UNSTREAM_STRING( &constant_bin[ 667891 ], 23, 1 );
    const_str_plain_X509_V_ERR_SUITE_B_LOS_NOT_ALLOWED = UNSTREAM_STRING( &constant_bin[ 667914 ], 34, 1 );
    const_str_plain_SSL_ST_OK = UNSTREAM_STRING( &constant_bin[ 667948 ], 9, 1 );
    const_list_8637a8e096edeccc96cf2940262bfd01_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_8637a8e096edeccc96cf2940262bfd01_list, 0, const_str_plain_EVP_PKEY_new_raw_private_key ); Py_INCREF( const_str_plain_EVP_PKEY_new_raw_private_key );
    PyList_SET_ITEM( const_list_8637a8e096edeccc96cf2940262bfd01_list, 1, const_str_plain_EVP_PKEY_new_raw_public_key ); Py_INCREF( const_str_plain_EVP_PKEY_new_raw_public_key );
    PyList_SET_ITEM( const_list_8637a8e096edeccc96cf2940262bfd01_list, 2, const_str_plain_EVP_PKEY_get_raw_private_key ); Py_INCREF( const_str_plain_EVP_PKEY_get_raw_private_key );
    PyList_SET_ITEM( const_list_8637a8e096edeccc96cf2940262bfd01_list, 3, const_str_plain_EVP_PKEY_get_raw_public_key ); Py_INCREF( const_str_plain_EVP_PKEY_get_raw_public_key );
    const_str_plain_SSL_set_post_handshake_auth = UNSTREAM_STRING( &constant_bin[ 667957 ], 27, 1 );
    const_list_86c40a5c21cefd9f6af8769ff1175caf_list = PyList_New( 9 );
    PyList_SET_ITEM( const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 0, const_str_plain_X509_V_ERR_SUITE_B_INVALID_VERSION ); Py_INCREF( const_str_plain_X509_V_ERR_SUITE_B_INVALID_VERSION );
    const_str_plain_X509_V_ERR_SUITE_B_INVALID_ALGORITHM = UNSTREAM_STRING( &constant_bin[ 667984 ], 36, 1 );
    PyList_SET_ITEM( const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 1, const_str_plain_X509_V_ERR_SUITE_B_INVALID_ALGORITHM ); Py_INCREF( const_str_plain_X509_V_ERR_SUITE_B_INVALID_ALGORITHM );
    const_str_plain_X509_V_ERR_SUITE_B_INVALID_CURVE = UNSTREAM_STRING( &constant_bin[ 668020 ], 32, 1 );
    PyList_SET_ITEM( const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 2, const_str_plain_X509_V_ERR_SUITE_B_INVALID_CURVE ); Py_INCREF( const_str_plain_X509_V_ERR_SUITE_B_INVALID_CURVE );
    const_str_digest_4492d7ee374a0b9e687cf99e3c6facc1 = UNSTREAM_STRING( &constant_bin[ 668052 ], 46, 1 );
    PyList_SET_ITEM( const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 3, const_str_digest_4492d7ee374a0b9e687cf99e3c6facc1 ); Py_INCREF( const_str_digest_4492d7ee374a0b9e687cf99e3c6facc1 );
    PyList_SET_ITEM( const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 4, const_str_plain_X509_V_ERR_SUITE_B_LOS_NOT_ALLOWED ); Py_INCREF( const_str_plain_X509_V_ERR_SUITE_B_LOS_NOT_ALLOWED );
    const_str_digest_05e8c3e45ca4a8d1991048b3b057a830 = UNSTREAM_STRING( &constant_bin[ 668098 ], 47, 1 );
    PyList_SET_ITEM( const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 5, const_str_digest_05e8c3e45ca4a8d1991048b3b057a830 ); Py_INCREF( const_str_digest_05e8c3e45ca4a8d1991048b3b057a830 );
    const_str_plain_X509_V_ERR_HOSTNAME_MISMATCH = UNSTREAM_STRING( &constant_bin[ 668145 ], 28, 1 );
    PyList_SET_ITEM( const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 6, const_str_plain_X509_V_ERR_HOSTNAME_MISMATCH ); Py_INCREF( const_str_plain_X509_V_ERR_HOSTNAME_MISMATCH );
    const_str_plain_X509_V_ERR_EMAIL_MISMATCH = UNSTREAM_STRING( &constant_bin[ 668173 ], 25, 1 );
    PyList_SET_ITEM( const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 7, const_str_plain_X509_V_ERR_EMAIL_MISMATCH ); Py_INCREF( const_str_plain_X509_V_ERR_EMAIL_MISMATCH );
    const_str_plain_X509_V_ERR_IP_ADDRESS_MISMATCH = UNSTREAM_STRING( &constant_bin[ 668198 ], 30, 1 );
    PyList_SET_ITEM( const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 8, const_str_plain_X509_V_ERR_IP_ADDRESS_MISMATCH ); Py_INCREF( const_str_plain_X509_V_ERR_IP_ADDRESS_MISMATCH );
    const_str_plain_DTLS_get_link_min_mtu = UNSTREAM_STRING( &constant_bin[ 668228 ], 21, 1 );
    const_str_plain_SSL_CTX_set_psk_client_callback = UNSTREAM_STRING( &constant_bin[ 668249 ], 31, 1 );
    const_str_plain_Cryptography_HAS_102_VERIFICATION_PARAMS = UNSTREAM_STRING( &constant_bin[ 668280 ], 40, 1 );
    const_str_plain_Cryptography_HAS_SIGALGS = UNSTREAM_STRING( &constant_bin[ 668320 ], 24, 1 );
    const_str_plain_SSL_CTX_add_client_custom_ext = UNSTREAM_STRING( &constant_bin[ 668344 ], 29, 1 );
    const_str_plain_cryptography_has_ed25519 = UNSTREAM_STRING( &constant_bin[ 668373 ], 24, 1 );
    const_str_plain_SSL_OP_NO_DTLSv1 = UNSTREAM_STRING( &constant_bin[ 668397 ], 16, 1 );
    const_str_plain_SSL_extension_supported = UNSTREAM_STRING( &constant_bin[ 668413 ], 23, 1 );
    const_str_plain_Cryptography_HAS_110_VERIFICATION_PARAMS = UNSTREAM_STRING( &constant_bin[ 668436 ], 40, 1 );
    const_list_str_plain_EVP_PKEY_X448_str_plain_NID_X448_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_EVP_PKEY_X448_str_plain_NID_X448_list, 0, const_str_plain_EVP_PKEY_X448 ); Py_INCREF( const_str_plain_EVP_PKEY_X448 );
    PyList_SET_ITEM( const_list_str_plain_EVP_PKEY_X448_str_plain_NID_X448_list, 1, const_str_plain_NID_X448 ); Py_INCREF( const_str_plain_NID_X448 );
    const_str_plain_cryptography_has_rsa_oaep_label = UNSTREAM_STRING( &constant_bin[ 668476 ], 31, 1 );
    const_str_plain_SSL_get_current_compression = UNSTREAM_STRING( &constant_bin[ 668507 ], 27, 1 );
    const_list_str_plain_SSL_get_server_tmp_key_list = PyList_New( 1 );
    const_str_plain_SSL_get_server_tmp_key = UNSTREAM_STRING( &constant_bin[ 668534 ], 22, 1 );
    PyList_SET_ITEM( const_list_str_plain_SSL_get_server_tmp_key_list, 0, const_str_plain_SSL_get_server_tmp_key ); Py_INCREF( const_str_plain_SSL_get_server_tmp_key );
    const_list_str_plain_EVP_PKEY_X25519_str_plain_NID_X25519_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_EVP_PKEY_X25519_str_plain_NID_X25519_list, 0, const_str_plain_EVP_PKEY_X25519 ); Py_INCREF( const_str_plain_EVP_PKEY_X25519 );
    PyList_SET_ITEM( const_list_str_plain_EVP_PKEY_X25519_str_plain_NID_X25519_list, 1, const_str_plain_NID_X25519 ); Py_INCREF( const_str_plain_NID_X25519 );
    const_str_plain_EVP_PKEY_POLY1305 = UNSTREAM_STRING( &constant_bin[ 668556 ], 17, 1 );
    const_str_digest_fafbfe30544ba42854ed0b86baac5f84 = UNSTREAM_STRING( &constant_bin[ 668573 ], 58, 0 );
    const_str_plain_SSL_get_sigalgs = UNSTREAM_STRING( &constant_bin[ 668631 ], 15, 1 );
    const_str_plain_SCT_set1_log_id = UNSTREAM_STRING( &constant_bin[ 668646 ], 15, 1 );
    const_list_str_plain_EVP_R_MEMORY_LIMIT_EXCEEDED_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_EVP_R_MEMORY_LIMIT_EXCEEDED_list, 0, const_str_plain_EVP_R_MEMORY_LIMIT_EXCEEDED ); Py_INCREF( const_str_plain_EVP_R_MEMORY_LIMIT_EXCEEDED );
    const_str_plain_X509_CHECK_FLAG_NO_PARTIAL_WILDCARDS = UNSTREAM_STRING( &constant_bin[ 668661 ], 36, 1 );
    const_str_plain_SSL_ST_INIT = UNSTREAM_STRING( &constant_bin[ 668697 ], 11, 1 );
    const_str_plain_SSL_CIPHER_get_kx_nid = UNSTREAM_STRING( &constant_bin[ 668708 ], 21, 1 );
    const_str_plain_SSL_VERIFY_POST_HANDSHAKE = UNSTREAM_STRING( &constant_bin[ 668729 ], 25, 1 );
    const_str_plain_SSL_CTX_set_max_early_data = UNSTREAM_STRING( &constant_bin[ 668754 ], 26, 1 );
    const_str_plain_cryptography_has_evp_digestfinal_xof = UNSTREAM_STRING( &constant_bin[ 668780 ], 36, 1 );
    const_str_digest_0a25da58d8b65f965de99956a1b5aad7 = UNSTREAM_STRING( &constant_bin[ 668816 ], 42, 1 );
    const_str_plain_cryptography_has_custom_ext = UNSTREAM_STRING( &constant_bin[ 668858 ], 27, 1 );
    const_str_digest_9a0160a95e0c209c6b7e5d38666a9d6e = UNSTREAM_STRING( &constant_bin[ 668885 ], 52, 0 );
    const_str_plain_SSL_CIPHER_get_auth_nid = UNSTREAM_STRING( &constant_bin[ 668937 ], 23, 1 );
    const_str_plain_X509_CHECK_FLAG_MULTI_LABEL_WILDCARDS = UNSTREAM_STRING( &constant_bin[ 668960 ], 37, 1 );
    const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list = PyList_New( 14 );
    const_str_plain_X509_V_FLAG_SUITEB_128_LOS_ONLY = UNSTREAM_STRING( &constant_bin[ 668997 ], 31, 1 );
    PyList_SET_ITEM( const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 0, const_str_plain_X509_V_FLAG_SUITEB_128_LOS_ONLY ); Py_INCREF( const_str_plain_X509_V_FLAG_SUITEB_128_LOS_ONLY );
    const_str_plain_X509_V_FLAG_SUITEB_192_LOS = UNSTREAM_STRING( &constant_bin[ 669028 ], 26, 1 );
    PyList_SET_ITEM( const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 1, const_str_plain_X509_V_FLAG_SUITEB_192_LOS ); Py_INCREF( const_str_plain_X509_V_FLAG_SUITEB_192_LOS );
    const_str_plain_X509_V_FLAG_SUITEB_128_LOS = UNSTREAM_STRING( &constant_bin[ 668997 ], 26, 1 );
    PyList_SET_ITEM( const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 2, const_str_plain_X509_V_FLAG_SUITEB_128_LOS ); Py_INCREF( const_str_plain_X509_V_FLAG_SUITEB_128_LOS );
    const_str_plain_X509_VERIFY_PARAM_set1_host = UNSTREAM_STRING( &constant_bin[ 669054 ], 27, 1 );
    PyList_SET_ITEM( const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 3, const_str_plain_X509_VERIFY_PARAM_set1_host ); Py_INCREF( const_str_plain_X509_VERIFY_PARAM_set1_host );
    const_str_plain_X509_VERIFY_PARAM_set1_email = UNSTREAM_STRING( &constant_bin[ 669081 ], 28, 1 );
    PyList_SET_ITEM( const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 4, const_str_plain_X509_VERIFY_PARAM_set1_email ); Py_INCREF( const_str_plain_X509_VERIFY_PARAM_set1_email );
    const_str_plain_X509_VERIFY_PARAM_set1_ip = UNSTREAM_STRING( &constant_bin[ 669109 ], 25, 1 );
    PyList_SET_ITEM( const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 5, const_str_plain_X509_VERIFY_PARAM_set1_ip ); Py_INCREF( const_str_plain_X509_VERIFY_PARAM_set1_ip );
    const_str_plain_X509_VERIFY_PARAM_set1_ip_asc = UNSTREAM_STRING( &constant_bin[ 669134 ], 29, 1 );
    PyList_SET_ITEM( const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 6, const_str_plain_X509_VERIFY_PARAM_set1_ip_asc ); Py_INCREF( const_str_plain_X509_VERIFY_PARAM_set1_ip_asc );
    PyList_SET_ITEM( const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 7, const_str_plain_X509_VERIFY_PARAM_set_hostflags ); Py_INCREF( const_str_plain_X509_VERIFY_PARAM_set_hostflags );
    const_str_plain_SSL_get0_param = UNSTREAM_STRING( &constant_bin[ 669163 ], 14, 1 );
    PyList_SET_ITEM( const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 8, const_str_plain_SSL_get0_param ); Py_INCREF( const_str_plain_SSL_get0_param );
    const_str_plain_X509_CHECK_FLAG_ALWAYS_CHECK_SUBJECT = UNSTREAM_STRING( &constant_bin[ 669177 ], 36, 1 );
    PyList_SET_ITEM( const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 9, const_str_plain_X509_CHECK_FLAG_ALWAYS_CHECK_SUBJECT ); Py_INCREF( const_str_plain_X509_CHECK_FLAG_ALWAYS_CHECK_SUBJECT );
    const_str_plain_X509_CHECK_FLAG_NO_WILDCARDS = UNSTREAM_STRING( &constant_bin[ 669213 ], 28, 1 );
    PyList_SET_ITEM( const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 10, const_str_plain_X509_CHECK_FLAG_NO_WILDCARDS ); Py_INCREF( const_str_plain_X509_CHECK_FLAG_NO_WILDCARDS );
    PyList_SET_ITEM( const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 11, const_str_plain_X509_CHECK_FLAG_NO_PARTIAL_WILDCARDS ); Py_INCREF( const_str_plain_X509_CHECK_FLAG_NO_PARTIAL_WILDCARDS );
    PyList_SET_ITEM( const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 12, const_str_plain_X509_CHECK_FLAG_MULTI_LABEL_WILDCARDS ); Py_INCREF( const_str_plain_X509_CHECK_FLAG_MULTI_LABEL_WILDCARDS );
    const_str_plain_X509_CHECK_FLAG_SINGLE_LABEL_SUBDOMAINS = UNSTREAM_STRING( &constant_bin[ 669241 ], 39, 1 );
    PyList_SET_ITEM( const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 13, const_str_plain_X509_CHECK_FLAG_SINGLE_LABEL_SUBDOMAINS ); Py_INCREF( const_str_plain_X509_CHECK_FLAG_SINGLE_LABEL_SUBDOMAINS );
    const_list_9cf036427baefafa3a18cbc2378aecdb_list = PyList_New( 10 );
    PyList_SET_ITEM( const_list_9cf036427baefafa3a18cbc2378aecdb_list, 0, const_str_plain_SSL_OP_NO_TLSv1_3 ); Py_INCREF( const_str_plain_SSL_OP_NO_TLSv1_3 );
    PyList_SET_ITEM( const_list_9cf036427baefafa3a18cbc2378aecdb_list, 1, const_str_plain_SSL_VERIFY_POST_HANDSHAKE ); Py_INCREF( const_str_plain_SSL_VERIFY_POST_HANDSHAKE );
    const_str_plain_SSL_CTX_set_ciphersuites = UNSTREAM_STRING( &constant_bin[ 669280 ], 24, 1 );
    PyList_SET_ITEM( const_list_9cf036427baefafa3a18cbc2378aecdb_list, 2, const_str_plain_SSL_CTX_set_ciphersuites ); Py_INCREF( const_str_plain_SSL_CTX_set_ciphersuites );
    const_str_plain_SSL_verify_client_post_handshake = UNSTREAM_STRING( &constant_bin[ 669304 ], 32, 1 );
    PyList_SET_ITEM( const_list_9cf036427baefafa3a18cbc2378aecdb_list, 3, const_str_plain_SSL_verify_client_post_handshake ); Py_INCREF( const_str_plain_SSL_verify_client_post_handshake );
    const_str_plain_SSL_CTX_set_post_handshake_auth = UNSTREAM_STRING( &constant_bin[ 669336 ], 31, 1 );
    PyList_SET_ITEM( const_list_9cf036427baefafa3a18cbc2378aecdb_list, 4, const_str_plain_SSL_CTX_set_post_handshake_auth ); Py_INCREF( const_str_plain_SSL_CTX_set_post_handshake_auth );
    PyList_SET_ITEM( const_list_9cf036427baefafa3a18cbc2378aecdb_list, 5, const_str_plain_SSL_set_post_handshake_auth ); Py_INCREF( const_str_plain_SSL_set_post_handshake_auth );
    const_str_plain_SSL_SESSION_get_max_early_data = UNSTREAM_STRING( &constant_bin[ 669367 ], 30, 1 );
    PyList_SET_ITEM( const_list_9cf036427baefafa3a18cbc2378aecdb_list, 6, const_str_plain_SSL_SESSION_get_max_early_data ); Py_INCREF( const_str_plain_SSL_SESSION_get_max_early_data );
    const_str_plain_SSL_write_early_data = UNSTREAM_STRING( &constant_bin[ 669397 ], 20, 1 );
    PyList_SET_ITEM( const_list_9cf036427baefafa3a18cbc2378aecdb_list, 7, const_str_plain_SSL_write_early_data ); Py_INCREF( const_str_plain_SSL_write_early_data );
    const_str_plain_SSL_read_early_data = UNSTREAM_STRING( &constant_bin[ 669417 ], 19, 1 );
    PyList_SET_ITEM( const_list_9cf036427baefafa3a18cbc2378aecdb_list, 8, const_str_plain_SSL_read_early_data ); Py_INCREF( const_str_plain_SSL_read_early_data );
    PyList_SET_ITEM( const_list_9cf036427baefafa3a18cbc2378aecdb_list, 9, const_str_plain_SSL_CTX_set_max_early_data ); Py_INCREF( const_str_plain_SSL_CTX_set_max_early_data );
    const_list_str_plain_NID_poly1305_str_plain_EVP_PKEY_POLY1305_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_NID_poly1305_str_plain_EVP_PKEY_POLY1305_list, 0, const_str_plain_NID_poly1305 ); Py_INCREF( const_str_plain_NID_poly1305 );
    PyList_SET_ITEM( const_list_str_plain_NID_poly1305_str_plain_EVP_PKEY_POLY1305_list, 1, const_str_plain_EVP_PKEY_POLY1305 ); Py_INCREF( const_str_plain_EVP_PKEY_POLY1305 );
    const_str_plain_cryptography_has_get_server_tmp_key = UNSTREAM_STRING( &constant_bin[ 669436 ], 35, 1 );
    const_str_plain_Cryptography_HAS_FIPS = UNSTREAM_STRING( &constant_bin[ 669471 ], 21, 1 );
    const_str_digest_c8d4ed7f56a6990e5028c35f4876f90c = UNSTREAM_STRING( &constant_bin[ 669492 ], 50, 1 );
    const_str_plain_SSLv3_server_method = UNSTREAM_STRING( &constant_bin[ 669542 ], 19, 1 );
    const_str_plain_Cryptography_HAS_SSL_ST = UNSTREAM_STRING( &constant_bin[ 669561 ], 23, 1 );
    const_list_03133653ae1f779dd1ae650a3a80ba30_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_03133653ae1f779dd1ae650a3a80ba30_list, 0, const_str_plain_SSL_CTX_add_client_custom_ext ); Py_INCREF( const_str_plain_SSL_CTX_add_client_custom_ext );
    const_str_plain_SSL_CTX_add_server_custom_ext = UNSTREAM_STRING( &constant_bin[ 669584 ], 29, 1 );
    PyList_SET_ITEM( const_list_03133653ae1f779dd1ae650a3a80ba30_list, 1, const_str_plain_SSL_CTX_add_server_custom_ext ); Py_INCREF( const_str_plain_SSL_CTX_add_server_custom_ext );
    PyList_SET_ITEM( const_list_03133653ae1f779dd1ae650a3a80ba30_list, 2, const_str_plain_SSL_extension_supported ); Py_INCREF( const_str_plain_SSL_extension_supported );
    const_list_70d66b11b8b83912e7ed175ae865dfed_list = PyList_New( 2 );
    const_str_plain_SSL_CTX_set1_sigalgs_list = UNSTREAM_STRING( &constant_bin[ 669613 ], 25, 1 );
    PyList_SET_ITEM( const_list_70d66b11b8b83912e7ed175ae865dfed_list, 0, const_str_plain_SSL_CTX_set1_sigalgs_list ); Py_INCREF( const_str_plain_SSL_CTX_set1_sigalgs_list );
    PyList_SET_ITEM( const_list_70d66b11b8b83912e7ed175ae865dfed_list, 1, const_str_plain_SSL_get_sigalgs ); Py_INCREF( const_str_plain_SSL_get_sigalgs );
    const_str_plain_EC_POINT_set_compressed_coordinates_GF2m = UNSTREAM_STRING( &constant_bin[ 669638 ], 40, 1 );
    const_list_a2ccfb1541ef6968650ac43562856e84_list = PyList_New( 7 );
    const_str_plain_DTLS_method = UNSTREAM_STRING( &constant_bin[ 669678 ], 11, 1 );
    PyList_SET_ITEM( const_list_a2ccfb1541ef6968650ac43562856e84_list, 0, const_str_plain_DTLS_method ); Py_INCREF( const_str_plain_DTLS_method );
    const_str_plain_DTLS_server_method = UNSTREAM_STRING( &constant_bin[ 669689 ], 18, 1 );
    PyList_SET_ITEM( const_list_a2ccfb1541ef6968650ac43562856e84_list, 1, const_str_plain_DTLS_server_method ); Py_INCREF( const_str_plain_DTLS_server_method );
    const_str_plain_DTLS_client_method = UNSTREAM_STRING( &constant_bin[ 669707 ], 18, 1 );
    PyList_SET_ITEM( const_list_a2ccfb1541ef6968650ac43562856e84_list, 2, const_str_plain_DTLS_client_method ); Py_INCREF( const_str_plain_DTLS_client_method );
    PyList_SET_ITEM( const_list_a2ccfb1541ef6968650ac43562856e84_list, 3, const_str_plain_SSL_OP_NO_DTLSv1 ); Py_INCREF( const_str_plain_SSL_OP_NO_DTLSv1 );
    const_str_plain_SSL_OP_NO_DTLSv1_2 = UNSTREAM_STRING( &constant_bin[ 669725 ], 18, 1 );
    PyList_SET_ITEM( const_list_a2ccfb1541ef6968650ac43562856e84_list, 4, const_str_plain_SSL_OP_NO_DTLSv1_2 ); Py_INCREF( const_str_plain_SSL_OP_NO_DTLSv1_2 );
    const_str_plain_DTLS_set_link_mtu = UNSTREAM_STRING( &constant_bin[ 669743 ], 17, 1 );
    PyList_SET_ITEM( const_list_a2ccfb1541ef6968650ac43562856e84_list, 5, const_str_plain_DTLS_set_link_mtu ); Py_INCREF( const_str_plain_DTLS_set_link_mtu );
    PyList_SET_ITEM( const_list_a2ccfb1541ef6968650ac43562856e84_list, 6, const_str_plain_DTLS_get_link_min_mtu ); Py_INCREF( const_str_plain_DTLS_get_link_min_mtu );
    const_str_plain_SSL_COMP_get_name = UNSTREAM_STRING( &constant_bin[ 669760 ], 17, 1 );
    const_str_plain_cryptography_has_ssl_sigalgs = UNSTREAM_STRING( &constant_bin[ 669777 ], 28, 1 );
    const_list_str_plain_TLS_ST_BEFORE_str_plain_TLS_ST_OK_list = PyList_New( 2 );
    const_str_plain_TLS_ST_BEFORE = UNSTREAM_STRING( &constant_bin[ 669805 ], 13, 1 );
    PyList_SET_ITEM( const_list_str_plain_TLS_ST_BEFORE_str_plain_TLS_ST_OK_list, 0, const_str_plain_TLS_ST_BEFORE ); Py_INCREF( const_str_plain_TLS_ST_BEFORE );
    PyList_SET_ITEM( const_list_str_plain_TLS_ST_BEFORE_str_plain_TLS_ST_OK_list, 1, const_str_plain_TLS_ST_OK ); Py_INCREF( const_str_plain_TLS_ST_OK );
    const_list_str_plain_EVP_DigestSign_str_plain_EVP_DigestVerify_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_EVP_DigestSign_str_plain_EVP_DigestVerify_list, 0, const_str_plain_EVP_DigestSign ); Py_INCREF( const_str_plain_EVP_DigestSign );
    PyList_SET_ITEM( const_list_str_plain_EVP_DigestSign_str_plain_EVP_DigestVerify_list, 1, const_str_plain_EVP_DigestVerify ); Py_INCREF( const_str_plain_EVP_DigestVerify );
    const_str_plain_Cryptography_HAS_X25519 = UNSTREAM_STRING( &constant_bin[ 669818 ], 23, 1 );
    const_list_str_plain_SSL_get0_verified_chain_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_SSL_get0_verified_chain_list, 0, const_str_plain_SSL_get0_verified_chain ); Py_INCREF( const_str_plain_SSL_get0_verified_chain );
    const_list_e5729eb47bb2bb77d896a48e0ba4a292_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_e5729eb47bb2bb77d896a48e0ba4a292_list, 0, const_str_plain_SSL_CTX_use_psk_identity_hint ); Py_INCREF( const_str_plain_SSL_CTX_use_psk_identity_hint );
    const_str_plain_SSL_CTX_set_psk_server_callback = UNSTREAM_STRING( &constant_bin[ 669841 ], 31, 1 );
    PyList_SET_ITEM( const_list_e5729eb47bb2bb77d896a48e0ba4a292_list, 1, const_str_plain_SSL_CTX_set_psk_server_callback ); Py_INCREF( const_str_plain_SSL_CTX_set_psk_server_callback );
    PyList_SET_ITEM( const_list_e5729eb47bb2bb77d896a48e0ba4a292_list, 2, const_str_plain_SSL_CTX_set_psk_client_callback ); Py_INCREF( const_str_plain_SSL_CTX_set_psk_client_callback );
    const_list_str_plain_SSL_CTX_set_ecdh_auto_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_SSL_CTX_set_ecdh_auto_list, 0, const_str_plain_SSL_CTX_set_ecdh_auto ); Py_INCREF( const_str_plain_SSL_CTX_set_ecdh_auto );
    const_str_plain_cryptography_has_tls_st = UNSTREAM_STRING( &constant_bin[ 669872 ], 23, 1 );
    const_list_a92b37e3fd97e57634d2e2c4f15929c2_list = PyList_New( 16 );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 0, const_str_plain_SCT_get_version ); Py_INCREF( const_str_plain_SCT_get_version );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 1, const_str_plain_SCT_get_log_entry_type ); Py_INCREF( const_str_plain_SCT_get_log_entry_type );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 2, const_str_plain_SCT_get0_log_id ); Py_INCREF( const_str_plain_SCT_get0_log_id );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 3, const_str_plain_SCT_get0_signature ); Py_INCREF( const_str_plain_SCT_get0_signature );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 4, const_str_plain_SCT_get_timestamp ); Py_INCREF( const_str_plain_SCT_get_timestamp );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 5, const_str_plain_SCT_set_source ); Py_INCREF( const_str_plain_SCT_set_source );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 6, const_str_plain_sk_SCT_num ); Py_INCREF( const_str_plain_sk_SCT_num );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 7, const_str_plain_sk_SCT_value ); Py_INCREF( const_str_plain_sk_SCT_value );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 8, const_str_plain_SCT_LIST_free ); Py_INCREF( const_str_plain_SCT_LIST_free );
    const_str_plain_sk_SCT_push = UNSTREAM_STRING( &constant_bin[ 669895 ], 11, 1 );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 9, const_str_plain_sk_SCT_push ); Py_INCREF( const_str_plain_sk_SCT_push );
    const_str_plain_sk_SCT_new_null = UNSTREAM_STRING( &constant_bin[ 669906 ], 15, 1 );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 10, const_str_plain_sk_SCT_new_null ); Py_INCREF( const_str_plain_sk_SCT_new_null );
    const_str_plain_SCT_new = UNSTREAM_STRING( &constant_bin[ 669909 ], 7, 1 );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 11, const_str_plain_SCT_new ); Py_INCREF( const_str_plain_SCT_new );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 12, const_str_plain_SCT_set1_log_id ); Py_INCREF( const_str_plain_SCT_set1_log_id );
    const_str_plain_SCT_set_timestamp = UNSTREAM_STRING( &constant_bin[ 669921 ], 17, 1 );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 13, const_str_plain_SCT_set_timestamp ); Py_INCREF( const_str_plain_SCT_set_timestamp );
    const_str_plain_SCT_set_version = UNSTREAM_STRING( &constant_bin[ 669938 ], 15, 1 );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 14, const_str_plain_SCT_set_version ); Py_INCREF( const_str_plain_SCT_set_version );
    const_str_plain_SCT_set_log_entry_type = UNSTREAM_STRING( &constant_bin[ 669953 ], 22, 1 );
    PyList_SET_ITEM( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 15, const_str_plain_SCT_set_log_entry_type ); Py_INCREF( const_str_plain_SCT_set_log_entry_type );
    const_str_digest_89c6e3f07e56ca3212435467944ee8af = UNSTREAM_STRING( &constant_bin[ 669975 ], 42, 1 );
    const_str_plain_Cryptography_HAS_CIPHER_DETAILS = UNSTREAM_STRING( &constant_bin[ 670017 ], 31, 1 );
    const_list_f501d0e9bfb78a701032fc968ff559f6_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_f501d0e9bfb78a701032fc968ff559f6_list, 0, const_str_plain_SSL_get_current_compression ); Py_INCREF( const_str_plain_SSL_get_current_compression );
    const_str_plain_SSL_get_current_expansion = UNSTREAM_STRING( &constant_bin[ 670048 ], 25, 1 );
    PyList_SET_ITEM( const_list_f501d0e9bfb78a701032fc968ff559f6_list, 1, const_str_plain_SSL_get_current_expansion ); Py_INCREF( const_str_plain_SSL_get_current_expansion );
    PyList_SET_ITEM( const_list_f501d0e9bfb78a701032fc968ff559f6_list, 2, const_str_plain_SSL_COMP_get_name ); Py_INCREF( const_str_plain_SSL_COMP_get_name );
    const_str_plain_Cryptography_HAS_X448 = UNSTREAM_STRING( &constant_bin[ 670073 ], 21, 1 );
    const_list_str_plain_Cryptography_CRYPTO_set_mem_functions_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_Cryptography_CRYPTO_set_mem_functions_list, 0, const_str_plain_Cryptography_CRYPTO_set_mem_functions ); Py_INCREF( const_str_plain_Cryptography_CRYPTO_set_mem_functions );
    const_str_plain_EC_POINT_set_affine_coordinates_GF2m = UNSTREAM_STRING( &constant_bin[ 670094 ], 36, 1 );
    const_list_str_plain_EC_curve_nid2nist_list = PyList_New( 1 );
    const_str_plain_EC_curve_nid2nist = UNSTREAM_STRING( &constant_bin[ 670130 ], 17, 1 );
    PyList_SET_ITEM( const_list_str_plain_EC_curve_nid2nist_list, 0, const_str_plain_EC_curve_nid2nist ); Py_INCREF( const_str_plain_EC_curve_nid2nist );
    const_str_plain_cryptography_has_set_cert_cb = UNSTREAM_STRING( &constant_bin[ 670147 ], 28, 1 );
    const_list_531063e0f807f77ec21047a47441d048_list = PyList_New( 5 );
    const_str_plain_SSL_CIPHER_is_aead = UNSTREAM_STRING( &constant_bin[ 670175 ], 18, 1 );
    PyList_SET_ITEM( const_list_531063e0f807f77ec21047a47441d048_list, 0, const_str_plain_SSL_CIPHER_is_aead ); Py_INCREF( const_str_plain_SSL_CIPHER_is_aead );
    const_str_plain_SSL_CIPHER_get_cipher_nid = UNSTREAM_STRING( &constant_bin[ 670193 ], 25, 1 );
    PyList_SET_ITEM( const_list_531063e0f807f77ec21047a47441d048_list, 1, const_str_plain_SSL_CIPHER_get_cipher_nid ); Py_INCREF( const_str_plain_SSL_CIPHER_get_cipher_nid );
    const_str_plain_SSL_CIPHER_get_digest_nid = UNSTREAM_STRING( &constant_bin[ 670218 ], 25, 1 );
    PyList_SET_ITEM( const_list_531063e0f807f77ec21047a47441d048_list, 2, const_str_plain_SSL_CIPHER_get_digest_nid ); Py_INCREF( const_str_plain_SSL_CIPHER_get_digest_nid );
    PyList_SET_ITEM( const_list_531063e0f807f77ec21047a47441d048_list, 3, const_str_plain_SSL_CIPHER_get_kx_nid ); Py_INCREF( const_str_plain_SSL_CIPHER_get_kx_nid );
    PyList_SET_ITEM( const_list_531063e0f807f77ec21047a47441d048_list, 4, const_str_plain_SSL_CIPHER_get_auth_nid ); Py_INCREF( const_str_plain_SSL_CIPHER_get_auth_nid );
    const_str_plain_cryptography_has_x448 = UNSTREAM_STRING( &constant_bin[ 670243 ], 21, 1 );
    const_list_str_plain_OPENSSL_cleanup_list = PyList_New( 1 );
    const_str_plain_OPENSSL_cleanup = UNSTREAM_STRING( &constant_bin[ 670264 ], 15, 1 );
    PyList_SET_ITEM( const_list_str_plain_OPENSSL_cleanup_list, 0, const_str_plain_OPENSSL_cleanup ); Py_INCREF( const_str_plain_OPENSSL_cleanup );
    const_str_plain_cryptography_has_verified_chain = UNSTREAM_STRING( &constant_bin[ 670279 ], 31, 1 );
    const_str_plain_Cryptography_HAS_ED25519 = UNSTREAM_STRING( &constant_bin[ 670310 ], 24, 1 );
    const_list_str_plain_EVP_PKEY_CTX_set0_rsa_oaep_label_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_EVP_PKEY_CTX_set0_rsa_oaep_label_list, 0, const_str_plain_EVP_PKEY_CTX_set0_rsa_oaep_label ); Py_INCREF( const_str_plain_EVP_PKEY_CTX_set0_rsa_oaep_label );
    const_str_plain_SSL_ST_RENEGOTIATE = UNSTREAM_STRING( &constant_bin[ 670334 ], 18, 1 );
    const_str_plain_cryptography_has_ssl3_method = UNSTREAM_STRING( &constant_bin[ 670352 ], 28, 1 );
    const_str_plain_cryptography_has_generic_dtls_method = UNSTREAM_STRING( &constant_bin[ 670380 ], 36, 1 );
    const_str_digest_96e83fdb049b186bfc982a4b37cdf168 = UNSTREAM_STRING( &constant_bin[ 670416 ], 42, 1 );
    const_list_8cf6be4317fa4d6df8e3c06784c94792_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_8cf6be4317fa4d6df8e3c06784c94792_list, 0, const_str_plain_EC_POINT_set_affine_coordinates_GF2m ); Py_INCREF( const_str_plain_EC_POINT_set_affine_coordinates_GF2m );
    PyList_SET_ITEM( const_list_8cf6be4317fa4d6df8e3c06784c94792_list, 1, const_str_plain_EC_POINT_get_affine_coordinates_GF2m ); Py_INCREF( const_str_plain_EC_POINT_get_affine_coordinates_GF2m );
    PyList_SET_ITEM( const_list_8cf6be4317fa4d6df8e3c06784c94792_list, 2, const_str_plain_EC_POINT_set_compressed_coordinates_GF2m ); Py_INCREF( const_str_plain_EC_POINT_set_compressed_coordinates_GF2m );
    const_str_plain_cryptography_has_ec2m = UNSTREAM_STRING( &constant_bin[ 670458 ], 21, 1 );
    const_str_digest_8f29b4e065ff2a78b40f0f2a8209f3b9 = UNSTREAM_STRING( &constant_bin[ 670479 ], 42, 1 );
    const_str_plain_cryptography_has_evp_pkey_dhx = UNSTREAM_STRING( &constant_bin[ 670521 ], 29, 1 );
    const_str_plain_cryptography_has_locking_callbacks = UNSTREAM_STRING( &constant_bin[ 670550 ], 34, 1 );
    const_str_plain_cryptography_has_rsa_oaep_md = UNSTREAM_STRING( &constant_bin[ 670584 ], 28, 1 );
    const_str_plain_Cryptography_HAS_EC_1_0_2 = UNSTREAM_STRING( &constant_bin[ 670612 ], 25, 1 );
    const_str_plain_SSL_ST_BEFORE = UNSTREAM_STRING( &constant_bin[ 670637 ], 13, 1 );
    const_str_plain_Cryptography_HAS_TLSv1_3 = UNSTREAM_STRING( &constant_bin[ 670650 ], 24, 1 );
    const_str_plain_Cryptography_HAS_SET_CERT_CB = UNSTREAM_STRING( &constant_bin[ 670674 ], 28, 1 );
    const_list_str_plain_NID_ED25519_str_plain_EVP_PKEY_ED25519_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_NID_ED25519_str_plain_EVP_PKEY_ED25519_list, 0, const_str_plain_NID_ED25519 ); Py_INCREF( const_str_plain_NID_ED25519 );
    PyList_SET_ITEM( const_list_str_plain_NID_ED25519_str_plain_EVP_PKEY_ED25519_list, 1, const_str_plain_EVP_PKEY_ED25519 ); Py_INCREF( const_str_plain_EVP_PKEY_ED25519 );
    const_str_plain_X509_V_FLAG_PARTIAL_CHAIN = UNSTREAM_STRING( &constant_bin[ 670433 ], 25, 1 );
    const_str_digest_d2c4bd506cf66a4d1c7adfe4f312872c = UNSTREAM_STRING( &constant_bin[ 670702 ], 42, 1 );
    const_list_99d2a9f3afa4bd958ff3177b2faaca12_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_99d2a9f3afa4bd958ff3177b2faaca12_list, 0, const_str_plain_SSLv3_method ); Py_INCREF( const_str_plain_SSLv3_method );
    PyList_SET_ITEM( const_list_99d2a9f3afa4bd958ff3177b2faaca12_list, 1, const_str_plain_SSLv3_client_method ); Py_INCREF( const_str_plain_SSLv3_client_method );
    PyList_SET_ITEM( const_list_99d2a9f3afa4bd958ff3177b2faaca12_list, 2, const_str_plain_SSLv3_server_method ); Py_INCREF( const_str_plain_SSLv3_server_method );
    const_str_plain_cryptography_has_ed448 = UNSTREAM_STRING( &constant_bin[ 670744 ], 22, 1 );
    const_str_plain_FIPS_mode_set = UNSTREAM_STRING( &constant_bin[ 670766 ], 13, 1 );
    const_str_plain_Cryptography_HAS_VERIFIED_CHAIN = UNSTREAM_STRING( &constant_bin[ 670779 ], 31, 1 );
    const_str_plain_Cryptography_HAS_SET_ECDH_AUTO = UNSTREAM_STRING( &constant_bin[ 670810 ], 30, 1 );
    const_str_plain_cryptography_has_scrypt = UNSTREAM_STRING( &constant_bin[ 670840 ], 23, 1 );
    const_str_plain_cryptography_has_mem_functions = UNSTREAM_STRING( &constant_bin[ 670863 ], 30, 1 );
    const_str_plain_Cryptography_HAS_RAW_KEY = UNSTREAM_STRING( &constant_bin[ 670893 ], 24, 1 );
    const_str_plain_cryptography_has_ssl_st = UNSTREAM_STRING( &constant_bin[ 670917 ], 23, 1 );
    const_str_plain_Cryptography_HAS_SSL3_METHOD = UNSTREAM_STRING( &constant_bin[ 670940 ], 28, 1 );
    const_str_plain_cryptography_has_ec_1_0_2 = UNSTREAM_STRING( &constant_bin[ 670968 ], 25, 1 );
    const_str_plain_Cryptography_HAS_GENERIC_DTLS_METHOD = UNSTREAM_STRING( &constant_bin[ 670993 ], 36, 1 );
    const_str_plain_cryptography_has_compression = UNSTREAM_STRING( &constant_bin[ 671029 ], 28, 1 );
    const_list_str_plain_Cryptography_setup_ssl_threads_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_Cryptography_setup_ssl_threads_list, 0, const_str_plain_Cryptography_setup_ssl_threads ); Py_INCREF( const_str_plain_Cryptography_setup_ssl_threads );
    const_list_69b906847d25decb1cda42670e7e5241_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_69b906847d25decb1cda42670e7e5241_list, 0, const_str_plain_SSL_CTX_set_alpn_protos ); Py_INCREF( const_str_plain_SSL_CTX_set_alpn_protos );
    PyList_SET_ITEM( const_list_69b906847d25decb1cda42670e7e5241_list, 1, const_str_plain_SSL_set_alpn_protos ); Py_INCREF( const_str_plain_SSL_set_alpn_protos );
    PyList_SET_ITEM( const_list_69b906847d25decb1cda42670e7e5241_list, 2, const_str_plain_SSL_CTX_set_alpn_select_cb ); Py_INCREF( const_str_plain_SSL_CTX_set_alpn_select_cb );
    PyList_SET_ITEM( const_list_69b906847d25decb1cda42670e7e5241_list, 3, const_str_plain_SSL_get0_alpn_selected ); Py_INCREF( const_str_plain_SSL_get0_alpn_selected );
    const_str_digest_b2405d2434f1275e2b8933b43c529fbe = UNSTREAM_STRING( &constant_bin[ 671057 ], 42, 1 );
    const_str_plain_Cryptography_HAS_EVP_DIGESTFINAL_XOF = UNSTREAM_STRING( &constant_bin[ 671099 ], 36, 1 );
    const_str_digest_38eba4904dfc59e8c0458109674fe900 = UNSTREAM_STRING( &constant_bin[ 671135 ], 50, 1 );
    const_str_plain_cryptography_has_engine = UNSTREAM_STRING( &constant_bin[ 671185 ], 23, 1 );
    const_list_str_plain_X509_V_FLAG_PARTIAL_CHAIN_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_X509_V_FLAG_PARTIAL_CHAIN_list, 0, const_str_plain_X509_V_FLAG_PARTIAL_CHAIN ); Py_INCREF( const_str_plain_X509_V_FLAG_PARTIAL_CHAIN );
    const_str_plain_Cryptography_HAS_SCT = UNSTREAM_STRING( &constant_bin[ 671208 ], 20, 1 );
    const_list_str_plain_EVP_PKEY_CTX_set_rsa_oaep_md_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_EVP_PKEY_CTX_set_rsa_oaep_md_list, 0, const_str_plain_EVP_PKEY_CTX_set_rsa_oaep_md ); Py_INCREF( const_str_plain_EVP_PKEY_CTX_set_rsa_oaep_md );
    const_list_136332fc21a01754e44f9a06545f3713_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_136332fc21a01754e44f9a06545f3713_list, 0, const_str_plain_EVP_PKEY_get1_tls_encodedpoint ); Py_INCREF( const_str_plain_EVP_PKEY_get1_tls_encodedpoint );
    PyList_SET_ITEM( const_list_136332fc21a01754e44f9a06545f3713_list, 1, const_str_plain_EVP_PKEY_set1_tls_encodedpoint ); Py_INCREF( const_str_plain_EVP_PKEY_set1_tls_encodedpoint );
    const_str_plain_cryptography_has_openssl_cleanup = UNSTREAM_STRING( &constant_bin[ 671228 ], 32, 1 );
    const_str_digest_8535fc31daf81b5f04208070d851f01e = UNSTREAM_STRING( &constant_bin[ 671260 ], 44, 1 );
    const_str_plain_Cryptography_HAS_COMPRESSION = UNSTREAM_STRING( &constant_bin[ 671304 ], 28, 1 );
    const_list_str_plain_EVP_DigestFinalXOF_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_EVP_DigestFinalXOF_list, 0, const_str_plain_EVP_DigestFinalXOF ); Py_INCREF( const_str_plain_EVP_DigestFinalXOF );
    const_str_digest_08906fb95f8ef4a836f252aa7b12b1cf = UNSTREAM_STRING( &constant_bin[ 671332 ], 47, 1 );
    const_str_plain_Cryptography_HAS_MEM_FUNCTIONS = UNSTREAM_STRING( &constant_bin[ 671379 ], 30, 1 );
    const_list_29407ac2cfa5bacd5103ba17ced806aa_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_29407ac2cfa5bacd5103ba17ced806aa_list, 0, const_str_plain_SSL_ST_BEFORE ); Py_INCREF( const_str_plain_SSL_ST_BEFORE );
    PyList_SET_ITEM( const_list_29407ac2cfa5bacd5103ba17ced806aa_list, 1, const_str_plain_SSL_ST_OK ); Py_INCREF( const_str_plain_SSL_ST_OK );
    PyList_SET_ITEM( const_list_29407ac2cfa5bacd5103ba17ced806aa_list, 2, const_str_plain_SSL_ST_INIT ); Py_INCREF( const_str_plain_SSL_ST_INIT );
    PyList_SET_ITEM( const_list_29407ac2cfa5bacd5103ba17ced806aa_list, 3, const_str_plain_SSL_ST_RENEGOTIATE ); Py_INCREF( const_str_plain_SSL_ST_RENEGOTIATE );
    const_str_plain_cryptography_has_sct = UNSTREAM_STRING( &constant_bin[ 671409 ], 20, 1 );
    const_list_d0eb343c74fa9d778f192626e2b9d53e_list = PyList_New( 10 );
    PyList_SET_ITEM( const_list_d0eb343c74fa9d778f192626e2b9d53e_list, 0, const_str_plain_ENGINE_by_id ); Py_INCREF( const_str_plain_ENGINE_by_id );
    PyList_SET_ITEM( const_list_d0eb343c74fa9d778f192626e2b9d53e_list, 1, const_str_plain_ENGINE_init ); Py_INCREF( const_str_plain_ENGINE_init );
    PyList_SET_ITEM( const_list_d0eb343c74fa9d778f192626e2b9d53e_list, 2, const_str_plain_ENGINE_finish ); Py_INCREF( const_str_plain_ENGINE_finish );
    PyList_SET_ITEM( const_list_d0eb343c74fa9d778f192626e2b9d53e_list, 3, const_str_plain_ENGINE_get_default_RAND ); Py_INCREF( const_str_plain_ENGINE_get_default_RAND );
    PyList_SET_ITEM( const_list_d0eb343c74fa9d778f192626e2b9d53e_list, 4, const_str_plain_ENGINE_set_default_RAND ); Py_INCREF( const_str_plain_ENGINE_set_default_RAND );
    PyList_SET_ITEM( const_list_d0eb343c74fa9d778f192626e2b9d53e_list, 5, const_str_plain_ENGINE_unregister_RAND ); Py_INCREF( const_str_plain_ENGINE_unregister_RAND );
    PyList_SET_ITEM( const_list_d0eb343c74fa9d778f192626e2b9d53e_list, 6, const_str_plain_ENGINE_ctrl_cmd ); Py_INCREF( const_str_plain_ENGINE_ctrl_cmd );
    PyList_SET_ITEM( const_list_d0eb343c74fa9d778f192626e2b9d53e_list, 7, const_str_plain_ENGINE_free ); Py_INCREF( const_str_plain_ENGINE_free );
    PyList_SET_ITEM( const_list_d0eb343c74fa9d778f192626e2b9d53e_list, 8, const_str_plain_ENGINE_get_name ); Py_INCREF( const_str_plain_ENGINE_get_name );
    PyList_SET_ITEM( const_list_d0eb343c74fa9d778f192626e2b9d53e_list, 9, const_str_plain_Cryptography_add_osrandom_engine ); Py_INCREF( const_str_plain_Cryptography_add_osrandom_engine );
    const_str_digest_b532ee08e2c9464270b0cf4cd8c73f33 = UNSTREAM_STRING( &constant_bin[ 671429 ], 42, 1 );
    const_str_plain_cryptography_has_set_ecdh_auto = UNSTREAM_STRING( &constant_bin[ 671471 ], 30, 1 );
    const_str_plain_cryptography_has_alpn = UNSTREAM_STRING( &constant_bin[ 671501 ], 21, 1 );
    const_str_plain_cryptography_has_x25519 = UNSTREAM_STRING( &constant_bin[ 671522 ], 23, 1 );
    const_list_str_plain_FIPS_mode_set_str_plain_FIPS_mode_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_FIPS_mode_set_str_plain_FIPS_mode_list, 0, const_str_plain_FIPS_mode_set ); Py_INCREF( const_str_plain_FIPS_mode_set );
    PyList_SET_ITEM( const_list_str_plain_FIPS_mode_set_str_plain_FIPS_mode_list, 1, const_str_plain_FIPS_mode ); Py_INCREF( const_str_plain_FIPS_mode );
    const_list_str_plain_EVP_PBE_scrypt_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_EVP_PBE_scrypt_list, 0, const_str_plain_EVP_PBE_scrypt ); Py_INCREF( const_str_plain_EVP_PBE_scrypt );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$hazmat$bindings$openssl$_conditional( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_8ff30edee69fce3ee07868da434df41e;
static PyCodeObject *codeobj_121136881282797febd3136502a4d8f1;
static PyCodeObject *codeobj_77f95630a4b04c0bdcd1fbd09fabd18d;
static PyCodeObject *codeobj_f753fe67b7b183b298034af317edd472;
static PyCodeObject *codeobj_7b31f0422bd26e721da42f1356d3c87f;
static PyCodeObject *codeobj_e491627f1ed9a733a0ebd83f17ab1431;
static PyCodeObject *codeobj_12189f21d1538d0ca355bc5e90b6def9;
static PyCodeObject *codeobj_b3a926fb42a3077579b5c7aaf1bd779c;
static PyCodeObject *codeobj_006c21544f7f90b74135018506285c59;
static PyCodeObject *codeobj_a271840e054e0c5564be0248cfe3e253;
static PyCodeObject *codeobj_d4bfc6d5e523444e2311f60ea822c239;
static PyCodeObject *codeobj_d327f3dc3e4b3bc371fbe79e3f4ef019;
static PyCodeObject *codeobj_3b2274754f100330eedd1c09332dd7ee;
static PyCodeObject *codeobj_2dc0c8e0e093cf94b590a5fea70c393b;
static PyCodeObject *codeobj_c8d5e14f237925d0abd2651b4bb959bb;
static PyCodeObject *codeobj_b0de2b02674d96474980840c59f67e25;
static PyCodeObject *codeobj_0b5af3899988d519936ac45089fb69a4;
static PyCodeObject *codeobj_a13bddff01797b6f65d0f69317f6dea5;
static PyCodeObject *codeobj_8e38f01cf56250a1adb90fd1a7bdb0a8;
static PyCodeObject *codeobj_3f50b8551fa709d94570475a5b94a1bc;
static PyCodeObject *codeobj_a8659a61b120d7ca258f600be6903025;
static PyCodeObject *codeobj_daed87ea3ef3593e6c2c5ce439613a3d;
static PyCodeObject *codeobj_8435b65b01bab86e117cdde679783eb1;
static PyCodeObject *codeobj_a4245f1cfac49d6a5f9910b2e07b8c6b;
static PyCodeObject *codeobj_05345a62fe7bfa1708f6209b3dfaf3a1;
static PyCodeObject *codeobj_3bbeb6567b356f2744e3addbcdabbc54;
static PyCodeObject *codeobj_2680101eb4550118ddcfe77de4b4113e;
static PyCodeObject *codeobj_63dc35c1840709dae3c999cacd01b7f3;
static PyCodeObject *codeobj_f3006a4a0cc9edb643f6700c17f629c0;
static PyCodeObject *codeobj_2339bf5fb49ff25d6364483a5af9852f;
static PyCodeObject *codeobj_4f8abddbc86492a3641b3026bf40a042;
static PyCodeObject *codeobj_87128cbe75a0731e4ad45c016a38519e;
static PyCodeObject *codeobj_cefff856eb127c8b9b04e7b9248f6091;
static PyCodeObject *codeobj_f564ca77815541c8728cb2411b152106;
static PyCodeObject *codeobj_83de9d5fa55931eca0da4388e95b04ed;
static PyCodeObject *codeobj_0a38e20ab70db82da910347abb3d93f6;
static PyCodeObject *codeobj_77c1838c4f37cffa1b28ae4f22a59b54;
static PyCodeObject *codeobj_b7f301a57a24cde90262f602bd38bf26;
static PyCodeObject *codeobj_255ed1a573f5431c9b3d2e55482a53d0;
static PyCodeObject *codeobj_53b5b2c500a77d3e41b73420446eeaaf;
static PyCodeObject *codeobj_aed50567d1f0c5d33ea49b4864cef4de;
static PyCodeObject *codeobj_861271cd4bd07058c5fbe3b3b0a6faac;
static PyCodeObject *codeobj_8860c1ce2706ee9658f1b2f9e1680d34;
static PyCodeObject *codeobj_4887be204ccd135ac7c8c4c60fe6b4fd;
static PyCodeObject *codeobj_be24ff87653ff8974096a3306a626dc6;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_9a0160a95e0c209c6b7e5d38666a9d6e );
    codeobj_8ff30edee69fce3ee07868da434df41e = MAKE_CODEOBJ( module_filename_obj, const_str_digest_fafbfe30544ba42854ed0b86baac5f84, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_121136881282797febd3136502a4d8f1 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_0134e31627bb74f9df2edcd82a96ece3, 77, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_77f95630a4b04c0bdcd1fbd09fabd18d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_102_verification_params, 91, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f753fe67b7b183b298034af317edd472 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_110_verification_params, 110, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7b31f0422bd26e721da42f1356d3c87f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_alpn, 54, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e491627f1ed9a733a0ebd83f17ab1431 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_cipher_details, 306, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_12189f21d1538d0ca355bc5e90b6def9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_compression, 63, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b3a926fb42a3077579b5c7aaf1bd779c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_custom_ext, 292, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_006c21544f7f90b74135018506285c59 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_ec2m, 8, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a271840e054e0c5564be0248cfe3e253 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_ec_1_0_2, 16, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d4bfc6d5e523444e2311f60ea822c239 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_ed25519, 236, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d327f3dc3e4b3bc371fbe79e3f4ef019 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_ed448, 229, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3b2274754f100330eedd1c09332dd7ee = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_engine, 346, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2dc0c8e0e093cf94b590a5fea70c393b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_evp_digestfinal_xof, 257, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c8d5e14f237925d0abd2651b4bb959bb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_evp_pkey_dhx, 175, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b0de2b02674d96474980840c59f67e25 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_38eba4904dfc59e8c0458109674fe900, 263, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0b5af3899988d519936ac45089fb69a4 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_8535fc31daf81b5f04208070d851f01e, 340, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a13bddff01797b6f65d0f69317f6dea5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_fips, 270, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8e38f01cf56250a1adb90fd1a7bdb0a8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_generic_dtls_method, 163, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3f50b8551fa709d94570475a5b94a1bc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_get_server_tmp_key, 71, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a8659a61b120d7ca258f600be6903025 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_locking_callbacks, 151, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_daed87ea3ef3593e6c2c5ce439613a3d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_mem_functions, 181, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8435b65b01bab86e117cdde679783eb1 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_5e36ac0615fb0e6445b1e014cca7bd54, 250, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a4245f1cfac49d6a5f9910b2e07b8c6b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_openssl_cleanup, 300, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_05345a62fe7bfa1708f6209b3dfaf3a1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_poly1305, 243, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3bbeb6567b356f2744e3addbcdabbc54 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_psk, 284, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2680101eb4550118ddcfe77de4b4113e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_raw_key, 331, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_63dc35c1840709dae3c999cacd01b7f3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_rsa_oaep_label, 40, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f3006a4a0cc9edb643f6700c17f629c0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_rsa_oaep_md, 34, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2339bf5fb49ff25d6364483a5af9852f = MAKE_CODEOBJ( module_filename_obj, const_str_digest_8f29b4e065ff2a78b40f0f2a8209f3b9, 28, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4f8abddbc86492a3641b3026bf40a042 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_scrypt, 157, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_87128cbe75a0731e4ad45c016a38519e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_sct, 187, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_cefff856eb127c8b9b04e7b9248f6091 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_set_cert_cb, 128, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f564ca77815541c8728cb2411b152106 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_set_ecdh_auto, 22, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_83de9d5fa55931eca0da4388e95b04ed = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_ssl3_method, 46, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0a38e20ab70db82da910347abb3d93f6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_ssl_sigalgs, 277, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_77c1838c4f37cffa1b28ae4f22a59b54 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_ssl_st, 135, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b7f301a57a24cde90262f602bd38bf26 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_tls_st, 144, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_255ed1a573f5431c9b3d2e55482a53d0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_tlsv13, 316, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_53b5b2c500a77d3e41b73420446eeaaf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_verified_chain, 361, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_aed50567d1f0c5d33ea49b4864cef4de = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_x25519, 215, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_861271cd4bd07058c5fbe3b3b0a6faac = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_x448, 222, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8860c1ce2706ee9658f1b2f9e1680d34 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_b532ee08e2c9464270b0cf4cd8c73f33, 208, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4887be204ccd135ac7c8c4c60fe6b4fd = MAKE_CODEOBJ( module_filename_obj, const_str_digest_89c6e3f07e56ca3212435467944ee8af, 122, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_be24ff87653ff8974096a3306a626dc6 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_b2405d2434f1275e2b8933b43c529fbe, 116, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_10_cryptography_has_get_server_tmp_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_11_cryptography_has_102_verification_error_codes(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_12_cryptography_has_102_verification_params(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_13_cryptography_has_110_verification_params(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_14_cryptography_has_x509_v_flag_trusted_first(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_15_cryptography_has_x509_v_flag_partial_chain(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_16_cryptography_has_set_cert_cb(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_17_cryptography_has_ssl_st(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_18_cryptography_has_tls_st(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_19_cryptography_has_locking_callbacks(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_1_cryptography_has_ec2m(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_20_cryptography_has_scrypt(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_21_cryptography_has_generic_dtls_method(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_22_cryptography_has_evp_pkey_dhx(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_23_cryptography_has_mem_functions(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_24_cryptography_has_sct(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_25_cryptography_has_x509_store_ctx_get_issuer(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_26_cryptography_has_x25519(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_27_cryptography_has_x448(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_28_cryptography_has_ed448(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_29_cryptography_has_ed25519(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_2_cryptography_has_ec_1_0_2(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_30_cryptography_has_poly1305(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_31_cryptography_has_oneshot_evp_digest_sign_verify(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_32_cryptography_has_evp_digestfinal_xof(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_33_cryptography_has_evp_pkey_get_set_tls_encodedpoint(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_34_cryptography_has_fips(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_35_cryptography_has_ssl_sigalgs(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_36_cryptography_has_psk(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_37_cryptography_has_custom_ext(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_38_cryptography_has_openssl_cleanup(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_39_cryptography_has_cipher_details(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_3_cryptography_has_set_ecdh_auto(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_40_cryptography_has_tlsv13(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_41_cryptography_has_raw_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_42_cryptography_has_evp_r_memory_limit_exceeded(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_43_cryptography_has_engine(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_44_cryptography_has_verified_chain(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_4_cryptography_has_rsa_r_pkcs_decoding_error(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_5_cryptography_has_rsa_oaep_md(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_6_cryptography_has_rsa_oaep_label(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_7_cryptography_has_ssl3_method(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_8_cryptography_has_alpn(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_9_cryptography_has_compression(  );


// The module function definitions.
static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_1_cryptography_has_ec2m( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_8cf6be4317fa4d6df8e3c06784c94792_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_1_cryptography_has_ec2m );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_2_cryptography_has_ec_1_0_2( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_str_plain_EC_curve_nid2nist_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_2_cryptography_has_ec_1_0_2 );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_3_cryptography_has_set_ecdh_auto( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_str_plain_SSL_CTX_set_ecdh_auto_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_3_cryptography_has_set_ecdh_auto );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_4_cryptography_has_rsa_r_pkcs_decoding_error( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_str_plain_RSA_R_PKCS_DECODING_ERROR_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_4_cryptography_has_rsa_r_pkcs_decoding_error );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_5_cryptography_has_rsa_oaep_md( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_str_plain_EVP_PKEY_CTX_set_rsa_oaep_md_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_5_cryptography_has_rsa_oaep_md );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_6_cryptography_has_rsa_oaep_label( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_str_plain_EVP_PKEY_CTX_set0_rsa_oaep_label_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_6_cryptography_has_rsa_oaep_label );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_7_cryptography_has_ssl3_method( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_99d2a9f3afa4bd958ff3177b2faaca12_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_7_cryptography_has_ssl3_method );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_8_cryptography_has_alpn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_69b906847d25decb1cda42670e7e5241_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_8_cryptography_has_alpn );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_9_cryptography_has_compression( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_f501d0e9bfb78a701032fc968ff559f6_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_9_cryptography_has_compression );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_10_cryptography_has_get_server_tmp_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_str_plain_SSL_get_server_tmp_key_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_10_cryptography_has_get_server_tmp_key );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_11_cryptography_has_102_verification_error_codes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_86c40a5c21cefd9f6af8769ff1175caf_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_11_cryptography_has_102_verification_error_codes );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_12_cryptography_has_102_verification_params( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_12_cryptography_has_102_verification_params );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_13_cryptography_has_110_verification_params( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_str_plain_X509_CHECK_FLAG_NEVER_CHECK_SUBJECT_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_13_cryptography_has_110_verification_params );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_14_cryptography_has_x509_v_flag_trusted_first( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_str_plain_X509_V_FLAG_TRUSTED_FIRST_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_14_cryptography_has_x509_v_flag_trusted_first );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_15_cryptography_has_x509_v_flag_partial_chain( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_str_plain_X509_V_FLAG_PARTIAL_CHAIN_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_15_cryptography_has_x509_v_flag_partial_chain );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_16_cryptography_has_set_cert_cb( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_str_plain_SSL_CTX_set_cert_cb_str_plain_SSL_set_cert_cb_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_16_cryptography_has_set_cert_cb );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_17_cryptography_has_ssl_st( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_29407ac2cfa5bacd5103ba17ced806aa_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_17_cryptography_has_ssl_st );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_18_cryptography_has_tls_st( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_str_plain_TLS_ST_BEFORE_str_plain_TLS_ST_OK_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_18_cryptography_has_tls_st );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_19_cryptography_has_locking_callbacks( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_str_plain_Cryptography_setup_ssl_threads_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_19_cryptography_has_locking_callbacks );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_20_cryptography_has_scrypt( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_str_plain_EVP_PBE_scrypt_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_20_cryptography_has_scrypt );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_21_cryptography_has_generic_dtls_method( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_a2ccfb1541ef6968650ac43562856e84_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_21_cryptography_has_generic_dtls_method );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_22_cryptography_has_evp_pkey_dhx( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_str_plain_EVP_PKEY_DHX_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_22_cryptography_has_evp_pkey_dhx );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_23_cryptography_has_mem_functions( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_str_plain_Cryptography_CRYPTO_set_mem_functions_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_23_cryptography_has_mem_functions );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_24_cryptography_has_sct( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_a92b37e3fd97e57634d2e2c4f15929c2_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_24_cryptography_has_sct );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_25_cryptography_has_x509_store_ctx_get_issuer( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_2b0156be132bced5637961a9aa48cb51_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_25_cryptography_has_x509_store_ctx_get_issuer );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_26_cryptography_has_x25519( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_str_plain_EVP_PKEY_X25519_str_plain_NID_X25519_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_26_cryptography_has_x25519 );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_27_cryptography_has_x448( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_str_plain_EVP_PKEY_X448_str_plain_NID_X448_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_27_cryptography_has_x448 );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_28_cryptography_has_ed448( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_str_plain_EVP_PKEY_ED448_str_plain_NID_ED448_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_28_cryptography_has_ed448 );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_29_cryptography_has_ed25519( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_str_plain_NID_ED25519_str_plain_EVP_PKEY_ED25519_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_29_cryptography_has_ed25519 );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_30_cryptography_has_poly1305( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_str_plain_NID_poly1305_str_plain_EVP_PKEY_POLY1305_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_30_cryptography_has_poly1305 );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_31_cryptography_has_oneshot_evp_digest_sign_verify( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_str_plain_EVP_DigestSign_str_plain_EVP_DigestVerify_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_31_cryptography_has_oneshot_evp_digest_sign_verify );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_32_cryptography_has_evp_digestfinal_xof( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_str_plain_EVP_DigestFinalXOF_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_32_cryptography_has_evp_digestfinal_xof );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_33_cryptography_has_evp_pkey_get_set_tls_encodedpoint( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_136332fc21a01754e44f9a06545f3713_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_33_cryptography_has_evp_pkey_get_set_tls_encodedpoint );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_34_cryptography_has_fips( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_str_plain_FIPS_mode_set_str_plain_FIPS_mode_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_34_cryptography_has_fips );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_35_cryptography_has_ssl_sigalgs( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_70d66b11b8b83912e7ed175ae865dfed_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_35_cryptography_has_ssl_sigalgs );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_36_cryptography_has_psk( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_e5729eb47bb2bb77d896a48e0ba4a292_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_36_cryptography_has_psk );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_37_cryptography_has_custom_ext( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_03133653ae1f779dd1ae650a3a80ba30_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_37_cryptography_has_custom_ext );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_38_cryptography_has_openssl_cleanup( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_str_plain_OPENSSL_cleanup_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_38_cryptography_has_openssl_cleanup );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_39_cryptography_has_cipher_details( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_531063e0f807f77ec21047a47441d048_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_39_cryptography_has_cipher_details );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_40_cryptography_has_tlsv13( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_9cf036427baefafa3a18cbc2378aecdb_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_40_cryptography_has_tlsv13 );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_41_cryptography_has_raw_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_8637a8e096edeccc96cf2940262bfd01_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_41_cryptography_has_raw_key );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_42_cryptography_has_evp_r_memory_limit_exceeded( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_str_plain_EVP_R_MEMORY_LIMIT_EXCEEDED_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_42_cryptography_has_evp_r_memory_limit_exceeded );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_43_cryptography_has_engine( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_d0eb343c74fa9d778f192626e2b9d53e_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_43_cryptography_has_engine );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_44_cryptography_has_verified_chain( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = LIST_COPY( const_list_str_plain_SSL_get0_verified_chain_list );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_44_cryptography_has_verified_chain );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_10_cryptography_has_get_server_tmp_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_10_cryptography_has_get_server_tmp_key,
        const_str_plain_cryptography_has_get_server_tmp_key,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3f50b8551fa709d94570475a5b94a1bc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_11_cryptography_has_102_verification_error_codes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_11_cryptography_has_102_verification_error_codes,
        const_str_digest_0134e31627bb74f9df2edcd82a96ece3,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_121136881282797febd3136502a4d8f1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_12_cryptography_has_102_verification_params(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_12_cryptography_has_102_verification_params,
        const_str_plain_cryptography_has_102_verification_params,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_77f95630a4b04c0bdcd1fbd09fabd18d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_13_cryptography_has_110_verification_params(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_13_cryptography_has_110_verification_params,
        const_str_plain_cryptography_has_110_verification_params,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f753fe67b7b183b298034af317edd472,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_14_cryptography_has_x509_v_flag_trusted_first(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_14_cryptography_has_x509_v_flag_trusted_first,
        const_str_digest_b2405d2434f1275e2b8933b43c529fbe,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_be24ff87653ff8974096a3306a626dc6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_15_cryptography_has_x509_v_flag_partial_chain(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_15_cryptography_has_x509_v_flag_partial_chain,
        const_str_digest_89c6e3f07e56ca3212435467944ee8af,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4887be204ccd135ac7c8c4c60fe6b4fd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_16_cryptography_has_set_cert_cb(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_16_cryptography_has_set_cert_cb,
        const_str_plain_cryptography_has_set_cert_cb,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cefff856eb127c8b9b04e7b9248f6091,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_17_cryptography_has_ssl_st(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_17_cryptography_has_ssl_st,
        const_str_plain_cryptography_has_ssl_st,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_77c1838c4f37cffa1b28ae4f22a59b54,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_18_cryptography_has_tls_st(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_18_cryptography_has_tls_st,
        const_str_plain_cryptography_has_tls_st,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b7f301a57a24cde90262f602bd38bf26,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_19_cryptography_has_locking_callbacks(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_19_cryptography_has_locking_callbacks,
        const_str_plain_cryptography_has_locking_callbacks,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a8659a61b120d7ca258f600be6903025,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_1_cryptography_has_ec2m(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_1_cryptography_has_ec2m,
        const_str_plain_cryptography_has_ec2m,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_006c21544f7f90b74135018506285c59,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_20_cryptography_has_scrypt(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_20_cryptography_has_scrypt,
        const_str_plain_cryptography_has_scrypt,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4f8abddbc86492a3641b3026bf40a042,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_21_cryptography_has_generic_dtls_method(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_21_cryptography_has_generic_dtls_method,
        const_str_plain_cryptography_has_generic_dtls_method,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8e38f01cf56250a1adb90fd1a7bdb0a8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_22_cryptography_has_evp_pkey_dhx(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_22_cryptography_has_evp_pkey_dhx,
        const_str_plain_cryptography_has_evp_pkey_dhx,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c8d5e14f237925d0abd2651b4bb959bb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_23_cryptography_has_mem_functions(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_23_cryptography_has_mem_functions,
        const_str_plain_cryptography_has_mem_functions,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_daed87ea3ef3593e6c2c5ce439613a3d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_24_cryptography_has_sct(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_24_cryptography_has_sct,
        const_str_plain_cryptography_has_sct,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_87128cbe75a0731e4ad45c016a38519e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_25_cryptography_has_x509_store_ctx_get_issuer(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_25_cryptography_has_x509_store_ctx_get_issuer,
        const_str_digest_b532ee08e2c9464270b0cf4cd8c73f33,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8860c1ce2706ee9658f1b2f9e1680d34,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_26_cryptography_has_x25519(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_26_cryptography_has_x25519,
        const_str_plain_cryptography_has_x25519,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_aed50567d1f0c5d33ea49b4864cef4de,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_27_cryptography_has_x448(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_27_cryptography_has_x448,
        const_str_plain_cryptography_has_x448,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_861271cd4bd07058c5fbe3b3b0a6faac,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_28_cryptography_has_ed448(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_28_cryptography_has_ed448,
        const_str_plain_cryptography_has_ed448,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d327f3dc3e4b3bc371fbe79e3f4ef019,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_29_cryptography_has_ed25519(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_29_cryptography_has_ed25519,
        const_str_plain_cryptography_has_ed25519,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d4bfc6d5e523444e2311f60ea822c239,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_2_cryptography_has_ec_1_0_2(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_2_cryptography_has_ec_1_0_2,
        const_str_plain_cryptography_has_ec_1_0_2,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a271840e054e0c5564be0248cfe3e253,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_30_cryptography_has_poly1305(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_30_cryptography_has_poly1305,
        const_str_plain_cryptography_has_poly1305,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_05345a62fe7bfa1708f6209b3dfaf3a1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_31_cryptography_has_oneshot_evp_digest_sign_verify(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_31_cryptography_has_oneshot_evp_digest_sign_verify,
        const_str_digest_5e36ac0615fb0e6445b1e014cca7bd54,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8435b65b01bab86e117cdde679783eb1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_32_cryptography_has_evp_digestfinal_xof(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_32_cryptography_has_evp_digestfinal_xof,
        const_str_plain_cryptography_has_evp_digestfinal_xof,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2dc0c8e0e093cf94b590a5fea70c393b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_33_cryptography_has_evp_pkey_get_set_tls_encodedpoint(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_33_cryptography_has_evp_pkey_get_set_tls_encodedpoint,
        const_str_digest_38eba4904dfc59e8c0458109674fe900,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b0de2b02674d96474980840c59f67e25,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_34_cryptography_has_fips(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_34_cryptography_has_fips,
        const_str_plain_cryptography_has_fips,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a13bddff01797b6f65d0f69317f6dea5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_35_cryptography_has_ssl_sigalgs(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_35_cryptography_has_ssl_sigalgs,
        const_str_plain_cryptography_has_ssl_sigalgs,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0a38e20ab70db82da910347abb3d93f6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_36_cryptography_has_psk(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_36_cryptography_has_psk,
        const_str_plain_cryptography_has_psk,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3bbeb6567b356f2744e3addbcdabbc54,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_37_cryptography_has_custom_ext(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_37_cryptography_has_custom_ext,
        const_str_plain_cryptography_has_custom_ext,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b3a926fb42a3077579b5c7aaf1bd779c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_38_cryptography_has_openssl_cleanup(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_38_cryptography_has_openssl_cleanup,
        const_str_plain_cryptography_has_openssl_cleanup,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a4245f1cfac49d6a5f9910b2e07b8c6b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_39_cryptography_has_cipher_details(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_39_cryptography_has_cipher_details,
        const_str_plain_cryptography_has_cipher_details,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e491627f1ed9a733a0ebd83f17ab1431,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_3_cryptography_has_set_ecdh_auto(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_3_cryptography_has_set_ecdh_auto,
        const_str_plain_cryptography_has_set_ecdh_auto,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f564ca77815541c8728cb2411b152106,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_40_cryptography_has_tlsv13(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_40_cryptography_has_tlsv13,
        const_str_plain_cryptography_has_tlsv13,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_255ed1a573f5431c9b3d2e55482a53d0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_41_cryptography_has_raw_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_41_cryptography_has_raw_key,
        const_str_plain_cryptography_has_raw_key,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2680101eb4550118ddcfe77de4b4113e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_42_cryptography_has_evp_r_memory_limit_exceeded(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_42_cryptography_has_evp_r_memory_limit_exceeded,
        const_str_digest_8535fc31daf81b5f04208070d851f01e,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0b5af3899988d519936ac45089fb69a4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_43_cryptography_has_engine(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_43_cryptography_has_engine,
        const_str_plain_cryptography_has_engine,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3b2274754f100330eedd1c09332dd7ee,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_44_cryptography_has_verified_chain(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_44_cryptography_has_verified_chain,
        const_str_plain_cryptography_has_verified_chain,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_53b5b2c500a77d3e41b73420446eeaaf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_4_cryptography_has_rsa_r_pkcs_decoding_error(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_4_cryptography_has_rsa_r_pkcs_decoding_error,
        const_str_digest_8f29b4e065ff2a78b40f0f2a8209f3b9,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2339bf5fb49ff25d6364483a5af9852f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_5_cryptography_has_rsa_oaep_md(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_5_cryptography_has_rsa_oaep_md,
        const_str_plain_cryptography_has_rsa_oaep_md,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f3006a4a0cc9edb643f6700c17f629c0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_6_cryptography_has_rsa_oaep_label(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_6_cryptography_has_rsa_oaep_label,
        const_str_plain_cryptography_has_rsa_oaep_label,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_63dc35c1840709dae3c999cacd01b7f3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_7_cryptography_has_ssl3_method(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_7_cryptography_has_ssl3_method,
        const_str_plain_cryptography_has_ssl3_method,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_83de9d5fa55931eca0da4388e95b04ed,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_8_cryptography_has_alpn(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_8_cryptography_has_alpn,
        const_str_plain_cryptography_has_alpn,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7b31f0422bd26e721da42f1356d3c87f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_9_cryptography_has_compression(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_9_cryptography_has_compression,
        const_str_plain_cryptography_has_compression,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_12189f21d1538d0ca355bc5e90b6def9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_cryptography$hazmat$bindings$openssl$_conditional =
{
    PyModuleDef_HEAD_INIT,
    "cryptography.hazmat.bindings.openssl._conditional",   /* m_name */
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

MOD_INIT_DECL( cryptography$hazmat$bindings$openssl$_conditional )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_cryptography$hazmat$bindings$openssl$_conditional );
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
    puts("cryptography.hazmat.bindings.openssl._conditional: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.bindings.openssl._conditional: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.bindings.openssl._conditional: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcryptography$hazmat$bindings$openssl$_conditional" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_cryptography$hazmat$bindings$openssl$_conditional = Py_InitModule4(
        "cryptography.hazmat.bindings.openssl._conditional",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_cryptography$hazmat$bindings$openssl$_conditional = PyModule_Create( &mdef_cryptography$hazmat$bindings$openssl$_conditional );
#endif

    moduledict_cryptography$hazmat$bindings$openssl$_conditional = MODULE_DICT( module_cryptography$hazmat$bindings$openssl$_conditional );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_cryptography$hazmat$bindings$openssl$_conditional,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$bindings$openssl$_conditional,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_cryptography$hazmat$bindings$openssl$_conditional,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$bindings$openssl$_conditional,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_cryptography$hazmat$bindings$openssl$_conditional );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_6c6405718530cbdfc8da1bb69c050727, module_cryptography$hazmat$bindings$openssl$_conditional );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
    PyObject *tmp_assign_source_31;
    PyObject *tmp_assign_source_32;
    PyObject *tmp_assign_source_33;
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_assign_source_37;
    PyObject *tmp_assign_source_38;
    PyObject *tmp_assign_source_39;
    PyObject *tmp_assign_source_40;
    PyObject *tmp_assign_source_41;
    PyObject *tmp_assign_source_42;
    PyObject *tmp_assign_source_43;
    PyObject *tmp_assign_source_44;
    PyObject *tmp_assign_source_45;
    PyObject *tmp_assign_source_46;
    PyObject *tmp_assign_source_47;
    PyObject *tmp_assign_source_48;
    PyObject *tmp_assign_source_49;
    PyObject *tmp_assign_source_50;
    PyObject *tmp_assign_source_51;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_key_10;
    PyObject *tmp_dict_key_11;
    PyObject *tmp_dict_key_12;
    PyObject *tmp_dict_key_13;
    PyObject *tmp_dict_key_14;
    PyObject *tmp_dict_key_15;
    PyObject *tmp_dict_key_16;
    PyObject *tmp_dict_key_17;
    PyObject *tmp_dict_key_18;
    PyObject *tmp_dict_key_19;
    PyObject *tmp_dict_key_20;
    PyObject *tmp_dict_key_21;
    PyObject *tmp_dict_key_22;
    PyObject *tmp_dict_key_23;
    PyObject *tmp_dict_key_24;
    PyObject *tmp_dict_key_25;
    PyObject *tmp_dict_key_26;
    PyObject *tmp_dict_key_27;
    PyObject *tmp_dict_key_28;
    PyObject *tmp_dict_key_29;
    PyObject *tmp_dict_key_30;
    PyObject *tmp_dict_key_31;
    PyObject *tmp_dict_key_32;
    PyObject *tmp_dict_key_33;
    PyObject *tmp_dict_key_34;
    PyObject *tmp_dict_key_35;
    PyObject *tmp_dict_key_36;
    PyObject *tmp_dict_key_37;
    PyObject *tmp_dict_key_38;
    PyObject *tmp_dict_key_39;
    PyObject *tmp_dict_key_40;
    PyObject *tmp_dict_key_41;
    PyObject *tmp_dict_key_42;
    PyObject *tmp_dict_key_43;
    PyObject *tmp_dict_key_44;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dict_value_10;
    PyObject *tmp_dict_value_11;
    PyObject *tmp_dict_value_12;
    PyObject *tmp_dict_value_13;
    PyObject *tmp_dict_value_14;
    PyObject *tmp_dict_value_15;
    PyObject *tmp_dict_value_16;
    PyObject *tmp_dict_value_17;
    PyObject *tmp_dict_value_18;
    PyObject *tmp_dict_value_19;
    PyObject *tmp_dict_value_20;
    PyObject *tmp_dict_value_21;
    PyObject *tmp_dict_value_22;
    PyObject *tmp_dict_value_23;
    PyObject *tmp_dict_value_24;
    PyObject *tmp_dict_value_25;
    PyObject *tmp_dict_value_26;
    PyObject *tmp_dict_value_27;
    PyObject *tmp_dict_value_28;
    PyObject *tmp_dict_value_29;
    PyObject *tmp_dict_value_30;
    PyObject *tmp_dict_value_31;
    PyObject *tmp_dict_value_32;
    PyObject *tmp_dict_value_33;
    PyObject *tmp_dict_value_34;
    PyObject *tmp_dict_value_35;
    PyObject *tmp_dict_value_36;
    PyObject *tmp_dict_value_37;
    PyObject *tmp_dict_value_38;
    PyObject *tmp_dict_value_39;
    PyObject *tmp_dict_value_40;
    PyObject *tmp_dict_value_41;
    PyObject *tmp_dict_value_42;
    PyObject *tmp_dict_value_43;
    PyObject *tmp_dict_value_44;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    int tmp_res;
    struct Nuitka_FrameObject *frame_8ff30edee69fce3ee07868da434df41e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyImport_ImportModule("__future__");
    assert( tmp_assign_source_3 != NULL );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_3 );
    tmp_import_from_1__module = tmp_assign_source_3;

    // Frame without reuse.
    frame_8ff30edee69fce3ee07868da434df41e = MAKE_MODULE_FRAME( codeobj_8ff30edee69fce3ee07868da434df41e, module_cryptography$hazmat$bindings$openssl$_conditional );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_8ff30edee69fce3ee07868da434df41e );
    assert( Py_REFCNT( frame_8ff30edee69fce3ee07868da434df41e ) == 2 );

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
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
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
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8ff30edee69fce3ee07868da434df41e );
#endif
    popFrameStack();

    assertFrameObject( frame_8ff30edee69fce3ee07868da434df41e );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8ff30edee69fce3ee07868da434df41e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8ff30edee69fce3ee07868da434df41e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8ff30edee69fce3ee07868da434df41e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8ff30edee69fce3ee07868da434df41e, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    tmp_assign_source_7 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_1_cryptography_has_ec2m(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ec2m, tmp_assign_source_7 );
    tmp_assign_source_8 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_2_cryptography_has_ec_1_0_2(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ec_1_0_2, tmp_assign_source_8 );
    tmp_assign_source_9 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_3_cryptography_has_set_ecdh_auto(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_set_ecdh_auto, tmp_assign_source_9 );
    tmp_assign_source_10 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_4_cryptography_has_rsa_r_pkcs_decoding_error(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_8f29b4e065ff2a78b40f0f2a8209f3b9, tmp_assign_source_10 );
    tmp_assign_source_11 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_5_cryptography_has_rsa_oaep_md(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_rsa_oaep_md, tmp_assign_source_11 );
    tmp_assign_source_12 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_6_cryptography_has_rsa_oaep_label(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_rsa_oaep_label, tmp_assign_source_12 );
    tmp_assign_source_13 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_7_cryptography_has_ssl3_method(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl3_method, tmp_assign_source_13 );
    tmp_assign_source_14 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_8_cryptography_has_alpn(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_alpn, tmp_assign_source_14 );
    tmp_assign_source_15 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_9_cryptography_has_compression(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_compression, tmp_assign_source_15 );
    tmp_assign_source_16 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_10_cryptography_has_get_server_tmp_key(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_get_server_tmp_key, tmp_assign_source_16 );
    tmp_assign_source_17 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_11_cryptography_has_102_verification_error_codes(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_0134e31627bb74f9df2edcd82a96ece3, tmp_assign_source_17 );
    tmp_assign_source_18 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_12_cryptography_has_102_verification_params(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_102_verification_params, tmp_assign_source_18 );
    tmp_assign_source_19 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_13_cryptography_has_110_verification_params(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_110_verification_params, tmp_assign_source_19 );
    tmp_assign_source_20 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_14_cryptography_has_x509_v_flag_trusted_first(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_b2405d2434f1275e2b8933b43c529fbe, tmp_assign_source_20 );
    tmp_assign_source_21 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_15_cryptography_has_x509_v_flag_partial_chain(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_89c6e3f07e56ca3212435467944ee8af, tmp_assign_source_21 );
    tmp_assign_source_22 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_16_cryptography_has_set_cert_cb(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_set_cert_cb, tmp_assign_source_22 );
    tmp_assign_source_23 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_17_cryptography_has_ssl_st(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl_st, tmp_assign_source_23 );
    tmp_assign_source_24 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_18_cryptography_has_tls_st(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_tls_st, tmp_assign_source_24 );
    tmp_assign_source_25 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_19_cryptography_has_locking_callbacks(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_locking_callbacks, tmp_assign_source_25 );
    tmp_assign_source_26 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_20_cryptography_has_scrypt(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_scrypt, tmp_assign_source_26 );
    tmp_assign_source_27 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_21_cryptography_has_generic_dtls_method(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_generic_dtls_method, tmp_assign_source_27 );
    tmp_assign_source_28 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_22_cryptography_has_evp_pkey_dhx(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_evp_pkey_dhx, tmp_assign_source_28 );
    tmp_assign_source_29 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_23_cryptography_has_mem_functions(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_mem_functions, tmp_assign_source_29 );
    tmp_assign_source_30 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_24_cryptography_has_sct(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_sct, tmp_assign_source_30 );
    tmp_assign_source_31 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_25_cryptography_has_x509_store_ctx_get_issuer(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_b532ee08e2c9464270b0cf4cd8c73f33, tmp_assign_source_31 );
    tmp_assign_source_32 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_26_cryptography_has_x25519(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_x25519, tmp_assign_source_32 );
    tmp_assign_source_33 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_27_cryptography_has_x448(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_x448, tmp_assign_source_33 );
    tmp_assign_source_34 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_28_cryptography_has_ed448(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ed448, tmp_assign_source_34 );
    tmp_assign_source_35 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_29_cryptography_has_ed25519(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ed25519, tmp_assign_source_35 );
    tmp_assign_source_36 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_30_cryptography_has_poly1305(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_poly1305, tmp_assign_source_36 );
    tmp_assign_source_37 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_31_cryptography_has_oneshot_evp_digest_sign_verify(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_5e36ac0615fb0e6445b1e014cca7bd54, tmp_assign_source_37 );
    tmp_assign_source_38 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_32_cryptography_has_evp_digestfinal_xof(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_evp_digestfinal_xof, tmp_assign_source_38 );
    tmp_assign_source_39 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_33_cryptography_has_evp_pkey_get_set_tls_encodedpoint(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_38eba4904dfc59e8c0458109674fe900, tmp_assign_source_39 );
    tmp_assign_source_40 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_34_cryptography_has_fips(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_fips, tmp_assign_source_40 );
    tmp_assign_source_41 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_35_cryptography_has_ssl_sigalgs(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl_sigalgs, tmp_assign_source_41 );
    tmp_assign_source_42 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_36_cryptography_has_psk(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_psk, tmp_assign_source_42 );
    tmp_assign_source_43 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_37_cryptography_has_custom_ext(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_custom_ext, tmp_assign_source_43 );
    tmp_assign_source_44 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_38_cryptography_has_openssl_cleanup(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_openssl_cleanup, tmp_assign_source_44 );
    tmp_assign_source_45 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_39_cryptography_has_cipher_details(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_cipher_details, tmp_assign_source_45 );
    tmp_assign_source_46 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_40_cryptography_has_tlsv13(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_tlsv13, tmp_assign_source_46 );
    tmp_assign_source_47 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_41_cryptography_has_raw_key(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_raw_key, tmp_assign_source_47 );
    tmp_assign_source_48 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_42_cryptography_has_evp_r_memory_limit_exceeded(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_8535fc31daf81b5f04208070d851f01e, tmp_assign_source_48 );
    tmp_assign_source_49 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_43_cryptography_has_engine(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_engine, tmp_assign_source_49 );
    tmp_assign_source_50 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_44_cryptography_has_verified_chain(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_verified_chain, tmp_assign_source_50 );
    tmp_assign_source_51 = _PyDict_NewPresized( 44 );
    tmp_dict_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ec2m );

    if (unlikely( tmp_dict_value_1 == NULL ))
    {
        tmp_dict_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_ec2m );
    }

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_Cryptography_HAS_EC2M;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ec_1_0_2 );

    if (unlikely( tmp_dict_value_2 == NULL ))
    {
        tmp_dict_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_ec_1_0_2 );
    }

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_Cryptography_HAS_EC_1_0_2;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_set_ecdh_auto );

    if (unlikely( tmp_dict_value_3 == NULL ))
    {
        tmp_dict_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_set_ecdh_auto );
    }

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_Cryptography_HAS_SET_ECDH_AUTO;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_8f29b4e065ff2a78b40f0f2a8209f3b9 );

    if (unlikely( tmp_dict_value_4 == NULL ))
    {
        tmp_dict_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_digest_8f29b4e065ff2a78b40f0f2a8209f3b9 );
    }

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_digest_f2f56e52e9bead94215489df18f9e023;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_rsa_oaep_md );

    if (unlikely( tmp_dict_value_5 == NULL ))
    {
        tmp_dict_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_rsa_oaep_md );
    }

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_dict_key_5 = const_str_plain_Cryptography_HAS_RSA_OAEP_MD;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_rsa_oaep_label );

    if (unlikely( tmp_dict_value_6 == NULL ))
    {
        tmp_dict_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_rsa_oaep_label );
    }

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dict_key_6 = const_str_plain_Cryptography_HAS_RSA_OAEP_LABEL;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_7 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl3_method );

    if (unlikely( tmp_dict_value_7 == NULL ))
    {
        tmp_dict_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl3_method );
    }

    CHECK_OBJECT( tmp_dict_value_7 );
    tmp_dict_key_7 = const_str_plain_Cryptography_HAS_SSL3_METHOD;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_8 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_alpn );

    if (unlikely( tmp_dict_value_8 == NULL ))
    {
        tmp_dict_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_alpn );
    }

    CHECK_OBJECT( tmp_dict_value_8 );
    tmp_dict_key_8 = const_str_plain_Cryptography_HAS_ALPN;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_9 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_compression );

    if (unlikely( tmp_dict_value_9 == NULL ))
    {
        tmp_dict_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_compression );
    }

    CHECK_OBJECT( tmp_dict_value_9 );
    tmp_dict_key_9 = const_str_plain_Cryptography_HAS_COMPRESSION;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_9, tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_10 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_get_server_tmp_key );

    if (unlikely( tmp_dict_value_10 == NULL ))
    {
        tmp_dict_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_get_server_tmp_key );
    }

    CHECK_OBJECT( tmp_dict_value_10 );
    tmp_dict_key_10 = const_str_plain_Cryptography_HAS_GET_SERVER_TMP_KEY;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_10, tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_11 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_0134e31627bb74f9df2edcd82a96ece3 );

    if (unlikely( tmp_dict_value_11 == NULL ))
    {
        tmp_dict_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_digest_0134e31627bb74f9df2edcd82a96ece3 );
    }

    CHECK_OBJECT( tmp_dict_value_11 );
    tmp_dict_key_11 = const_str_digest_2fcc949fb99081eda00ddcfc8aa01f9a;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_11, tmp_dict_value_11 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_12 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_102_verification_params );

    if (unlikely( tmp_dict_value_12 == NULL ))
    {
        tmp_dict_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_102_verification_params );
    }

    CHECK_OBJECT( tmp_dict_value_12 );
    tmp_dict_key_12 = const_str_plain_Cryptography_HAS_102_VERIFICATION_PARAMS;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_12, tmp_dict_value_12 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_13 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_110_verification_params );

    if (unlikely( tmp_dict_value_13 == NULL ))
    {
        tmp_dict_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_110_verification_params );
    }

    CHECK_OBJECT( tmp_dict_value_13 );
    tmp_dict_key_13 = const_str_plain_Cryptography_HAS_110_VERIFICATION_PARAMS;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_13, tmp_dict_value_13 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_14 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_b2405d2434f1275e2b8933b43c529fbe );

    if (unlikely( tmp_dict_value_14 == NULL ))
    {
        tmp_dict_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_digest_b2405d2434f1275e2b8933b43c529fbe );
    }

    CHECK_OBJECT( tmp_dict_value_14 );
    tmp_dict_key_14 = const_str_digest_0a25da58d8b65f965de99956a1b5aad7;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_14, tmp_dict_value_14 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_15 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_89c6e3f07e56ca3212435467944ee8af );

    if (unlikely( tmp_dict_value_15 == NULL ))
    {
        tmp_dict_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_digest_89c6e3f07e56ca3212435467944ee8af );
    }

    CHECK_OBJECT( tmp_dict_value_15 );
    tmp_dict_key_15 = const_str_digest_96e83fdb049b186bfc982a4b37cdf168;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_15, tmp_dict_value_15 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_16 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_set_cert_cb );

    if (unlikely( tmp_dict_value_16 == NULL ))
    {
        tmp_dict_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_set_cert_cb );
    }

    CHECK_OBJECT( tmp_dict_value_16 );
    tmp_dict_key_16 = const_str_plain_Cryptography_HAS_SET_CERT_CB;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_16, tmp_dict_value_16 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_17 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl_st );

    if (unlikely( tmp_dict_value_17 == NULL ))
    {
        tmp_dict_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl_st );
    }

    CHECK_OBJECT( tmp_dict_value_17 );
    tmp_dict_key_17 = const_str_plain_Cryptography_HAS_SSL_ST;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_17, tmp_dict_value_17 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_18 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_tls_st );

    if (unlikely( tmp_dict_value_18 == NULL ))
    {
        tmp_dict_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_tls_st );
    }

    CHECK_OBJECT( tmp_dict_value_18 );
    tmp_dict_key_18 = const_str_plain_Cryptography_HAS_TLS_ST;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_18, tmp_dict_value_18 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_19 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_locking_callbacks );

    if (unlikely( tmp_dict_value_19 == NULL ))
    {
        tmp_dict_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_locking_callbacks );
    }

    CHECK_OBJECT( tmp_dict_value_19 );
    tmp_dict_key_19 = const_str_plain_Cryptography_HAS_LOCKING_CALLBACKS;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_19, tmp_dict_value_19 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_20 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_scrypt );

    if (unlikely( tmp_dict_value_20 == NULL ))
    {
        tmp_dict_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_scrypt );
    }

    CHECK_OBJECT( tmp_dict_value_20 );
    tmp_dict_key_20 = const_str_plain_Cryptography_HAS_SCRYPT;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_20, tmp_dict_value_20 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_21 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_generic_dtls_method );

    if (unlikely( tmp_dict_value_21 == NULL ))
    {
        tmp_dict_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_generic_dtls_method );
    }

    CHECK_OBJECT( tmp_dict_value_21 );
    tmp_dict_key_21 = const_str_plain_Cryptography_HAS_GENERIC_DTLS_METHOD;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_21, tmp_dict_value_21 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_22 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_evp_pkey_dhx );

    if (unlikely( tmp_dict_value_22 == NULL ))
    {
        tmp_dict_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_evp_pkey_dhx );
    }

    CHECK_OBJECT( tmp_dict_value_22 );
    tmp_dict_key_22 = const_str_plain_Cryptography_HAS_EVP_PKEY_DHX;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_22, tmp_dict_value_22 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_23 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_mem_functions );

    if (unlikely( tmp_dict_value_23 == NULL ))
    {
        tmp_dict_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_mem_functions );
    }

    CHECK_OBJECT( tmp_dict_value_23 );
    tmp_dict_key_23 = const_str_plain_Cryptography_HAS_MEM_FUNCTIONS;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_23, tmp_dict_value_23 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_24 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_sct );

    if (unlikely( tmp_dict_value_24 == NULL ))
    {
        tmp_dict_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_sct );
    }

    CHECK_OBJECT( tmp_dict_value_24 );
    tmp_dict_key_24 = const_str_plain_Cryptography_HAS_SCT;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_24, tmp_dict_value_24 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_25 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_b532ee08e2c9464270b0cf4cd8c73f33 );

    if (unlikely( tmp_dict_value_25 == NULL ))
    {
        tmp_dict_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_digest_b532ee08e2c9464270b0cf4cd8c73f33 );
    }

    CHECK_OBJECT( tmp_dict_value_25 );
    tmp_dict_key_25 = const_str_digest_d2c4bd506cf66a4d1c7adfe4f312872c;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_25, tmp_dict_value_25 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_26 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_x25519 );

    if (unlikely( tmp_dict_value_26 == NULL ))
    {
        tmp_dict_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_x25519 );
    }

    CHECK_OBJECT( tmp_dict_value_26 );
    tmp_dict_key_26 = const_str_plain_Cryptography_HAS_X25519;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_26, tmp_dict_value_26 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_27 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_x448 );

    if (unlikely( tmp_dict_value_27 == NULL ))
    {
        tmp_dict_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_x448 );
    }

    CHECK_OBJECT( tmp_dict_value_27 );
    tmp_dict_key_27 = const_str_plain_Cryptography_HAS_X448;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_27, tmp_dict_value_27 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_28 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ed448 );

    if (unlikely( tmp_dict_value_28 == NULL ))
    {
        tmp_dict_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_ed448 );
    }

    CHECK_OBJECT( tmp_dict_value_28 );
    tmp_dict_key_28 = const_str_plain_Cryptography_HAS_ED448;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_28, tmp_dict_value_28 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_29 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ed25519 );

    if (unlikely( tmp_dict_value_29 == NULL ))
    {
        tmp_dict_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_ed25519 );
    }

    CHECK_OBJECT( tmp_dict_value_29 );
    tmp_dict_key_29 = const_str_plain_Cryptography_HAS_ED25519;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_29, tmp_dict_value_29 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_30 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_poly1305 );

    if (unlikely( tmp_dict_value_30 == NULL ))
    {
        tmp_dict_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_poly1305 );
    }

    CHECK_OBJECT( tmp_dict_value_30 );
    tmp_dict_key_30 = const_str_plain_Cryptography_HAS_POLY1305;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_30, tmp_dict_value_30 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_31 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_5e36ac0615fb0e6445b1e014cca7bd54 );

    if (unlikely( tmp_dict_value_31 == NULL ))
    {
        tmp_dict_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_digest_5e36ac0615fb0e6445b1e014cca7bd54 );
    }

    CHECK_OBJECT( tmp_dict_value_31 );
    tmp_dict_key_31 = const_str_digest_08906fb95f8ef4a836f252aa7b12b1cf;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_31, tmp_dict_value_31 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_32 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_38eba4904dfc59e8c0458109674fe900 );

    if (unlikely( tmp_dict_value_32 == NULL ))
    {
        tmp_dict_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_digest_38eba4904dfc59e8c0458109674fe900 );
    }

    CHECK_OBJECT( tmp_dict_value_32 );
    tmp_dict_key_32 = const_str_digest_c8d4ed7f56a6990e5028c35f4876f90c;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_32, tmp_dict_value_32 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_33 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_fips );

    if (unlikely( tmp_dict_value_33 == NULL ))
    {
        tmp_dict_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_fips );
    }

    CHECK_OBJECT( tmp_dict_value_33 );
    tmp_dict_key_33 = const_str_plain_Cryptography_HAS_FIPS;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_33, tmp_dict_value_33 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_34 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl_sigalgs );

    if (unlikely( tmp_dict_value_34 == NULL ))
    {
        tmp_dict_value_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl_sigalgs );
    }

    CHECK_OBJECT( tmp_dict_value_34 );
    tmp_dict_key_34 = const_str_plain_Cryptography_HAS_SIGALGS;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_34, tmp_dict_value_34 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_35 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_psk );

    if (unlikely( tmp_dict_value_35 == NULL ))
    {
        tmp_dict_value_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_psk );
    }

    CHECK_OBJECT( tmp_dict_value_35 );
    tmp_dict_key_35 = const_str_plain_Cryptography_HAS_PSK;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_35, tmp_dict_value_35 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_36 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_custom_ext );

    if (unlikely( tmp_dict_value_36 == NULL ))
    {
        tmp_dict_value_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_custom_ext );
    }

    CHECK_OBJECT( tmp_dict_value_36 );
    tmp_dict_key_36 = const_str_plain_Cryptography_HAS_CUSTOM_EXT;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_36, tmp_dict_value_36 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_37 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_openssl_cleanup );

    if (unlikely( tmp_dict_value_37 == NULL ))
    {
        tmp_dict_value_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_openssl_cleanup );
    }

    CHECK_OBJECT( tmp_dict_value_37 );
    tmp_dict_key_37 = const_str_plain_Cryptography_HAS_OPENSSL_CLEANUP;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_37, tmp_dict_value_37 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_38 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_cipher_details );

    if (unlikely( tmp_dict_value_38 == NULL ))
    {
        tmp_dict_value_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_cipher_details );
    }

    CHECK_OBJECT( tmp_dict_value_38 );
    tmp_dict_key_38 = const_str_plain_Cryptography_HAS_CIPHER_DETAILS;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_38, tmp_dict_value_38 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_39 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_tlsv13 );

    if (unlikely( tmp_dict_value_39 == NULL ))
    {
        tmp_dict_value_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_tlsv13 );
    }

    CHECK_OBJECT( tmp_dict_value_39 );
    tmp_dict_key_39 = const_str_plain_Cryptography_HAS_TLSv1_3;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_39, tmp_dict_value_39 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_40 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_raw_key );

    if (unlikely( tmp_dict_value_40 == NULL ))
    {
        tmp_dict_value_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_raw_key );
    }

    CHECK_OBJECT( tmp_dict_value_40 );
    tmp_dict_key_40 = const_str_plain_Cryptography_HAS_RAW_KEY;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_40, tmp_dict_value_40 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_41 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_evp_digestfinal_xof );

    if (unlikely( tmp_dict_value_41 == NULL ))
    {
        tmp_dict_value_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_evp_digestfinal_xof );
    }

    CHECK_OBJECT( tmp_dict_value_41 );
    tmp_dict_key_41 = const_str_plain_Cryptography_HAS_EVP_DIGESTFINAL_XOF;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_41, tmp_dict_value_41 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_42 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_8535fc31daf81b5f04208070d851f01e );

    if (unlikely( tmp_dict_value_42 == NULL ))
    {
        tmp_dict_value_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_digest_8535fc31daf81b5f04208070d851f01e );
    }

    CHECK_OBJECT( tmp_dict_value_42 );
    tmp_dict_key_42 = const_str_digest_5ebdc304a856f17bec9566811cc3653b;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_42, tmp_dict_value_42 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_43 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_engine );

    if (unlikely( tmp_dict_value_43 == NULL ))
    {
        tmp_dict_value_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_engine );
    }

    CHECK_OBJECT( tmp_dict_value_43 );
    tmp_dict_key_43 = const_str_plain_Cryptography_HAS_ENGINE;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_43, tmp_dict_value_43 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_44 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_verified_chain );

    if (unlikely( tmp_dict_value_44 == NULL ))
    {
        tmp_dict_value_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_verified_chain );
    }

    CHECK_OBJECT( tmp_dict_value_44 );
    tmp_dict_key_44 = const_str_plain_Cryptography_HAS_VERIFIED_CHAIN;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_44, tmp_dict_value_44 );
    assert( !(tmp_res != 0) );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_CONDITIONAL_NAMES, tmp_assign_source_51 );

    return MOD_RETURN_VALUE( module_cryptography$hazmat$bindings$openssl$_conditional );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
