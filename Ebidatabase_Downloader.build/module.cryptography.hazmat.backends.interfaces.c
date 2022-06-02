/* Generated code for Python source for module 'cryptography.hazmat.backends.interfaces'
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

/* The _module_cryptography$hazmat$backends$interfaces is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$backends$interfaces;
PyDictObject *moduledict_cryptography$hazmat$backends$interfaces;

/* The module constants used, if any. */
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_load_der_public_key;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_generate_dh_private_key;
static PyObject *const_str_digest_3be54078b9bd767d7e0767b5226c3e60;
extern PyObject *const_str_plain_pbkdf2_hmac_supported;
extern PyObject *const_tuple_str_plain_self_str_plain_data_tuple;
extern PyObject *const_str_plain_create_x509_revoked_certificate;
extern PyObject *const_str_plain_generate_rsa_private_key;
extern PyObject *const_str_plain_x509_name_bytes;
static PyObject *const_str_digest_84a9b90f7e986466b5f551b58b5724d7;
static PyObject *const_str_digest_71f31f6c62b756a0153edb43b508ea72;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_generate_dsa_private_key_and_parameters;
extern PyObject *const_str_plain_cmac_algorithm_supported;
extern PyObject *const_str_plain_salt;
extern PyObject *const_str_plain_generate_dh_private_key_and_parameters;
extern PyObject *const_str_plain_generate_dsa_parameters;
static PyObject *const_tuple_str_plain_self_str_plain_parameters_tuple;
static PyObject *const_str_digest_c0bf5d81d20e7eb0288d1c3ad78eeb28;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain_parameters;
static PyObject *const_str_digest_4ac388cc3596594b9fd1573ef2539537;
extern PyObject *const_str_plain_data;
extern PyObject *const_tuple_str_plain_self_str_plain_public_exponent_str_plain_key_size_tuple;
static PyObject *const_tuple_0df4240bd377cb517475e76f8ce07ac2_tuple;
extern PyObject *const_str_plain_iterations;
extern PyObject *const_str_plain_abstractmethod;
extern PyObject *const_tuple_str_plain_self_str_plain_cipher_str_plain_mode_tuple;
static PyObject *const_str_digest_39ea98a078b45b6c442185503b966df2;
static PyObject *const_str_digest_3552c2706bf0622b7fcc4e5c6e7975ed;
static PyObject *const_str_digest_844858cfc3f176cb25cb563fa156777b;
extern PyObject *const_str_plain_create_hash_ctx;
static PyObject *const_str_digest_802d8f8fd7de6f6609d7f954c8f40bf6;
extern PyObject *const_tuple_str_plain_self_str_plain_curve_tuple;
static PyObject *const_str_digest_b436da15690b01b9c2fa78c41a227f26;
extern PyObject *const_str_plain_RSABackend;
static PyObject *const_str_digest_d57a4d29065ab4a1f221ca9cc91f876b;
extern PyObject *const_str_plain_load_rsa_private_numbers;
static PyObject *const_str_digest_4c0fc62fa075fc302d7e12cdc2b1a3c6;
extern PyObject *const_str_plain_derive_pbkdf2_hmac;
extern PyObject *const_str_plain_algorithm;
static PyObject *const_str_digest_a25814a7003287ed48ae69a3e2c8571e;
extern PyObject *const_str_plain_curve;
extern PyObject *const_str_plain_load_der_private_key;
extern PyObject *const_str_plain_PEMSerializationBackend;
static PyObject *const_str_digest_25517886b3a6e05088fb43990d2543ca;
extern PyObject *const_str_plain_generate_dh_parameters;
extern PyObject *const_str_plain_HMACBackend;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_plain_PBKDF2HMACBackend;
static PyObject *const_str_digest_f0e494b50e5b866fcff26cb8f400c7a1;
extern PyObject *const_str_plain_create_x509_certificate;
extern PyObject *const_str_plain_EllipticCurveBackend;
extern PyObject *const_str_plain_create_cmac_ctx;
static PyObject *const_str_digest_be2baefacd213848c3218d58e5337d00;
extern PyObject *const_str_plain_signature_algorithm;
extern PyObject *const_str_plain_numbers;
static PyObject *const_str_digest_be637128b04df99668b57250bcb90304;
extern PyObject *const_str_plain_generator;
static PyObject *const_str_digest_4d1cd79c69148c2c65a70d73a3298974;
extern PyObject *const_tuple_str_plain_self_str_plain_padding_tuple;
static PyObject *const_str_digest_28f4468d6c9734e18c72bd5ca6760f2c;
extern PyObject *const_str_plain_private_key;
extern PyObject *const_str_plain_load_der_x509_csr;
extern PyObject *const_str_plain_create_symmetric_encryption_ctx;
extern PyObject *const_str_plain_rsa_padding_supported;
extern PyObject *const_str_plain_create_hmac_ctx;
extern PyObject *const_str_plain_abc;
extern PyObject *const_str_plain_DERSerializationBackend;
static PyObject *const_str_digest_8e914904ff9e228505332d098348b4f9;
extern PyObject *const_tuple_str_plain_self_str_plain_algorithm_str_plain_curve_tuple;
extern PyObject *const_str_plain_create_x509_crl;
static PyObject *const_str_digest_e9c17f9e6a2cfa9137494e7cce4ddb68;
static PyObject *const_str_digest_ea519da6621b2e6e31eb85b5c326163a;
extern PyObject *const_tuple_str_plain_self_str_plain_p_str_plain_g_str_plain_q_tuple;
static PyObject *const_str_digest_e1c5adc9b07ec3f7de94455dc60c1c17;
extern PyObject *const_str_digest_dd100ab5223cfe86cc19d075c4c9e8d3;
extern PyObject *const_str_plain_CMACBackend;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_X509Backend;
static PyObject *const_str_digest_7b42f6a1029a280baccadb6ba9d7ebc2;
static PyObject *const_str_digest_2a51df9642a3dcdb589c8f1b9733a429;
static PyObject *const_str_digest_d9e232185946daeca898e40c39f68e36;
extern PyObject *const_str_plain_key_material;
extern PyObject *const_str_plain_generate_elliptic_curve_private_key;
extern PyObject *const_str_plain_private_value;
extern PyObject *const_str_plain_load_pem_x509_certificate;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_digest_624798dd704a8f07276d3e75153a7c4b;
extern PyObject *const_str_plain_load_der_parameters;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_elliptic_curve_supported;
static PyObject *const_str_digest_8184e067c7b3318913c3d0af6b23b2b9;
static PyObject *const_tuple_str_plain_self_str_plain_builder_tuple;
extern PyObject *const_str_plain_mode;
static PyObject *const_str_digest_36ba26e04775ce62acc2dcd612c29d46;
static PyObject *const_tuple_63f249e20181d69efd847aace0409a8e_tuple;
static PyObject *const_str_digest_e4a6caad51a69cf6559e60044f2d3dbd;
extern PyObject *const_str_plain_load_pem_parameters;
static PyObject *const_str_digest_9d40568e0a0973abf5fe84776e9bb1b7;
extern PyObject *const_str_plain_public_exponent;
static PyObject *const_str_digest_692d8108005f88d96ef98564f6598985;
static PyObject *const_str_digest_1fd991e1ec7a538f20fe33eb5a63c23a;
static PyObject *const_str_digest_d7343ee22e2272ac73afb381205bd004;
extern PyObject *const_str_plain_load_dsa_parameter_numbers;
extern PyObject *const_str_plain_builder;
extern PyObject *const_str_plain_load_dh_public_numbers;
static PyObject *const_str_digest_e05d2a8640d15d821ac8931cff3ceeb6;
extern PyObject *const_str_plain_DHBackend;
static PyObject *const_str_digest_cad1312c0a8ed12faaeb2b2356b3f42c;
static PyObject *const_tuple_str_plain_self_str_plain_key_size_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_private_value_str_plain_curve_tuple;
extern PyObject *const_str_plain_dh_x942_serialization_supported;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_load_elliptic_curve_private_numbers;
extern PyObject *const_str_plain_derive_elliptic_curve_private_key;
extern PyObject *const_str_digest_19dba398fcfd0968a3203d943a394d68;
static PyObject *const_str_digest_d5ab83d9695f4da166c2e74669073e5a;
extern PyObject *const_str_plain_load_elliptic_curve_public_numbers;
extern PyObject *const_str_plain_load_dsa_private_numbers;
static PyObject *const_str_digest_6f04a0ccb7544097cd875c7c31834e6f;
extern PyObject *const_str_plain_dsa_hash_supported;
extern PyObject *const_str_plain_create_x509_csr;
extern PyObject *const_str_plain_n;
static PyObject *const_str_digest_06e3225334eb391348195f4973a16cbd;
extern PyObject *const_str_plain_hash_supported;
static PyObject *const_str_digest_2f9695857620d6d2233ed0e7e24be4e6;
extern PyObject *const_str_plain_g;
static PyObject *const_str_digest_5821e221916481c3f38394f7778eebff;
extern PyObject *const_str_plain_generate_rsa_parameters_supported;
extern PyObject *const_str_plain_load_pem_x509_csr;
static PyObject *const_str_digest_a7328ecdb816372bec3cb1ca678a22bb;
static PyObject *const_str_digest_dc1c83583d36fa154969d46c16a00fa5;
extern PyObject *const_tuple_str_plain_self_str_plain_data_str_plain_password_tuple;
extern PyObject *const_str_plain_load_dsa_public_numbers;
extern PyObject *const_str_plain_generate_dsa_private_key;
extern PyObject *const_str_plain_key_size;
extern PyObject *const_tuple_str_plain_self_str_plain_signature_algorithm_str_plain_curve_tuple;
extern PyObject *const_str_plain_HashBackend;
static PyObject *const_str_digest_247fa6c22e9ec30ce463446f28335d75;
extern PyObject *const_str_plain_q;
extern PyObject *const_str_plain_r;
static PyObject *const_str_digest_a37049685fe61ee43f425ff3884244a8;
extern PyObject *const_str_plain_cipher_supported;
static PyObject *const_str_digest_3efa1d11c5d8421580b0e5c4821ccde0;
static PyObject *const_str_digest_e5bb0ce7e7381f786f9677c69b442e65;
extern PyObject *const_str_plain_password;
extern PyObject *const_tuple_str_plain_self_str_plain_name_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_key_str_plain_algorithm_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_p_str_plain_q_str_plain_g_tuple;
extern PyObject *const_str_plain_padding;
extern PyObject *const_str_plain_CipherBackend;
extern PyObject *const_tuple_str_plain_self_str_plain_algorithm_tuple;
static PyObject *const_str_digest_ddd3f25408786f407733d646162f8d59;
extern PyObject *const_str_plain_dsa_parameters_supported;
extern PyObject *const_str_plain_create_symmetric_decryption_ctx;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_DSABackend;
extern PyObject *const_str_plain_load_dh_parameter_numbers;
static PyObject *const_str_digest_6a83a3310dae744ebfd328dac16db727;
static PyObject *const_str_digest_ae098508dd4bf88f8bb4a07250bc5a8b;
extern PyObject *const_tuple_str_plain_self_str_plain_generator_str_plain_key_size_tuple;
extern PyObject *const_str_plain_length;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_7f30278a4fcb72c48b5cd4ea5d079914;
static PyObject *const_tuple_str_plain_self_str_plain_numbers_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_digest_12bf30ea148596af8b3db51961b172df;
extern PyObject *const_str_plain_six;
static PyObject *const_str_digest_a4c797d45dd48ad8578fe46499751f24;
static PyObject *const_str_digest_df210813cecf8d389a6a11cbd910135b;
static PyObject *const_str_digest_6314fa7c6fc48e2b2c8702ed369f8da8;
extern PyObject *const_str_plain_cipher;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_load_pem_public_key;
extern PyObject *const_str_plain_dh_parameters_supported;
extern PyObject *const_str_plain_load_rsa_public_numbers;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_load_dh_private_numbers;
extern PyObject *const_str_plain_load_pem_private_key;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_add_metaclass;
static PyObject *const_tuple_9b0b58b585c03854ddedb55d2370bf31_tuple;
extern PyObject *const_str_plain_derive_scrypt;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_load_der_x509_certificate;
static PyObject *const_str_digest_91cef7da9413817b1df5f9f543c1b117;
extern PyObject *const_str_plain_ScryptBackend;
static PyObject *const_str_digest_e908e8afe1a83e928d0bef8e329dc68a;
extern PyObject *const_str_plain_ABCMeta;
extern PyObject *const_str_plain_hmac_supported;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_3be54078b9bd767d7e0767b5226c3e60 = UNSTREAM_STRING( &constant_bin[ 640471 ], 66, 0 );
    const_str_digest_84a9b90f7e986466b5f551b58b5724d7 = UNSTREAM_STRING( &constant_bin[ 640537 ], 76, 0 );
    const_str_digest_71f31f6c62b756a0153edb43b508ea72 = UNSTREAM_STRING( &constant_bin[ 640613 ], 51, 0 );
    const_tuple_str_plain_self_str_plain_parameters_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_parameters_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_parameters_tuple, 1, const_str_plain_parameters ); Py_INCREF( const_str_plain_parameters );
    const_str_digest_c0bf5d81d20e7eb0288d1c3ad78eeb28 = UNSTREAM_STRING( &constant_bin[ 640664 ], 84, 0 );
    const_str_digest_4ac388cc3596594b9fd1573ef2539537 = UNSTREAM_STRING( &constant_bin[ 640748 ], 80, 0 );
    const_tuple_0df4240bd377cb517475e76f8ce07ac2_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_0df4240bd377cb517475e76f8ce07ac2_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_0df4240bd377cb517475e76f8ce07ac2_tuple, 1, const_str_plain_key_material ); Py_INCREF( const_str_plain_key_material );
    PyTuple_SET_ITEM( const_tuple_0df4240bd377cb517475e76f8ce07ac2_tuple, 2, const_str_plain_salt ); Py_INCREF( const_str_plain_salt );
    PyTuple_SET_ITEM( const_tuple_0df4240bd377cb517475e76f8ce07ac2_tuple, 3, const_str_plain_length ); Py_INCREF( const_str_plain_length );
    PyTuple_SET_ITEM( const_tuple_0df4240bd377cb517475e76f8ce07ac2_tuple, 4, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_0df4240bd377cb517475e76f8ce07ac2_tuple, 5, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_0df4240bd377cb517475e76f8ce07ac2_tuple, 6, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    const_str_digest_39ea98a078b45b6c442185503b966df2 = UNSTREAM_STRING( &constant_bin[ 640828 ], 70, 0 );
    const_str_digest_3552c2706bf0622b7fcc4e5c6e7975ed = UNSTREAM_STRING( &constant_bin[ 640898 ], 132, 0 );
    const_str_digest_844858cfc3f176cb25cb563fa156777b = UNSTREAM_STRING( &constant_bin[ 641030 ], 120, 0 );
    const_str_digest_802d8f8fd7de6f6609d7f954c8f40bf6 = UNSTREAM_STRING( &constant_bin[ 641150 ], 122, 0 );
    const_str_digest_b436da15690b01b9c2fa78c41a227f26 = UNSTREAM_STRING( &constant_bin[ 641272 ], 59, 0 );
    const_str_digest_d57a4d29065ab4a1f221ca9cc91f876b = UNSTREAM_STRING( &constant_bin[ 641331 ], 67, 0 );
    const_str_digest_4c0fc62fa075fc302d7e12cdc2b1a3c6 = UNSTREAM_STRING( &constant_bin[ 641398 ], 100, 0 );
    const_str_digest_a25814a7003287ed48ae69a3e2c8571e = UNSTREAM_STRING( &constant_bin[ 641498 ], 85, 0 );
    const_str_digest_25517886b3a6e05088fb43990d2543ca = UNSTREAM_STRING( &constant_bin[ 641583 ], 71, 0 );
    const_str_digest_f0e494b50e5b866fcff26cb8f400c7a1 = UNSTREAM_STRING( &constant_bin[ 641654 ], 119, 0 );
    const_str_digest_be2baefacd213848c3218d58e5337d00 = UNSTREAM_STRING( &constant_bin[ 641773 ], 52, 0 );
    const_str_digest_be637128b04df99668b57250bcb90304 = UNSTREAM_STRING( &constant_bin[ 641825 ], 84, 0 );
    const_str_digest_4d1cd79c69148c2c65a70d73a3298974 = UNSTREAM_STRING( &constant_bin[ 641909 ], 121, 0 );
    const_str_digest_28f4468d6c9734e18c72bd5ca6760f2c = UNSTREAM_STRING( &constant_bin[ 642030 ], 58, 0 );
    const_str_digest_8e914904ff9e228505332d098348b4f9 = UNSTREAM_STRING( &constant_bin[ 642088 ], 88, 0 );
    const_str_digest_e9c17f9e6a2cfa9137494e7cce4ddb68 = UNSTREAM_STRING( &constant_bin[ 642176 ], 51, 0 );
    const_str_digest_ea519da6621b2e6e31eb85b5c326163a = UNSTREAM_STRING( &constant_bin[ 642227 ], 87, 0 );
    const_str_digest_e1c5adc9b07ec3f7de94455dc60c1c17 = UNSTREAM_STRING( &constant_bin[ 642314 ], 81, 0 );
    const_str_digest_7b42f6a1029a280baccadb6ba9d7ebc2 = UNSTREAM_STRING( &constant_bin[ 642395 ], 127, 0 );
    const_str_digest_2a51df9642a3dcdb589c8f1b9733a429 = UNSTREAM_STRING( &constant_bin[ 642522 ], 88, 0 );
    const_str_digest_d9e232185946daeca898e40c39f68e36 = UNSTREAM_STRING( &constant_bin[ 642610 ], 60, 0 );
    const_str_digest_8184e067c7b3318913c3d0af6b23b2b9 = UNSTREAM_STRING( &constant_bin[ 642670 ], 73, 0 );
    const_tuple_str_plain_self_str_plain_builder_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_builder_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_builder_tuple, 1, const_str_plain_builder ); Py_INCREF( const_str_plain_builder );
    const_str_digest_36ba26e04775ce62acc2dcd612c29d46 = UNSTREAM_STRING( &constant_bin[ 642743 ], 58, 0 );
    const_tuple_63f249e20181d69efd847aace0409a8e_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_63f249e20181d69efd847aace0409a8e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_63f249e20181d69efd847aace0409a8e_tuple, 1, const_str_plain_algorithm ); Py_INCREF( const_str_plain_algorithm );
    PyTuple_SET_ITEM( const_tuple_63f249e20181d69efd847aace0409a8e_tuple, 2, const_str_plain_length ); Py_INCREF( const_str_plain_length );
    PyTuple_SET_ITEM( const_tuple_63f249e20181d69efd847aace0409a8e_tuple, 3, const_str_plain_salt ); Py_INCREF( const_str_plain_salt );
    PyTuple_SET_ITEM( const_tuple_63f249e20181d69efd847aace0409a8e_tuple, 4, const_str_plain_iterations ); Py_INCREF( const_str_plain_iterations );
    PyTuple_SET_ITEM( const_tuple_63f249e20181d69efd847aace0409a8e_tuple, 5, const_str_plain_key_material ); Py_INCREF( const_str_plain_key_material );
    const_str_digest_e4a6caad51a69cf6559e60044f2d3dbd = UNSTREAM_STRING( &constant_bin[ 642801 ], 72, 0 );
    const_str_digest_9d40568e0a0973abf5fe84776e9bb1b7 = UNSTREAM_STRING( &constant_bin[ 642873 ], 72, 0 );
    const_str_digest_692d8108005f88d96ef98564f6598985 = UNSTREAM_STRING( &constant_bin[ 642945 ], 81, 0 );
    const_str_digest_1fd991e1ec7a538f20fe33eb5a63c23a = UNSTREAM_STRING( &constant_bin[ 643026 ], 50, 0 );
    const_str_digest_d7343ee22e2272ac73afb381205bd004 = UNSTREAM_STRING( &constant_bin[ 643076 ], 113, 0 );
    const_str_digest_e05d2a8640d15d821ac8931cff3ceeb6 = UNSTREAM_STRING( &constant_bin[ 643189 ], 51, 0 );
    const_str_digest_cad1312c0a8ed12faaeb2b2356b3f42c = UNSTREAM_STRING( &constant_bin[ 643240 ], 59, 0 );
    const_tuple_str_plain_self_str_plain_key_size_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_key_size_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_key_size_tuple, 1, const_str_plain_key_size ); Py_INCREF( const_str_plain_key_size );
    const_tuple_str_plain_self_str_plain_private_value_str_plain_curve_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_private_value_str_plain_curve_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_private_value_str_plain_curve_tuple, 1, const_str_plain_private_value ); Py_INCREF( const_str_plain_private_value );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_private_value_str_plain_curve_tuple, 2, const_str_plain_curve ); Py_INCREF( const_str_plain_curve );
    const_str_digest_d5ab83d9695f4da166c2e74669073e5a = UNSTREAM_STRING( &constant_bin[ 643299 ], 67, 0 );
    const_str_digest_6f04a0ccb7544097cd875c7c31834e6f = UNSTREAM_STRING( &constant_bin[ 643366 ], 103, 0 );
    const_str_digest_06e3225334eb391348195f4973a16cbd = UNSTREAM_STRING( &constant_bin[ 643469 ], 59, 0 );
    const_str_digest_2f9695857620d6d2233ed0e7e24be4e6 = UNSTREAM_STRING( &constant_bin[ 643528 ], 88, 0 );
    const_str_digest_5821e221916481c3f38394f7778eebff = UNSTREAM_STRING( &constant_bin[ 643616 ], 78, 0 );
    const_str_digest_a7328ecdb816372bec3cb1ca678a22bb = UNSTREAM_STRING( &constant_bin[ 643694 ], 100, 0 );
    const_str_digest_dc1c83583d36fa154969d46c16a00fa5 = UNSTREAM_STRING( &constant_bin[ 643794 ], 48, 0 );
    const_str_digest_247fa6c22e9ec30ce463446f28335d75 = UNSTREAM_STRING( &constant_bin[ 643842 ], 42, 0 );
    const_str_digest_a37049685fe61ee43f425ff3884244a8 = UNSTREAM_STRING( &constant_bin[ 643884 ], 66, 0 );
    const_str_digest_3efa1d11c5d8421580b0e5c4821ccde0 = UNSTREAM_STRING( &constant_bin[ 643950 ], 71, 0 );
    const_str_digest_e5bb0ce7e7381f786f9677c69b442e65 = UNSTREAM_STRING( &constant_bin[ 644021 ], 86, 0 );
    const_str_digest_ddd3f25408786f407733d646162f8d59 = UNSTREAM_STRING( &constant_bin[ 644107 ], 85, 0 );
    const_str_digest_6a83a3310dae744ebfd328dac16db727 = UNSTREAM_STRING( &constant_bin[ 644192 ], 124, 0 );
    const_str_digest_ae098508dd4bf88f8bb4a07250bc5a8b = UNSTREAM_STRING( &constant_bin[ 644316 ], 86, 0 );
    const_str_digest_7f30278a4fcb72c48b5cd4ea5d079914 = UNSTREAM_STRING( &constant_bin[ 644402 ], 73, 0 );
    const_tuple_str_plain_self_str_plain_numbers_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_numbers_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_numbers_tuple, 1, const_str_plain_numbers ); Py_INCREF( const_str_plain_numbers );
    const_str_digest_12bf30ea148596af8b3db51961b172df = UNSTREAM_STRING( &constant_bin[ 644475 ], 58, 0 );
    const_str_digest_a4c797d45dd48ad8578fe46499751f24 = UNSTREAM_STRING( &constant_bin[ 644533 ], 98, 0 );
    const_str_digest_df210813cecf8d389a6a11cbd910135b = UNSTREAM_STRING( &constant_bin[ 644631 ], 101, 0 );
    const_str_digest_6314fa7c6fc48e2b2c8702ed369f8da8 = UNSTREAM_STRING( &constant_bin[ 644732 ], 81, 0 );
    const_tuple_9b0b58b585c03854ddedb55d2370bf31_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_9b0b58b585c03854ddedb55d2370bf31_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_9b0b58b585c03854ddedb55d2370bf31_tuple, 1, const_str_plain_builder ); Py_INCREF( const_str_plain_builder );
    PyTuple_SET_ITEM( const_tuple_9b0b58b585c03854ddedb55d2370bf31_tuple, 2, const_str_plain_private_key ); Py_INCREF( const_str_plain_private_key );
    PyTuple_SET_ITEM( const_tuple_9b0b58b585c03854ddedb55d2370bf31_tuple, 3, const_str_plain_algorithm ); Py_INCREF( const_str_plain_algorithm );
    const_str_digest_91cef7da9413817b1df5f9f543c1b117 = UNSTREAM_STRING( &constant_bin[ 644813 ], 102, 0 );
    const_str_digest_e908e8afe1a83e928d0bef8e329dc68a = UNSTREAM_STRING( &constant_bin[ 644915 ], 70, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$hazmat$backends$interfaces( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_80fdf1aa08533d2280106ccc74d13cee;
static PyCodeObject *codeobj_a126115ede197261320f639c94903bbb;
static PyCodeObject *codeobj_ee17979f808bc0e85bec8fe4fc377463;
static PyCodeObject *codeobj_fd9e93db906e46859f88fef582831b6a;
static PyCodeObject *codeobj_ffe5e252c62f3e9bba766713a191cf51;
static PyCodeObject *codeobj_8449dbe20ecc24dcd7f72c3f8994865f;
static PyCodeObject *codeobj_ca1a22e4230eeb8f731fdb3611440be2;
static PyCodeObject *codeobj_3f1cb989ddc3a22782c9671fa20448f6;
static PyCodeObject *codeobj_2ad8c7b160297d675b35265fdc958dcf;
static PyCodeObject *codeobj_cd7a03a6890e15862a44d6ba57f3dad5;
static PyCodeObject *codeobj_4265d672072f923138387db5dcf65cd5;
static PyCodeObject *codeobj_edd0f30df62559ffeebdd256e604d27a;
static PyCodeObject *codeobj_38fe00b0453f10ea6b916c21069fac5d;
static PyCodeObject *codeobj_13506ae3e7a2df5f2b13e536a7095d81;
static PyCodeObject *codeobj_50e565b97e77b9eaec428a1728567fb4;
static PyCodeObject *codeobj_7ad19d00ccc38185acace900e93e289d;
static PyCodeObject *codeobj_808742595476e7e50c45a2bc8ce185aa;
static PyCodeObject *codeobj_6f05c2aaff960f98ed5c9eaa9d8670b7;
static PyCodeObject *codeobj_425db2280a0682e36ca7f06ed64530fd;
static PyCodeObject *codeobj_0023f16758460fb7844fd705a383dd27;
static PyCodeObject *codeobj_1539aad93240b0de72f37c4f64b68764;
static PyCodeObject *codeobj_88b7f456280ba5d750d4318480fb36d1;
static PyCodeObject *codeobj_21758222a47f0a3802c5e86441634b05;
static PyCodeObject *codeobj_9538698cf05c82f84691652e04139ccd;
static PyCodeObject *codeobj_88e2e68cce88ed4f8a98074d1fca1e3f;
static PyCodeObject *codeobj_56c2d6ba1fe397b991bd96eaae44936d;
static PyCodeObject *codeobj_09b38d2d6ee6627d87dc48d66f8bb3c3;
static PyCodeObject *codeobj_9f270cb5ef089373204869418a63c286;
static PyCodeObject *codeobj_514e7251541022f5b3f92dacab5edc08;
static PyCodeObject *codeobj_6286ef0d35d7ce3927c9be32e4ce4dc8;
static PyCodeObject *codeobj_e93ec5f314355813404e56ed83275a8f;
static PyCodeObject *codeobj_547c8444b62cdc42eb1f1b2646003444;
static PyCodeObject *codeobj_e43034079994b12d58fdb3da6a7df244;
static PyCodeObject *codeobj_23e074866b0f56bd2101458c2cc187c8;
static PyCodeObject *codeobj_49406f84e6d410c143642405f0025809;
static PyCodeObject *codeobj_d3a623e1bedb1d574afbc73baacc5828;
static PyCodeObject *codeobj_b8881181dcfe86ef911b5a1f529281f8;
static PyCodeObject *codeobj_c79e1399d3568afa990611aee4996dae;
static PyCodeObject *codeobj_afb8f6084e2d123dd339d15df40cf13f;
static PyCodeObject *codeobj_c932f1b46184396ebbd07416f25a9f8b;
static PyCodeObject *codeobj_323cff8754d78d38809671ebb7b9346d;
static PyCodeObject *codeobj_8e266fc45c6c536fef08b99be98c7b96;
static PyCodeObject *codeobj_fddc6f349e8b17022614e71c1c543b34;
static PyCodeObject *codeobj_78346e72075d5e6b271e2f6dff6623cb;
static PyCodeObject *codeobj_5bed336c981c4b1a2152ddf4dc3624ce;
static PyCodeObject *codeobj_37a206a68dee5f982d177a6610a04a05;
static PyCodeObject *codeobj_6b7ff09f23c314aec0ecaa968eb67346;
static PyCodeObject *codeobj_f71f6c05e874b2f566bac14a3f55f8f7;
static PyCodeObject *codeobj_1d262e7e3e0b674459210dfce1057a8e;
static PyCodeObject *codeobj_a44ecf372a99c2b5e251dbb19ab1c1a2;
static PyCodeObject *codeobj_dd873799efbc7d73a6b58e574a04012e;
static PyCodeObject *codeobj_5765cfb90d8c39af0a08270540226df2;
static PyCodeObject *codeobj_64ac72e835165e428f2ec342a4e82626;
static PyCodeObject *codeobj_ca4b33637d715141dfb8f006a6b1aaaf;
static PyCodeObject *codeobj_c1b780453d428f8716a1ec6c0bbc3a23;
static PyCodeObject *codeobj_cf4219ca4dda18d4721c42ee56784e45;
static PyCodeObject *codeobj_7a74347532de750871976a8997baf8fd;
static PyCodeObject *codeobj_d1571272d65803062ffc94bfcfaf1466;
static PyCodeObject *codeobj_12ace11edcc04197706a8ee2a25772bf;
static PyCodeObject *codeobj_a71460503b4feef309d07f979509c4b8;
static PyCodeObject *codeobj_af36cfe6514c1d05e4fc8b3e691a487a;
static PyCodeObject *codeobj_7816a2049d281b524bb33c0360db90ee;
static PyCodeObject *codeobj_475f010ab3ecf9367de6b025b90118bd;
static PyCodeObject *codeobj_dfa1d36c7ff79fa7c27fb86590b0a74f;
static PyCodeObject *codeobj_57a55265c7bf23e1ab825a070e1f9b45;
static PyCodeObject *codeobj_e193c3093f3a5974264ab51830cf066c;
static PyCodeObject *codeobj_76bdd360b0a8a6689bc1d70c28d4036d;
static PyCodeObject *codeobj_edfee6ef7a5c77c14d2e578ae83f6bba;
static PyCodeObject *codeobj_0b6a0a8979926d163495c49611e28f10;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_247fa6c22e9ec30ce463446f28335d75 );
    codeobj_80fdf1aa08533d2280106ccc74d13cee = MAKE_CODEOBJ( module_filename_obj, const_str_digest_dc1c83583d36fa154969d46c16a00fa5, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a126115ede197261320f639c94903bbb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_CMACBackend, 65, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ee17979f808bc0e85bec8fe4fc377463 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_CipherBackend, 13, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fd9e93db906e46859f88fef582831b6a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_DERSerializationBackend, 254, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ffe5e252c62f3e9bba766713a191cf51 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_DHBackend, 335, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8449dbe20ecc24dcd7f72c3f8994865f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_DSABackend, 132, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ca1a22e4230eeb8f731fdb3611440be2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_EllipticCurveBackend, 184, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3f1cb989ddc3a22782c9671fa20448f6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_HMACBackend, 49, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2ad8c7b160297d675b35265fdc958dcf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_HashBackend, 34, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_cd7a03a6890e15862a44d6ba57f3dad5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_PBKDF2HMACBackend, 80, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4265d672072f923138387db5dcf65cd5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_PEMSerializationBackend, 232, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_edd0f30df62559ffeebdd256e604d27a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_RSABackend, 97, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_38fe00b0453f10ea6b916c21069fac5d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ScryptBackend, 390, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_13506ae3e7a2df5f2b13e536a7095d81 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_X509Backend, 276, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_50e565b97e77b9eaec428a1728567fb4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cipher_supported, 14, const_tuple_str_plain_self_str_plain_cipher_str_plain_mode_tuple, 3, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7ad19d00ccc38185acace900e93e289d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cmac_algorithm_supported, 66, const_tuple_str_plain_self_str_plain_algorithm_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_808742595476e7e50c45a2bc8ce185aa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_create_cmac_ctx, 72, const_tuple_str_plain_self_str_plain_algorithm_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6f05c2aaff960f98ed5c9eaa9d8670b7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_create_hash_ctx, 41, const_tuple_str_plain_self_str_plain_algorithm_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_425db2280a0682e36ca7f06ed64530fd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_create_hmac_ctx, 57, const_tuple_str_plain_self_str_plain_key_str_plain_algorithm_tuple, 3, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0023f16758460fb7844fd705a383dd27 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_create_symmetric_decryption_ctx, 26, const_tuple_str_plain_self_str_plain_cipher_str_plain_mode_tuple, 3, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1539aad93240b0de72f37c4f64b68764 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_create_symmetric_encryption_ctx, 20, const_tuple_str_plain_self_str_plain_cipher_str_plain_mode_tuple, 3, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_88b7f456280ba5d750d4318480fb36d1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_create_x509_certificate, 307, const_tuple_9b0b58b585c03854ddedb55d2370bf31_tuple, 4, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_21758222a47f0a3802c5e86441634b05 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_create_x509_crl, 313, const_tuple_9b0b58b585c03854ddedb55d2370bf31_tuple, 4, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9538698cf05c82f84691652e04139ccd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_create_x509_csr, 301, const_tuple_9b0b58b585c03854ddedb55d2370bf31_tuple, 4, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_88e2e68cce88ed4f8a98074d1fca1e3f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_create_x509_revoked_certificate, 320, const_tuple_str_plain_self_str_plain_builder_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_56c2d6ba1fe397b991bd96eaae44936d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_derive_elliptic_curve_private_key, 224, const_tuple_str_plain_self_str_plain_private_value_str_plain_curve_tuple, 3, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_09b38d2d6ee6627d87dc48d66f8bb3c3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_derive_pbkdf2_hmac, 88, const_tuple_63f249e20181d69efd847aace0409a8e_tuple, 6, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9f270cb5ef089373204869418a63c286 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_derive_scrypt, 391, const_tuple_0df4240bd377cb517475e76f8ce07ac2_tuple, 7, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_514e7251541022f5b3f92dacab5edc08 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dh_parameters_supported, 375, const_tuple_str_plain_self_str_plain_p_str_plain_g_str_plain_q_tuple, 4, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6286ef0d35d7ce3927c9be32e4ce4dc8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dh_x942_serialization_supported, 381, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e93ec5f314355813404e56ed83275a8f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dsa_hash_supported, 152, const_tuple_str_plain_self_str_plain_algorithm_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_547c8444b62cdc42eb1f1b2646003444 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dsa_parameters_supported, 158, const_tuple_str_plain_self_str_plain_p_str_plain_q_str_plain_g_tuple, 4, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e43034079994b12d58fdb3da6a7df244 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_19dba398fcfd0968a3203d943a394d68, 218, const_tuple_str_plain_self_str_plain_algorithm_str_plain_curve_tuple, 3, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_23e074866b0f56bd2101458c2cc187c8 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_dd100ab5223cfe86cc19d075c4c9e8d3, 185, const_tuple_str_plain_self_str_plain_signature_algorithm_str_plain_curve_tuple, 3, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_49406f84e6d410c143642405f0025809 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_elliptic_curve_supported, 194, const_tuple_str_plain_self_str_plain_curve_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d3a623e1bedb1d574afbc73baacc5828 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generate_dh_parameters, 336, const_tuple_str_plain_self_str_plain_generator_str_plain_key_size_tuple, 3, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b8881181dcfe86ef911b5a1f529281f8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generate_dh_private_key, 343, const_tuple_str_plain_self_str_plain_parameters_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c79e1399d3568afa990611aee4996dae = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generate_dh_private_key_and_parameters, 350, const_tuple_str_plain_self_str_plain_generator_str_plain_key_size_tuple, 3, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_afb8f6084e2d123dd339d15df40cf13f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generate_dsa_parameters, 133, const_tuple_str_plain_self_str_plain_key_size_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c932f1b46184396ebbd07416f25a9f8b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generate_dsa_private_key, 139, const_tuple_str_plain_self_str_plain_parameters_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_323cff8754d78d38809671ebb7b9346d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generate_dsa_private_key_and_parameters, 146, const_tuple_str_plain_self_str_plain_key_size_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8e266fc45c6c536fef08b99be98c7b96 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generate_elliptic_curve_private_key, 200, const_tuple_str_plain_self_str_plain_curve_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fddc6f349e8b17022614e71c1c543b34 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generate_rsa_parameters_supported, 111, const_tuple_str_plain_self_str_plain_public_exponent_str_plain_key_size_tuple, 3, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_78346e72075d5e6b271e2f6dff6623cb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generate_rsa_private_key, 98, const_tuple_str_plain_self_str_plain_public_exponent_str_plain_key_size_tuple, 3, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5bed336c981c4b1a2152ddf4dc3624ce = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hash_supported, 35, const_tuple_str_plain_self_str_plain_algorithm_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_37a206a68dee5f982d177a6610a04a05 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hmac_supported, 50, const_tuple_str_plain_self_str_plain_algorithm_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6b7ff09f23c314aec0ecaa968eb67346 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_der_parameters, 268, const_tuple_str_plain_self_str_plain_data_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f71f6c05e874b2f566bac14a3f55f8f7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_der_private_key, 255, const_tuple_str_plain_self_str_plain_data_str_plain_password_tuple, 3, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1d262e7e3e0b674459210dfce1057a8e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_der_public_key, 262, const_tuple_str_plain_self_str_plain_data_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a44ecf372a99c2b5e251dbb19ab1c1a2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_der_x509_certificate, 283, const_tuple_str_plain_self_str_plain_data_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_dd873799efbc7d73a6b58e574a04012e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_der_x509_csr, 289, const_tuple_str_plain_self_str_plain_data_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5765cfb90d8c39af0a08270540226df2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_dh_parameter_numbers, 369, const_tuple_str_plain_self_str_plain_numbers_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_64ac72e835165e428f2ec342a4e82626 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_dh_private_numbers, 357, const_tuple_str_plain_self_str_plain_numbers_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ca4b33637d715141dfb8f006a6b1aaaf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_dh_public_numbers, 363, const_tuple_str_plain_self_str_plain_numbers_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c1b780453d428f8716a1ec6c0bbc3a23 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_dsa_parameter_numbers, 176, const_tuple_str_plain_self_str_plain_numbers_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_cf4219ca4dda18d4721c42ee56784e45 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_dsa_private_numbers, 164, const_tuple_str_plain_self_str_plain_numbers_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7a74347532de750871976a8997baf8fd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_dsa_public_numbers, 170, const_tuple_str_plain_self_str_plain_numbers_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d1571272d65803062ffc94bfcfaf1466 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_elliptic_curve_private_numbers, 212, const_tuple_str_plain_self_str_plain_numbers_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_12ace11edcc04197706a8ee2a25772bf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_elliptic_curve_public_numbers, 206, const_tuple_str_plain_self_str_plain_numbers_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a71460503b4feef309d07f979509c4b8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_pem_parameters, 246, const_tuple_str_plain_self_str_plain_data_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_af36cfe6514c1d05e4fc8b3e691a487a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_pem_private_key, 233, const_tuple_str_plain_self_str_plain_data_str_plain_password_tuple, 3, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7816a2049d281b524bb33c0360db90ee = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_pem_public_key, 240, const_tuple_str_plain_self_str_plain_data_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_475f010ab3ecf9367de6b025b90118bd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_pem_x509_certificate, 277, const_tuple_str_plain_self_str_plain_data_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_dfa1d36c7ff79fa7c27fb86590b0a74f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_pem_x509_csr, 295, const_tuple_str_plain_self_str_plain_data_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_57a55265c7bf23e1ab825a070e1f9b45 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_rsa_private_numbers, 118, const_tuple_str_plain_self_str_plain_numbers_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e193c3093f3a5974264ab51830cf066c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_rsa_public_numbers, 124, const_tuple_str_plain_self_str_plain_numbers_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_76bdd360b0a8a6689bc1d70c28d4036d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_pbkdf2_hmac_supported, 81, const_tuple_str_plain_self_str_plain_algorithm_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_edfee6ef7a5c77c14d2e578ae83f6bba = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rsa_padding_supported, 105, const_tuple_str_plain_self_str_plain_padding_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0b6a0a8979926d163495c49611e28f10 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_x509_name_bytes, 327, const_tuple_str_plain_self_str_plain_name_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_10_pbkdf2_hmac_supported(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_11_derive_pbkdf2_hmac(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_12_generate_rsa_private_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_13_rsa_padding_supported(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_14_generate_rsa_parameters_supported(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_15_load_rsa_private_numbers(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_16_load_rsa_public_numbers(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_17_generate_dsa_parameters(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_18_generate_dsa_private_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_19_generate_dsa_private_key_and_parameters(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_1_cipher_supported(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_20_dsa_hash_supported(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_21_dsa_parameters_supported(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_22_load_dsa_private_numbers(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_23_load_dsa_public_numbers(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_24_load_dsa_parameter_numbers(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_25_elliptic_curve_signature_algorithm_supported(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_26_elliptic_curve_supported(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_27_generate_elliptic_curve_private_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_28_load_elliptic_curve_public_numbers(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_29_load_elliptic_curve_private_numbers(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_2_create_symmetric_encryption_ctx(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_30_elliptic_curve_exchange_algorithm_supported(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_31_derive_elliptic_curve_private_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_32_load_pem_private_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_33_load_pem_public_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_34_load_pem_parameters(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_35_load_der_private_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_36_load_der_public_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_37_load_der_parameters(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_38_load_pem_x509_certificate(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_39_load_der_x509_certificate(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_3_create_symmetric_decryption_ctx(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_40_load_der_x509_csr(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_41_load_pem_x509_csr(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_42_create_x509_csr(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_43_create_x509_certificate(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_44_create_x509_crl(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_45_create_x509_revoked_certificate(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_46_x509_name_bytes(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_47_generate_dh_parameters(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_48_generate_dh_private_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_49_generate_dh_private_key_and_parameters(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_4_hash_supported(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_50_load_dh_private_numbers(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_51_load_dh_public_numbers(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_52_load_dh_parameter_numbers(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_53_dh_parameters_supported( PyObject *defaults );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_54_dh_x942_serialization_supported(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_55_derive_scrypt(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_5_create_hash_ctx(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_6_hmac_supported(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_7_create_hmac_ctx(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_8_cmac_algorithm_supported(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_9_create_cmac_ctx(  );


// The module function definitions.
static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_1_cipher_supported( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_cipher = python_pars[ 1 ];
    PyObject *par_mode = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_1_cipher_supported );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_cipher );
    Py_DECREF( par_cipher );
    par_cipher = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_cipher );
    Py_DECREF( par_cipher );
    par_cipher = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_1_cipher_supported );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_2_create_symmetric_encryption_ctx( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_cipher = python_pars[ 1 ];
    PyObject *par_mode = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_2_create_symmetric_encryption_ctx );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_cipher );
    Py_DECREF( par_cipher );
    par_cipher = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_cipher );
    Py_DECREF( par_cipher );
    par_cipher = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_2_create_symmetric_encryption_ctx );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_3_create_symmetric_decryption_ctx( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_cipher = python_pars[ 1 ];
    PyObject *par_mode = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_3_create_symmetric_decryption_ctx );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_cipher );
    Py_DECREF( par_cipher );
    par_cipher = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_cipher );
    Py_DECREF( par_cipher );
    par_cipher = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_3_create_symmetric_decryption_ctx );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_4_hash_supported( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_algorithm = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_4_hash_supported );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_4_hash_supported );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_5_create_hash_ctx( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_algorithm = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_5_create_hash_ctx );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_5_create_hash_ctx );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_6_hmac_supported( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_algorithm = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_6_hmac_supported );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_6_hmac_supported );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_7_create_hmac_ctx( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    PyObject *par_algorithm = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_7_create_hmac_ctx );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_7_create_hmac_ctx );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_8_cmac_algorithm_supported( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_algorithm = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_8_cmac_algorithm_supported );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_8_cmac_algorithm_supported );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_9_create_cmac_ctx( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_algorithm = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_9_create_cmac_ctx );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_9_create_cmac_ctx );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_10_pbkdf2_hmac_supported( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_algorithm = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_10_pbkdf2_hmac_supported );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_10_pbkdf2_hmac_supported );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_11_derive_pbkdf2_hmac( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_algorithm = python_pars[ 1 ];
    PyObject *par_length = python_pars[ 2 ];
    PyObject *par_salt = python_pars[ 3 ];
    PyObject *par_iterations = python_pars[ 4 ];
    PyObject *par_key_material = python_pars[ 5 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_11_derive_pbkdf2_hmac );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key_material );
    Py_DECREF( par_key_material );
    par_key_material = NULL;

    CHECK_OBJECT( (PyObject *)par_length );
    Py_DECREF( par_length );
    par_length = NULL;

    CHECK_OBJECT( (PyObject *)par_iterations );
    Py_DECREF( par_iterations );
    par_iterations = NULL;

    CHECK_OBJECT( (PyObject *)par_salt );
    Py_DECREF( par_salt );
    par_salt = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key_material );
    Py_DECREF( par_key_material );
    par_key_material = NULL;

    CHECK_OBJECT( (PyObject *)par_length );
    Py_DECREF( par_length );
    par_length = NULL;

    CHECK_OBJECT( (PyObject *)par_iterations );
    Py_DECREF( par_iterations );
    par_iterations = NULL;

    CHECK_OBJECT( (PyObject *)par_salt );
    Py_DECREF( par_salt );
    par_salt = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_11_derive_pbkdf2_hmac );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_12_generate_rsa_private_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_public_exponent = python_pars[ 1 ];
    PyObject *par_key_size = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_12_generate_rsa_private_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_public_exponent );
    Py_DECREF( par_public_exponent );
    par_public_exponent = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key_size );
    Py_DECREF( par_key_size );
    par_key_size = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_public_exponent );
    Py_DECREF( par_public_exponent );
    par_public_exponent = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key_size );
    Py_DECREF( par_key_size );
    par_key_size = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_12_generate_rsa_private_key );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_13_rsa_padding_supported( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_padding = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_13_rsa_padding_supported );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_padding );
    Py_DECREF( par_padding );
    par_padding = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_padding );
    Py_DECREF( par_padding );
    par_padding = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_13_rsa_padding_supported );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_14_generate_rsa_parameters_supported( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_public_exponent = python_pars[ 1 ];
    PyObject *par_key_size = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_14_generate_rsa_parameters_supported );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_public_exponent );
    Py_DECREF( par_public_exponent );
    par_public_exponent = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key_size );
    Py_DECREF( par_key_size );
    par_key_size = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_public_exponent );
    Py_DECREF( par_public_exponent );
    par_public_exponent = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key_size );
    Py_DECREF( par_key_size );
    par_key_size = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_14_generate_rsa_parameters_supported );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_15_load_rsa_private_numbers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_numbers = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_15_load_rsa_private_numbers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_numbers );
    Py_DECREF( par_numbers );
    par_numbers = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_numbers );
    Py_DECREF( par_numbers );
    par_numbers = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_15_load_rsa_private_numbers );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_16_load_rsa_public_numbers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_numbers = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_16_load_rsa_public_numbers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_numbers );
    Py_DECREF( par_numbers );
    par_numbers = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_numbers );
    Py_DECREF( par_numbers );
    par_numbers = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_16_load_rsa_public_numbers );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_17_generate_dsa_parameters( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key_size = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_17_generate_dsa_parameters );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key_size );
    Py_DECREF( par_key_size );
    par_key_size = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key_size );
    Py_DECREF( par_key_size );
    par_key_size = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_17_generate_dsa_parameters );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_18_generate_dsa_private_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_parameters = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_18_generate_dsa_private_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_parameters );
    Py_DECREF( par_parameters );
    par_parameters = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_parameters );
    Py_DECREF( par_parameters );
    par_parameters = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_18_generate_dsa_private_key );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_19_generate_dsa_private_key_and_parameters( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key_size = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_19_generate_dsa_private_key_and_parameters );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key_size );
    Py_DECREF( par_key_size );
    par_key_size = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key_size );
    Py_DECREF( par_key_size );
    par_key_size = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_19_generate_dsa_private_key_and_parameters );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_20_dsa_hash_supported( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_algorithm = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_20_dsa_hash_supported );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_20_dsa_hash_supported );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_21_dsa_parameters_supported( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_p = python_pars[ 1 ];
    PyObject *par_q = python_pars[ 2 ];
    PyObject *par_g = python_pars[ 3 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_21_dsa_parameters_supported );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_21_dsa_parameters_supported );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_22_load_dsa_private_numbers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_numbers = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_22_load_dsa_private_numbers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_numbers );
    Py_DECREF( par_numbers );
    par_numbers = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_numbers );
    Py_DECREF( par_numbers );
    par_numbers = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_22_load_dsa_private_numbers );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_23_load_dsa_public_numbers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_numbers = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_23_load_dsa_public_numbers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_numbers );
    Py_DECREF( par_numbers );
    par_numbers = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_numbers );
    Py_DECREF( par_numbers );
    par_numbers = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_23_load_dsa_public_numbers );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_24_load_dsa_parameter_numbers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_numbers = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_24_load_dsa_parameter_numbers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_numbers );
    Py_DECREF( par_numbers );
    par_numbers = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_numbers );
    Py_DECREF( par_numbers );
    par_numbers = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_24_load_dsa_parameter_numbers );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_25_elliptic_curve_signature_algorithm_supported( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_signature_algorithm = python_pars[ 1 ];
    PyObject *par_curve = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_25_elliptic_curve_signature_algorithm_supported );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_curve );
    Py_DECREF( par_curve );
    par_curve = NULL;

    CHECK_OBJECT( (PyObject *)par_signature_algorithm );
    Py_DECREF( par_signature_algorithm );
    par_signature_algorithm = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_curve );
    Py_DECREF( par_curve );
    par_curve = NULL;

    CHECK_OBJECT( (PyObject *)par_signature_algorithm );
    Py_DECREF( par_signature_algorithm );
    par_signature_algorithm = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_25_elliptic_curve_signature_algorithm_supported );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_26_elliptic_curve_supported( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_curve = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_26_elliptic_curve_supported );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_curve );
    Py_DECREF( par_curve );
    par_curve = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_curve );
    Py_DECREF( par_curve );
    par_curve = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_26_elliptic_curve_supported );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_27_generate_elliptic_curve_private_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_curve = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_27_generate_elliptic_curve_private_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_curve );
    Py_DECREF( par_curve );
    par_curve = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_curve );
    Py_DECREF( par_curve );
    par_curve = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_27_generate_elliptic_curve_private_key );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_28_load_elliptic_curve_public_numbers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_numbers = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_28_load_elliptic_curve_public_numbers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_numbers );
    Py_DECREF( par_numbers );
    par_numbers = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_numbers );
    Py_DECREF( par_numbers );
    par_numbers = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_28_load_elliptic_curve_public_numbers );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_29_load_elliptic_curve_private_numbers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_numbers = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_29_load_elliptic_curve_private_numbers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_numbers );
    Py_DECREF( par_numbers );
    par_numbers = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_numbers );
    Py_DECREF( par_numbers );
    par_numbers = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_29_load_elliptic_curve_private_numbers );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_30_elliptic_curve_exchange_algorithm_supported( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_algorithm = python_pars[ 1 ];
    PyObject *par_curve = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_30_elliptic_curve_exchange_algorithm_supported );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_curve );
    Py_DECREF( par_curve );
    par_curve = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_curve );
    Py_DECREF( par_curve );
    par_curve = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_30_elliptic_curve_exchange_algorithm_supported );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_31_derive_elliptic_curve_private_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_private_value = python_pars[ 1 ];
    PyObject *par_curve = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_31_derive_elliptic_curve_private_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_curve );
    Py_DECREF( par_curve );
    par_curve = NULL;

    CHECK_OBJECT( (PyObject *)par_private_value );
    Py_DECREF( par_private_value );
    par_private_value = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_curve );
    Py_DECREF( par_curve );
    par_curve = NULL;

    CHECK_OBJECT( (PyObject *)par_private_value );
    Py_DECREF( par_private_value );
    par_private_value = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_31_derive_elliptic_curve_private_key );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_32_load_pem_private_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *par_password = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_32_load_pem_private_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_password );
    Py_DECREF( par_password );
    par_password = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_password );
    Py_DECREF( par_password );
    par_password = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_32_load_pem_private_key );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_33_load_pem_public_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_33_load_pem_public_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_33_load_pem_public_key );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_34_load_pem_parameters( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_34_load_pem_parameters );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_34_load_pem_parameters );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_35_load_der_private_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *par_password = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_35_load_der_private_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_password );
    Py_DECREF( par_password );
    par_password = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_password );
    Py_DECREF( par_password );
    par_password = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_35_load_der_private_key );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_36_load_der_public_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_36_load_der_public_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_36_load_der_public_key );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_37_load_der_parameters( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_37_load_der_parameters );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_37_load_der_parameters );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_38_load_pem_x509_certificate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_38_load_pem_x509_certificate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_38_load_pem_x509_certificate );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_39_load_der_x509_certificate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_39_load_der_x509_certificate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_39_load_der_x509_certificate );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_40_load_der_x509_csr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_40_load_der_x509_csr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_40_load_der_x509_csr );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_41_load_pem_x509_csr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_41_load_pem_x509_csr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_41_load_pem_x509_csr );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_42_create_x509_csr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_builder = python_pars[ 1 ];
    PyObject *par_private_key = python_pars[ 2 ];
    PyObject *par_algorithm = python_pars[ 3 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_42_create_x509_csr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_private_key );
    Py_DECREF( par_private_key );
    par_private_key = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_builder );
    Py_DECREF( par_builder );
    par_builder = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_private_key );
    Py_DECREF( par_private_key );
    par_private_key = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_builder );
    Py_DECREF( par_builder );
    par_builder = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_42_create_x509_csr );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_43_create_x509_certificate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_builder = python_pars[ 1 ];
    PyObject *par_private_key = python_pars[ 2 ];
    PyObject *par_algorithm = python_pars[ 3 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_43_create_x509_certificate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_private_key );
    Py_DECREF( par_private_key );
    par_private_key = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_builder );
    Py_DECREF( par_builder );
    par_builder = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_private_key );
    Py_DECREF( par_private_key );
    par_private_key = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_builder );
    Py_DECREF( par_builder );
    par_builder = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_43_create_x509_certificate );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_44_create_x509_crl( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_builder = python_pars[ 1 ];
    PyObject *par_private_key = python_pars[ 2 ];
    PyObject *par_algorithm = python_pars[ 3 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_44_create_x509_crl );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_private_key );
    Py_DECREF( par_private_key );
    par_private_key = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_builder );
    Py_DECREF( par_builder );
    par_builder = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_private_key );
    Py_DECREF( par_private_key );
    par_private_key = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_builder );
    Py_DECREF( par_builder );
    par_builder = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_44_create_x509_crl );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_45_create_x509_revoked_certificate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_builder = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_45_create_x509_revoked_certificate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_builder );
    Py_DECREF( par_builder );
    par_builder = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_builder );
    Py_DECREF( par_builder );
    par_builder = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_45_create_x509_revoked_certificate );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_46_x509_name_bytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_46_x509_name_bytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_46_x509_name_bytes );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_47_generate_dh_parameters( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_generator = python_pars[ 1 ];
    PyObject *par_key_size = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_47_generate_dh_parameters );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key_size );
    Py_DECREF( par_key_size );
    par_key_size = NULL;

    CHECK_OBJECT( (PyObject *)par_generator );
    Py_DECREF( par_generator );
    par_generator = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key_size );
    Py_DECREF( par_key_size );
    par_key_size = NULL;

    CHECK_OBJECT( (PyObject *)par_generator );
    Py_DECREF( par_generator );
    par_generator = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_47_generate_dh_parameters );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_48_generate_dh_private_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_parameters = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_48_generate_dh_private_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_parameters );
    Py_DECREF( par_parameters );
    par_parameters = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_parameters );
    Py_DECREF( par_parameters );
    par_parameters = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_48_generate_dh_private_key );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_49_generate_dh_private_key_and_parameters( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_generator = python_pars[ 1 ];
    PyObject *par_key_size = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_49_generate_dh_private_key_and_parameters );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key_size );
    Py_DECREF( par_key_size );
    par_key_size = NULL;

    CHECK_OBJECT( (PyObject *)par_generator );
    Py_DECREF( par_generator );
    par_generator = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key_size );
    Py_DECREF( par_key_size );
    par_key_size = NULL;

    CHECK_OBJECT( (PyObject *)par_generator );
    Py_DECREF( par_generator );
    par_generator = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_49_generate_dh_private_key_and_parameters );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_50_load_dh_private_numbers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_numbers = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_50_load_dh_private_numbers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_numbers );
    Py_DECREF( par_numbers );
    par_numbers = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_numbers );
    Py_DECREF( par_numbers );
    par_numbers = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_50_load_dh_private_numbers );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_51_load_dh_public_numbers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_numbers = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_51_load_dh_public_numbers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_numbers );
    Py_DECREF( par_numbers );
    par_numbers = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_numbers );
    Py_DECREF( par_numbers );
    par_numbers = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_51_load_dh_public_numbers );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_52_load_dh_parameter_numbers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_numbers = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_52_load_dh_parameter_numbers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_numbers );
    Py_DECREF( par_numbers );
    par_numbers = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_numbers );
    Py_DECREF( par_numbers );
    par_numbers = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_52_load_dh_parameter_numbers );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_53_dh_parameters_supported( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_p = python_pars[ 1 ];
    PyObject *par_g = python_pars[ 2 ];
    PyObject *par_q = python_pars[ 3 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_53_dh_parameters_supported );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_53_dh_parameters_supported );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_54_dh_x942_serialization_supported( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_54_dh_x942_serialization_supported );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_54_dh_x942_serialization_supported );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_55_derive_scrypt( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key_material = python_pars[ 1 ];
    PyObject *par_salt = python_pars[ 2 ];
    PyObject *par_length = python_pars[ 3 ];
    PyObject *par_n = python_pars[ 4 ];
    PyObject *par_r = python_pars[ 5 ];
    PyObject *par_p = python_pars[ 6 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_55_derive_scrypt );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_length );
    Py_DECREF( par_length );
    par_length = NULL;

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    CHECK_OBJECT( (PyObject *)par_key_material );
    Py_DECREF( par_key_material );
    par_key_material = NULL;

    CHECK_OBJECT( (PyObject *)par_salt );
    Py_DECREF( par_salt );
    par_salt = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_length );
    Py_DECREF( par_length );
    par_length = NULL;

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    CHECK_OBJECT( (PyObject *)par_key_material );
    Py_DECREF( par_key_material );
    par_key_material = NULL;

    CHECK_OBJECT( (PyObject *)par_salt );
    Py_DECREF( par_salt );
    par_salt = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_55_derive_scrypt );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_10_pbkdf2_hmac_supported(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_10_pbkdf2_hmac_supported,
        const_str_plain_pbkdf2_hmac_supported,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_76bdd360b0a8a6689bc1d70c28d4036d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_a7328ecdb816372bec3cb1ca678a22bb,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_11_derive_pbkdf2_hmac(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_11_derive_pbkdf2_hmac,
        const_str_plain_derive_pbkdf2_hmac,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_09b38d2d6ee6627d87dc48d66f8bb3c3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_5821e221916481c3f38394f7778eebff,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_12_generate_rsa_private_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_12_generate_rsa_private_key,
        const_str_plain_generate_rsa_private_key,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_78346e72075d5e6b271e2f6dff6623cb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_d7343ee22e2272ac73afb381205bd004,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_13_rsa_padding_supported(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_13_rsa_padding_supported,
        const_str_plain_rsa_padding_supported,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_edfee6ef7a5c77c14d2e578ae83f6bba,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_692d8108005f88d96ef98564f6598985,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_14_generate_rsa_parameters_supported(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_14_generate_rsa_parameters_supported,
        const_str_plain_generate_rsa_parameters_supported,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fddc6f349e8b17022614e71c1c543b34,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_6f04a0ccb7544097cd875c7c31834e6f,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_15_load_rsa_private_numbers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_15_load_rsa_private_numbers,
        const_str_plain_load_rsa_private_numbers,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_57a55265c7bf23e1ab825a070e1f9b45,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_be2baefacd213848c3218d58e5337d00,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_16_load_rsa_public_numbers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_16_load_rsa_public_numbers,
        const_str_plain_load_rsa_public_numbers,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e193c3093f3a5974264ab51830cf066c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_e05d2a8640d15d821ac8931cff3ceeb6,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_17_generate_dsa_parameters(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_17_generate_dsa_parameters,
        const_str_plain_generate_dsa_parameters,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_afb8f6084e2d123dd339d15df40cf13f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_be637128b04df99668b57250bcb90304,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_18_generate_dsa_private_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_18_generate_dsa_private_key,
        const_str_plain_generate_dsa_private_key,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c932f1b46184396ebbd07416f25a9f8b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_91cef7da9413817b1df5f9f543c1b117,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_19_generate_dsa_private_key_and_parameters(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_19_generate_dsa_private_key_and_parameters,
        const_str_plain_generate_dsa_private_key_and_parameters,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_323cff8754d78d38809671ebb7b9346d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_e4a6caad51a69cf6559e60044f2d3dbd,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_1_cipher_supported(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_1_cipher_supported,
        const_str_plain_cipher_supported,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_50e565b97e77b9eaec428a1728567fb4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_8184e067c7b3318913c3d0af6b23b2b9,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_20_dsa_hash_supported(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_20_dsa_hash_supported,
        const_str_plain_dsa_hash_supported,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e93ec5f314355813404e56ed83275a8f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_2f9695857620d6d2233ed0e7e24be4e6,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_21_dsa_parameters_supported(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_21_dsa_parameters_supported,
        const_str_plain_dsa_parameters_supported,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_547c8444b62cdc42eb1f1b2646003444,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_a25814a7003287ed48ae69a3e2c8571e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_22_load_dsa_private_numbers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_22_load_dsa_private_numbers,
        const_str_plain_load_dsa_private_numbers,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cf4219ca4dda18d4721c42ee56784e45,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_71f31f6c62b756a0153edb43b508ea72,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_23_load_dsa_public_numbers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_23_load_dsa_public_numbers,
        const_str_plain_load_dsa_public_numbers,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7a74347532de750871976a8997baf8fd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_1fd991e1ec7a538f20fe33eb5a63c23a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_24_load_dsa_parameter_numbers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_24_load_dsa_parameter_numbers,
        const_str_plain_load_dsa_parameter_numbers,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c1b780453d428f8716a1ec6c0bbc3a23,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_e9c17f9e6a2cfa9137494e7cce4ddb68,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_25_elliptic_curve_signature_algorithm_supported(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_25_elliptic_curve_signature_algorithm_supported,
        const_str_digest_dd100ab5223cfe86cc19d075c4c9e8d3,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_23e074866b0f56bd2101458c2cc187c8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_7b42f6a1029a280baccadb6ba9d7ebc2,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_26_elliptic_curve_supported(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_26_elliptic_curve_supported,
        const_str_plain_elliptic_curve_supported,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_49406f84e6d410c143642405f0025809,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_4ac388cc3596594b9fd1573ef2539537,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_27_generate_elliptic_curve_private_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_27_generate_elliptic_curve_private_key,
        const_str_plain_generate_elliptic_curve_private_key,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8e266fc45c6c536fef08b99be98c7b96,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_ea519da6621b2e6e31eb85b5c326163a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_28_load_elliptic_curve_public_numbers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_28_load_elliptic_curve_public_numbers,
        const_str_plain_load_elliptic_curve_public_numbers,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_12ace11edcc04197706a8ee2a25772bf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_c0bf5d81d20e7eb0288d1c3ad78eeb28,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_29_load_elliptic_curve_private_numbers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_29_load_elliptic_curve_private_numbers,
        const_str_plain_load_elliptic_curve_private_numbers,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d1571272d65803062ffc94bfcfaf1466,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_ddd3f25408786f407733d646162f8d59,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_2_create_symmetric_encryption_ctx(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_2_create_symmetric_encryption_ctx,
        const_str_plain_create_symmetric_encryption_ctx,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1539aad93240b0de72f37c4f64b68764,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_39ea98a078b45b6c442185503b966df2,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_30_elliptic_curve_exchange_algorithm_supported(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_30_elliptic_curve_exchange_algorithm_supported,
        const_str_digest_19dba398fcfd0968a3203d943a394d68,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e43034079994b12d58fdb3da6a7df244,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_ae098508dd4bf88f8bb4a07250bc5a8b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_31_derive_elliptic_curve_private_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_31_derive_elliptic_curve_private_key,
        const_str_plain_derive_elliptic_curve_private_key,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_56c2d6ba1fe397b991bd96eaae44936d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_84a9b90f7e986466b5f551b58b5724d7,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_32_load_pem_private_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_32_load_pem_private_key,
        const_str_plain_load_pem_private_key,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_af36cfe6514c1d05e4fc8b3e691a487a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_802d8f8fd7de6f6609d7f954c8f40bf6,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_33_load_pem_public_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_33_load_pem_public_key,
        const_str_plain_load_pem_public_key,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7816a2049d281b524bb33c0360db90ee,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_cad1312c0a8ed12faaeb2b2356b3f42c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_34_load_pem_parameters(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_34_load_pem_parameters,
        const_str_plain_load_pem_parameters,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a71460503b4feef309d07f979509c4b8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_d5ab83d9695f4da166c2e74669073e5a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_35_load_der_private_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_35_load_der_private_key,
        const_str_plain_load_der_private_key,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f71f6c05e874b2f566bac14a3f55f8f7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_4d1cd79c69148c2c65a70d73a3298974,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_36_load_der_public_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_36_load_der_public_key,
        const_str_plain_load_der_public_key,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1d262e7e3e0b674459210dfce1057a8e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_06e3225334eb391348195f4973a16cbd,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_37_load_der_parameters(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_37_load_der_parameters,
        const_str_plain_load_der_parameters,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6b7ff09f23c314aec0ecaa968eb67346,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_d57a4d29065ab4a1f221ca9cc91f876b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_38_load_pem_x509_certificate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_38_load_pem_x509_certificate,
        const_str_plain_load_pem_x509_certificate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_475f010ab3ecf9367de6b025b90118bd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_3be54078b9bd767d7e0767b5226c3e60,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_39_load_der_x509_certificate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_39_load_der_x509_certificate,
        const_str_plain_load_der_x509_certificate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a44ecf372a99c2b5e251dbb19ab1c1a2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_a37049685fe61ee43f425ff3884244a8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_3_create_symmetric_decryption_ctx(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_3_create_symmetric_decryption_ctx,
        const_str_plain_create_symmetric_decryption_ctx,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0023f16758460fb7844fd705a383dd27,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_e908e8afe1a83e928d0bef8e329dc68a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_40_load_der_x509_csr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_40_load_der_x509_csr,
        const_str_plain_load_der_x509_csr,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_dd873799efbc7d73a6b58e574a04012e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_12bf30ea148596af8b3db51961b172df,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_41_load_pem_x509_csr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_41_load_pem_x509_csr,
        const_str_plain_load_pem_x509_csr,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_dfa1d36c7ff79fa7c27fb86590b0a74f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_36ba26e04775ce62acc2dcd612c29d46,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_42_create_x509_csr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_42_create_x509_csr,
        const_str_plain_create_x509_csr,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9538698cf05c82f84691652e04139ccd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_7f30278a4fcb72c48b5cd4ea5d079914,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_43_create_x509_certificate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_43_create_x509_certificate,
        const_str_plain_create_x509_certificate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_88b7f456280ba5d750d4318480fb36d1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_2a51df9642a3dcdb589c8f1b9733a429,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_44_create_x509_crl(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_44_create_x509_crl,
        const_str_plain_create_x509_crl,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_21758222a47f0a3802c5e86441634b05,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_6a83a3310dae744ebfd328dac16db727,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_45_create_x509_revoked_certificate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_45_create_x509_revoked_certificate,
        const_str_plain_create_x509_revoked_certificate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_88e2e68cce88ed4f8a98074d1fca1e3f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_df210813cecf8d389a6a11cbd910135b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_46_x509_name_bytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_46_x509_name_bytes,
        const_str_plain_x509_name_bytes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0b6a0a8979926d163495c49611e28f10,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_25517886b3a6e05088fb43990d2543ca,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_47_generate_dh_parameters(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_47_generate_dh_parameters,
        const_str_plain_generate_dh_parameters,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d3a623e1bedb1d574afbc73baacc5828,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_3552c2706bf0622b7fcc4e5c6e7975ed,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_48_generate_dh_private_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_48_generate_dh_private_key,
        const_str_plain_generate_dh_private_key,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b8881181dcfe86ef911b5a1f529281f8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_4c0fc62fa075fc302d7e12cdc2b1a3c6,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_49_generate_dh_private_key_and_parameters(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_49_generate_dh_private_key_and_parameters,
        const_str_plain_generate_dh_private_key_and_parameters,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c79e1399d3568afa990611aee4996dae,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_844858cfc3f176cb25cb563fa156777b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_4_hash_supported(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_4_hash_supported,
        const_str_plain_hash_supported,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5bed336c981c4b1a2152ddf4dc3624ce,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_6314fa7c6fc48e2b2c8702ed369f8da8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_50_load_dh_private_numbers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_50_load_dh_private_numbers,
        const_str_plain_load_dh_private_numbers,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_64ac72e835165e428f2ec342a4e82626,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_b436da15690b01b9c2fa78c41a227f26,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_51_load_dh_public_numbers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_51_load_dh_public_numbers,
        const_str_plain_load_dh_public_numbers,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ca4b33637d715141dfb8f006a6b1aaaf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_28f4468d6c9734e18c72bd5ca6760f2c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_52_load_dh_parameter_numbers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_52_load_dh_parameter_numbers,
        const_str_plain_load_dh_parameter_numbers,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5765cfb90d8c39af0a08270540226df2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_d9e232185946daeca898e40c39f68e36,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_53_dh_parameters_supported( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_53_dh_parameters_supported,
        const_str_plain_dh_parameters_supported,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_514e7251541022f5b3f92dacab5edc08,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_e5bb0ce7e7381f786f9677c69b442e65,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_54_dh_x942_serialization_supported(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_54_dh_x942_serialization_supported,
        const_str_plain_dh_x942_serialization_supported,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6286ef0d35d7ce3927c9be32e4ce4dc8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_f0e494b50e5b866fcff26cb8f400c7a1,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_55_derive_scrypt(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_55_derive_scrypt,
        const_str_plain_derive_scrypt,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9f270cb5ef089373204869418a63c286,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_3efa1d11c5d8421580b0e5c4821ccde0,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_5_create_hash_ctx(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_5_create_hash_ctx,
        const_str_plain_create_hash_ctx,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6f05c2aaff960f98ed5c9eaa9d8670b7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_9d40568e0a0973abf5fe84776e9bb1b7,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_6_hmac_supported(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_6_hmac_supported,
        const_str_plain_hmac_supported,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_37a206a68dee5f982d177a6610a04a05,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_a4c797d45dd48ad8578fe46499751f24,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_7_create_hmac_ctx(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_7_create_hmac_ctx,
        const_str_plain_create_hmac_ctx,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_425db2280a0682e36ca7f06ed64530fd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_e1c5adc9b07ec3f7de94455dc60c1c17,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_8_cmac_algorithm_supported(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_8_cmac_algorithm_supported,
        const_str_plain_cmac_algorithm_supported,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7ad19d00ccc38185acace900e93e289d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_8e914904ff9e228505332d098348b4f9,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_9_create_cmac_ctx(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_9_create_cmac_ctx,
        const_str_plain_create_cmac_ctx,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_808742595476e7e50c45a2bc8ce185aa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_e1c5adc9b07ec3f7de94455dc60c1c17,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_cryptography$hazmat$backends$interfaces =
{
    PyModuleDef_HEAD_INIT,
    "cryptography.hazmat.backends.interfaces",   /* m_name */
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

MOD_INIT_DECL( cryptography$hazmat$backends$interfaces )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_cryptography$hazmat$backends$interfaces );
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
    puts("cryptography.hazmat.backends.interfaces: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.backends.interfaces: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.backends.interfaces: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcryptography$hazmat$backends$interfaces" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_cryptography$hazmat$backends$interfaces = Py_InitModule4(
        "cryptography.hazmat.backends.interfaces",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_cryptography$hazmat$backends$interfaces = PyModule_Create( &mdef_cryptography$hazmat$backends$interfaces );
#endif

    moduledict_cryptography$hazmat$backends$interfaces = MODULE_DICT( module_cryptography$hazmat$backends$interfaces );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_cryptography$hazmat$backends$interfaces,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$backends$interfaces,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_cryptography$hazmat$backends$interfaces,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$backends$interfaces,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_cryptography$hazmat$backends$interfaces );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_624798dd704a8f07276d3e75153a7c4b, module_cryptography$hazmat$backends$interfaces );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_class_creation_10__class = NULL;
    PyObject *tmp_class_creation_10__class_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_11__class = NULL;
    PyObject *tmp_class_creation_11__class_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_12__class = NULL;
    PyObject *tmp_class_creation_12__class_dict = NULL;
    PyObject *tmp_class_creation_12__metaclass = NULL;
    PyObject *tmp_class_creation_13__class = NULL;
    PyObject *tmp_class_creation_13__class_dict = NULL;
    PyObject *tmp_class_creation_13__metaclass = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_3__class = NULL;
    PyObject *tmp_class_creation_3__class_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_4__class = NULL;
    PyObject *tmp_class_creation_4__class_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_5__class = NULL;
    PyObject *tmp_class_creation_5__class_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_6__class = NULL;
    PyObject *tmp_class_creation_6__class_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_7__class = NULL;
    PyObject *tmp_class_creation_7__class_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_8__class = NULL;
    PyObject *tmp_class_creation_8__class_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_9__class = NULL;
    PyObject *tmp_class_creation_9__class_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
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
    PyObject *tmp_args_element_name_39;
    PyObject *tmp_args_element_name_40;
    PyObject *tmp_args_element_name_41;
    PyObject *tmp_args_element_name_42;
    PyObject *tmp_args_element_name_43;
    PyObject *tmp_args_element_name_44;
    PyObject *tmp_args_element_name_45;
    PyObject *tmp_args_element_name_46;
    PyObject *tmp_args_element_name_47;
    PyObject *tmp_args_element_name_48;
    PyObject *tmp_args_element_name_49;
    PyObject *tmp_args_element_name_50;
    PyObject *tmp_args_element_name_51;
    PyObject *tmp_args_element_name_52;
    PyObject *tmp_args_element_name_53;
    PyObject *tmp_args_element_name_54;
    PyObject *tmp_args_element_name_55;
    PyObject *tmp_args_element_name_56;
    PyObject *tmp_args_element_name_57;
    PyObject *tmp_args_element_name_58;
    PyObject *tmp_args_element_name_59;
    PyObject *tmp_args_element_name_60;
    PyObject *tmp_args_element_name_61;
    PyObject *tmp_args_element_name_62;
    PyObject *tmp_args_element_name_63;
    PyObject *tmp_args_element_name_64;
    PyObject *tmp_args_element_name_65;
    PyObject *tmp_args_element_name_66;
    PyObject *tmp_args_element_name_67;
    PyObject *tmp_args_element_name_68;
    PyObject *tmp_args_element_name_69;
    PyObject *tmp_args_element_name_70;
    PyObject *tmp_args_element_name_71;
    PyObject *tmp_args_element_name_72;
    PyObject *tmp_args_element_name_73;
    PyObject *tmp_args_element_name_74;
    PyObject *tmp_args_element_name_75;
    PyObject *tmp_args_element_name_76;
    PyObject *tmp_args_element_name_77;
    PyObject *tmp_args_element_name_78;
    PyObject *tmp_args_element_name_79;
    PyObject *tmp_args_element_name_80;
    PyObject *tmp_args_element_name_81;
    PyObject *tmp_args_element_name_82;
    PyObject *tmp_args_element_name_83;
    PyObject *tmp_args_element_name_84;
    PyObject *tmp_args_element_name_85;
    PyObject *tmp_args_element_name_86;
    PyObject *tmp_args_element_name_87;
    PyObject *tmp_args_element_name_88;
    PyObject *tmp_args_element_name_89;
    PyObject *tmp_args_element_name_90;
    PyObject *tmp_args_element_name_91;
    PyObject *tmp_args_element_name_92;
    PyObject *tmp_args_element_name_93;
    PyObject *tmp_args_element_name_94;
    PyObject *tmp_args_element_name_95;
    PyObject *tmp_args_element_name_96;
    PyObject *tmp_args_element_name_97;
    PyObject *tmp_args_element_name_98;
    PyObject *tmp_args_element_name_99;
    PyObject *tmp_args_element_name_100;
    PyObject *tmp_args_element_name_101;
    PyObject *tmp_args_element_name_102;
    PyObject *tmp_args_element_name_103;
    PyObject *tmp_args_element_name_104;
    PyObject *tmp_args_element_name_105;
    PyObject *tmp_args_element_name_106;
    PyObject *tmp_args_element_name_107;
    PyObject *tmp_args_element_name_108;
    PyObject *tmp_args_element_name_109;
    PyObject *tmp_args_element_name_110;
    PyObject *tmp_args_element_name_111;
    PyObject *tmp_args_element_name_112;
    PyObject *tmp_args_element_name_113;
    PyObject *tmp_args_element_name_114;
    PyObject *tmp_args_element_name_115;
    PyObject *tmp_args_element_name_116;
    PyObject *tmp_args_element_name_117;
    PyObject *tmp_args_element_name_118;
    PyObject *tmp_args_element_name_119;
    PyObject *tmp_args_element_name_120;
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
    PyObject *tmp_assign_source_52;
    PyObject *tmp_assign_source_53;
    PyObject *tmp_assign_source_54;
    PyObject *tmp_assign_source_55;
    PyObject *tmp_assign_source_56;
    PyObject *tmp_assign_source_57;
    PyObject *tmp_assign_source_58;
    PyObject *tmp_assign_source_59;
    PyObject *tmp_assign_source_60;
    PyObject *tmp_assign_source_61;
    PyObject *tmp_assign_source_62;
    PyObject *tmp_assign_source_63;
    PyObject *tmp_assign_source_64;
    PyObject *tmp_assign_source_65;
    PyObject *tmp_assign_source_66;
    PyObject *tmp_assign_source_67;
    PyObject *tmp_assign_source_68;
    PyObject *tmp_assign_source_69;
    PyObject *tmp_assign_source_70;
    PyObject *tmp_assign_source_71;
    PyObject *tmp_assign_source_72;
    PyObject *tmp_assign_source_73;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_instance_7;
    PyObject *tmp_called_instance_8;
    PyObject *tmp_called_instance_9;
    PyObject *tmp_called_instance_10;
    PyObject *tmp_called_instance_11;
    PyObject *tmp_called_instance_12;
    PyObject *tmp_called_instance_13;
    PyObject *tmp_called_instance_14;
    PyObject *tmp_called_instance_15;
    PyObject *tmp_called_instance_16;
    PyObject *tmp_called_instance_17;
    PyObject *tmp_called_instance_18;
    PyObject *tmp_called_instance_19;
    PyObject *tmp_called_instance_20;
    PyObject *tmp_called_instance_21;
    PyObject *tmp_called_instance_22;
    PyObject *tmp_called_instance_23;
    PyObject *tmp_called_instance_24;
    PyObject *tmp_called_instance_25;
    PyObject *tmp_called_instance_26;
    PyObject *tmp_called_instance_27;
    PyObject *tmp_called_instance_28;
    PyObject *tmp_called_instance_29;
    PyObject *tmp_called_instance_30;
    PyObject *tmp_called_instance_31;
    PyObject *tmp_called_instance_32;
    PyObject *tmp_called_instance_33;
    PyObject *tmp_called_instance_34;
    PyObject *tmp_called_instance_35;
    PyObject *tmp_called_instance_36;
    PyObject *tmp_called_instance_37;
    PyObject *tmp_called_instance_38;
    PyObject *tmp_called_instance_39;
    PyObject *tmp_called_instance_40;
    PyObject *tmp_called_instance_41;
    PyObject *tmp_called_instance_42;
    PyObject *tmp_called_instance_43;
    PyObject *tmp_called_instance_44;
    PyObject *tmp_called_instance_45;
    PyObject *tmp_called_instance_46;
    PyObject *tmp_called_instance_47;
    PyObject *tmp_called_instance_48;
    PyObject *tmp_called_instance_49;
    PyObject *tmp_called_instance_50;
    PyObject *tmp_called_instance_51;
    PyObject *tmp_called_instance_52;
    PyObject *tmp_called_instance_53;
    PyObject *tmp_called_instance_54;
    PyObject *tmp_called_instance_55;
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
    PyObject *tmp_called_name_15;
    PyObject *tmp_called_name_16;
    PyObject *tmp_called_name_17;
    PyObject *tmp_called_name_18;
    PyObject *tmp_called_name_19;
    PyObject *tmp_called_name_20;
    PyObject *tmp_called_name_21;
    PyObject *tmp_called_name_22;
    PyObject *tmp_called_name_23;
    PyObject *tmp_called_name_24;
    PyObject *tmp_called_name_25;
    PyObject *tmp_called_name_26;
    PyObject *tmp_called_name_27;
    PyObject *tmp_called_name_28;
    PyObject *tmp_called_name_29;
    PyObject *tmp_called_name_30;
    PyObject *tmp_called_name_31;
    PyObject *tmp_called_name_32;
    PyObject *tmp_called_name_33;
    PyObject *tmp_called_name_34;
    PyObject *tmp_called_name_35;
    PyObject *tmp_called_name_36;
    PyObject *tmp_called_name_37;
    PyObject *tmp_called_name_38;
    PyObject *tmp_called_name_39;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    int tmp_cmp_In_6;
    int tmp_cmp_In_7;
    int tmp_cmp_In_8;
    int tmp_cmp_In_9;
    int tmp_cmp_In_10;
    int tmp_cmp_In_11;
    int tmp_cmp_In_12;
    int tmp_cmp_In_13;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_left_10;
    PyObject *tmp_compare_left_11;
    PyObject *tmp_compare_left_12;
    PyObject *tmp_compare_left_13;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compare_right_10;
    PyObject *tmp_compare_right_11;
    PyObject *tmp_compare_right_12;
    PyObject *tmp_compare_right_13;
    PyObject *tmp_defaults_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
    PyObject *tmp_dict_name_6;
    PyObject *tmp_dict_name_7;
    PyObject *tmp_dict_name_8;
    PyObject *tmp_dict_name_9;
    PyObject *tmp_dict_name_10;
    PyObject *tmp_dict_name_11;
    PyObject *tmp_dict_name_12;
    PyObject *tmp_dict_name_13;
    PyObject *tmp_dictset_value;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_key_name_4;
    PyObject *tmp_key_name_5;
    PyObject *tmp_key_name_6;
    PyObject *tmp_key_name_7;
    PyObject *tmp_key_name_8;
    PyObject *tmp_key_name_9;
    PyObject *tmp_key_name_10;
    PyObject *tmp_key_name_11;
    PyObject *tmp_key_name_12;
    PyObject *tmp_key_name_13;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    PyObject *tmp_outline_return_value_4;
    PyObject *tmp_outline_return_value_5;
    PyObject *tmp_outline_return_value_6;
    PyObject *tmp_outline_return_value_7;
    PyObject *tmp_outline_return_value_8;
    PyObject *tmp_outline_return_value_9;
    PyObject *tmp_outline_return_value_10;
    PyObject *tmp_outline_return_value_11;
    PyObject *tmp_outline_return_value_12;
    PyObject *tmp_outline_return_value_13;
    int tmp_res;
    PyObject *tmp_set_locals;
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
    static struct Nuitka_FrameObject *cache_frame_ee17979f808bc0e85bec8fe4fc377463_2 = NULL;

    struct Nuitka_FrameObject *frame_ee17979f808bc0e85bec8fe4fc377463_2;

    static struct Nuitka_FrameObject *cache_frame_2ad8c7b160297d675b35265fdc958dcf_3 = NULL;

    struct Nuitka_FrameObject *frame_2ad8c7b160297d675b35265fdc958dcf_3;

    static struct Nuitka_FrameObject *cache_frame_3f1cb989ddc3a22782c9671fa20448f6_4 = NULL;

    struct Nuitka_FrameObject *frame_3f1cb989ddc3a22782c9671fa20448f6_4;

    static struct Nuitka_FrameObject *cache_frame_a126115ede197261320f639c94903bbb_5 = NULL;

    struct Nuitka_FrameObject *frame_a126115ede197261320f639c94903bbb_5;

    static struct Nuitka_FrameObject *cache_frame_cd7a03a6890e15862a44d6ba57f3dad5_6 = NULL;

    struct Nuitka_FrameObject *frame_cd7a03a6890e15862a44d6ba57f3dad5_6;

    static struct Nuitka_FrameObject *cache_frame_edd0f30df62559ffeebdd256e604d27a_7 = NULL;

    struct Nuitka_FrameObject *frame_edd0f30df62559ffeebdd256e604d27a_7;

    static struct Nuitka_FrameObject *cache_frame_8449dbe20ecc24dcd7f72c3f8994865f_8 = NULL;

    struct Nuitka_FrameObject *frame_8449dbe20ecc24dcd7f72c3f8994865f_8;

    static struct Nuitka_FrameObject *cache_frame_ca1a22e4230eeb8f731fdb3611440be2_9 = NULL;

    struct Nuitka_FrameObject *frame_ca1a22e4230eeb8f731fdb3611440be2_9;

    static struct Nuitka_FrameObject *cache_frame_4265d672072f923138387db5dcf65cd5_10 = NULL;

    struct Nuitka_FrameObject *frame_4265d672072f923138387db5dcf65cd5_10;

    static struct Nuitka_FrameObject *cache_frame_fd9e93db906e46859f88fef582831b6a_11 = NULL;

    struct Nuitka_FrameObject *frame_fd9e93db906e46859f88fef582831b6a_11;

    static struct Nuitka_FrameObject *cache_frame_13506ae3e7a2df5f2b13e536a7095d81_12 = NULL;

    struct Nuitka_FrameObject *frame_13506ae3e7a2df5f2b13e536a7095d81_12;

    static struct Nuitka_FrameObject *cache_frame_ffe5e252c62f3e9bba766713a191cf51_13 = NULL;

    struct Nuitka_FrameObject *frame_ffe5e252c62f3e9bba766713a191cf51_13;

    static struct Nuitka_FrameObject *cache_frame_38fe00b0453f10ea6b916c21069fac5d_14 = NULL;

    struct Nuitka_FrameObject *frame_38fe00b0453f10ea6b916c21069fac5d_14;

    struct Nuitka_FrameObject *frame_80fdf1aa08533d2280106ccc74d13cee;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_13 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_14 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    tmp_outline_return_value_4 = NULL;
    tmp_outline_return_value_5 = NULL;
    tmp_outline_return_value_6 = NULL;
    tmp_outline_return_value_7 = NULL;
    tmp_outline_return_value_8 = NULL;
    tmp_outline_return_value_9 = NULL;
    tmp_outline_return_value_10 = NULL;
    tmp_outline_return_value_11 = NULL;
    tmp_outline_return_value_12 = NULL;
    tmp_outline_return_value_13 = NULL;
    PyObject *locals_PEMSerializationBackend_232 = NULL;
    PyObject *locals_CipherBackend_13 = NULL;
    PyObject *locals_ScryptBackend_390 = NULL;
    PyObject *locals_EllipticCurveBackend_184 = NULL;
    PyObject *locals_DHBackend_335 = NULL;
    PyObject *locals_CMACBackend_65 = NULL;
    PyObject *locals_DSABackend_132 = NULL;
    PyObject *locals_RSABackend_97 = NULL;
    PyObject *locals_PBKDF2HMACBackend_80 = NULL;
    PyObject *locals_X509Backend_276 = NULL;
    PyObject *locals_HMACBackend_49 = NULL;
    PyObject *locals_HashBackend_34 = NULL;
    PyObject *locals_DERSerializationBackend_254 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyImport_ImportModule("__future__");
    assert( tmp_assign_source_3 != NULL );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_3 );
    tmp_import_from_1__module = tmp_assign_source_3;

    // Frame without reuse.
    frame_80fdf1aa08533d2280106ccc74d13cee = MAKE_MODULE_FRAME( codeobj_80fdf1aa08533d2280106ccc74d13cee, module_cryptography$hazmat$backends$interfaces );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_80fdf1aa08533d2280106ccc74d13cee );
    assert( Py_REFCNT( frame_80fdf1aa08533d2280106ccc74d13cee ) == 2 );

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
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
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
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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

    tmp_name_name_1 = const_str_plain_abc;
    tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$backends$interfaces;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 7;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc, tmp_assign_source_7 );
    tmp_name_name_2 = const_str_plain_six;
    tmp_globals_name_2 = (PyObject *)moduledict_cryptography$hazmat$backends$interfaces;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 9;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_8 );
    // Tried code:
    tmp_set_locals = PyDict_New();
    locals_CipherBackend_13 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
    tmp_res = PyDict_SetItem( locals_CipherBackend_13, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ee17979f808bc0e85bec8fe4fc377463_2, codeobj_ee17979f808bc0e85bec8fe4fc377463, module_cryptography$hazmat$backends$interfaces, 0 );
    frame_ee17979f808bc0e85bec8fe4fc377463_2 = cache_frame_ee17979f808bc0e85bec8fe4fc377463_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ee17979f808bc0e85bec8fe4fc377463_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ee17979f808bc0e85bec8fe4fc377463_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_1_cipher_supported(  );
    frame_ee17979f808bc0e85bec8fe4fc377463_2->m_frame.f_lineno = 14;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_CipherBackend_13, const_str_plain_cipher_supported, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_2;
    }
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 20;

        goto frame_exception_exit_2;
    }

    tmp_args_element_name_2 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_2_create_symmetric_encryption_ctx(  );
    frame_ee17979f808bc0e85bec8fe4fc377463_2->m_frame.f_lineno = 20;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_CipherBackend_13, const_str_plain_create_symmetric_encryption_ctx, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_2;
    }
    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 26;

        goto frame_exception_exit_2;
    }

    tmp_args_element_name_3 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_3_create_symmetric_decryption_ctx(  );
    frame_ee17979f808bc0e85bec8fe4fc377463_2->m_frame.f_lineno = 26;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_CipherBackend_13, const_str_plain_create_symmetric_decryption_ctx, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ee17979f808bc0e85bec8fe4fc377463_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ee17979f808bc0e85bec8fe4fc377463_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ee17979f808bc0e85bec8fe4fc377463_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ee17979f808bc0e85bec8fe4fc377463_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ee17979f808bc0e85bec8fe4fc377463_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ee17979f808bc0e85bec8fe4fc377463_2,
        type_description_2
    );


    // Release cached frame.
    if ( frame_ee17979f808bc0e85bec8fe4fc377463_2 == cache_frame_ee17979f808bc0e85bec8fe4fc377463_2 )
    {
        Py_DECREF( frame_ee17979f808bc0e85bec8fe4fc377463_2 );
    }
    cache_frame_ee17979f808bc0e85bec8fe4fc377463_2 = NULL;

    assertFrameObject( frame_ee17979f808bc0e85bec8fe4fc377463_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_3;
    skip_nested_handling_1:;
    tmp_outline_return_value_1 = locals_CipherBackend_13;
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    Py_DECREF( locals_CipherBackend_13 );
    locals_CipherBackend_13 = NULL;
    goto outline_result_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_CipherBackend_13 );
    locals_CipherBackend_13 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 13;
    goto try_except_handler_2;
    outline_result_1:;
    tmp_assign_source_9 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_9;

    tmp_compare_left_1 = const_str_plain___metaclass__;
    tmp_compare_right_1 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_compare_right_1 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dict_name_1 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_key_name_1 = const_str_plain___metaclass__;
    tmp_assign_source_10 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_2;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_10 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_10 );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_10;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_4 = const_str_plain_CipherBackend;
    tmp_args_element_name_5 = const_tuple_type_object_tuple;
    tmp_args_element_name_6 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 13;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_11;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;

        exception_lineno = 12;

        goto try_except_handler_2;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add_metaclass );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_2;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 12;

        goto try_except_handler_2;
    }

    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 12;

        goto try_except_handler_2;
    }
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 12;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_called_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_2;
    }
    tmp_args_element_name_8 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_args_element_name_8 );
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 12;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_class_creation_1__class;
        assert( old != NULL );
        tmp_class_creation_1__class = tmp_assign_source_12;
        Py_DECREF( old );
    }

    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    Py_XDECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    tmp_assign_source_13 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_13 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_CipherBackend, tmp_assign_source_13 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Tried code:
    tmp_set_locals = PyDict_New();
    locals_HashBackend_34 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
    tmp_res = PyDict_SetItem( locals_HashBackend_34, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2ad8c7b160297d675b35265fdc958dcf_3, codeobj_2ad8c7b160297d675b35265fdc958dcf, module_cryptography$hazmat$backends$interfaces, 0 );
    frame_2ad8c7b160297d675b35265fdc958dcf_3 = cache_frame_2ad8c7b160297d675b35265fdc958dcf_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2ad8c7b160297d675b35265fdc958dcf_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2ad8c7b160297d675b35265fdc958dcf_3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_4 == NULL ))
    {
        tmp_called_instance_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 35;

        goto frame_exception_exit_3;
    }

    tmp_args_element_name_9 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_4_hash_supported(  );
    frame_2ad8c7b160297d675b35265fdc958dcf_3->m_frame.f_lineno = 35;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto frame_exception_exit_3;
    }
    tmp_res = PyDict_SetItem( locals_HashBackend_34, const_str_plain_hash_supported, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto frame_exception_exit_3;
    }
    tmp_called_instance_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_5 == NULL ))
    {
        tmp_called_instance_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 41;

        goto frame_exception_exit_3;
    }

    tmp_args_element_name_10 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_5_create_hash_ctx(  );
    frame_2ad8c7b160297d675b35265fdc958dcf_3->m_frame.f_lineno = 41;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto frame_exception_exit_3;
    }
    tmp_res = PyDict_SetItem( locals_HashBackend_34, const_str_plain_create_hash_ctx, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto frame_exception_exit_3;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2ad8c7b160297d675b35265fdc958dcf_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2ad8c7b160297d675b35265fdc958dcf_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2ad8c7b160297d675b35265fdc958dcf_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2ad8c7b160297d675b35265fdc958dcf_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2ad8c7b160297d675b35265fdc958dcf_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2ad8c7b160297d675b35265fdc958dcf_3,
        type_description_2
    );


    // Release cached frame.
    if ( frame_2ad8c7b160297d675b35265fdc958dcf_3 == cache_frame_2ad8c7b160297d675b35265fdc958dcf_3 )
    {
        Py_DECREF( frame_2ad8c7b160297d675b35265fdc958dcf_3 );
    }
    cache_frame_2ad8c7b160297d675b35265fdc958dcf_3 = NULL;

    assertFrameObject( frame_2ad8c7b160297d675b35265fdc958dcf_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_5;
    skip_nested_handling_2:;
    tmp_outline_return_value_2 = locals_HashBackend_34;
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_5:;
    Py_DECREF( locals_HashBackend_34 );
    locals_HashBackend_34 = NULL;
    goto outline_result_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_HashBackend_34 );
    locals_HashBackend_34 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 34;
    goto try_except_handler_4;
    outline_result_2:;
    tmp_assign_source_14 = tmp_outline_return_value_2;
    assert( tmp_class_creation_2__class_dict == NULL );
    tmp_class_creation_2__class_dict = tmp_assign_source_14;

    tmp_compare_left_2 = const_str_plain___metaclass__;
    tmp_compare_right_2 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_dict_name_2 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_dict_name_2 );
    tmp_key_name_2 = const_str_plain___metaclass__;
    tmp_assign_source_15 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_4;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_15 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_15 );
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_15;

    tmp_called_name_4 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_args_element_name_11 = const_str_plain_HashBackend;
    tmp_args_element_name_12 = const_tuple_type_object_tuple;
    tmp_args_element_name_13 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_args_element_name_13 );
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 34;
    {
        PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13 };
        tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_4;
    }
    assert( tmp_class_creation_2__class == NULL );
    tmp_class_creation_2__class = tmp_assign_source_16;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;

        exception_lineno = 33;

        goto try_except_handler_4;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_add_metaclass );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_4;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 33;

        goto try_except_handler_4;
    }

    tmp_args_element_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 33;

        goto try_except_handler_4;
    }
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 33;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_called_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_14 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_4;
    }
    tmp_args_element_name_15 = tmp_class_creation_2__class;

    CHECK_OBJECT( tmp_args_element_name_15 );
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 33;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_class_creation_2__class;
        assert( old != NULL );
        tmp_class_creation_2__class = tmp_assign_source_17;
        Py_DECREF( old );
    }

    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_2__class );
    tmp_class_creation_2__class = NULL;

    Py_XDECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    tmp_assign_source_18 = tmp_class_creation_2__class;

    CHECK_OBJECT( tmp_assign_source_18 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_HashBackend, tmp_assign_source_18 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class );
    Py_DECREF( tmp_class_creation_2__class );
    tmp_class_creation_2__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_dict );
    Py_DECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Tried code:
    tmp_set_locals = PyDict_New();
    locals_HMACBackend_49 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
    tmp_res = PyDict_SetItem( locals_HMACBackend_49, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3f1cb989ddc3a22782c9671fa20448f6_4, codeobj_3f1cb989ddc3a22782c9671fa20448f6, module_cryptography$hazmat$backends$interfaces, 0 );
    frame_3f1cb989ddc3a22782c9671fa20448f6_4 = cache_frame_3f1cb989ddc3a22782c9671fa20448f6_4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3f1cb989ddc3a22782c9671fa20448f6_4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3f1cb989ddc3a22782c9671fa20448f6_4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_6 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_6 == NULL ))
    {
        tmp_called_instance_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 50;

        goto frame_exception_exit_4;
    }

    tmp_args_element_name_16 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_6_hmac_supported(  );
    frame_3f1cb989ddc3a22782c9671fa20448f6_4->m_frame.f_lineno = 50;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_16 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto frame_exception_exit_4;
    }
    tmp_res = PyDict_SetItem( locals_HMACBackend_49, const_str_plain_hmac_supported, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto frame_exception_exit_4;
    }
    tmp_called_instance_7 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_7 == NULL ))
    {
        tmp_called_instance_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 57;

        goto frame_exception_exit_4;
    }

    tmp_args_element_name_17 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_7_create_hmac_ctx(  );
    frame_3f1cb989ddc3a22782c9671fa20448f6_4->m_frame.f_lineno = 57;
    {
        PyObject *call_args[] = { tmp_args_element_name_17 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_17 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;

        goto frame_exception_exit_4;
    }
    tmp_res = PyDict_SetItem( locals_HMACBackend_49, const_str_plain_create_hmac_ctx, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;

        goto frame_exception_exit_4;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3f1cb989ddc3a22782c9671fa20448f6_4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_exception_exit_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3f1cb989ddc3a22782c9671fa20448f6_4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3f1cb989ddc3a22782c9671fa20448f6_4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3f1cb989ddc3a22782c9671fa20448f6_4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3f1cb989ddc3a22782c9671fa20448f6_4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3f1cb989ddc3a22782c9671fa20448f6_4,
        type_description_2
    );


    // Release cached frame.
    if ( frame_3f1cb989ddc3a22782c9671fa20448f6_4 == cache_frame_3f1cb989ddc3a22782c9671fa20448f6_4 )
    {
        Py_DECREF( frame_3f1cb989ddc3a22782c9671fa20448f6_4 );
    }
    cache_frame_3f1cb989ddc3a22782c9671fa20448f6_4 = NULL;

    assertFrameObject( frame_3f1cb989ddc3a22782c9671fa20448f6_4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_3;

    frame_no_exception_3:;

    goto skip_nested_handling_3;
    nested_frame_exit_3:;

    goto try_except_handler_7;
    skip_nested_handling_3:;
    tmp_outline_return_value_3 = locals_HMACBackend_49;
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_7;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_7:;
    Py_DECREF( locals_HMACBackend_49 );
    locals_HMACBackend_49 = NULL;
    goto outline_result_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_HMACBackend_49 );
    locals_HMACBackend_49 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto outline_exception_3;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 49;
    goto try_except_handler_6;
    outline_result_3:;
    tmp_assign_source_19 = tmp_outline_return_value_3;
    assert( tmp_class_creation_3__class_dict == NULL );
    tmp_class_creation_3__class_dict = tmp_assign_source_19;

    tmp_compare_left_3 = const_str_plain___metaclass__;
    tmp_compare_right_3 = tmp_class_creation_3__class_dict;

    CHECK_OBJECT( tmp_compare_right_3 );
    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_In_3 == -1) );
    if ( tmp_cmp_In_3 == 1 )
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_dict_name_3 = tmp_class_creation_3__class_dict;

    CHECK_OBJECT( tmp_dict_name_3 );
    tmp_key_name_3 = const_str_plain___metaclass__;
    tmp_assign_source_20 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto try_except_handler_6;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_20 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_20 );
    condexpr_end_3:;
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_20;

    tmp_called_name_7 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_7 );
    tmp_args_element_name_18 = const_str_plain_HMACBackend;
    tmp_args_element_name_19 = const_tuple_type_object_tuple;
    tmp_args_element_name_20 = tmp_class_creation_3__class_dict;

    CHECK_OBJECT( tmp_args_element_name_20 );
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 49;
    {
        PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20 };
        tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
    }

    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto try_except_handler_6;
    }
    assert( tmp_class_creation_3__class == NULL );
    tmp_class_creation_3__class = tmp_assign_source_21;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;

        exception_lineno = 48;

        goto try_except_handler_6;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_add_metaclass );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto try_except_handler_6;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 48;

        goto try_except_handler_6;
    }

    tmp_args_element_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 48;

        goto try_except_handler_6;
    }
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 48;
    {
        PyObject *call_args[] = { tmp_args_element_name_21 };
        tmp_called_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_21 );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto try_except_handler_6;
    }
    tmp_args_element_name_22 = tmp_class_creation_3__class;

    CHECK_OBJECT( tmp_args_element_name_22 );
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 48;
    {
        PyObject *call_args[] = { tmp_args_element_name_22 };
        tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_class_creation_3__class;
        assert( old != NULL );
        tmp_class_creation_3__class = tmp_assign_source_22;
        Py_DECREF( old );
    }

    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_3__class );
    tmp_class_creation_3__class = NULL;

    Py_XDECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    tmp_assign_source_23 = tmp_class_creation_3__class;

    CHECK_OBJECT( tmp_assign_source_23 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_HMACBackend, tmp_assign_source_23 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class );
    Py_DECREF( tmp_class_creation_3__class );
    tmp_class_creation_3__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_dict );
    Py_DECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Tried code:
    tmp_set_locals = PyDict_New();
    locals_CMACBackend_65 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
    tmp_res = PyDict_SetItem( locals_CMACBackend_65, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a126115ede197261320f639c94903bbb_5, codeobj_a126115ede197261320f639c94903bbb, module_cryptography$hazmat$backends$interfaces, 0 );
    frame_a126115ede197261320f639c94903bbb_5 = cache_frame_a126115ede197261320f639c94903bbb_5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a126115ede197261320f639c94903bbb_5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a126115ede197261320f639c94903bbb_5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_8 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_8 == NULL ))
    {
        tmp_called_instance_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 66;

        goto frame_exception_exit_5;
    }

    tmp_args_element_name_23 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_8_cmac_algorithm_supported(  );
    frame_a126115ede197261320f639c94903bbb_5->m_frame.f_lineno = 66;
    {
        PyObject *call_args[] = { tmp_args_element_name_23 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_23 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto frame_exception_exit_5;
    }
    tmp_res = PyDict_SetItem( locals_CMACBackend_65, const_str_plain_cmac_algorithm_supported, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto frame_exception_exit_5;
    }
    tmp_called_instance_9 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_9 == NULL ))
    {
        tmp_called_instance_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 72;

        goto frame_exception_exit_5;
    }

    tmp_args_element_name_24 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_9_create_cmac_ctx(  );
    frame_a126115ede197261320f639c94903bbb_5->m_frame.f_lineno = 72;
    {
        PyObject *call_args[] = { tmp_args_element_name_24 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_24 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto frame_exception_exit_5;
    }
    tmp_res = PyDict_SetItem( locals_CMACBackend_65, const_str_plain_create_cmac_ctx, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto frame_exception_exit_5;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a126115ede197261320f639c94903bbb_5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;

    frame_exception_exit_5:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a126115ede197261320f639c94903bbb_5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a126115ede197261320f639c94903bbb_5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a126115ede197261320f639c94903bbb_5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a126115ede197261320f639c94903bbb_5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a126115ede197261320f639c94903bbb_5,
        type_description_2
    );


    // Release cached frame.
    if ( frame_a126115ede197261320f639c94903bbb_5 == cache_frame_a126115ede197261320f639c94903bbb_5 )
    {
        Py_DECREF( frame_a126115ede197261320f639c94903bbb_5 );
    }
    cache_frame_a126115ede197261320f639c94903bbb_5 = NULL;

    assertFrameObject( frame_a126115ede197261320f639c94903bbb_5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_4;

    frame_no_exception_4:;

    goto skip_nested_handling_4;
    nested_frame_exit_4:;

    goto try_except_handler_9;
    skip_nested_handling_4:;
    tmp_outline_return_value_4 = locals_CMACBackend_65;
    Py_INCREF( tmp_outline_return_value_4 );
    goto try_return_handler_9;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_9:;
    Py_DECREF( locals_CMACBackend_65 );
    locals_CMACBackend_65 = NULL;
    goto outline_result_4;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_CMACBackend_65 );
    locals_CMACBackend_65 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto outline_exception_4;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_4:;
    exception_lineno = 65;
    goto try_except_handler_8;
    outline_result_4:;
    tmp_assign_source_24 = tmp_outline_return_value_4;
    assert( tmp_class_creation_4__class_dict == NULL );
    tmp_class_creation_4__class_dict = tmp_assign_source_24;

    tmp_compare_left_4 = const_str_plain___metaclass__;
    tmp_compare_right_4 = tmp_class_creation_4__class_dict;

    CHECK_OBJECT( tmp_compare_right_4 );
    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    assert( !(tmp_cmp_In_4 == -1) );
    if ( tmp_cmp_In_4 == 1 )
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_dict_name_4 = tmp_class_creation_4__class_dict;

    CHECK_OBJECT( tmp_dict_name_4 );
    tmp_key_name_4 = const_str_plain___metaclass__;
    tmp_assign_source_25 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto try_except_handler_8;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_assign_source_25 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_25 );
    condexpr_end_4:;
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_25;

    tmp_called_name_10 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_called_name_10 );
    tmp_args_element_name_25 = const_str_plain_CMACBackend;
    tmp_args_element_name_26 = const_tuple_type_object_tuple;
    tmp_args_element_name_27 = tmp_class_creation_4__class_dict;

    CHECK_OBJECT( tmp_args_element_name_27 );
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 65;
    {
        PyObject *call_args[] = { tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27 };
        tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, call_args );
    }

    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto try_except_handler_8;
    }
    assert( tmp_class_creation_4__class == NULL );
    tmp_class_creation_4__class = tmp_assign_source_26;

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;

        exception_lineno = 64;

        goto try_except_handler_8;
    }

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_add_metaclass );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_8;
    }
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 64;

        goto try_except_handler_8;
    }

    tmp_args_element_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );

        exception_lineno = 64;

        goto try_except_handler_8;
    }
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 64;
    {
        PyObject *call_args[] = { tmp_args_element_name_28 };
        tmp_called_name_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    Py_DECREF( tmp_args_element_name_28 );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_8;
    }
    tmp_args_element_name_29 = tmp_class_creation_4__class;

    CHECK_OBJECT( tmp_args_element_name_29 );
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 64;
    {
        PyObject *call_args[] = { tmp_args_element_name_29 };
        tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_8;
    }
    {
        PyObject *old = tmp_class_creation_4__class;
        assert( old != NULL );
        tmp_class_creation_4__class = tmp_assign_source_27;
        Py_DECREF( old );
    }

    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_4__class );
    tmp_class_creation_4__class = NULL;

    Py_XDECREF( tmp_class_creation_4__class_dict );
    tmp_class_creation_4__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    tmp_assign_source_28 = tmp_class_creation_4__class;

    CHECK_OBJECT( tmp_assign_source_28 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_CMACBackend, tmp_assign_source_28 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class );
    Py_DECREF( tmp_class_creation_4__class );
    tmp_class_creation_4__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_dict );
    Py_DECREF( tmp_class_creation_4__class_dict );
    tmp_class_creation_4__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__metaclass );
    Py_DECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    // Tried code:
    tmp_set_locals = PyDict_New();
    locals_PBKDF2HMACBackend_80 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
    tmp_res = PyDict_SetItem( locals_PBKDF2HMACBackend_80, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cd7a03a6890e15862a44d6ba57f3dad5_6, codeobj_cd7a03a6890e15862a44d6ba57f3dad5, module_cryptography$hazmat$backends$interfaces, 0 );
    frame_cd7a03a6890e15862a44d6ba57f3dad5_6 = cache_frame_cd7a03a6890e15862a44d6ba57f3dad5_6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cd7a03a6890e15862a44d6ba57f3dad5_6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cd7a03a6890e15862a44d6ba57f3dad5_6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_10 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_10 == NULL ))
    {
        tmp_called_instance_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 81;

        goto frame_exception_exit_6;
    }

    tmp_args_element_name_30 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_10_pbkdf2_hmac_supported(  );
    frame_cd7a03a6890e15862a44d6ba57f3dad5_6->m_frame.f_lineno = 81;
    {
        PyObject *call_args[] = { tmp_args_element_name_30 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_30 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;

        goto frame_exception_exit_6;
    }
    tmp_res = PyDict_SetItem( locals_PBKDF2HMACBackend_80, const_str_plain_pbkdf2_hmac_supported, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;

        goto frame_exception_exit_6;
    }
    tmp_called_instance_11 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_11 == NULL ))
    {
        tmp_called_instance_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 88;

        goto frame_exception_exit_6;
    }

    tmp_args_element_name_31 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_11_derive_pbkdf2_hmac(  );
    frame_cd7a03a6890e15862a44d6ba57f3dad5_6->m_frame.f_lineno = 88;
    {
        PyObject *call_args[] = { tmp_args_element_name_31 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_31 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;

        goto frame_exception_exit_6;
    }
    tmp_res = PyDict_SetItem( locals_PBKDF2HMACBackend_80, const_str_plain_derive_pbkdf2_hmac, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;

        goto frame_exception_exit_6;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd7a03a6890e15862a44d6ba57f3dad5_6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_5;

    frame_exception_exit_6:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd7a03a6890e15862a44d6ba57f3dad5_6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cd7a03a6890e15862a44d6ba57f3dad5_6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cd7a03a6890e15862a44d6ba57f3dad5_6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cd7a03a6890e15862a44d6ba57f3dad5_6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cd7a03a6890e15862a44d6ba57f3dad5_6,
        type_description_2
    );


    // Release cached frame.
    if ( frame_cd7a03a6890e15862a44d6ba57f3dad5_6 == cache_frame_cd7a03a6890e15862a44d6ba57f3dad5_6 )
    {
        Py_DECREF( frame_cd7a03a6890e15862a44d6ba57f3dad5_6 );
    }
    cache_frame_cd7a03a6890e15862a44d6ba57f3dad5_6 = NULL;

    assertFrameObject( frame_cd7a03a6890e15862a44d6ba57f3dad5_6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_5;

    frame_no_exception_5:;

    goto skip_nested_handling_5;
    nested_frame_exit_5:;

    goto try_except_handler_11;
    skip_nested_handling_5:;
    tmp_outline_return_value_5 = locals_PBKDF2HMACBackend_80;
    Py_INCREF( tmp_outline_return_value_5 );
    goto try_return_handler_11;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_11:;
    Py_DECREF( locals_PBKDF2HMACBackend_80 );
    locals_PBKDF2HMACBackend_80 = NULL;
    goto outline_result_5;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_PBKDF2HMACBackend_80 );
    locals_PBKDF2HMACBackend_80 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto outline_exception_5;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_5:;
    exception_lineno = 80;
    goto try_except_handler_10;
    outline_result_5:;
    tmp_assign_source_29 = tmp_outline_return_value_5;
    assert( tmp_class_creation_5__class_dict == NULL );
    tmp_class_creation_5__class_dict = tmp_assign_source_29;

    tmp_compare_left_5 = const_str_plain___metaclass__;
    tmp_compare_right_5 = tmp_class_creation_5__class_dict;

    CHECK_OBJECT( tmp_compare_right_5 );
    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    assert( !(tmp_cmp_In_5 == -1) );
    if ( tmp_cmp_In_5 == 1 )
    {
        goto condexpr_true_5;
    }
    else
    {
        goto condexpr_false_5;
    }
    condexpr_true_5:;
    tmp_dict_name_5 = tmp_class_creation_5__class_dict;

    CHECK_OBJECT( tmp_dict_name_5 );
    tmp_key_name_5 = const_str_plain___metaclass__;
    tmp_assign_source_30 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_10;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_assign_source_30 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_30 );
    condexpr_end_5:;
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_30;

    tmp_called_name_13 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_called_name_13 );
    tmp_args_element_name_32 = const_str_plain_PBKDF2HMACBackend;
    tmp_args_element_name_33 = const_tuple_type_object_tuple;
    tmp_args_element_name_34 = tmp_class_creation_5__class_dict;

    CHECK_OBJECT( tmp_args_element_name_34 );
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 80;
    {
        PyObject *call_args[] = { tmp_args_element_name_32, tmp_args_element_name_33, tmp_args_element_name_34 };
        tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_13, call_args );
    }

    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_10;
    }
    assert( tmp_class_creation_5__class == NULL );
    tmp_class_creation_5__class = tmp_assign_source_31;

    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;

        exception_lineno = 79;

        goto try_except_handler_10;
    }

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_add_metaclass );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;

        goto try_except_handler_10;
    }
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_15 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 79;

        goto try_except_handler_10;
    }

    tmp_args_element_name_35 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );

        exception_lineno = 79;

        goto try_except_handler_10;
    }
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 79;
    {
        PyObject *call_args[] = { tmp_args_element_name_35 };
        tmp_called_name_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_args_element_name_35 );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;

        goto try_except_handler_10;
    }
    tmp_args_element_name_36 = tmp_class_creation_5__class;

    CHECK_OBJECT( tmp_args_element_name_36 );
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 79;
    {
        PyObject *call_args[] = { tmp_args_element_name_36 };
        tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_called_name_14 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;

        goto try_except_handler_10;
    }
    {
        PyObject *old = tmp_class_creation_5__class;
        assert( old != NULL );
        tmp_class_creation_5__class = tmp_assign_source_32;
        Py_DECREF( old );
    }

    goto try_end_6;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_5__class );
    tmp_class_creation_5__class = NULL;

    Py_XDECREF( tmp_class_creation_5__class_dict );
    tmp_class_creation_5__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    tmp_assign_source_33 = tmp_class_creation_5__class;

    CHECK_OBJECT( tmp_assign_source_33 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_PBKDF2HMACBackend, tmp_assign_source_33 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class );
    Py_DECREF( tmp_class_creation_5__class );
    tmp_class_creation_5__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_dict );
    Py_DECREF( tmp_class_creation_5__class_dict );
    tmp_class_creation_5__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__metaclass );
    Py_DECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    // Tried code:
    tmp_set_locals = PyDict_New();
    locals_RSABackend_97 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
    tmp_res = PyDict_SetItem( locals_RSABackend_97, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_edd0f30df62559ffeebdd256e604d27a_7, codeobj_edd0f30df62559ffeebdd256e604d27a, module_cryptography$hazmat$backends$interfaces, 0 );
    frame_edd0f30df62559ffeebdd256e604d27a_7 = cache_frame_edd0f30df62559ffeebdd256e604d27a_7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_edd0f30df62559ffeebdd256e604d27a_7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_edd0f30df62559ffeebdd256e604d27a_7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_12 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_12 == NULL ))
    {
        tmp_called_instance_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 98;

        goto frame_exception_exit_7;
    }

    tmp_args_element_name_37 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_12_generate_rsa_private_key(  );
    frame_edd0f30df62559ffeebdd256e604d27a_7->m_frame.f_lineno = 98;
    {
        PyObject *call_args[] = { tmp_args_element_name_37 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_12, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_37 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;

        goto frame_exception_exit_7;
    }
    tmp_res = PyDict_SetItem( locals_RSABackend_97, const_str_plain_generate_rsa_private_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;

        goto frame_exception_exit_7;
    }
    tmp_called_instance_13 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_13 == NULL ))
    {
        tmp_called_instance_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 105;

        goto frame_exception_exit_7;
    }

    tmp_args_element_name_38 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_13_rsa_padding_supported(  );
    frame_edd0f30df62559ffeebdd256e604d27a_7->m_frame.f_lineno = 105;
    {
        PyObject *call_args[] = { tmp_args_element_name_38 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_13, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_38 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;

        goto frame_exception_exit_7;
    }
    tmp_res = PyDict_SetItem( locals_RSABackend_97, const_str_plain_rsa_padding_supported, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;

        goto frame_exception_exit_7;
    }
    tmp_called_instance_14 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_14 == NULL ))
    {
        tmp_called_instance_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 111;

        goto frame_exception_exit_7;
    }

    tmp_args_element_name_39 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_14_generate_rsa_parameters_supported(  );
    frame_edd0f30df62559ffeebdd256e604d27a_7->m_frame.f_lineno = 111;
    {
        PyObject *call_args[] = { tmp_args_element_name_39 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_14, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_39 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto frame_exception_exit_7;
    }
    tmp_res = PyDict_SetItem( locals_RSABackend_97, const_str_plain_generate_rsa_parameters_supported, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto frame_exception_exit_7;
    }
    tmp_called_instance_15 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_15 == NULL ))
    {
        tmp_called_instance_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 118;

        goto frame_exception_exit_7;
    }

    tmp_args_element_name_40 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_15_load_rsa_private_numbers(  );
    frame_edd0f30df62559ffeebdd256e604d27a_7->m_frame.f_lineno = 118;
    {
        PyObject *call_args[] = { tmp_args_element_name_40 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_15, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_40 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;

        goto frame_exception_exit_7;
    }
    tmp_res = PyDict_SetItem( locals_RSABackend_97, const_str_plain_load_rsa_private_numbers, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;

        goto frame_exception_exit_7;
    }
    tmp_called_instance_16 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_16 == NULL ))
    {
        tmp_called_instance_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 124;

        goto frame_exception_exit_7;
    }

    tmp_args_element_name_41 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_16_load_rsa_public_numbers(  );
    frame_edd0f30df62559ffeebdd256e604d27a_7->m_frame.f_lineno = 124;
    {
        PyObject *call_args[] = { tmp_args_element_name_41 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_16, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_41 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;

        goto frame_exception_exit_7;
    }
    tmp_res = PyDict_SetItem( locals_RSABackend_97, const_str_plain_load_rsa_public_numbers, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;

        goto frame_exception_exit_7;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_edd0f30df62559ffeebdd256e604d27a_7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_6;

    frame_exception_exit_7:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_edd0f30df62559ffeebdd256e604d27a_7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_edd0f30df62559ffeebdd256e604d27a_7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_edd0f30df62559ffeebdd256e604d27a_7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_edd0f30df62559ffeebdd256e604d27a_7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_edd0f30df62559ffeebdd256e604d27a_7,
        type_description_2
    );


    // Release cached frame.
    if ( frame_edd0f30df62559ffeebdd256e604d27a_7 == cache_frame_edd0f30df62559ffeebdd256e604d27a_7 )
    {
        Py_DECREF( frame_edd0f30df62559ffeebdd256e604d27a_7 );
    }
    cache_frame_edd0f30df62559ffeebdd256e604d27a_7 = NULL;

    assertFrameObject( frame_edd0f30df62559ffeebdd256e604d27a_7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_6;

    frame_no_exception_6:;

    goto skip_nested_handling_6;
    nested_frame_exit_6:;

    goto try_except_handler_13;
    skip_nested_handling_6:;
    tmp_outline_return_value_6 = locals_RSABackend_97;
    Py_INCREF( tmp_outline_return_value_6 );
    goto try_return_handler_13;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_13:;
    Py_DECREF( locals_RSABackend_97 );
    locals_RSABackend_97 = NULL;
    goto outline_result_6;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_RSABackend_97 );
    locals_RSABackend_97 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto outline_exception_6;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_6:;
    exception_lineno = 97;
    goto try_except_handler_12;
    outline_result_6:;
    tmp_assign_source_34 = tmp_outline_return_value_6;
    assert( tmp_class_creation_6__class_dict == NULL );
    tmp_class_creation_6__class_dict = tmp_assign_source_34;

    tmp_compare_left_6 = const_str_plain___metaclass__;
    tmp_compare_right_6 = tmp_class_creation_6__class_dict;

    CHECK_OBJECT( tmp_compare_right_6 );
    tmp_cmp_In_6 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    assert( !(tmp_cmp_In_6 == -1) );
    if ( tmp_cmp_In_6 == 1 )
    {
        goto condexpr_true_6;
    }
    else
    {
        goto condexpr_false_6;
    }
    condexpr_true_6:;
    tmp_dict_name_6 = tmp_class_creation_6__class_dict;

    CHECK_OBJECT( tmp_dict_name_6 );
    tmp_key_name_6 = const_str_plain___metaclass__;
    tmp_assign_source_35 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_12;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_35 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_35 );
    condexpr_end_6:;
    assert( tmp_class_creation_6__metaclass == NULL );
    tmp_class_creation_6__metaclass = tmp_assign_source_35;

    tmp_called_name_16 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_called_name_16 );
    tmp_args_element_name_42 = const_str_plain_RSABackend;
    tmp_args_element_name_43 = const_tuple_type_object_tuple;
    tmp_args_element_name_44 = tmp_class_creation_6__class_dict;

    CHECK_OBJECT( tmp_args_element_name_44 );
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 97;
    {
        PyObject *call_args[] = { tmp_args_element_name_42, tmp_args_element_name_43, tmp_args_element_name_44 };
        tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_16, call_args );
    }

    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_12;
    }
    assert( tmp_class_creation_6__class == NULL );
    tmp_class_creation_6__class = tmp_assign_source_36;

    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;

        exception_lineno = 96;

        goto try_except_handler_12;
    }

    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_add_metaclass );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_12;
    }
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_name_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 96;

        goto try_except_handler_12;
    }

    tmp_args_element_name_45 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_18 );

        exception_lineno = 96;

        goto try_except_handler_12;
    }
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 96;
    {
        PyObject *call_args[] = { tmp_args_element_name_45 };
        tmp_called_name_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_called_name_18 );
    Py_DECREF( tmp_args_element_name_45 );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_12;
    }
    tmp_args_element_name_46 = tmp_class_creation_6__class;

    CHECK_OBJECT( tmp_args_element_name_46 );
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 96;
    {
        PyObject *call_args[] = { tmp_args_element_name_46 };
        tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
    }

    Py_DECREF( tmp_called_name_17 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_12;
    }
    {
        PyObject *old = tmp_class_creation_6__class;
        assert( old != NULL );
        tmp_class_creation_6__class = tmp_assign_source_37;
        Py_DECREF( old );
    }

    goto try_end_7;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_6__class );
    tmp_class_creation_6__class = NULL;

    Py_XDECREF( tmp_class_creation_6__class_dict );
    tmp_class_creation_6__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    tmp_assign_source_38 = tmp_class_creation_6__class;

    CHECK_OBJECT( tmp_assign_source_38 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_RSABackend, tmp_assign_source_38 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class );
    Py_DECREF( tmp_class_creation_6__class );
    tmp_class_creation_6__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class_dict );
    Py_DECREF( tmp_class_creation_6__class_dict );
    tmp_class_creation_6__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__metaclass );
    Py_DECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    // Tried code:
    tmp_set_locals = PyDict_New();
    locals_DSABackend_132 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
    tmp_res = PyDict_SetItem( locals_DSABackend_132, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8449dbe20ecc24dcd7f72c3f8994865f_8, codeobj_8449dbe20ecc24dcd7f72c3f8994865f, module_cryptography$hazmat$backends$interfaces, 0 );
    frame_8449dbe20ecc24dcd7f72c3f8994865f_8 = cache_frame_8449dbe20ecc24dcd7f72c3f8994865f_8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8449dbe20ecc24dcd7f72c3f8994865f_8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8449dbe20ecc24dcd7f72c3f8994865f_8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_17 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_17 == NULL ))
    {
        tmp_called_instance_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 133;

        goto frame_exception_exit_8;
    }

    tmp_args_element_name_47 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_17_generate_dsa_parameters(  );
    frame_8449dbe20ecc24dcd7f72c3f8994865f_8->m_frame.f_lineno = 133;
    {
        PyObject *call_args[] = { tmp_args_element_name_47 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_17, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_47 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto frame_exception_exit_8;
    }
    tmp_res = PyDict_SetItem( locals_DSABackend_132, const_str_plain_generate_dsa_parameters, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto frame_exception_exit_8;
    }
    tmp_called_instance_18 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_18 == NULL ))
    {
        tmp_called_instance_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 139;

        goto frame_exception_exit_8;
    }

    tmp_args_element_name_48 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_18_generate_dsa_private_key(  );
    frame_8449dbe20ecc24dcd7f72c3f8994865f_8->m_frame.f_lineno = 139;
    {
        PyObject *call_args[] = { tmp_args_element_name_48 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_18, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_48 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;

        goto frame_exception_exit_8;
    }
    tmp_res = PyDict_SetItem( locals_DSABackend_132, const_str_plain_generate_dsa_private_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;

        goto frame_exception_exit_8;
    }
    tmp_called_instance_19 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_19 == NULL ))
    {
        tmp_called_instance_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 146;

        goto frame_exception_exit_8;
    }

    tmp_args_element_name_49 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_19_generate_dsa_private_key_and_parameters(  );
    frame_8449dbe20ecc24dcd7f72c3f8994865f_8->m_frame.f_lineno = 146;
    {
        PyObject *call_args[] = { tmp_args_element_name_49 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_19, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_49 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;

        goto frame_exception_exit_8;
    }
    tmp_res = PyDict_SetItem( locals_DSABackend_132, const_str_plain_generate_dsa_private_key_and_parameters, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;

        goto frame_exception_exit_8;
    }
    tmp_called_instance_20 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_20 == NULL ))
    {
        tmp_called_instance_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_20 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 152;

        goto frame_exception_exit_8;
    }

    tmp_args_element_name_50 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_20_dsa_hash_supported(  );
    frame_8449dbe20ecc24dcd7f72c3f8994865f_8->m_frame.f_lineno = 152;
    {
        PyObject *call_args[] = { tmp_args_element_name_50 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_20, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_50 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;

        goto frame_exception_exit_8;
    }
    tmp_res = PyDict_SetItem( locals_DSABackend_132, const_str_plain_dsa_hash_supported, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;

        goto frame_exception_exit_8;
    }
    tmp_called_instance_21 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_21 == NULL ))
    {
        tmp_called_instance_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_21 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 158;

        goto frame_exception_exit_8;
    }

    tmp_args_element_name_51 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_21_dsa_parameters_supported(  );
    frame_8449dbe20ecc24dcd7f72c3f8994865f_8->m_frame.f_lineno = 158;
    {
        PyObject *call_args[] = { tmp_args_element_name_51 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_21, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_51 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;

        goto frame_exception_exit_8;
    }
    tmp_res = PyDict_SetItem( locals_DSABackend_132, const_str_plain_dsa_parameters_supported, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;

        goto frame_exception_exit_8;
    }
    tmp_called_instance_22 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_22 == NULL ))
    {
        tmp_called_instance_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_22 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 164;

        goto frame_exception_exit_8;
    }

    tmp_args_element_name_52 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_22_load_dsa_private_numbers(  );
    frame_8449dbe20ecc24dcd7f72c3f8994865f_8->m_frame.f_lineno = 164;
    {
        PyObject *call_args[] = { tmp_args_element_name_52 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_22, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_52 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;

        goto frame_exception_exit_8;
    }
    tmp_res = PyDict_SetItem( locals_DSABackend_132, const_str_plain_load_dsa_private_numbers, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;

        goto frame_exception_exit_8;
    }
    tmp_called_instance_23 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_23 == NULL ))
    {
        tmp_called_instance_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_23 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 170;

        goto frame_exception_exit_8;
    }

    tmp_args_element_name_53 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_23_load_dsa_public_numbers(  );
    frame_8449dbe20ecc24dcd7f72c3f8994865f_8->m_frame.f_lineno = 170;
    {
        PyObject *call_args[] = { tmp_args_element_name_53 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_23, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_53 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto frame_exception_exit_8;
    }
    tmp_res = PyDict_SetItem( locals_DSABackend_132, const_str_plain_load_dsa_public_numbers, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto frame_exception_exit_8;
    }
    tmp_called_instance_24 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_24 == NULL ))
    {
        tmp_called_instance_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_24 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 176;

        goto frame_exception_exit_8;
    }

    tmp_args_element_name_54 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_24_load_dsa_parameter_numbers(  );
    frame_8449dbe20ecc24dcd7f72c3f8994865f_8->m_frame.f_lineno = 176;
    {
        PyObject *call_args[] = { tmp_args_element_name_54 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_24, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_54 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;

        goto frame_exception_exit_8;
    }
    tmp_res = PyDict_SetItem( locals_DSABackend_132, const_str_plain_load_dsa_parameter_numbers, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;

        goto frame_exception_exit_8;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8449dbe20ecc24dcd7f72c3f8994865f_8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_7;

    frame_exception_exit_8:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8449dbe20ecc24dcd7f72c3f8994865f_8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8449dbe20ecc24dcd7f72c3f8994865f_8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8449dbe20ecc24dcd7f72c3f8994865f_8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8449dbe20ecc24dcd7f72c3f8994865f_8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8449dbe20ecc24dcd7f72c3f8994865f_8,
        type_description_2
    );


    // Release cached frame.
    if ( frame_8449dbe20ecc24dcd7f72c3f8994865f_8 == cache_frame_8449dbe20ecc24dcd7f72c3f8994865f_8 )
    {
        Py_DECREF( frame_8449dbe20ecc24dcd7f72c3f8994865f_8 );
    }
    cache_frame_8449dbe20ecc24dcd7f72c3f8994865f_8 = NULL;

    assertFrameObject( frame_8449dbe20ecc24dcd7f72c3f8994865f_8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_7;

    frame_no_exception_7:;

    goto skip_nested_handling_7;
    nested_frame_exit_7:;

    goto try_except_handler_15;
    skip_nested_handling_7:;
    tmp_outline_return_value_7 = locals_DSABackend_132;
    Py_INCREF( tmp_outline_return_value_7 );
    goto try_return_handler_15;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_15:;
    Py_DECREF( locals_DSABackend_132 );
    locals_DSABackend_132 = NULL;
    goto outline_result_7;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_DSABackend_132 );
    locals_DSABackend_132 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto outline_exception_7;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_7:;
    exception_lineno = 132;
    goto try_except_handler_14;
    outline_result_7:;
    tmp_assign_source_39 = tmp_outline_return_value_7;
    assert( tmp_class_creation_7__class_dict == NULL );
    tmp_class_creation_7__class_dict = tmp_assign_source_39;

    tmp_compare_left_7 = const_str_plain___metaclass__;
    tmp_compare_right_7 = tmp_class_creation_7__class_dict;

    CHECK_OBJECT( tmp_compare_right_7 );
    tmp_cmp_In_7 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    assert( !(tmp_cmp_In_7 == -1) );
    if ( tmp_cmp_In_7 == 1 )
    {
        goto condexpr_true_7;
    }
    else
    {
        goto condexpr_false_7;
    }
    condexpr_true_7:;
    tmp_dict_name_7 = tmp_class_creation_7__class_dict;

    CHECK_OBJECT( tmp_dict_name_7 );
    tmp_key_name_7 = const_str_plain___metaclass__;
    tmp_assign_source_40 = DICT_GET_ITEM( tmp_dict_name_7, tmp_key_name_7 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;

        goto try_except_handler_14;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_assign_source_40 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_40 );
    condexpr_end_7:;
    assert( tmp_class_creation_7__metaclass == NULL );
    tmp_class_creation_7__metaclass = tmp_assign_source_40;

    tmp_called_name_19 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_called_name_19 );
    tmp_args_element_name_55 = const_str_plain_DSABackend;
    tmp_args_element_name_56 = const_tuple_type_object_tuple;
    tmp_args_element_name_57 = tmp_class_creation_7__class_dict;

    CHECK_OBJECT( tmp_args_element_name_57 );
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 132;
    {
        PyObject *call_args[] = { tmp_args_element_name_55, tmp_args_element_name_56, tmp_args_element_name_57 };
        tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_19, call_args );
    }

    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;

        goto try_except_handler_14;
    }
    assert( tmp_class_creation_7__class == NULL );
    tmp_class_creation_7__class = tmp_assign_source_41;

    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;

        exception_lineno = 131;

        goto try_except_handler_14;
    }

    tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_add_metaclass );
    if ( tmp_called_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto try_except_handler_14;
    }
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_called_name_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 131;

        goto try_except_handler_14;
    }

    tmp_args_element_name_58 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_21 );

        exception_lineno = 131;

        goto try_except_handler_14;
    }
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 131;
    {
        PyObject *call_args[] = { tmp_args_element_name_58 };
        tmp_called_name_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
    }

    Py_DECREF( tmp_called_name_21 );
    Py_DECREF( tmp_args_element_name_58 );
    if ( tmp_called_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto try_except_handler_14;
    }
    tmp_args_element_name_59 = tmp_class_creation_7__class;

    CHECK_OBJECT( tmp_args_element_name_59 );
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 131;
    {
        PyObject *call_args[] = { tmp_args_element_name_59 };
        tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
    }

    Py_DECREF( tmp_called_name_20 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto try_except_handler_14;
    }
    {
        PyObject *old = tmp_class_creation_7__class;
        assert( old != NULL );
        tmp_class_creation_7__class = tmp_assign_source_42;
        Py_DECREF( old );
    }

    goto try_end_8;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_7__class );
    tmp_class_creation_7__class = NULL;

    Py_XDECREF( tmp_class_creation_7__class_dict );
    tmp_class_creation_7__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    tmp_assign_source_43 = tmp_class_creation_7__class;

    CHECK_OBJECT( tmp_assign_source_43 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_DSABackend, tmp_assign_source_43 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class );
    Py_DECREF( tmp_class_creation_7__class );
    tmp_class_creation_7__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class_dict );
    Py_DECREF( tmp_class_creation_7__class_dict );
    tmp_class_creation_7__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__metaclass );
    Py_DECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    // Tried code:
    tmp_set_locals = PyDict_New();
    locals_EllipticCurveBackend_184 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
    tmp_res = PyDict_SetItem( locals_EllipticCurveBackend_184, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ca1a22e4230eeb8f731fdb3611440be2_9, codeobj_ca1a22e4230eeb8f731fdb3611440be2, module_cryptography$hazmat$backends$interfaces, 0 );
    frame_ca1a22e4230eeb8f731fdb3611440be2_9 = cache_frame_ca1a22e4230eeb8f731fdb3611440be2_9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ca1a22e4230eeb8f731fdb3611440be2_9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ca1a22e4230eeb8f731fdb3611440be2_9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_25 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_25 == NULL ))
    {
        tmp_called_instance_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_25 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 185;

        goto frame_exception_exit_9;
    }

    tmp_args_element_name_60 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_25_elliptic_curve_signature_algorithm_supported(  );
    frame_ca1a22e4230eeb8f731fdb3611440be2_9->m_frame.f_lineno = 185;
    {
        PyObject *call_args[] = { tmp_args_element_name_60 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_25, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_60 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;

        goto frame_exception_exit_9;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurveBackend_184, const_str_digest_dd100ab5223cfe86cc19d075c4c9e8d3, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;

        goto frame_exception_exit_9;
    }
    tmp_called_instance_26 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_26 == NULL ))
    {
        tmp_called_instance_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_26 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 194;

        goto frame_exception_exit_9;
    }

    tmp_args_element_name_61 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_26_elliptic_curve_supported(  );
    frame_ca1a22e4230eeb8f731fdb3611440be2_9->m_frame.f_lineno = 194;
    {
        PyObject *call_args[] = { tmp_args_element_name_61 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_26, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_61 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;

        goto frame_exception_exit_9;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurveBackend_184, const_str_plain_elliptic_curve_supported, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;

        goto frame_exception_exit_9;
    }
    tmp_called_instance_27 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_27 == NULL ))
    {
        tmp_called_instance_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_27 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 200;

        goto frame_exception_exit_9;
    }

    tmp_args_element_name_62 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_27_generate_elliptic_curve_private_key(  );
    frame_ca1a22e4230eeb8f731fdb3611440be2_9->m_frame.f_lineno = 200;
    {
        PyObject *call_args[] = { tmp_args_element_name_62 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_27, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_62 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;

        goto frame_exception_exit_9;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurveBackend_184, const_str_plain_generate_elliptic_curve_private_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;

        goto frame_exception_exit_9;
    }
    tmp_called_instance_28 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_28 == NULL ))
    {
        tmp_called_instance_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_28 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 206;

        goto frame_exception_exit_9;
    }

    tmp_args_element_name_63 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_28_load_elliptic_curve_public_numbers(  );
    frame_ca1a22e4230eeb8f731fdb3611440be2_9->m_frame.f_lineno = 206;
    {
        PyObject *call_args[] = { tmp_args_element_name_63 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_28, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_63 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;

        goto frame_exception_exit_9;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurveBackend_184, const_str_plain_load_elliptic_curve_public_numbers, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;

        goto frame_exception_exit_9;
    }
    tmp_called_instance_29 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_29 == NULL ))
    {
        tmp_called_instance_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_29 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 212;

        goto frame_exception_exit_9;
    }

    tmp_args_element_name_64 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_29_load_elliptic_curve_private_numbers(  );
    frame_ca1a22e4230eeb8f731fdb3611440be2_9->m_frame.f_lineno = 212;
    {
        PyObject *call_args[] = { tmp_args_element_name_64 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_29, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_64 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;

        goto frame_exception_exit_9;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurveBackend_184, const_str_plain_load_elliptic_curve_private_numbers, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;

        goto frame_exception_exit_9;
    }
    tmp_called_instance_30 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_30 == NULL ))
    {
        tmp_called_instance_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_30 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 218;

        goto frame_exception_exit_9;
    }

    tmp_args_element_name_65 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_30_elliptic_curve_exchange_algorithm_supported(  );
    frame_ca1a22e4230eeb8f731fdb3611440be2_9->m_frame.f_lineno = 218;
    {
        PyObject *call_args[] = { tmp_args_element_name_65 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_30, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_65 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;

        goto frame_exception_exit_9;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurveBackend_184, const_str_digest_19dba398fcfd0968a3203d943a394d68, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;

        goto frame_exception_exit_9;
    }
    tmp_called_instance_31 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_31 == NULL ))
    {
        tmp_called_instance_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_31 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 224;

        goto frame_exception_exit_9;
    }

    tmp_args_element_name_66 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_31_derive_elliptic_curve_private_key(  );
    frame_ca1a22e4230eeb8f731fdb3611440be2_9->m_frame.f_lineno = 224;
    {
        PyObject *call_args[] = { tmp_args_element_name_66 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_31, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_66 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;

        goto frame_exception_exit_9;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurveBackend_184, const_str_plain_derive_elliptic_curve_private_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;

        goto frame_exception_exit_9;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ca1a22e4230eeb8f731fdb3611440be2_9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_8;

    frame_exception_exit_9:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ca1a22e4230eeb8f731fdb3611440be2_9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ca1a22e4230eeb8f731fdb3611440be2_9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ca1a22e4230eeb8f731fdb3611440be2_9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ca1a22e4230eeb8f731fdb3611440be2_9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ca1a22e4230eeb8f731fdb3611440be2_9,
        type_description_2
    );


    // Release cached frame.
    if ( frame_ca1a22e4230eeb8f731fdb3611440be2_9 == cache_frame_ca1a22e4230eeb8f731fdb3611440be2_9 )
    {
        Py_DECREF( frame_ca1a22e4230eeb8f731fdb3611440be2_9 );
    }
    cache_frame_ca1a22e4230eeb8f731fdb3611440be2_9 = NULL;

    assertFrameObject( frame_ca1a22e4230eeb8f731fdb3611440be2_9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_8;

    frame_no_exception_8:;

    goto skip_nested_handling_8;
    nested_frame_exit_8:;

    goto try_except_handler_17;
    skip_nested_handling_8:;
    tmp_outline_return_value_8 = locals_EllipticCurveBackend_184;
    Py_INCREF( tmp_outline_return_value_8 );
    goto try_return_handler_17;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_17:;
    Py_DECREF( locals_EllipticCurveBackend_184 );
    locals_EllipticCurveBackend_184 = NULL;
    goto outline_result_8;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_EllipticCurveBackend_184 );
    locals_EllipticCurveBackend_184 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto outline_exception_8;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_8:;
    exception_lineno = 184;
    goto try_except_handler_16;
    outline_result_8:;
    tmp_assign_source_44 = tmp_outline_return_value_8;
    assert( tmp_class_creation_8__class_dict == NULL );
    tmp_class_creation_8__class_dict = tmp_assign_source_44;

    tmp_compare_left_8 = const_str_plain___metaclass__;
    tmp_compare_right_8 = tmp_class_creation_8__class_dict;

    CHECK_OBJECT( tmp_compare_right_8 );
    tmp_cmp_In_8 = PySequence_Contains( tmp_compare_right_8, tmp_compare_left_8 );
    assert( !(tmp_cmp_In_8 == -1) );
    if ( tmp_cmp_In_8 == 1 )
    {
        goto condexpr_true_8;
    }
    else
    {
        goto condexpr_false_8;
    }
    condexpr_true_8:;
    tmp_dict_name_8 = tmp_class_creation_8__class_dict;

    CHECK_OBJECT( tmp_dict_name_8 );
    tmp_key_name_8 = const_str_plain___metaclass__;
    tmp_assign_source_45 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;

        goto try_except_handler_16;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_assign_source_45 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_45 );
    condexpr_end_8:;
    assert( tmp_class_creation_8__metaclass == NULL );
    tmp_class_creation_8__metaclass = tmp_assign_source_45;

    tmp_called_name_22 = tmp_class_creation_8__metaclass;

    CHECK_OBJECT( tmp_called_name_22 );
    tmp_args_element_name_67 = const_str_plain_EllipticCurveBackend;
    tmp_args_element_name_68 = const_tuple_type_object_tuple;
    tmp_args_element_name_69 = tmp_class_creation_8__class_dict;

    CHECK_OBJECT( tmp_args_element_name_69 );
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 184;
    {
        PyObject *call_args[] = { tmp_args_element_name_67, tmp_args_element_name_68, tmp_args_element_name_69 };
        tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_22, call_args );
    }

    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;

        goto try_except_handler_16;
    }
    assert( tmp_class_creation_8__class == NULL );
    tmp_class_creation_8__class = tmp_assign_source_46;

    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;

        exception_lineno = 183;

        goto try_except_handler_16;
    }

    tmp_called_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_add_metaclass );
    if ( tmp_called_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;

        goto try_except_handler_16;
    }
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_called_name_24 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 183;

        goto try_except_handler_16;
    }

    tmp_args_element_name_70 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_70 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_24 );

        exception_lineno = 183;

        goto try_except_handler_16;
    }
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 183;
    {
        PyObject *call_args[] = { tmp_args_element_name_70 };
        tmp_called_name_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, call_args );
    }

    Py_DECREF( tmp_called_name_24 );
    Py_DECREF( tmp_args_element_name_70 );
    if ( tmp_called_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;

        goto try_except_handler_16;
    }
    tmp_args_element_name_71 = tmp_class_creation_8__class;

    CHECK_OBJECT( tmp_args_element_name_71 );
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 183;
    {
        PyObject *call_args[] = { tmp_args_element_name_71 };
        tmp_assign_source_47 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
    }

    Py_DECREF( tmp_called_name_23 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;

        goto try_except_handler_16;
    }
    {
        PyObject *old = tmp_class_creation_8__class;
        assert( old != NULL );
        tmp_class_creation_8__class = tmp_assign_source_47;
        Py_DECREF( old );
    }

    goto try_end_9;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_8__class );
    tmp_class_creation_8__class = NULL;

    Py_XDECREF( tmp_class_creation_8__class_dict );
    tmp_class_creation_8__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    tmp_assign_source_48 = tmp_class_creation_8__class;

    CHECK_OBJECT( tmp_assign_source_48 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_EllipticCurveBackend, tmp_assign_source_48 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__class );
    Py_DECREF( tmp_class_creation_8__class );
    tmp_class_creation_8__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__class_dict );
    Py_DECREF( tmp_class_creation_8__class_dict );
    tmp_class_creation_8__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__metaclass );
    Py_DECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    // Tried code:
    tmp_set_locals = PyDict_New();
    locals_PEMSerializationBackend_232 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
    tmp_res = PyDict_SetItem( locals_PEMSerializationBackend_232, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4265d672072f923138387db5dcf65cd5_10, codeobj_4265d672072f923138387db5dcf65cd5, module_cryptography$hazmat$backends$interfaces, 0 );
    frame_4265d672072f923138387db5dcf65cd5_10 = cache_frame_4265d672072f923138387db5dcf65cd5_10;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4265d672072f923138387db5dcf65cd5_10 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4265d672072f923138387db5dcf65cd5_10 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_32 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_32 == NULL ))
    {
        tmp_called_instance_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_32 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 233;

        goto frame_exception_exit_10;
    }

    tmp_args_element_name_72 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_32_load_pem_private_key(  );
    frame_4265d672072f923138387db5dcf65cd5_10->m_frame.f_lineno = 233;
    {
        PyObject *call_args[] = { tmp_args_element_name_72 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_32, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_72 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;

        goto frame_exception_exit_10;
    }
    tmp_res = PyDict_SetItem( locals_PEMSerializationBackend_232, const_str_plain_load_pem_private_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;

        goto frame_exception_exit_10;
    }
    tmp_called_instance_33 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_33 == NULL ))
    {
        tmp_called_instance_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_33 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 240;

        goto frame_exception_exit_10;
    }

    tmp_args_element_name_73 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_33_load_pem_public_key(  );
    frame_4265d672072f923138387db5dcf65cd5_10->m_frame.f_lineno = 240;
    {
        PyObject *call_args[] = { tmp_args_element_name_73 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_33, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_73 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;

        goto frame_exception_exit_10;
    }
    tmp_res = PyDict_SetItem( locals_PEMSerializationBackend_232, const_str_plain_load_pem_public_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;

        goto frame_exception_exit_10;
    }
    tmp_called_instance_34 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_34 == NULL ))
    {
        tmp_called_instance_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_34 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 246;

        goto frame_exception_exit_10;
    }

    tmp_args_element_name_74 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_34_load_pem_parameters(  );
    frame_4265d672072f923138387db5dcf65cd5_10->m_frame.f_lineno = 246;
    {
        PyObject *call_args[] = { tmp_args_element_name_74 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_34, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_74 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;

        goto frame_exception_exit_10;
    }
    tmp_res = PyDict_SetItem( locals_PEMSerializationBackend_232, const_str_plain_load_pem_parameters, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;

        goto frame_exception_exit_10;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4265d672072f923138387db5dcf65cd5_10 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_9;

    frame_exception_exit_10:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4265d672072f923138387db5dcf65cd5_10 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4265d672072f923138387db5dcf65cd5_10, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4265d672072f923138387db5dcf65cd5_10->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4265d672072f923138387db5dcf65cd5_10, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4265d672072f923138387db5dcf65cd5_10,
        type_description_2
    );


    // Release cached frame.
    if ( frame_4265d672072f923138387db5dcf65cd5_10 == cache_frame_4265d672072f923138387db5dcf65cd5_10 )
    {
        Py_DECREF( frame_4265d672072f923138387db5dcf65cd5_10 );
    }
    cache_frame_4265d672072f923138387db5dcf65cd5_10 = NULL;

    assertFrameObject( frame_4265d672072f923138387db5dcf65cd5_10 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_9;

    frame_no_exception_9:;

    goto skip_nested_handling_9;
    nested_frame_exit_9:;

    goto try_except_handler_19;
    skip_nested_handling_9:;
    tmp_outline_return_value_9 = locals_PEMSerializationBackend_232;
    Py_INCREF( tmp_outline_return_value_9 );
    goto try_return_handler_19;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_19:;
    Py_DECREF( locals_PEMSerializationBackend_232 );
    locals_PEMSerializationBackend_232 = NULL;
    goto outline_result_9;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_PEMSerializationBackend_232 );
    locals_PEMSerializationBackend_232 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto outline_exception_9;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_9:;
    exception_lineno = 232;
    goto try_except_handler_18;
    outline_result_9:;
    tmp_assign_source_49 = tmp_outline_return_value_9;
    assert( tmp_class_creation_9__class_dict == NULL );
    tmp_class_creation_9__class_dict = tmp_assign_source_49;

    tmp_compare_left_9 = const_str_plain___metaclass__;
    tmp_compare_right_9 = tmp_class_creation_9__class_dict;

    CHECK_OBJECT( tmp_compare_right_9 );
    tmp_cmp_In_9 = PySequence_Contains( tmp_compare_right_9, tmp_compare_left_9 );
    assert( !(tmp_cmp_In_9 == -1) );
    if ( tmp_cmp_In_9 == 1 )
    {
        goto condexpr_true_9;
    }
    else
    {
        goto condexpr_false_9;
    }
    condexpr_true_9:;
    tmp_dict_name_9 = tmp_class_creation_9__class_dict;

    CHECK_OBJECT( tmp_dict_name_9 );
    tmp_key_name_9 = const_str_plain___metaclass__;
    tmp_assign_source_50 = DICT_GET_ITEM( tmp_dict_name_9, tmp_key_name_9 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;

        goto try_except_handler_18;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_assign_source_50 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_50 );
    condexpr_end_9:;
    assert( tmp_class_creation_9__metaclass == NULL );
    tmp_class_creation_9__metaclass = tmp_assign_source_50;

    tmp_called_name_25 = tmp_class_creation_9__metaclass;

    CHECK_OBJECT( tmp_called_name_25 );
    tmp_args_element_name_75 = const_str_plain_PEMSerializationBackend;
    tmp_args_element_name_76 = const_tuple_type_object_tuple;
    tmp_args_element_name_77 = tmp_class_creation_9__class_dict;

    CHECK_OBJECT( tmp_args_element_name_77 );
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 232;
    {
        PyObject *call_args[] = { tmp_args_element_name_75, tmp_args_element_name_76, tmp_args_element_name_77 };
        tmp_assign_source_51 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_25, call_args );
    }

    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;

        goto try_except_handler_18;
    }
    assert( tmp_class_creation_9__class == NULL );
    tmp_class_creation_9__class = tmp_assign_source_51;

    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;

        exception_lineno = 231;

        goto try_except_handler_18;
    }

    tmp_called_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_add_metaclass );
    if ( tmp_called_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;

        goto try_except_handler_18;
    }
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_18 == NULL )
    {
        Py_DECREF( tmp_called_name_27 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 231;

        goto try_except_handler_18;
    }

    tmp_args_element_name_78 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_78 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_27 );

        exception_lineno = 231;

        goto try_except_handler_18;
    }
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 231;
    {
        PyObject *call_args[] = { tmp_args_element_name_78 };
        tmp_called_name_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_27, call_args );
    }

    Py_DECREF( tmp_called_name_27 );
    Py_DECREF( tmp_args_element_name_78 );
    if ( tmp_called_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;

        goto try_except_handler_18;
    }
    tmp_args_element_name_79 = tmp_class_creation_9__class;

    CHECK_OBJECT( tmp_args_element_name_79 );
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 231;
    {
        PyObject *call_args[] = { tmp_args_element_name_79 };
        tmp_assign_source_52 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, call_args );
    }

    Py_DECREF( tmp_called_name_26 );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;

        goto try_except_handler_18;
    }
    {
        PyObject *old = tmp_class_creation_9__class;
        assert( old != NULL );
        tmp_class_creation_9__class = tmp_assign_source_52;
        Py_DECREF( old );
    }

    goto try_end_10;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_9__class );
    tmp_class_creation_9__class = NULL;

    Py_XDECREF( tmp_class_creation_9__class_dict );
    tmp_class_creation_9__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    tmp_assign_source_53 = tmp_class_creation_9__class;

    CHECK_OBJECT( tmp_assign_source_53 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_PEMSerializationBackend, tmp_assign_source_53 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__class );
    Py_DECREF( tmp_class_creation_9__class );
    tmp_class_creation_9__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__class_dict );
    Py_DECREF( tmp_class_creation_9__class_dict );
    tmp_class_creation_9__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__metaclass );
    Py_DECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    // Tried code:
    tmp_set_locals = PyDict_New();
    locals_DERSerializationBackend_254 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
    tmp_res = PyDict_SetItem( locals_DERSerializationBackend_254, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fd9e93db906e46859f88fef582831b6a_11, codeobj_fd9e93db906e46859f88fef582831b6a, module_cryptography$hazmat$backends$interfaces, 0 );
    frame_fd9e93db906e46859f88fef582831b6a_11 = cache_frame_fd9e93db906e46859f88fef582831b6a_11;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fd9e93db906e46859f88fef582831b6a_11 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fd9e93db906e46859f88fef582831b6a_11 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_35 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_35 == NULL ))
    {
        tmp_called_instance_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_35 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 255;

        goto frame_exception_exit_11;
    }

    tmp_args_element_name_80 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_35_load_der_private_key(  );
    frame_fd9e93db906e46859f88fef582831b6a_11->m_frame.f_lineno = 255;
    {
        PyObject *call_args[] = { tmp_args_element_name_80 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_35, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_80 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;

        goto frame_exception_exit_11;
    }
    tmp_res = PyDict_SetItem( locals_DERSerializationBackend_254, const_str_plain_load_der_private_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;

        goto frame_exception_exit_11;
    }
    tmp_called_instance_36 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_36 == NULL ))
    {
        tmp_called_instance_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_36 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 262;

        goto frame_exception_exit_11;
    }

    tmp_args_element_name_81 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_36_load_der_public_key(  );
    frame_fd9e93db906e46859f88fef582831b6a_11->m_frame.f_lineno = 262;
    {
        PyObject *call_args[] = { tmp_args_element_name_81 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_36, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_81 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 262;

        goto frame_exception_exit_11;
    }
    tmp_res = PyDict_SetItem( locals_DERSerializationBackend_254, const_str_plain_load_der_public_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 262;

        goto frame_exception_exit_11;
    }
    tmp_called_instance_37 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_37 == NULL ))
    {
        tmp_called_instance_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_37 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 268;

        goto frame_exception_exit_11;
    }

    tmp_args_element_name_82 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_37_load_der_parameters(  );
    frame_fd9e93db906e46859f88fef582831b6a_11->m_frame.f_lineno = 268;
    {
        PyObject *call_args[] = { tmp_args_element_name_82 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_37, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_82 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;

        goto frame_exception_exit_11;
    }
    tmp_res = PyDict_SetItem( locals_DERSerializationBackend_254, const_str_plain_load_der_parameters, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;

        goto frame_exception_exit_11;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fd9e93db906e46859f88fef582831b6a_11 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_10;

    frame_exception_exit_11:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fd9e93db906e46859f88fef582831b6a_11 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fd9e93db906e46859f88fef582831b6a_11, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fd9e93db906e46859f88fef582831b6a_11->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fd9e93db906e46859f88fef582831b6a_11, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fd9e93db906e46859f88fef582831b6a_11,
        type_description_2
    );


    // Release cached frame.
    if ( frame_fd9e93db906e46859f88fef582831b6a_11 == cache_frame_fd9e93db906e46859f88fef582831b6a_11 )
    {
        Py_DECREF( frame_fd9e93db906e46859f88fef582831b6a_11 );
    }
    cache_frame_fd9e93db906e46859f88fef582831b6a_11 = NULL;

    assertFrameObject( frame_fd9e93db906e46859f88fef582831b6a_11 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_10;

    frame_no_exception_10:;

    goto skip_nested_handling_10;
    nested_frame_exit_10:;

    goto try_except_handler_21;
    skip_nested_handling_10:;
    tmp_outline_return_value_10 = locals_DERSerializationBackend_254;
    Py_INCREF( tmp_outline_return_value_10 );
    goto try_return_handler_21;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_21:;
    Py_DECREF( locals_DERSerializationBackend_254 );
    locals_DERSerializationBackend_254 = NULL;
    goto outline_result_10;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_DERSerializationBackend_254 );
    locals_DERSerializationBackend_254 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto outline_exception_10;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_10:;
    exception_lineno = 254;
    goto try_except_handler_20;
    outline_result_10:;
    tmp_assign_source_54 = tmp_outline_return_value_10;
    assert( tmp_class_creation_10__class_dict == NULL );
    tmp_class_creation_10__class_dict = tmp_assign_source_54;

    tmp_compare_left_10 = const_str_plain___metaclass__;
    tmp_compare_right_10 = tmp_class_creation_10__class_dict;

    CHECK_OBJECT( tmp_compare_right_10 );
    tmp_cmp_In_10 = PySequence_Contains( tmp_compare_right_10, tmp_compare_left_10 );
    assert( !(tmp_cmp_In_10 == -1) );
    if ( tmp_cmp_In_10 == 1 )
    {
        goto condexpr_true_10;
    }
    else
    {
        goto condexpr_false_10;
    }
    condexpr_true_10:;
    tmp_dict_name_10 = tmp_class_creation_10__class_dict;

    CHECK_OBJECT( tmp_dict_name_10 );
    tmp_key_name_10 = const_str_plain___metaclass__;
    tmp_assign_source_55 = DICT_GET_ITEM( tmp_dict_name_10, tmp_key_name_10 );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;

        goto try_except_handler_20;
    }
    goto condexpr_end_10;
    condexpr_false_10:;
    tmp_assign_source_55 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_55 );
    condexpr_end_10:;
    assert( tmp_class_creation_10__metaclass == NULL );
    tmp_class_creation_10__metaclass = tmp_assign_source_55;

    tmp_called_name_28 = tmp_class_creation_10__metaclass;

    CHECK_OBJECT( tmp_called_name_28 );
    tmp_args_element_name_83 = const_str_plain_DERSerializationBackend;
    tmp_args_element_name_84 = const_tuple_type_object_tuple;
    tmp_args_element_name_85 = tmp_class_creation_10__class_dict;

    CHECK_OBJECT( tmp_args_element_name_85 );
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 254;
    {
        PyObject *call_args[] = { tmp_args_element_name_83, tmp_args_element_name_84, tmp_args_element_name_85 };
        tmp_assign_source_56 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_28, call_args );
    }

    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;

        goto try_except_handler_20;
    }
    assert( tmp_class_creation_10__class == NULL );
    tmp_class_creation_10__class = tmp_assign_source_56;

    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;

        exception_lineno = 253;

        goto try_except_handler_20;
    }

    tmp_called_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_add_metaclass );
    if ( tmp_called_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;

        goto try_except_handler_20;
    }
    tmp_source_name_20 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_20 == NULL ))
    {
        tmp_source_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_20 == NULL )
    {
        Py_DECREF( tmp_called_name_30 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 253;

        goto try_except_handler_20;
    }

    tmp_args_element_name_86 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_86 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_30 );

        exception_lineno = 253;

        goto try_except_handler_20;
    }
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 253;
    {
        PyObject *call_args[] = { tmp_args_element_name_86 };
        tmp_called_name_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_30, call_args );
    }

    Py_DECREF( tmp_called_name_30 );
    Py_DECREF( tmp_args_element_name_86 );
    if ( tmp_called_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;

        goto try_except_handler_20;
    }
    tmp_args_element_name_87 = tmp_class_creation_10__class;

    CHECK_OBJECT( tmp_args_element_name_87 );
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 253;
    {
        PyObject *call_args[] = { tmp_args_element_name_87 };
        tmp_assign_source_57 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_29, call_args );
    }

    Py_DECREF( tmp_called_name_29 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;

        goto try_except_handler_20;
    }
    {
        PyObject *old = tmp_class_creation_10__class;
        assert( old != NULL );
        tmp_class_creation_10__class = tmp_assign_source_57;
        Py_DECREF( old );
    }

    goto try_end_11;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_10__class );
    tmp_class_creation_10__class = NULL;

    Py_XDECREF( tmp_class_creation_10__class_dict );
    tmp_class_creation_10__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_10__metaclass );
    tmp_class_creation_10__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    tmp_assign_source_58 = tmp_class_creation_10__class;

    CHECK_OBJECT( tmp_assign_source_58 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_DERSerializationBackend, tmp_assign_source_58 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__class );
    Py_DECREF( tmp_class_creation_10__class );
    tmp_class_creation_10__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__class_dict );
    Py_DECREF( tmp_class_creation_10__class_dict );
    tmp_class_creation_10__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__metaclass );
    Py_DECREF( tmp_class_creation_10__metaclass );
    tmp_class_creation_10__metaclass = NULL;

    // Tried code:
    tmp_set_locals = PyDict_New();
    locals_X509Backend_276 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
    tmp_res = PyDict_SetItem( locals_X509Backend_276, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_13506ae3e7a2df5f2b13e536a7095d81_12, codeobj_13506ae3e7a2df5f2b13e536a7095d81, module_cryptography$hazmat$backends$interfaces, 0 );
    frame_13506ae3e7a2df5f2b13e536a7095d81_12 = cache_frame_13506ae3e7a2df5f2b13e536a7095d81_12;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_13506ae3e7a2df5f2b13e536a7095d81_12 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_13506ae3e7a2df5f2b13e536a7095d81_12 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_38 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_38 == NULL ))
    {
        tmp_called_instance_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_38 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 277;

        goto frame_exception_exit_12;
    }

    tmp_args_element_name_88 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_38_load_pem_x509_certificate(  );
    frame_13506ae3e7a2df5f2b13e536a7095d81_12->m_frame.f_lineno = 277;
    {
        PyObject *call_args[] = { tmp_args_element_name_88 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_38, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_88 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;

        goto frame_exception_exit_12;
    }
    tmp_res = PyDict_SetItem( locals_X509Backend_276, const_str_plain_load_pem_x509_certificate, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;

        goto frame_exception_exit_12;
    }
    tmp_called_instance_39 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_39 == NULL ))
    {
        tmp_called_instance_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_39 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 283;

        goto frame_exception_exit_12;
    }

    tmp_args_element_name_89 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_39_load_der_x509_certificate(  );
    frame_13506ae3e7a2df5f2b13e536a7095d81_12->m_frame.f_lineno = 283;
    {
        PyObject *call_args[] = { tmp_args_element_name_89 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_39, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_89 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 283;

        goto frame_exception_exit_12;
    }
    tmp_res = PyDict_SetItem( locals_X509Backend_276, const_str_plain_load_der_x509_certificate, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 283;

        goto frame_exception_exit_12;
    }
    tmp_called_instance_40 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_40 == NULL ))
    {
        tmp_called_instance_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_40 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 289;

        goto frame_exception_exit_12;
    }

    tmp_args_element_name_90 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_40_load_der_x509_csr(  );
    frame_13506ae3e7a2df5f2b13e536a7095d81_12->m_frame.f_lineno = 289;
    {
        PyObject *call_args[] = { tmp_args_element_name_90 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_40, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_90 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 289;

        goto frame_exception_exit_12;
    }
    tmp_res = PyDict_SetItem( locals_X509Backend_276, const_str_plain_load_der_x509_csr, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 289;

        goto frame_exception_exit_12;
    }
    tmp_called_instance_41 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_41 == NULL ))
    {
        tmp_called_instance_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_41 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 295;

        goto frame_exception_exit_12;
    }

    tmp_args_element_name_91 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_41_load_pem_x509_csr(  );
    frame_13506ae3e7a2df5f2b13e536a7095d81_12->m_frame.f_lineno = 295;
    {
        PyObject *call_args[] = { tmp_args_element_name_91 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_41, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_91 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 295;

        goto frame_exception_exit_12;
    }
    tmp_res = PyDict_SetItem( locals_X509Backend_276, const_str_plain_load_pem_x509_csr, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 295;

        goto frame_exception_exit_12;
    }
    tmp_called_instance_42 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_42 == NULL ))
    {
        tmp_called_instance_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_42 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 301;

        goto frame_exception_exit_12;
    }

    tmp_args_element_name_92 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_42_create_x509_csr(  );
    frame_13506ae3e7a2df5f2b13e536a7095d81_12->m_frame.f_lineno = 301;
    {
        PyObject *call_args[] = { tmp_args_element_name_92 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_42, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_92 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 301;

        goto frame_exception_exit_12;
    }
    tmp_res = PyDict_SetItem( locals_X509Backend_276, const_str_plain_create_x509_csr, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 301;

        goto frame_exception_exit_12;
    }
    tmp_called_instance_43 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_43 == NULL ))
    {
        tmp_called_instance_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_43 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 307;

        goto frame_exception_exit_12;
    }

    tmp_args_element_name_93 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_43_create_x509_certificate(  );
    frame_13506ae3e7a2df5f2b13e536a7095d81_12->m_frame.f_lineno = 307;
    {
        PyObject *call_args[] = { tmp_args_element_name_93 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_43, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_93 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 307;

        goto frame_exception_exit_12;
    }
    tmp_res = PyDict_SetItem( locals_X509Backend_276, const_str_plain_create_x509_certificate, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 307;

        goto frame_exception_exit_12;
    }
    tmp_called_instance_44 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_44 == NULL ))
    {
        tmp_called_instance_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_44 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 313;

        goto frame_exception_exit_12;
    }

    tmp_args_element_name_94 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_44_create_x509_crl(  );
    frame_13506ae3e7a2df5f2b13e536a7095d81_12->m_frame.f_lineno = 313;
    {
        PyObject *call_args[] = { tmp_args_element_name_94 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_44, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_94 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 313;

        goto frame_exception_exit_12;
    }
    tmp_res = PyDict_SetItem( locals_X509Backend_276, const_str_plain_create_x509_crl, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 313;

        goto frame_exception_exit_12;
    }
    tmp_called_instance_45 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_45 == NULL ))
    {
        tmp_called_instance_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_45 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 320;

        goto frame_exception_exit_12;
    }

    tmp_args_element_name_95 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_45_create_x509_revoked_certificate(  );
    frame_13506ae3e7a2df5f2b13e536a7095d81_12->m_frame.f_lineno = 320;
    {
        PyObject *call_args[] = { tmp_args_element_name_95 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_45, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_95 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 320;

        goto frame_exception_exit_12;
    }
    tmp_res = PyDict_SetItem( locals_X509Backend_276, const_str_plain_create_x509_revoked_certificate, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 320;

        goto frame_exception_exit_12;
    }
    tmp_called_instance_46 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_46 == NULL ))
    {
        tmp_called_instance_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_46 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 327;

        goto frame_exception_exit_12;
    }

    tmp_args_element_name_96 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_46_x509_name_bytes(  );
    frame_13506ae3e7a2df5f2b13e536a7095d81_12->m_frame.f_lineno = 327;
    {
        PyObject *call_args[] = { tmp_args_element_name_96 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_46, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_96 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 327;

        goto frame_exception_exit_12;
    }
    tmp_res = PyDict_SetItem( locals_X509Backend_276, const_str_plain_x509_name_bytes, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 327;

        goto frame_exception_exit_12;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_13506ae3e7a2df5f2b13e536a7095d81_12 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_11;

    frame_exception_exit_12:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_13506ae3e7a2df5f2b13e536a7095d81_12 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_13506ae3e7a2df5f2b13e536a7095d81_12, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_13506ae3e7a2df5f2b13e536a7095d81_12->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_13506ae3e7a2df5f2b13e536a7095d81_12, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_13506ae3e7a2df5f2b13e536a7095d81_12,
        type_description_2
    );


    // Release cached frame.
    if ( frame_13506ae3e7a2df5f2b13e536a7095d81_12 == cache_frame_13506ae3e7a2df5f2b13e536a7095d81_12 )
    {
        Py_DECREF( frame_13506ae3e7a2df5f2b13e536a7095d81_12 );
    }
    cache_frame_13506ae3e7a2df5f2b13e536a7095d81_12 = NULL;

    assertFrameObject( frame_13506ae3e7a2df5f2b13e536a7095d81_12 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_11;

    frame_no_exception_11:;

    goto skip_nested_handling_11;
    nested_frame_exit_11:;

    goto try_except_handler_23;
    skip_nested_handling_11:;
    tmp_outline_return_value_11 = locals_X509Backend_276;
    Py_INCREF( tmp_outline_return_value_11 );
    goto try_return_handler_23;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_23:;
    Py_DECREF( locals_X509Backend_276 );
    locals_X509Backend_276 = NULL;
    goto outline_result_11;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_X509Backend_276 );
    locals_X509Backend_276 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto outline_exception_11;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_11:;
    exception_lineno = 276;
    goto try_except_handler_22;
    outline_result_11:;
    tmp_assign_source_59 = tmp_outline_return_value_11;
    assert( tmp_class_creation_11__class_dict == NULL );
    tmp_class_creation_11__class_dict = tmp_assign_source_59;

    tmp_compare_left_11 = const_str_plain___metaclass__;
    tmp_compare_right_11 = tmp_class_creation_11__class_dict;

    CHECK_OBJECT( tmp_compare_right_11 );
    tmp_cmp_In_11 = PySequence_Contains( tmp_compare_right_11, tmp_compare_left_11 );
    assert( !(tmp_cmp_In_11 == -1) );
    if ( tmp_cmp_In_11 == 1 )
    {
        goto condexpr_true_11;
    }
    else
    {
        goto condexpr_false_11;
    }
    condexpr_true_11:;
    tmp_dict_name_11 = tmp_class_creation_11__class_dict;

    CHECK_OBJECT( tmp_dict_name_11 );
    tmp_key_name_11 = const_str_plain___metaclass__;
    tmp_assign_source_60 = DICT_GET_ITEM( tmp_dict_name_11, tmp_key_name_11 );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;

        goto try_except_handler_22;
    }
    goto condexpr_end_11;
    condexpr_false_11:;
    tmp_assign_source_60 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_60 );
    condexpr_end_11:;
    assert( tmp_class_creation_11__metaclass == NULL );
    tmp_class_creation_11__metaclass = tmp_assign_source_60;

    tmp_called_name_31 = tmp_class_creation_11__metaclass;

    CHECK_OBJECT( tmp_called_name_31 );
    tmp_args_element_name_97 = const_str_plain_X509Backend;
    tmp_args_element_name_98 = const_tuple_type_object_tuple;
    tmp_args_element_name_99 = tmp_class_creation_11__class_dict;

    CHECK_OBJECT( tmp_args_element_name_99 );
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 276;
    {
        PyObject *call_args[] = { tmp_args_element_name_97, tmp_args_element_name_98, tmp_args_element_name_99 };
        tmp_assign_source_61 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_31, call_args );
    }

    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;

        goto try_except_handler_22;
    }
    assert( tmp_class_creation_11__class == NULL );
    tmp_class_creation_11__class = tmp_assign_source_61;

    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;

        exception_lineno = 275;

        goto try_except_handler_22;
    }

    tmp_called_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_add_metaclass );
    if ( tmp_called_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 275;

        goto try_except_handler_22;
    }
    tmp_source_name_22 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_22 == NULL ))
    {
        tmp_source_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_22 == NULL )
    {
        Py_DECREF( tmp_called_name_33 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 275;

        goto try_except_handler_22;
    }

    tmp_args_element_name_100 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_100 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_33 );

        exception_lineno = 275;

        goto try_except_handler_22;
    }
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 275;
    {
        PyObject *call_args[] = { tmp_args_element_name_100 };
        tmp_called_name_32 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_33, call_args );
    }

    Py_DECREF( tmp_called_name_33 );
    Py_DECREF( tmp_args_element_name_100 );
    if ( tmp_called_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 275;

        goto try_except_handler_22;
    }
    tmp_args_element_name_101 = tmp_class_creation_11__class;

    CHECK_OBJECT( tmp_args_element_name_101 );
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 275;
    {
        PyObject *call_args[] = { tmp_args_element_name_101 };
        tmp_assign_source_62 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_32, call_args );
    }

    Py_DECREF( tmp_called_name_32 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 275;

        goto try_except_handler_22;
    }
    {
        PyObject *old = tmp_class_creation_11__class;
        assert( old != NULL );
        tmp_class_creation_11__class = tmp_assign_source_62;
        Py_DECREF( old );
    }

    goto try_end_12;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_11__class );
    tmp_class_creation_11__class = NULL;

    Py_XDECREF( tmp_class_creation_11__class_dict );
    tmp_class_creation_11__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_11__metaclass );
    tmp_class_creation_11__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    tmp_assign_source_63 = tmp_class_creation_11__class;

    CHECK_OBJECT( tmp_assign_source_63 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_X509Backend, tmp_assign_source_63 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__class );
    Py_DECREF( tmp_class_creation_11__class );
    tmp_class_creation_11__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__class_dict );
    Py_DECREF( tmp_class_creation_11__class_dict );
    tmp_class_creation_11__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__metaclass );
    Py_DECREF( tmp_class_creation_11__metaclass );
    tmp_class_creation_11__metaclass = NULL;

    // Tried code:
    tmp_set_locals = PyDict_New();
    locals_DHBackend_335 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
    tmp_res = PyDict_SetItem( locals_DHBackend_335, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ffe5e252c62f3e9bba766713a191cf51_13, codeobj_ffe5e252c62f3e9bba766713a191cf51, module_cryptography$hazmat$backends$interfaces, 0 );
    frame_ffe5e252c62f3e9bba766713a191cf51_13 = cache_frame_ffe5e252c62f3e9bba766713a191cf51_13;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ffe5e252c62f3e9bba766713a191cf51_13 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ffe5e252c62f3e9bba766713a191cf51_13 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_47 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_47 == NULL ))
    {
        tmp_called_instance_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_47 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 336;

        goto frame_exception_exit_13;
    }

    tmp_args_element_name_102 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_47_generate_dh_parameters(  );
    frame_ffe5e252c62f3e9bba766713a191cf51_13->m_frame.f_lineno = 336;
    {
        PyObject *call_args[] = { tmp_args_element_name_102 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_47, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_102 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;

        goto frame_exception_exit_13;
    }
    tmp_res = PyDict_SetItem( locals_DHBackend_335, const_str_plain_generate_dh_parameters, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;

        goto frame_exception_exit_13;
    }
    tmp_called_instance_48 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_48 == NULL ))
    {
        tmp_called_instance_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_48 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 343;

        goto frame_exception_exit_13;
    }

    tmp_args_element_name_103 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_48_generate_dh_private_key(  );
    frame_ffe5e252c62f3e9bba766713a191cf51_13->m_frame.f_lineno = 343;
    {
        PyObject *call_args[] = { tmp_args_element_name_103 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_48, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_103 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;

        goto frame_exception_exit_13;
    }
    tmp_res = PyDict_SetItem( locals_DHBackend_335, const_str_plain_generate_dh_private_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;

        goto frame_exception_exit_13;
    }
    tmp_called_instance_49 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_49 == NULL ))
    {
        tmp_called_instance_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_49 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 350;

        goto frame_exception_exit_13;
    }

    tmp_args_element_name_104 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_49_generate_dh_private_key_and_parameters(  );
    frame_ffe5e252c62f3e9bba766713a191cf51_13->m_frame.f_lineno = 350;
    {
        PyObject *call_args[] = { tmp_args_element_name_104 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_49, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_104 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;

        goto frame_exception_exit_13;
    }
    tmp_res = PyDict_SetItem( locals_DHBackend_335, const_str_plain_generate_dh_private_key_and_parameters, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;

        goto frame_exception_exit_13;
    }
    tmp_called_instance_50 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_50 == NULL ))
    {
        tmp_called_instance_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_50 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 357;

        goto frame_exception_exit_13;
    }

    tmp_args_element_name_105 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_50_load_dh_private_numbers(  );
    frame_ffe5e252c62f3e9bba766713a191cf51_13->m_frame.f_lineno = 357;
    {
        PyObject *call_args[] = { tmp_args_element_name_105 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_50, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_105 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 357;

        goto frame_exception_exit_13;
    }
    tmp_res = PyDict_SetItem( locals_DHBackend_335, const_str_plain_load_dh_private_numbers, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 357;

        goto frame_exception_exit_13;
    }
    tmp_called_instance_51 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_51 == NULL ))
    {
        tmp_called_instance_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_51 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 363;

        goto frame_exception_exit_13;
    }

    tmp_args_element_name_106 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_51_load_dh_public_numbers(  );
    frame_ffe5e252c62f3e9bba766713a191cf51_13->m_frame.f_lineno = 363;
    {
        PyObject *call_args[] = { tmp_args_element_name_106 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_51, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_106 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 363;

        goto frame_exception_exit_13;
    }
    tmp_res = PyDict_SetItem( locals_DHBackend_335, const_str_plain_load_dh_public_numbers, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 363;

        goto frame_exception_exit_13;
    }
    tmp_called_instance_52 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_52 == NULL ))
    {
        tmp_called_instance_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_52 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 369;

        goto frame_exception_exit_13;
    }

    tmp_args_element_name_107 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_52_load_dh_parameter_numbers(  );
    frame_ffe5e252c62f3e9bba766713a191cf51_13->m_frame.f_lineno = 369;
    {
        PyObject *call_args[] = { tmp_args_element_name_107 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_52, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_107 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 369;

        goto frame_exception_exit_13;
    }
    tmp_res = PyDict_SetItem( locals_DHBackend_335, const_str_plain_load_dh_parameter_numbers, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 369;

        goto frame_exception_exit_13;
    }
    tmp_called_instance_53 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_53 == NULL ))
    {
        tmp_called_instance_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_53 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 375;

        goto frame_exception_exit_13;
    }

    tmp_defaults_1 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_args_element_name_108 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_53_dh_parameters_supported( tmp_defaults_1 );
    frame_ffe5e252c62f3e9bba766713a191cf51_13->m_frame.f_lineno = 375;
    {
        PyObject *call_args[] = { tmp_args_element_name_108 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_53, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_108 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;

        goto frame_exception_exit_13;
    }
    tmp_res = PyDict_SetItem( locals_DHBackend_335, const_str_plain_dh_parameters_supported, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;

        goto frame_exception_exit_13;
    }
    tmp_called_instance_54 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_54 == NULL ))
    {
        tmp_called_instance_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_54 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 381;

        goto frame_exception_exit_13;
    }

    tmp_args_element_name_109 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_54_dh_x942_serialization_supported(  );
    frame_ffe5e252c62f3e9bba766713a191cf51_13->m_frame.f_lineno = 381;
    {
        PyObject *call_args[] = { tmp_args_element_name_109 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_54, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_109 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 381;

        goto frame_exception_exit_13;
    }
    tmp_res = PyDict_SetItem( locals_DHBackend_335, const_str_plain_dh_x942_serialization_supported, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 381;

        goto frame_exception_exit_13;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ffe5e252c62f3e9bba766713a191cf51_13 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_12;

    frame_exception_exit_13:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ffe5e252c62f3e9bba766713a191cf51_13 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ffe5e252c62f3e9bba766713a191cf51_13, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ffe5e252c62f3e9bba766713a191cf51_13->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ffe5e252c62f3e9bba766713a191cf51_13, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ffe5e252c62f3e9bba766713a191cf51_13,
        type_description_2
    );


    // Release cached frame.
    if ( frame_ffe5e252c62f3e9bba766713a191cf51_13 == cache_frame_ffe5e252c62f3e9bba766713a191cf51_13 )
    {
        Py_DECREF( frame_ffe5e252c62f3e9bba766713a191cf51_13 );
    }
    cache_frame_ffe5e252c62f3e9bba766713a191cf51_13 = NULL;

    assertFrameObject( frame_ffe5e252c62f3e9bba766713a191cf51_13 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_12;

    frame_no_exception_12:;

    goto skip_nested_handling_12;
    nested_frame_exit_12:;

    goto try_except_handler_25;
    skip_nested_handling_12:;
    tmp_outline_return_value_12 = locals_DHBackend_335;
    Py_INCREF( tmp_outline_return_value_12 );
    goto try_return_handler_25;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_25:;
    Py_DECREF( locals_DHBackend_335 );
    locals_DHBackend_335 = NULL;
    goto outline_result_12;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_DHBackend_335 );
    locals_DHBackend_335 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto outline_exception_12;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_12:;
    exception_lineno = 335;
    goto try_except_handler_24;
    outline_result_12:;
    tmp_assign_source_64 = tmp_outline_return_value_12;
    assert( tmp_class_creation_12__class_dict == NULL );
    tmp_class_creation_12__class_dict = tmp_assign_source_64;

    tmp_compare_left_12 = const_str_plain___metaclass__;
    tmp_compare_right_12 = tmp_class_creation_12__class_dict;

    CHECK_OBJECT( tmp_compare_right_12 );
    tmp_cmp_In_12 = PySequence_Contains( tmp_compare_right_12, tmp_compare_left_12 );
    assert( !(tmp_cmp_In_12 == -1) );
    if ( tmp_cmp_In_12 == 1 )
    {
        goto condexpr_true_12;
    }
    else
    {
        goto condexpr_false_12;
    }
    condexpr_true_12:;
    tmp_dict_name_12 = tmp_class_creation_12__class_dict;

    CHECK_OBJECT( tmp_dict_name_12 );
    tmp_key_name_12 = const_str_plain___metaclass__;
    tmp_assign_source_65 = DICT_GET_ITEM( tmp_dict_name_12, tmp_key_name_12 );
    if ( tmp_assign_source_65 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;

        goto try_except_handler_24;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_assign_source_65 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_65 );
    condexpr_end_12:;
    assert( tmp_class_creation_12__metaclass == NULL );
    tmp_class_creation_12__metaclass = tmp_assign_source_65;

    tmp_called_name_34 = tmp_class_creation_12__metaclass;

    CHECK_OBJECT( tmp_called_name_34 );
    tmp_args_element_name_110 = const_str_plain_DHBackend;
    tmp_args_element_name_111 = const_tuple_type_object_tuple;
    tmp_args_element_name_112 = tmp_class_creation_12__class_dict;

    CHECK_OBJECT( tmp_args_element_name_112 );
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 335;
    {
        PyObject *call_args[] = { tmp_args_element_name_110, tmp_args_element_name_111, tmp_args_element_name_112 };
        tmp_assign_source_66 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_34, call_args );
    }

    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;

        goto try_except_handler_24;
    }
    assert( tmp_class_creation_12__class == NULL );
    tmp_class_creation_12__class = tmp_assign_source_66;

    tmp_source_name_23 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_23 == NULL ))
    {
        tmp_source_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;

        exception_lineno = 334;

        goto try_except_handler_24;
    }

    tmp_called_name_36 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_add_metaclass );
    if ( tmp_called_name_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;

        goto try_except_handler_24;
    }
    tmp_source_name_24 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_24 == NULL ))
    {
        tmp_source_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_24 == NULL )
    {
        Py_DECREF( tmp_called_name_36 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 334;

        goto try_except_handler_24;
    }

    tmp_args_element_name_113 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_113 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_36 );

        exception_lineno = 334;

        goto try_except_handler_24;
    }
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 334;
    {
        PyObject *call_args[] = { tmp_args_element_name_113 };
        tmp_called_name_35 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_36, call_args );
    }

    Py_DECREF( tmp_called_name_36 );
    Py_DECREF( tmp_args_element_name_113 );
    if ( tmp_called_name_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;

        goto try_except_handler_24;
    }
    tmp_args_element_name_114 = tmp_class_creation_12__class;

    CHECK_OBJECT( tmp_args_element_name_114 );
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 334;
    {
        PyObject *call_args[] = { tmp_args_element_name_114 };
        tmp_assign_source_67 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_35, call_args );
    }

    Py_DECREF( tmp_called_name_35 );
    if ( tmp_assign_source_67 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;

        goto try_except_handler_24;
    }
    {
        PyObject *old = tmp_class_creation_12__class;
        assert( old != NULL );
        tmp_class_creation_12__class = tmp_assign_source_67;
        Py_DECREF( old );
    }

    goto try_end_13;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_12__class );
    tmp_class_creation_12__class = NULL;

    Py_XDECREF( tmp_class_creation_12__class_dict );
    tmp_class_creation_12__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_12__metaclass );
    tmp_class_creation_12__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    tmp_assign_source_68 = tmp_class_creation_12__class;

    CHECK_OBJECT( tmp_assign_source_68 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_DHBackend, tmp_assign_source_68 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__class );
    Py_DECREF( tmp_class_creation_12__class );
    tmp_class_creation_12__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__class_dict );
    Py_DECREF( tmp_class_creation_12__class_dict );
    tmp_class_creation_12__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__metaclass );
    Py_DECREF( tmp_class_creation_12__metaclass );
    tmp_class_creation_12__metaclass = NULL;

    // Tried code:
    tmp_set_locals = PyDict_New();
    locals_ScryptBackend_390 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
    tmp_res = PyDict_SetItem( locals_ScryptBackend_390, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_38fe00b0453f10ea6b916c21069fac5d_14, codeobj_38fe00b0453f10ea6b916c21069fac5d, module_cryptography$hazmat$backends$interfaces, 0 );
    frame_38fe00b0453f10ea6b916c21069fac5d_14 = cache_frame_38fe00b0453f10ea6b916c21069fac5d_14;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_38fe00b0453f10ea6b916c21069fac5d_14 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_38fe00b0453f10ea6b916c21069fac5d_14 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_55 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_55 == NULL ))
    {
        tmp_called_instance_55 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_55 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 391;

        goto frame_exception_exit_14;
    }

    tmp_args_element_name_115 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_55_derive_scrypt(  );
    frame_38fe00b0453f10ea6b916c21069fac5d_14->m_frame.f_lineno = 391;
    {
        PyObject *call_args[] = { tmp_args_element_name_115 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_55, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_115 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;

        goto frame_exception_exit_14;
    }
    tmp_res = PyDict_SetItem( locals_ScryptBackend_390, const_str_plain_derive_scrypt, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;

        goto frame_exception_exit_14;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_38fe00b0453f10ea6b916c21069fac5d_14 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_13;

    frame_exception_exit_14:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_38fe00b0453f10ea6b916c21069fac5d_14 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_38fe00b0453f10ea6b916c21069fac5d_14, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_38fe00b0453f10ea6b916c21069fac5d_14->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_38fe00b0453f10ea6b916c21069fac5d_14, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_38fe00b0453f10ea6b916c21069fac5d_14,
        type_description_2
    );


    // Release cached frame.
    if ( frame_38fe00b0453f10ea6b916c21069fac5d_14 == cache_frame_38fe00b0453f10ea6b916c21069fac5d_14 )
    {
        Py_DECREF( frame_38fe00b0453f10ea6b916c21069fac5d_14 );
    }
    cache_frame_38fe00b0453f10ea6b916c21069fac5d_14 = NULL;

    assertFrameObject( frame_38fe00b0453f10ea6b916c21069fac5d_14 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_13;

    frame_no_exception_13:;

    goto skip_nested_handling_13;
    nested_frame_exit_13:;

    goto try_except_handler_27;
    skip_nested_handling_13:;
    tmp_outline_return_value_13 = locals_ScryptBackend_390;
    Py_INCREF( tmp_outline_return_value_13 );
    goto try_return_handler_27;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_27:;
    Py_DECREF( locals_ScryptBackend_390 );
    locals_ScryptBackend_390 = NULL;
    goto outline_result_13;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_ScryptBackend_390 );
    locals_ScryptBackend_390 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto outline_exception_13;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_13:;
    exception_lineno = 390;
    goto try_except_handler_26;
    outline_result_13:;
    tmp_assign_source_69 = tmp_outline_return_value_13;
    assert( tmp_class_creation_13__class_dict == NULL );
    tmp_class_creation_13__class_dict = tmp_assign_source_69;

    tmp_compare_left_13 = const_str_plain___metaclass__;
    tmp_compare_right_13 = tmp_class_creation_13__class_dict;

    CHECK_OBJECT( tmp_compare_right_13 );
    tmp_cmp_In_13 = PySequence_Contains( tmp_compare_right_13, tmp_compare_left_13 );
    assert( !(tmp_cmp_In_13 == -1) );
    if ( tmp_cmp_In_13 == 1 )
    {
        goto condexpr_true_13;
    }
    else
    {
        goto condexpr_false_13;
    }
    condexpr_true_13:;
    tmp_dict_name_13 = tmp_class_creation_13__class_dict;

    CHECK_OBJECT( tmp_dict_name_13 );
    tmp_key_name_13 = const_str_plain___metaclass__;
    tmp_assign_source_70 = DICT_GET_ITEM( tmp_dict_name_13, tmp_key_name_13 );
    if ( tmp_assign_source_70 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;

        goto try_except_handler_26;
    }
    goto condexpr_end_13;
    condexpr_false_13:;
    tmp_assign_source_70 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_70 );
    condexpr_end_13:;
    assert( tmp_class_creation_13__metaclass == NULL );
    tmp_class_creation_13__metaclass = tmp_assign_source_70;

    tmp_called_name_37 = tmp_class_creation_13__metaclass;

    CHECK_OBJECT( tmp_called_name_37 );
    tmp_args_element_name_116 = const_str_plain_ScryptBackend;
    tmp_args_element_name_117 = const_tuple_type_object_tuple;
    tmp_args_element_name_118 = tmp_class_creation_13__class_dict;

    CHECK_OBJECT( tmp_args_element_name_118 );
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 390;
    {
        PyObject *call_args[] = { tmp_args_element_name_116, tmp_args_element_name_117, tmp_args_element_name_118 };
        tmp_assign_source_71 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_37, call_args );
    }

    if ( tmp_assign_source_71 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;

        goto try_except_handler_26;
    }
    assert( tmp_class_creation_13__class == NULL );
    tmp_class_creation_13__class = tmp_assign_source_71;

    tmp_source_name_25 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_25 == NULL ))
    {
        tmp_source_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_25 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;

        exception_lineno = 389;

        goto try_except_handler_26;
    }

    tmp_called_name_39 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_add_metaclass );
    if ( tmp_called_name_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;

        goto try_except_handler_26;
    }
    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_26 == NULL )
    {
        Py_DECREF( tmp_called_name_39 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 389;

        goto try_except_handler_26;
    }

    tmp_args_element_name_119 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_119 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_39 );

        exception_lineno = 389;

        goto try_except_handler_26;
    }
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 389;
    {
        PyObject *call_args[] = { tmp_args_element_name_119 };
        tmp_called_name_38 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_39, call_args );
    }

    Py_DECREF( tmp_called_name_39 );
    Py_DECREF( tmp_args_element_name_119 );
    if ( tmp_called_name_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;

        goto try_except_handler_26;
    }
    tmp_args_element_name_120 = tmp_class_creation_13__class;

    CHECK_OBJECT( tmp_args_element_name_120 );
    frame_80fdf1aa08533d2280106ccc74d13cee->m_frame.f_lineno = 389;
    {
        PyObject *call_args[] = { tmp_args_element_name_120 };
        tmp_assign_source_72 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_38, call_args );
    }

    Py_DECREF( tmp_called_name_38 );
    if ( tmp_assign_source_72 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;

        goto try_except_handler_26;
    }
    {
        PyObject *old = tmp_class_creation_13__class;
        assert( old != NULL );
        tmp_class_creation_13__class = tmp_assign_source_72;
        Py_DECREF( old );
    }

    goto try_end_14;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_13__class );
    tmp_class_creation_13__class = NULL;

    Py_XDECREF( tmp_class_creation_13__class_dict );
    tmp_class_creation_13__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_13__metaclass );
    tmp_class_creation_13__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_80fdf1aa08533d2280106ccc74d13cee );
#endif
    popFrameStack();

    assertFrameObject( frame_80fdf1aa08533d2280106ccc74d13cee );

    goto frame_no_exception_14;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_80fdf1aa08533d2280106ccc74d13cee );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_80fdf1aa08533d2280106ccc74d13cee, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_80fdf1aa08533d2280106ccc74d13cee->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_80fdf1aa08533d2280106ccc74d13cee, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_14:;
    tmp_assign_source_73 = tmp_class_creation_13__class;

    CHECK_OBJECT( tmp_assign_source_73 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_ScryptBackend, tmp_assign_source_73 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__class );
    Py_DECREF( tmp_class_creation_13__class );
    tmp_class_creation_13__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__class_dict );
    Py_DECREF( tmp_class_creation_13__class_dict );
    tmp_class_creation_13__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__metaclass );
    Py_DECREF( tmp_class_creation_13__metaclass );
    tmp_class_creation_13__metaclass = NULL;


    return MOD_RETURN_VALUE( module_cryptography$hazmat$backends$interfaces );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
