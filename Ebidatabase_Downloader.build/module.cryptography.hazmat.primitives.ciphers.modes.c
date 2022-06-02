/* Generated code for Python source for module 'cryptography.hazmat.primitives.ciphers.modes'
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

/* The _module_cryptography$hazmat$primitives$ciphers$modes is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$primitives$ciphers$modes;
PyDictObject *moduledict_cryptography$hazmat$primitives$ciphers$modes;

/* The module constants used, if any. */
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_int_pos_512;
static PyObject *const_str_digest_97b95ca94ff448f2fdcf07d90894988a;
extern PyObject *const_tuple_str_plain__tag_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_tweak_tuple;
extern PyObject *const_str_plain_ModeWithTweak;
extern PyObject *const_dict_empty;
static PyObject *const_tuple_str_plain__initialization_vector_tuple;
extern PyObject *const_tuple_str_plain__nonce_tuple;
extern PyObject *const_str_plain_CFB8;
static PyObject *const_str_digest_5020d9a5b89e034fd58f0961dca03421;
extern PyObject *const_tuple_str_plain_self_str_plain_nonce_tuple;
static PyObject *const_tuple_int_pos_256_int_pos_512_tuple;
extern PyObject *const_str_plain_block_size;
extern PyObject *const_str_plain_abstractmethod;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain__tag;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_algorithm;
extern PyObject *const_str_plain_AES;
extern PyObject *const_tuple_str_plain_self_str_plain_algorithm_tuple;
extern PyObject *const_str_plain_format;
static PyObject *const_tuple_none_int_pos_16_tuple;
extern PyObject *const_str_plain_read_only_property;
extern PyObject *const_tuple_str_plain_utils_tuple;
extern PyObject *const_str_plain_XTS;
static PyObject *const_long_pos_2305843009213693952;
extern PyObject *const_str_plain_CFB;
extern PyObject *const_str_plain_abstractproperty;
extern PyObject *const_str_plain_CTR;
extern PyObject *const_int_pos_16;
extern PyObject *const_str_plain_ModeWithAuthenticationTag;
extern PyObject *const_str_plain_abc;
extern PyObject *const_str_plain_validate_for_algorithm;
extern PyObject *const_str_plain_tag;
static PyObject *const_str_digest_8ed5cda0f4d28df12a981196f62a1b42;
extern PyObject *const_str_plain_initialization_vector;
extern PyObject *const_str_plain_OFB;
static PyObject *const_int_pos_68719476704;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_1fb896656a556642058d3d0f2aef8429;
static PyObject *const_tuple_str_plain__tweak_tuple;
extern PyObject *const_int_pos_4;
static PyObject *const_str_digest_cd69e318ffbc825cdfdec262cc900a88;
static PyObject *const_str_digest_38fc79dfa6223032de52ab115724f2e4;
extern PyObject *const_str_plain___module__;
extern PyObject *const_int_pos_8;
static PyObject *const_str_plain_min_tag_length;
static PyObject *const_str_plain__tweak;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_digest_660e0d4b5fcaff641982725568eda7c4;
static PyObject *const_str_digest_bb3634c5ad126b5f0dcc68e909fe730c;
static PyObject *const_str_digest_ca7e0f37eefb63f559dcf13aed7fe908;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_digest_a358a5c0d8e85cc6637c88dbb8395434;
extern PyObject *const_str_plain__MAX_AAD_BYTES;
extern PyObject *const_str_plain_utils;
extern PyObject *const_int_pos_256;
extern PyObject *const_str_plain_tweak;
static PyObject *const_str_digest_5b8e8cd5cac009365b3640e73a17e51b;
static PyObject *const_str_plain__initialization_vector;
extern PyObject *const_str_plain__min_tag_length;
extern PyObject *const_str_plain_name;
static PyObject *const_tuple_str_plain_self_str_plain_initialization_vector_tuple;
static PyObject *const_str_plain__check_iv_and_key_length;
extern PyObject *const_str_digest_870c1e3ecfe8b1337ddd8cb410fc50da;
static PyObject *const_str_plain_Mode;
static PyObject *const_str_digest_8841c86c66f42811f396044407fdea00;
extern PyObject *const_str_plain_nonce;
extern PyObject *const_str_plain__check_byteslike;
extern PyObject *const_str_plain_register_interface;
extern PyObject *const_str_plain_key_size;
static PyObject *const_str_digest_60afe73681fc443f40e828937e850a39;
extern PyObject *const_str_plain__check_bytes;
extern PyObject *const_str_plain_cryptography;
extern PyObject *const_str_plain_ModeWithNonce;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_six;
extern PyObject *const_str_plain_division;
static PyObject *const_str_digest_eaaef4929e558f8f2d9150675f4b135d;
extern PyObject *const_str_plain__nonce;
extern PyObject *const_str_plain_ModeWithInitializationVector;
extern PyObject *const_str_plain_CBC;
static PyObject *const_str_plain__check_iv_length;
extern PyObject *const_str_plain_GCM;
static PyObject *const_str_digest_294cd97bbac358075d4b7bb1ef71ed25;
static PyObject *const_str_plain__check_aes_key_length;
extern PyObject *const_str_plain_add_metaclass;
extern PyObject *const_str_plain_ECB;
extern PyObject *const_str_digest_dad71bd336cb898ea2767fe5d1d92e3c;
extern PyObject *const_str_plain_print_function;
static PyObject *const_tuple_6bd622b091616a1011697b4fa576725b_tuple;
extern PyObject *const_str_plain__MAX_ENCRYPTED_BYTES;
extern PyObject *const_str_plain_ABCMeta;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_97b95ca94ff448f2fdcf07d90894988a = UNSTREAM_STRING( &constant_bin[ 683545 ], 53, 0 );
    const_tuple_str_plain_self_str_plain_tweak_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_tweak_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_tweak_tuple, 1, const_str_plain_tweak ); Py_INCREF( const_str_plain_tweak );
    const_tuple_str_plain__initialization_vector_tuple = PyTuple_New( 1 );
    const_str_plain__initialization_vector = UNSTREAM_STRING( &constant_bin[ 683598 ], 22, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__initialization_vector_tuple, 0, const_str_plain__initialization_vector ); Py_INCREF( const_str_plain__initialization_vector );
    const_str_digest_5020d9a5b89e034fd58f0961dca03421 = UNSTREAM_STRING( &constant_bin[ 683620 ], 113, 0 );
    const_tuple_int_pos_256_int_pos_512_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_256_int_pos_512_tuple, 0, const_int_pos_256 ); Py_INCREF( const_int_pos_256 );
    PyTuple_SET_ITEM( const_tuple_int_pos_256_int_pos_512_tuple, 1, const_int_pos_512 ); Py_INCREF( const_int_pos_512 );
    const_tuple_none_int_pos_16_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_none_int_pos_16_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_int_pos_16_tuple, 1, const_int_pos_16 ); Py_INCREF( const_int_pos_16 );
    const_long_pos_2305843009213693952 = PyLong_FromUnsignedLong( 2305843009213693952ul );
    const_str_digest_8ed5cda0f4d28df12a981196f62a1b42 = UNSTREAM_STRING( &constant_bin[ 683733 ], 64, 0 );
    const_int_pos_68719476704 = PyInt_FromLong( 68719476704l );
    const_str_digest_1fb896656a556642058d3d0f2aef8429 = UNSTREAM_STRING( &constant_bin[ 683797 ], 33, 0 );
    const_tuple_str_plain__tweak_tuple = PyTuple_New( 1 );
    const_str_plain__tweak = UNSTREAM_STRING( &constant_bin[ 683830 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__tweak_tuple, 0, const_str_plain__tweak ); Py_INCREF( const_str_plain__tweak );
    const_str_digest_cd69e318ffbc825cdfdec262cc900a88 = UNSTREAM_STRING( &constant_bin[ 683836 ], 61, 0 );
    const_str_digest_38fc79dfa6223032de52ab115724f2e4 = UNSTREAM_STRING( &constant_bin[ 683897 ], 80, 0 );
    const_str_plain_min_tag_length = UNSTREAM_STRING( &constant_bin[ 683977 ], 14, 1 );
    const_str_digest_660e0d4b5fcaff641982725568eda7c4 = UNSTREAM_STRING( &constant_bin[ 683991 ], 64, 0 );
    const_str_digest_bb3634c5ad126b5f0dcc68e909fe730c = UNSTREAM_STRING( &constant_bin[ 684055 ], 31, 0 );
    const_str_digest_ca7e0f37eefb63f559dcf13aed7fe908 = UNSTREAM_STRING( &constant_bin[ 684086 ], 92, 0 );
    const_str_digest_a358a5c0d8e85cc6637c88dbb8395434 = UNSTREAM_STRING( &constant_bin[ 684178 ], 28, 0 );
    const_str_digest_5b8e8cd5cac009365b3640e73a17e51b = UNSTREAM_STRING( &constant_bin[ 684206 ], 27, 0 );
    const_tuple_str_plain_self_str_plain_initialization_vector_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_initialization_vector_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_initialization_vector_tuple, 1, const_str_plain_initialization_vector ); Py_INCREF( const_str_plain_initialization_vector );
    const_str_plain__check_iv_and_key_length = UNSTREAM_STRING( &constant_bin[ 684233 ], 24, 1 );
    const_str_plain_Mode = UNSTREAM_STRING( &constant_bin[ 28274 ], 4, 1 );
    const_str_digest_8841c86c66f42811f396044407fdea00 = UNSTREAM_STRING( &constant_bin[ 684257 ], 64, 0 );
    const_str_digest_60afe73681fc443f40e828937e850a39 = UNSTREAM_STRING( &constant_bin[ 684321 ], 47, 0 );
    const_str_digest_eaaef4929e558f8f2d9150675f4b135d = UNSTREAM_STRING( &constant_bin[ 684368 ], 45, 0 );
    const_str_plain__check_iv_length = UNSTREAM_STRING( &constant_bin[ 684413 ], 16, 1 );
    const_str_digest_294cd97bbac358075d4b7bb1ef71ed25 = UNSTREAM_STRING( &constant_bin[ 684429 ], 80, 0 );
    const_str_plain__check_aes_key_length = UNSTREAM_STRING( &constant_bin[ 684509 ], 21, 1 );
    const_tuple_6bd622b091616a1011697b4fa576725b_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_6bd622b091616a1011697b4fa576725b_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_6bd622b091616a1011697b4fa576725b_tuple, 1, const_str_plain_initialization_vector ); Py_INCREF( const_str_plain_initialization_vector );
    PyTuple_SET_ITEM( const_tuple_6bd622b091616a1011697b4fa576725b_tuple, 2, const_str_plain_tag ); Py_INCREF( const_str_plain_tag );
    PyTuple_SET_ITEM( const_tuple_6bd622b091616a1011697b4fa576725b_tuple, 3, const_str_plain_min_tag_length ); Py_INCREF( const_str_plain_min_tag_length );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$hazmat$primitives$ciphers$modes( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_2e85538c26fbef7043cca59f20affb31;
static PyCodeObject *codeobj_a059c3abae0b6acac2c04374c3fc928b;
static PyCodeObject *codeobj_cbb1cf9767116bb582d6d52c8a8270fa;
static PyCodeObject *codeobj_bbee94e0ed2616c6fbee83dc57df0f75;
static PyCodeObject *codeobj_a9309ea2a37d5b860d93d6cc8d5ee2b2;
static PyCodeObject *codeobj_6ad4a4d24260ca441c095c8cbeb31960;
static PyCodeObject *codeobj_e7b7d24f4941560b43cf898a64497051;
static PyCodeObject *codeobj_c060d67f458841a87fc2d7fa4ca5d3fd;
static PyCodeObject *codeobj_fe9ec78069e5595ad7d9cfc116c0d461;
static PyCodeObject *codeobj_eb252219adef4b4b5e18dfb795888e6f;
static PyCodeObject *codeobj_8ce8c9388050dbbd785922ffcaa48e05;
static PyCodeObject *codeobj_a49041a950b6e51d2ab37f9a836f4c7f;
static PyCodeObject *codeobj_1825a3b71080a42ffd2a6864ef85d5ea;
static PyCodeObject *codeobj_52057b80d5aad2260dee2648d54f5a3a;
static PyCodeObject *codeobj_c76893ba51e586c650609e831e212757;
static PyCodeObject *codeobj_06caa5e1f24fcf4cd643de38b475a69b;
static PyCodeObject *codeobj_e5f2df49c25e038d7a7f8b7f1a45b40f;
static PyCodeObject *codeobj_8a6070acce23ee49005e067ee0e926c6;
static PyCodeObject *codeobj_f316e5d6047b64ebd4bab2757ab2a911;
static PyCodeObject *codeobj_35de3a350001060766d2420d7401afcc;
static PyCodeObject *codeobj_2428af6a3ef04848ad3b3f54a7ea7d53;
static PyCodeObject *codeobj_3bf6fe562707b256c2748b6adb1f9199;
static PyCodeObject *codeobj_67517569001b86ccb8d3749e079060fe;
static PyCodeObject *codeobj_f55e3b57adf4b24ba28d1c8a7b63af22;
static PyCodeObject *codeobj_25879f15d9ed4076d359d2826cb726e7;
static PyCodeObject *codeobj_2ba4dc1f9b22ab882e9e21fbe6c644a8;
static PyCodeObject *codeobj_68b924ee0412bd1c3210af593dad258d;
static PyCodeObject *codeobj_b398fea87508f6fc9f0b21b3d0d7ae04;
static PyCodeObject *codeobj_72370a1d6ef3fba4b05eb5b02fb4f55f;
static PyCodeObject *codeobj_91df8517447a35f862fa34892cd5fe01;
static PyCodeObject *codeobj_8878a1485d88089883680fc69b13bd9b;
static PyCodeObject *codeobj_1f1d65aa7492d4af52185977d8605b8f;
static PyCodeObject *codeobj_218dca7bf7b6d48f4f7743b7b3e463bd;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_60afe73681fc443f40e828937e850a39 );
    codeobj_2e85538c26fbef7043cca59f20affb31 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_97b95ca94ff448f2fdcf07d90894988a, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a059c3abae0b6acac2c04374c3fc928b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_CBC, 87, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_cbb1cf9767116bb582d6d52c8a8270fa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_CFB, 143, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_bbee94e0ed2616c6fbee83dc57df0f75 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_CFB8, 156, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a9309ea2a37d5b860d93d6cc8d5ee2b2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_CTR, 169, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6ad4a4d24260ca441c095c8cbeb31960 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ECB, 122, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e7b7d24f4941560b43cf898a64497051 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_GCM, 189, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c060d67f458841a87fc2d7fa4ca5d3fd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Mode, 15, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fe9ec78069e5595ad7d9cfc116c0d461 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ModeWithAuthenticationTag, 58, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_eb252219adef4b4b5e18dfb795888e6f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ModeWithInitializationVector, 31, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8ce8c9388050dbbd785922ffcaa48e05 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ModeWithNonce, 49, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a49041a950b6e51d2ab37f9a836f4c7f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ModeWithTweak, 40, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1825a3b71080a42ffd2a6864ef85d5ea = MAKE_CODEOBJ( module_filename_obj, const_str_plain_OFB, 130, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_52057b80d5aad2260dee2648d54f5a3a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_XTS, 100, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c76893ba51e586c650609e831e212757 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 90, const_tuple_str_plain_self_str_plain_initialization_vector_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_06caa5e1f24fcf4cd643de38b475a69b = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 103, const_tuple_str_plain_self_str_plain_tweak_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e5f2df49c25e038d7a7f8b7f1a45b40f = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 133, const_tuple_str_plain_self_str_plain_initialization_vector_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8a6070acce23ee49005e067ee0e926c6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 146, const_tuple_str_plain_self_str_plain_initialization_vector_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f316e5d6047b64ebd4bab2757ab2a911 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 159, const_tuple_str_plain_self_str_plain_initialization_vector_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_35de3a350001060766d2420d7401afcc = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 172, const_tuple_str_plain_self_str_plain_nonce_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2428af6a3ef04848ad3b3f54a7ea7d53 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 194, const_tuple_6bd622b091616a1011697b4fa576725b_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3bf6fe562707b256c2748b6adb1f9199 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__check_aes_key_length, 66, const_tuple_str_plain_self_str_plain_algorithm_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_67517569001b86ccb8d3749e079060fe = MAKE_CODEOBJ( module_filename_obj, const_str_plain__check_iv_and_key_length, 80, const_tuple_str_plain_self_str_plain_algorithm_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f55e3b57adf4b24ba28d1c8a7b63af22 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__check_iv_length, 73, const_tuple_str_plain_self_str_plain_algorithm_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_25879f15d9ed4076d359d2826cb726e7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_initialization_vector, 32, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2ba4dc1f9b22ab882e9e21fbe6c644a8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_name, 16, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_68b924ee0412bd1c3210af593dad258d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_nonce, 50, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b398fea87508f6fc9f0b21b3d0d7ae04 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tag, 59, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_72370a1d6ef3fba4b05eb5b02fb4f55f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tweak, 41, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_91df8517447a35f862fa34892cd5fe01 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_validate_for_algorithm, 22, const_tuple_str_plain_self_str_plain_algorithm_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8878a1485d88089883680fc69b13bd9b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_validate_for_algorithm, 113, const_tuple_str_plain_self_str_plain_algorithm_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1f1d65aa7492d4af52185977d8605b8f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_validate_for_algorithm, 178, const_tuple_str_plain_self_str_plain_algorithm_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_218dca7bf7b6d48f4f7743b7b3e463bd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_validate_for_algorithm, 217, const_tuple_str_plain_self_str_plain_algorithm_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_10___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_11___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_12_validate_for_algorithm(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_13___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_14___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_15___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_16___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_17_validate_for_algorithm(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_18___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_19_validate_for_algorithm(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_1_name(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_2_validate_for_algorithm(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_3_initialization_vector(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_4_tweak(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_5_nonce(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_6_tag(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_7__check_aes_key_length(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_8__check_iv_length(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_9__check_iv_and_key_length(  );


// The module function definitions.
static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function_1_name( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_1_name );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_1_name );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function_2_validate_for_algorithm( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_2_validate_for_algorithm );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_2_validate_for_algorithm );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function_3_initialization_vector( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_3_initialization_vector );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_3_initialization_vector );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function_4_tweak( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_4_tweak );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_4_tweak );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function_5_nonce( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_5_nonce );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_5_nonce );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function_6_tag( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_6_tag );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_6_tag );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function_7__check_aes_key_length( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_algorithm = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_3bf6fe562707b256c2748b6adb1f9199 = NULL;

    struct Nuitka_FrameObject *frame_3bf6fe562707b256c2748b6adb1f9199;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3bf6fe562707b256c2748b6adb1f9199, codeobj_3bf6fe562707b256c2748b6adb1f9199, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *)+sizeof(void *) );
    frame_3bf6fe562707b256c2748b6adb1f9199 = cache_frame_3bf6fe562707b256c2748b6adb1f9199;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3bf6fe562707b256c2748b6adb1f9199 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3bf6fe562707b256c2748b6adb1f9199 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_algorithm;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_key_size );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_pos_256;
    tmp_and_left_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 67;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    Py_DECREF( tmp_and_left_value_1 );
    tmp_source_name_2 = par_algorithm;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_name );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = const_str_plain_AES;
    tmp_and_right_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 67;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_cd69e318ffbc825cdfdec262cc900a88;
    frame_3bf6fe562707b256c2748b6adb1f9199->m_frame.f_lineno = 68;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 68;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3bf6fe562707b256c2748b6adb1f9199 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3bf6fe562707b256c2748b6adb1f9199 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3bf6fe562707b256c2748b6adb1f9199, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3bf6fe562707b256c2748b6adb1f9199->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3bf6fe562707b256c2748b6adb1f9199, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3bf6fe562707b256c2748b6adb1f9199,
        type_description_1,
        par_self,
        par_algorithm
    );


    // Release cached frame.
    if ( frame_3bf6fe562707b256c2748b6adb1f9199 == cache_frame_3bf6fe562707b256c2748b6adb1f9199 )
    {
        Py_DECREF( frame_3bf6fe562707b256c2748b6adb1f9199 );
    }
    cache_frame_3bf6fe562707b256c2748b6adb1f9199 = NULL;

    assertFrameObject( frame_3bf6fe562707b256c2748b6adb1f9199 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_7__check_aes_key_length );
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_7__check_aes_key_length );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function_8__check_iv_length( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_algorithm = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    static struct Nuitka_FrameObject *cache_frame_f55e3b57adf4b24ba28d1c8a7b63af22 = NULL;

    struct Nuitka_FrameObject *frame_f55e3b57adf4b24ba28d1c8a7b63af22;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f55e3b57adf4b24ba28d1c8a7b63af22, codeobj_f55e3b57adf4b24ba28d1c8a7b63af22, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *)+sizeof(void *) );
    frame_f55e3b57adf4b24ba28d1c8a7b63af22 = cache_frame_f55e3b57adf4b24ba28d1c8a7b63af22;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f55e3b57adf4b24ba28d1c8a7b63af22 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f55e3b57adf4b24ba28d1c8a7b63af22 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_initialization_vector );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_8;
    tmp_compare_left_1 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_algorithm;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_block_size );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 74;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 74;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_3 = const_str_digest_a358a5c0d8e85cc6637c88dbb8395434;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_format );
    assert( tmp_called_name_1 != NULL );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_len_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_initialization_vector );
    if ( tmp_len_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 76;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = BUILTIN_LEN( tmp_len_arg_2 );
    Py_DECREF( tmp_len_arg_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 76;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_name );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 76;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_f55e3b57adf4b24ba28d1c8a7b63af22->m_frame.f_lineno = 75;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_f55e3b57adf4b24ba28d1c8a7b63af22->m_frame.f_lineno = 75;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 75;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f55e3b57adf4b24ba28d1c8a7b63af22 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f55e3b57adf4b24ba28d1c8a7b63af22 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f55e3b57adf4b24ba28d1c8a7b63af22, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f55e3b57adf4b24ba28d1c8a7b63af22->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f55e3b57adf4b24ba28d1c8a7b63af22, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f55e3b57adf4b24ba28d1c8a7b63af22,
        type_description_1,
        par_self,
        par_algorithm
    );


    // Release cached frame.
    if ( frame_f55e3b57adf4b24ba28d1c8a7b63af22 == cache_frame_f55e3b57adf4b24ba28d1c8a7b63af22 )
    {
        Py_DECREF( frame_f55e3b57adf4b24ba28d1c8a7b63af22 );
    }
    cache_frame_f55e3b57adf4b24ba28d1c8a7b63af22 = NULL;

    assertFrameObject( frame_f55e3b57adf4b24ba28d1c8a7b63af22 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_8__check_iv_length );
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_8__check_iv_length );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function_9__check_iv_and_key_length( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_algorithm = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_67517569001b86ccb8d3749e079060fe = NULL;

    struct Nuitka_FrameObject *frame_67517569001b86ccb8d3749e079060fe;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_67517569001b86ccb8d3749e079060fe, codeobj_67517569001b86ccb8d3749e079060fe, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *)+sizeof(void *) );
    frame_67517569001b86ccb8d3749e079060fe = cache_frame_67517569001b86ccb8d3749e079060fe;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_67517569001b86ccb8d3749e079060fe );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_67517569001b86ccb8d3749e079060fe ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain__check_aes_key_length );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__check_aes_key_length );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_check_aes_key_length" );
        exception_tb = NULL;

        exception_lineno = 81;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_algorithm;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_67517569001b86ccb8d3749e079060fe->m_frame.f_lineno = 81;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain__check_iv_length );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__check_iv_length );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_check_iv_length" );
        exception_tb = NULL;

        exception_lineno = 82;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_self;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = par_algorithm;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_67517569001b86ccb8d3749e079060fe->m_frame.f_lineno = 82;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_67517569001b86ccb8d3749e079060fe );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_67517569001b86ccb8d3749e079060fe );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_67517569001b86ccb8d3749e079060fe, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_67517569001b86ccb8d3749e079060fe->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_67517569001b86ccb8d3749e079060fe, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_67517569001b86ccb8d3749e079060fe,
        type_description_1,
        par_self,
        par_algorithm
    );


    // Release cached frame.
    if ( frame_67517569001b86ccb8d3749e079060fe == cache_frame_67517569001b86ccb8d3749e079060fe )
    {
        Py_DECREF( frame_67517569001b86ccb8d3749e079060fe );
    }
    cache_frame_67517569001b86ccb8d3749e079060fe = NULL;

    assertFrameObject( frame_67517569001b86ccb8d3749e079060fe );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_9__check_iv_and_key_length );
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_9__check_iv_and_key_length );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function_10___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_initialization_vector = python_pars[ 1 ];
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_called_instance_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c76893ba51e586c650609e831e212757 = NULL;

    struct Nuitka_FrameObject *frame_c76893ba51e586c650609e831e212757;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c76893ba51e586c650609e831e212757, codeobj_c76893ba51e586c650609e831e212757, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *)+sizeof(void *) );
    frame_c76893ba51e586c650609e831e212757 = cache_frame_c76893ba51e586c650609e831e212757;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c76893ba51e586c650609e831e212757 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c76893ba51e586c650609e831e212757 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 91;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_plain_initialization_vector;
    tmp_args_element_name_2 = par_initialization_vector;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_c76893ba51e586c650609e831e212757->m_frame.f_lineno = 91;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain__check_byteslike, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = par_initialization_vector;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__initialization_vector, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c76893ba51e586c650609e831e212757 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c76893ba51e586c650609e831e212757 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c76893ba51e586c650609e831e212757, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c76893ba51e586c650609e831e212757->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c76893ba51e586c650609e831e212757, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c76893ba51e586c650609e831e212757,
        type_description_1,
        par_self,
        par_initialization_vector
    );


    // Release cached frame.
    if ( frame_c76893ba51e586c650609e831e212757 == cache_frame_c76893ba51e586c650609e831e212757 )
    {
        Py_DECREF( frame_c76893ba51e586c650609e831e212757 );
    }
    cache_frame_c76893ba51e586c650609e831e212757 = NULL;

    assertFrameObject( frame_c76893ba51e586c650609e831e212757 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_10___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_initialization_vector );
    Py_DECREF( par_initialization_vector );
    par_initialization_vector = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_initialization_vector );
    Py_DECREF( par_initialization_vector );
    par_initialization_vector = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_10___init__ );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function_11___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_tweak = python_pars[ 1 ];
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_called_instance_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_06caa5e1f24fcf4cd643de38b475a69b = NULL;

    struct Nuitka_FrameObject *frame_06caa5e1f24fcf4cd643de38b475a69b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_06caa5e1f24fcf4cd643de38b475a69b, codeobj_06caa5e1f24fcf4cd643de38b475a69b, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *)+sizeof(void *) );
    frame_06caa5e1f24fcf4cd643de38b475a69b = cache_frame_06caa5e1f24fcf4cd643de38b475a69b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_06caa5e1f24fcf4cd643de38b475a69b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_06caa5e1f24fcf4cd643de38b475a69b ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 104;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_plain_tweak;
    tmp_args_element_name_2 = par_tweak;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_06caa5e1f24fcf4cd643de38b475a69b->m_frame.f_lineno = 104;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain__check_byteslike, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_len_arg_1 = par_tweak;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_16;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 106;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_1fb896656a556642058d3d0f2aef8429;
    frame_06caa5e1f24fcf4cd643de38b475a69b->m_frame.f_lineno = 107;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 107;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_assattr_name_1 = par_tweak;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__tweak, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_06caa5e1f24fcf4cd643de38b475a69b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_06caa5e1f24fcf4cd643de38b475a69b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_06caa5e1f24fcf4cd643de38b475a69b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_06caa5e1f24fcf4cd643de38b475a69b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_06caa5e1f24fcf4cd643de38b475a69b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_06caa5e1f24fcf4cd643de38b475a69b,
        type_description_1,
        par_self,
        par_tweak
    );


    // Release cached frame.
    if ( frame_06caa5e1f24fcf4cd643de38b475a69b == cache_frame_06caa5e1f24fcf4cd643de38b475a69b )
    {
        Py_DECREF( frame_06caa5e1f24fcf4cd643de38b475a69b );
    }
    cache_frame_06caa5e1f24fcf4cd643de38b475a69b = NULL;

    assertFrameObject( frame_06caa5e1f24fcf4cd643de38b475a69b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_11___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_tweak );
    Py_DECREF( par_tweak );
    par_tweak = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_tweak );
    Py_DECREF( par_tweak );
    par_tweak = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_11___init__ );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function_12_validate_for_algorithm( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_algorithm = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_8878a1485d88089883680fc69b13bd9b = NULL;

    struct Nuitka_FrameObject *frame_8878a1485d88089883680fc69b13bd9b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8878a1485d88089883680fc69b13bd9b, codeobj_8878a1485d88089883680fc69b13bd9b, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *)+sizeof(void *) );
    frame_8878a1485d88089883680fc69b13bd9b = cache_frame_8878a1485d88089883680fc69b13bd9b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8878a1485d88089883680fc69b13bd9b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8878a1485d88089883680fc69b13bd9b ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_algorithm;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_key_size );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_tuple_int_pos_256_int_pos_512_tuple;
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_ca7e0f37eefb63f559dcf13aed7fe908;
    frame_8878a1485d88089883680fc69b13bd9b->m_frame.f_lineno = 115;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 115;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8878a1485d88089883680fc69b13bd9b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8878a1485d88089883680fc69b13bd9b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8878a1485d88089883680fc69b13bd9b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8878a1485d88089883680fc69b13bd9b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8878a1485d88089883680fc69b13bd9b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8878a1485d88089883680fc69b13bd9b,
        type_description_1,
        par_self,
        par_algorithm
    );


    // Release cached frame.
    if ( frame_8878a1485d88089883680fc69b13bd9b == cache_frame_8878a1485d88089883680fc69b13bd9b )
    {
        Py_DECREF( frame_8878a1485d88089883680fc69b13bd9b );
    }
    cache_frame_8878a1485d88089883680fc69b13bd9b = NULL;

    assertFrameObject( frame_8878a1485d88089883680fc69b13bd9b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_12_validate_for_algorithm );
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_12_validate_for_algorithm );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function_13___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_initialization_vector = python_pars[ 1 ];
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_called_instance_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e5f2df49c25e038d7a7f8b7f1a45b40f = NULL;

    struct Nuitka_FrameObject *frame_e5f2df49c25e038d7a7f8b7f1a45b40f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e5f2df49c25e038d7a7f8b7f1a45b40f, codeobj_e5f2df49c25e038d7a7f8b7f1a45b40f, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *)+sizeof(void *) );
    frame_e5f2df49c25e038d7a7f8b7f1a45b40f = cache_frame_e5f2df49c25e038d7a7f8b7f1a45b40f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e5f2df49c25e038d7a7f8b7f1a45b40f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e5f2df49c25e038d7a7f8b7f1a45b40f ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 134;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_plain_initialization_vector;
    tmp_args_element_name_2 = par_initialization_vector;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_e5f2df49c25e038d7a7f8b7f1a45b40f->m_frame.f_lineno = 134;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain__check_byteslike, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = par_initialization_vector;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__initialization_vector, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e5f2df49c25e038d7a7f8b7f1a45b40f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e5f2df49c25e038d7a7f8b7f1a45b40f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e5f2df49c25e038d7a7f8b7f1a45b40f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e5f2df49c25e038d7a7f8b7f1a45b40f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e5f2df49c25e038d7a7f8b7f1a45b40f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e5f2df49c25e038d7a7f8b7f1a45b40f,
        type_description_1,
        par_self,
        par_initialization_vector
    );


    // Release cached frame.
    if ( frame_e5f2df49c25e038d7a7f8b7f1a45b40f == cache_frame_e5f2df49c25e038d7a7f8b7f1a45b40f )
    {
        Py_DECREF( frame_e5f2df49c25e038d7a7f8b7f1a45b40f );
    }
    cache_frame_e5f2df49c25e038d7a7f8b7f1a45b40f = NULL;

    assertFrameObject( frame_e5f2df49c25e038d7a7f8b7f1a45b40f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_13___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_initialization_vector );
    Py_DECREF( par_initialization_vector );
    par_initialization_vector = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_initialization_vector );
    Py_DECREF( par_initialization_vector );
    par_initialization_vector = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_13___init__ );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function_14___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_initialization_vector = python_pars[ 1 ];
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_called_instance_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_8a6070acce23ee49005e067ee0e926c6 = NULL;

    struct Nuitka_FrameObject *frame_8a6070acce23ee49005e067ee0e926c6;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8a6070acce23ee49005e067ee0e926c6, codeobj_8a6070acce23ee49005e067ee0e926c6, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *)+sizeof(void *) );
    frame_8a6070acce23ee49005e067ee0e926c6 = cache_frame_8a6070acce23ee49005e067ee0e926c6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8a6070acce23ee49005e067ee0e926c6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8a6070acce23ee49005e067ee0e926c6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 147;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_plain_initialization_vector;
    tmp_args_element_name_2 = par_initialization_vector;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_8a6070acce23ee49005e067ee0e926c6->m_frame.f_lineno = 147;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain__check_byteslike, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = par_initialization_vector;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__initialization_vector, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8a6070acce23ee49005e067ee0e926c6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8a6070acce23ee49005e067ee0e926c6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8a6070acce23ee49005e067ee0e926c6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8a6070acce23ee49005e067ee0e926c6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8a6070acce23ee49005e067ee0e926c6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8a6070acce23ee49005e067ee0e926c6,
        type_description_1,
        par_self,
        par_initialization_vector
    );


    // Release cached frame.
    if ( frame_8a6070acce23ee49005e067ee0e926c6 == cache_frame_8a6070acce23ee49005e067ee0e926c6 )
    {
        Py_DECREF( frame_8a6070acce23ee49005e067ee0e926c6 );
    }
    cache_frame_8a6070acce23ee49005e067ee0e926c6 = NULL;

    assertFrameObject( frame_8a6070acce23ee49005e067ee0e926c6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_14___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_initialization_vector );
    Py_DECREF( par_initialization_vector );
    par_initialization_vector = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_initialization_vector );
    Py_DECREF( par_initialization_vector );
    par_initialization_vector = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_14___init__ );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function_15___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_initialization_vector = python_pars[ 1 ];
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_called_instance_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f316e5d6047b64ebd4bab2757ab2a911 = NULL;

    struct Nuitka_FrameObject *frame_f316e5d6047b64ebd4bab2757ab2a911;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f316e5d6047b64ebd4bab2757ab2a911, codeobj_f316e5d6047b64ebd4bab2757ab2a911, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *)+sizeof(void *) );
    frame_f316e5d6047b64ebd4bab2757ab2a911 = cache_frame_f316e5d6047b64ebd4bab2757ab2a911;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f316e5d6047b64ebd4bab2757ab2a911 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f316e5d6047b64ebd4bab2757ab2a911 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 160;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_plain_initialization_vector;
    tmp_args_element_name_2 = par_initialization_vector;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_f316e5d6047b64ebd4bab2757ab2a911->m_frame.f_lineno = 160;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain__check_byteslike, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = par_initialization_vector;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__initialization_vector, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f316e5d6047b64ebd4bab2757ab2a911 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f316e5d6047b64ebd4bab2757ab2a911 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f316e5d6047b64ebd4bab2757ab2a911, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f316e5d6047b64ebd4bab2757ab2a911->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f316e5d6047b64ebd4bab2757ab2a911, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f316e5d6047b64ebd4bab2757ab2a911,
        type_description_1,
        par_self,
        par_initialization_vector
    );


    // Release cached frame.
    if ( frame_f316e5d6047b64ebd4bab2757ab2a911 == cache_frame_f316e5d6047b64ebd4bab2757ab2a911 )
    {
        Py_DECREF( frame_f316e5d6047b64ebd4bab2757ab2a911 );
    }
    cache_frame_f316e5d6047b64ebd4bab2757ab2a911 = NULL;

    assertFrameObject( frame_f316e5d6047b64ebd4bab2757ab2a911 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_15___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_initialization_vector );
    Py_DECREF( par_initialization_vector );
    par_initialization_vector = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_initialization_vector );
    Py_DECREF( par_initialization_vector );
    par_initialization_vector = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_15___init__ );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function_16___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_nonce = python_pars[ 1 ];
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_called_instance_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_35de3a350001060766d2420d7401afcc = NULL;

    struct Nuitka_FrameObject *frame_35de3a350001060766d2420d7401afcc;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_35de3a350001060766d2420d7401afcc, codeobj_35de3a350001060766d2420d7401afcc, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *)+sizeof(void *) );
    frame_35de3a350001060766d2420d7401afcc = cache_frame_35de3a350001060766d2420d7401afcc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_35de3a350001060766d2420d7401afcc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_35de3a350001060766d2420d7401afcc ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 173;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_plain_nonce;
    tmp_args_element_name_2 = par_nonce;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_35de3a350001060766d2420d7401afcc->m_frame.f_lineno = 173;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain__check_byteslike, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = par_nonce;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__nonce, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_35de3a350001060766d2420d7401afcc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_35de3a350001060766d2420d7401afcc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_35de3a350001060766d2420d7401afcc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_35de3a350001060766d2420d7401afcc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_35de3a350001060766d2420d7401afcc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_35de3a350001060766d2420d7401afcc,
        type_description_1,
        par_self,
        par_nonce
    );


    // Release cached frame.
    if ( frame_35de3a350001060766d2420d7401afcc == cache_frame_35de3a350001060766d2420d7401afcc )
    {
        Py_DECREF( frame_35de3a350001060766d2420d7401afcc );
    }
    cache_frame_35de3a350001060766d2420d7401afcc = NULL;

    assertFrameObject( frame_35de3a350001060766d2420d7401afcc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_16___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_nonce );
    Py_DECREF( par_nonce );
    par_nonce = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_16___init__ );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function_17_validate_for_algorithm( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_algorithm = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1f1d65aa7492d4af52185977d8605b8f = NULL;

    struct Nuitka_FrameObject *frame_1f1d65aa7492d4af52185977d8605b8f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1f1d65aa7492d4af52185977d8605b8f, codeobj_1f1d65aa7492d4af52185977d8605b8f, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *)+sizeof(void *) );
    frame_1f1d65aa7492d4af52185977d8605b8f = cache_frame_1f1d65aa7492d4af52185977d8605b8f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1f1d65aa7492d4af52185977d8605b8f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1f1d65aa7492d4af52185977d8605b8f ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain__check_aes_key_length );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__check_aes_key_length );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_check_aes_key_length" );
        exception_tb = NULL;

        exception_lineno = 179;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_algorithm;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_1f1d65aa7492d4af52185977d8605b8f->m_frame.f_lineno = 179;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_nonce );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_8;
    tmp_compare_left_1 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_algorithm;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_block_size );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 180;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 180;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_3 = const_str_digest_bb3634c5ad126b5f0dcc68e909fe730c;
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_format );
    assert( tmp_called_name_2 != NULL );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_len_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_nonce );
    if ( tmp_len_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 182;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = BUILTIN_LEN( tmp_len_arg_2 );
    Py_DECREF( tmp_len_arg_2 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 182;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_name );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 182;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_1f1d65aa7492d4af52185977d8605b8f->m_frame.f_lineno = 181;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_1f1d65aa7492d4af52185977d8605b8f->m_frame.f_lineno = 181;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 181;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f1d65aa7492d4af52185977d8605b8f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f1d65aa7492d4af52185977d8605b8f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1f1d65aa7492d4af52185977d8605b8f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1f1d65aa7492d4af52185977d8605b8f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1f1d65aa7492d4af52185977d8605b8f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1f1d65aa7492d4af52185977d8605b8f,
        type_description_1,
        par_self,
        par_algorithm
    );


    // Release cached frame.
    if ( frame_1f1d65aa7492d4af52185977d8605b8f == cache_frame_1f1d65aa7492d4af52185977d8605b8f )
    {
        Py_DECREF( frame_1f1d65aa7492d4af52185977d8605b8f );
    }
    cache_frame_1f1d65aa7492d4af52185977d8605b8f = NULL;

    assertFrameObject( frame_1f1d65aa7492d4af52185977d8605b8f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_17_validate_for_algorithm );
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_17_validate_for_algorithm );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function_18___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_initialization_vector = python_pars[ 1 ];
    PyObject *par_tag = python_pars[ 2 ];
    PyObject *par_min_tag_length = python_pars[ 3 ];
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Lt_1;
    int tmp_cmp_Lt_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    bool tmp_isnot_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    bool tmp_result;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_2428af6a3ef04848ad3b3f54a7ea7d53 = NULL;

    struct Nuitka_FrameObject *frame_2428af6a3ef04848ad3b3f54a7ea7d53;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2428af6a3ef04848ad3b3f54a7ea7d53, codeobj_2428af6a3ef04848ad3b3f54a7ea7d53, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2428af6a3ef04848ad3b3f54a7ea7d53 = cache_frame_2428af6a3ef04848ad3b3f54a7ea7d53;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2428af6a3ef04848ad3b3f54a7ea7d53 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2428af6a3ef04848ad3b3f54a7ea7d53 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 198;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_plain_initialization_vector;
    tmp_args_element_name_2 = par_initialization_vector;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_2428af6a3ef04848ad3b3f54a7ea7d53->m_frame.f_lineno = 198;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain__check_byteslike, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_len_arg_1 = par_initialization_vector;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 199;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_eaaef4929e558f8f2d9150675f4b135d;
    frame_2428af6a3ef04848ad3b3f54a7ea7d53->m_frame.f_lineno = 200;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 200;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_assattr_name_1 = par_initialization_vector;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__initialization_vector, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_2 = par_tag;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 203;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = const_str_plain_tag;
    tmp_args_element_name_4 = par_tag;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_2428af6a3ef04848ad3b3f54a7ea7d53->m_frame.f_lineno = 203;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain__check_bytes, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_compare_left_3 = par_min_tag_length;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = const_int_pos_4;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_make_exception_arg_2 = const_str_digest_5b8e8cd5cac009365b3640e73a17e51b;
    frame_2428af6a3ef04848ad3b3f54a7ea7d53->m_frame.f_lineno = 205;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 205;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_len_arg_2 = par_tag;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_compare_left_4 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = par_min_tag_length;

    CHECK_OBJECT( tmp_compare_right_4 );
    tmp_cmp_Lt_2 = RICH_COMPARE_BOOL_LT( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Lt_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 206;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    if ( tmp_cmp_Lt_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_instance_3 = const_str_digest_870c1e3ecfe8b1337ddd8cb410fc50da;
    tmp_args_element_name_5 = par_min_tag_length;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_2428af6a3ef04848ad3b3f54a7ea7d53->m_frame.f_lineno = 208;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_make_exception_arg_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_format, call_args );
    }

    if ( tmp_make_exception_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_2428af6a3ef04848ad3b3f54a7ea7d53->m_frame.f_lineno = 207;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_3 );
    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 207;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_4:;
    branch_no_2:;
    tmp_assattr_name_2 = par_tag;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__tag, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_min_tag_length;

    CHECK_OBJECT( tmp_assattr_name_3 );
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__min_tag_length, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2428af6a3ef04848ad3b3f54a7ea7d53 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2428af6a3ef04848ad3b3f54a7ea7d53 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2428af6a3ef04848ad3b3f54a7ea7d53, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2428af6a3ef04848ad3b3f54a7ea7d53->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2428af6a3ef04848ad3b3f54a7ea7d53, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2428af6a3ef04848ad3b3f54a7ea7d53,
        type_description_1,
        par_self,
        par_initialization_vector,
        par_tag,
        par_min_tag_length
    );


    // Release cached frame.
    if ( frame_2428af6a3ef04848ad3b3f54a7ea7d53 == cache_frame_2428af6a3ef04848ad3b3f54a7ea7d53 )
    {
        Py_DECREF( frame_2428af6a3ef04848ad3b3f54a7ea7d53 );
    }
    cache_frame_2428af6a3ef04848ad3b3f54a7ea7d53 = NULL;

    assertFrameObject( frame_2428af6a3ef04848ad3b3f54a7ea7d53 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_18___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_tag );
    Py_DECREF( par_tag );
    par_tag = NULL;

    CHECK_OBJECT( (PyObject *)par_min_tag_length );
    Py_DECREF( par_min_tag_length );
    par_min_tag_length = NULL;

    CHECK_OBJECT( (PyObject *)par_initialization_vector );
    Py_DECREF( par_initialization_vector );
    par_initialization_vector = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_tag );
    Py_DECREF( par_tag );
    par_tag = NULL;

    CHECK_OBJECT( (PyObject *)par_min_tag_length );
    Py_DECREF( par_min_tag_length );
    par_min_tag_length = NULL;

    CHECK_OBJECT( (PyObject *)par_initialization_vector );
    Py_DECREF( par_initialization_vector );
    par_initialization_vector = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_18___init__ );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$modes$$$function_19_validate_for_algorithm( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_algorithm = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_218dca7bf7b6d48f4f7743b7b3e463bd = NULL;

    struct Nuitka_FrameObject *frame_218dca7bf7b6d48f4f7743b7b3e463bd;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_218dca7bf7b6d48f4f7743b7b3e463bd, codeobj_218dca7bf7b6d48f4f7743b7b3e463bd, module_cryptography$hazmat$primitives$ciphers$modes, sizeof(void *)+sizeof(void *) );
    frame_218dca7bf7b6d48f4f7743b7b3e463bd = cache_frame_218dca7bf7b6d48f4f7743b7b3e463bd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_218dca7bf7b6d48f4f7743b7b3e463bd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_218dca7bf7b6d48f4f7743b7b3e463bd ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain__check_aes_key_length );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__check_aes_key_length );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_check_aes_key_length" );
        exception_tb = NULL;

        exception_lineno = 218;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_algorithm;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_218dca7bf7b6d48f4f7743b7b3e463bd->m_frame.f_lineno = 218;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_218dca7bf7b6d48f4f7743b7b3e463bd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_218dca7bf7b6d48f4f7743b7b3e463bd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_218dca7bf7b6d48f4f7743b7b3e463bd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_218dca7bf7b6d48f4f7743b7b3e463bd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_218dca7bf7b6d48f4f7743b7b3e463bd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_218dca7bf7b6d48f4f7743b7b3e463bd,
        type_description_1,
        par_self,
        par_algorithm
    );


    // Release cached frame.
    if ( frame_218dca7bf7b6d48f4f7743b7b3e463bd == cache_frame_218dca7bf7b6d48f4f7743b7b3e463bd )
    {
        Py_DECREF( frame_218dca7bf7b6d48f4f7743b7b3e463bd );
    }
    cache_frame_218dca7bf7b6d48f4f7743b7b3e463bd = NULL;

    assertFrameObject( frame_218dca7bf7b6d48f4f7743b7b3e463bd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_19_validate_for_algorithm );
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes$$$function_19_validate_for_algorithm );
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



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_10___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function_10___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c76893ba51e586c650609e831e212757,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_11___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function_11___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_06caa5e1f24fcf4cd643de38b475a69b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_12_validate_for_algorithm(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function_12_validate_for_algorithm,
        const_str_plain_validate_for_algorithm,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8878a1485d88089883680fc69b13bd9b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_13___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function_13___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e5f2df49c25e038d7a7f8b7f1a45b40f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_14___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function_14___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8a6070acce23ee49005e067ee0e926c6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_15___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function_15___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f316e5d6047b64ebd4bab2757ab2a911,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_16___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function_16___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_35de3a350001060766d2420d7401afcc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_17_validate_for_algorithm(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function_17_validate_for_algorithm,
        const_str_plain_validate_for_algorithm,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1f1d65aa7492d4af52185977d8605b8f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_18___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function_18___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2428af6a3ef04848ad3b3f54a7ea7d53,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_19_validate_for_algorithm(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function_19_validate_for_algorithm,
        const_str_plain_validate_for_algorithm,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_218dca7bf7b6d48f4f7743b7b3e463bd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_1_name(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function_1_name,
        const_str_plain_name,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2ba4dc1f9b22ab882e9e21fbe6c644a8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        const_str_digest_8ed5cda0f4d28df12a981196f62a1b42,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_2_validate_for_algorithm(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function_2_validate_for_algorithm,
        const_str_plain_validate_for_algorithm,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_91df8517447a35f862fa34892cd5fe01,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        const_str_digest_5020d9a5b89e034fd58f0961dca03421,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_3_initialization_vector(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function_3_initialization_vector,
        const_str_plain_initialization_vector,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_25879f15d9ed4076d359d2826cb726e7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        const_str_digest_294cd97bbac358075d4b7bb1ef71ed25,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_4_tweak(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function_4_tweak,
        const_str_plain_tweak,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_72370a1d6ef3fba4b05eb5b02fb4f55f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        const_str_digest_660e0d4b5fcaff641982725568eda7c4,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_5_nonce(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function_5_nonce,
        const_str_plain_nonce,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_68b924ee0412bd1c3210af593dad258d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        const_str_digest_8841c86c66f42811f396044407fdea00,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_6_tag(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function_6_tag,
        const_str_plain_tag,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b398fea87508f6fc9f0b21b3d0d7ae04,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        const_str_digest_38fc79dfa6223032de52ab115724f2e4,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_7__check_aes_key_length(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function_7__check_aes_key_length,
        const_str_plain__check_aes_key_length,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3bf6fe562707b256c2748b6adb1f9199,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_8__check_iv_length(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function_8__check_iv_length,
        const_str_plain__check_iv_length,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f55e3b57adf4b24ba28d1c8a7b63af22,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_9__check_iv_and_key_length(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$modes$$$function_9__check_iv_and_key_length,
        const_str_plain__check_iv_and_key_length,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_67517569001b86ccb8d3749e079060fe,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$modes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_cryptography$hazmat$primitives$ciphers$modes =
{
    PyModuleDef_HEAD_INIT,
    "cryptography.hazmat.primitives.ciphers.modes",   /* m_name */
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

MOD_INIT_DECL( cryptography$hazmat$primitives$ciphers$modes )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_cryptography$hazmat$primitives$ciphers$modes );
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
    puts("cryptography.hazmat.primitives.ciphers.modes: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.primitives.ciphers.modes: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.primitives.ciphers.modes: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcryptography$hazmat$primitives$ciphers$modes" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_cryptography$hazmat$primitives$ciphers$modes = Py_InitModule4(
        "cryptography.hazmat.primitives.ciphers.modes",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_cryptography$hazmat$primitives$ciphers$modes = PyModule_Create( &mdef_cryptography$hazmat$primitives$ciphers$modes );
#endif

    moduledict_cryptography$hazmat$primitives$ciphers$modes = MODULE_DICT( module_cryptography$hazmat$primitives$ciphers$modes );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_cryptography$hazmat$primitives$ciphers$modes,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$ciphers$modes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_cryptography$hazmat$primitives$ciphers$modes,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$ciphers$modes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_cryptography$hazmat$primitives$ciphers$modes );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_dad71bd336cb898ea2767fe5d1d92e3c, module_cryptography$hazmat$primitives$ciphers$modes );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_assign_source_74;
    PyObject *tmp_assign_source_75;
    PyObject *tmp_assign_source_76;
    PyObject *tmp_assign_source_77;
    PyObject *tmp_assign_source_78;
    PyObject *tmp_assign_source_79;
    PyObject *tmp_assign_source_80;
    PyObject *tmp_assign_source_81;
    PyObject *tmp_assign_source_82;
    PyObject *tmp_assign_source_83;
    PyObject *tmp_assign_source_84;
    PyObject *tmp_assign_source_85;
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
    PyObject *tmp_called_name_40;
    PyObject *tmp_called_name_41;
    PyObject *tmp_called_name_42;
    PyObject *tmp_called_name_43;
    PyObject *tmp_called_name_44;
    PyObject *tmp_called_name_45;
    PyObject *tmp_called_name_46;
    PyObject *tmp_called_name_47;
    PyObject *tmp_called_name_48;
    PyObject *tmp_called_name_49;
    PyObject *tmp_called_name_50;
    PyObject *tmp_called_name_51;
    PyObject *tmp_called_name_52;
    PyObject *tmp_called_name_53;
    PyObject *tmp_called_name_54;
    PyObject *tmp_called_name_55;
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
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
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
    PyObject *tmp_level_name_3;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
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
    static struct Nuitka_FrameObject *cache_frame_c060d67f458841a87fc2d7fa4ca5d3fd_2 = NULL;

    struct Nuitka_FrameObject *frame_c060d67f458841a87fc2d7fa4ca5d3fd_2;

    static struct Nuitka_FrameObject *cache_frame_eb252219adef4b4b5e18dfb795888e6f_3 = NULL;

    struct Nuitka_FrameObject *frame_eb252219adef4b4b5e18dfb795888e6f_3;

    static struct Nuitka_FrameObject *cache_frame_a49041a950b6e51d2ab37f9a836f4c7f_4 = NULL;

    struct Nuitka_FrameObject *frame_a49041a950b6e51d2ab37f9a836f4c7f_4;

    static struct Nuitka_FrameObject *cache_frame_8ce8c9388050dbbd785922ffcaa48e05_5 = NULL;

    struct Nuitka_FrameObject *frame_8ce8c9388050dbbd785922ffcaa48e05_5;

    static struct Nuitka_FrameObject *cache_frame_fe9ec78069e5595ad7d9cfc116c0d461_6 = NULL;

    struct Nuitka_FrameObject *frame_fe9ec78069e5595ad7d9cfc116c0d461_6;

    static struct Nuitka_FrameObject *cache_frame_a059c3abae0b6acac2c04374c3fc928b_7 = NULL;

    struct Nuitka_FrameObject *frame_a059c3abae0b6acac2c04374c3fc928b_7;

    static struct Nuitka_FrameObject *cache_frame_52057b80d5aad2260dee2648d54f5a3a_8 = NULL;

    struct Nuitka_FrameObject *frame_52057b80d5aad2260dee2648d54f5a3a_8;

    static struct Nuitka_FrameObject *cache_frame_6ad4a4d24260ca441c095c8cbeb31960_9 = NULL;

    struct Nuitka_FrameObject *frame_6ad4a4d24260ca441c095c8cbeb31960_9;

    static struct Nuitka_FrameObject *cache_frame_1825a3b71080a42ffd2a6864ef85d5ea_10 = NULL;

    struct Nuitka_FrameObject *frame_1825a3b71080a42ffd2a6864ef85d5ea_10;

    static struct Nuitka_FrameObject *cache_frame_cbb1cf9767116bb582d6d52c8a8270fa_11 = NULL;

    struct Nuitka_FrameObject *frame_cbb1cf9767116bb582d6d52c8a8270fa_11;

    static struct Nuitka_FrameObject *cache_frame_bbee94e0ed2616c6fbee83dc57df0f75_12 = NULL;

    struct Nuitka_FrameObject *frame_bbee94e0ed2616c6fbee83dc57df0f75_12;

    static struct Nuitka_FrameObject *cache_frame_a9309ea2a37d5b860d93d6cc8d5ee2b2_13 = NULL;

    struct Nuitka_FrameObject *frame_a9309ea2a37d5b860d93d6cc8d5ee2b2_13;

    static struct Nuitka_FrameObject *cache_frame_e7b7d24f4941560b43cf898a64497051_14 = NULL;

    struct Nuitka_FrameObject *frame_e7b7d24f4941560b43cf898a64497051_14;

    struct Nuitka_FrameObject *frame_2e85538c26fbef7043cca59f20affb31;

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
    PyObject *locals_CTR_169 = NULL;
    PyObject *locals_ModeWithTweak_40 = NULL;
    PyObject *locals_ModeWithInitializationVector_31 = NULL;
    PyObject *locals_ModeWithAuthenticationTag_58 = NULL;
    PyObject *locals_CFB8_156 = NULL;
    PyObject *locals_OFB_130 = NULL;
    PyObject *locals_ModeWithNonce_49 = NULL;
    PyObject *locals_GCM_189 = NULL;
    PyObject *locals_CBC_87 = NULL;
    PyObject *locals_CFB_143 = NULL;
    PyObject *locals_Mode_15 = NULL;
    PyObject *locals_XTS_100 = NULL;
    PyObject *locals_ECB_122 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyImport_ImportModule("__future__");
    assert( tmp_assign_source_3 != NULL );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_3 );
    tmp_import_from_1__module = tmp_assign_source_3;

    // Frame without reuse.
    frame_2e85538c26fbef7043cca59f20affb31 = MAKE_MODULE_FRAME( codeobj_2e85538c26fbef7043cca59f20affb31, module_cryptography$hazmat$primitives$ciphers$modes );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_2e85538c26fbef7043cca59f20affb31 );
    assert( Py_REFCNT( frame_2e85538c26fbef7043cca59f20affb31 ) == 2 );

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
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
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
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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
    tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$ciphers$modes;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 7;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_abc, tmp_assign_source_7 );
    tmp_name_name_2 = const_str_plain_six;
    tmp_globals_name_2 = (PyObject *)moduledict_cryptography$hazmat$primitives$ciphers$modes;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 9;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_8 );
    tmp_name_name_3 = const_str_plain_cryptography;
    tmp_globals_name_3 = (PyObject *)moduledict_cryptography$hazmat$primitives$ciphers$modes;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_utils_tuple;
    tmp_level_name_3 = const_int_0;
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 11;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_utils );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils, tmp_assign_source_9 );
    // Tried code:
    tmp_set_locals = PyDict_New();
    locals_Mode_15 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_dad71bd336cb898ea2767fe5d1d92e3c;
    tmp_res = PyDict_SetItem( locals_Mode_15, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c060d67f458841a87fc2d7fa4ca5d3fd_2, codeobj_c060d67f458841a87fc2d7fa4ca5d3fd, module_cryptography$hazmat$primitives$ciphers$modes, 0 );
    frame_c060d67f458841a87fc2d7fa4ca5d3fd_2 = cache_frame_c060d67f458841a87fc2d7fa4ca5d3fd_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c060d67f458841a87fc2d7fa4ca5d3fd_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c060d67f458841a87fc2d7fa4ca5d3fd_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 16;

        goto frame_exception_exit_2;
    }

    tmp_args_element_name_1 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_1_name(  );
    frame_c060d67f458841a87fc2d7fa4ca5d3fd_2->m_frame.f_lineno = 16;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_Mode_15, const_str_plain_name, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_2;
    }
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 22;

        goto frame_exception_exit_2;
    }

    tmp_args_element_name_2 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_2_validate_for_algorithm(  );
    frame_c060d67f458841a87fc2d7fa4ca5d3fd_2->m_frame.f_lineno = 22;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_Mode_15, const_str_plain_validate_for_algorithm, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c060d67f458841a87fc2d7fa4ca5d3fd_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c060d67f458841a87fc2d7fa4ca5d3fd_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c060d67f458841a87fc2d7fa4ca5d3fd_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c060d67f458841a87fc2d7fa4ca5d3fd_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c060d67f458841a87fc2d7fa4ca5d3fd_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c060d67f458841a87fc2d7fa4ca5d3fd_2,
        type_description_2
    );


    // Release cached frame.
    if ( frame_c060d67f458841a87fc2d7fa4ca5d3fd_2 == cache_frame_c060d67f458841a87fc2d7fa4ca5d3fd_2 )
    {
        Py_DECREF( frame_c060d67f458841a87fc2d7fa4ca5d3fd_2 );
    }
    cache_frame_c060d67f458841a87fc2d7fa4ca5d3fd_2 = NULL;

    assertFrameObject( frame_c060d67f458841a87fc2d7fa4ca5d3fd_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_3;
    skip_nested_handling_1:;
    tmp_outline_return_value_1 = locals_Mode_15;
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    Py_DECREF( locals_Mode_15 );
    locals_Mode_15 = NULL;
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

    Py_DECREF( locals_Mode_15 );
    locals_Mode_15 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 15;
    goto try_except_handler_2;
    outline_result_1:;
    tmp_assign_source_10 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_10;

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
    tmp_assign_source_11 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_2;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_11 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_11 );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_11;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_3 = const_str_plain_Mode;
    tmp_args_element_name_4 = const_tuple_type_object_tuple;
    tmp_args_element_name_5 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 15;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_12;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_six );

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

        exception_lineno = 14;

        goto try_except_handler_2;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add_metaclass );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_2;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 14;

        goto try_except_handler_2;
    }

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 14;

        goto try_except_handler_2;
    }
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 14;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_called_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_2;
    }
    tmp_args_element_name_7 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_args_element_name_7 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 14;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_class_creation_1__class;
        assert( old != NULL );
        tmp_class_creation_1__class = tmp_assign_source_13;
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
    tmp_assign_source_14 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_14 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_Mode, tmp_assign_source_14 );
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
    locals_ModeWithInitializationVector_31 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_dad71bd336cb898ea2767fe5d1d92e3c;
    tmp_res = PyDict_SetItem( locals_ModeWithInitializationVector_31, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_eb252219adef4b4b5e18dfb795888e6f_3, codeobj_eb252219adef4b4b5e18dfb795888e6f, module_cryptography$hazmat$primitives$ciphers$modes, 0 );
    frame_eb252219adef4b4b5e18dfb795888e6f_3 = cache_frame_eb252219adef4b4b5e18dfb795888e6f_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_eb252219adef4b4b5e18dfb795888e6f_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_eb252219adef4b4b5e18dfb795888e6f_3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 32;

        goto frame_exception_exit_3;
    }

    tmp_args_element_name_8 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_3_initialization_vector(  );
    frame_eb252219adef4b4b5e18dfb795888e6f_3->m_frame.f_lineno = 32;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto frame_exception_exit_3;
    }
    tmp_res = PyDict_SetItem( locals_ModeWithInitializationVector_31, const_str_plain_initialization_vector, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto frame_exception_exit_3;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb252219adef4b4b5e18dfb795888e6f_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb252219adef4b4b5e18dfb795888e6f_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_eb252219adef4b4b5e18dfb795888e6f_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_eb252219adef4b4b5e18dfb795888e6f_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_eb252219adef4b4b5e18dfb795888e6f_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_eb252219adef4b4b5e18dfb795888e6f_3,
        type_description_2
    );


    // Release cached frame.
    if ( frame_eb252219adef4b4b5e18dfb795888e6f_3 == cache_frame_eb252219adef4b4b5e18dfb795888e6f_3 )
    {
        Py_DECREF( frame_eb252219adef4b4b5e18dfb795888e6f_3 );
    }
    cache_frame_eb252219adef4b4b5e18dfb795888e6f_3 = NULL;

    assertFrameObject( frame_eb252219adef4b4b5e18dfb795888e6f_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_5;
    skip_nested_handling_2:;
    tmp_outline_return_value_2 = locals_ModeWithInitializationVector_31;
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_5:;
    Py_DECREF( locals_ModeWithInitializationVector_31 );
    locals_ModeWithInitializationVector_31 = NULL;
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

    Py_DECREF( locals_ModeWithInitializationVector_31 );
    locals_ModeWithInitializationVector_31 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 31;
    goto try_except_handler_4;
    outline_result_2:;
    tmp_assign_source_15 = tmp_outline_return_value_2;
    assert( tmp_class_creation_2__class_dict == NULL );
    tmp_class_creation_2__class_dict = tmp_assign_source_15;

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
    tmp_assign_source_16 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_4;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_16 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_16 );
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_16;

    tmp_called_name_4 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_args_element_name_9 = const_str_plain_ModeWithInitializationVector;
    tmp_args_element_name_10 = const_tuple_type_object_tuple;
    tmp_args_element_name_11 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_args_element_name_11 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 31;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_4;
    }
    assert( tmp_class_creation_2__class == NULL );
    tmp_class_creation_2__class = tmp_assign_source_17;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_six );

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

        exception_lineno = 30;

        goto try_except_handler_4;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_add_metaclass );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_4;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 30;

        goto try_except_handler_4;
    }

    tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 30;

        goto try_except_handler_4;
    }
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 30;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_called_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_4;
    }
    tmp_args_element_name_13 = tmp_class_creation_2__class;

    CHECK_OBJECT( tmp_args_element_name_13 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 30;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_class_creation_2__class;
        assert( old != NULL );
        tmp_class_creation_2__class = tmp_assign_source_18;
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
    tmp_assign_source_19 = tmp_class_creation_2__class;

    CHECK_OBJECT( tmp_assign_source_19 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_ModeWithInitializationVector, tmp_assign_source_19 );
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
    locals_ModeWithTweak_40 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_dad71bd336cb898ea2767fe5d1d92e3c;
    tmp_res = PyDict_SetItem( locals_ModeWithTweak_40, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a49041a950b6e51d2ab37f9a836f4c7f_4, codeobj_a49041a950b6e51d2ab37f9a836f4c7f, module_cryptography$hazmat$primitives$ciphers$modes, 0 );
    frame_a49041a950b6e51d2ab37f9a836f4c7f_4 = cache_frame_a49041a950b6e51d2ab37f9a836f4c7f_4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a49041a950b6e51d2ab37f9a836f4c7f_4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a49041a950b6e51d2ab37f9a836f4c7f_4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 41;

        goto frame_exception_exit_4;
    }

    tmp_args_element_name_14 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_4_tweak(  );
    frame_a49041a950b6e51d2ab37f9a836f4c7f_4->m_frame.f_lineno = 41;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_14 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto frame_exception_exit_4;
    }
    tmp_res = PyDict_SetItem( locals_ModeWithTweak_40, const_str_plain_tweak, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto frame_exception_exit_4;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a49041a950b6e51d2ab37f9a836f4c7f_4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_exception_exit_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a49041a950b6e51d2ab37f9a836f4c7f_4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a49041a950b6e51d2ab37f9a836f4c7f_4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a49041a950b6e51d2ab37f9a836f4c7f_4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a49041a950b6e51d2ab37f9a836f4c7f_4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a49041a950b6e51d2ab37f9a836f4c7f_4,
        type_description_2
    );


    // Release cached frame.
    if ( frame_a49041a950b6e51d2ab37f9a836f4c7f_4 == cache_frame_a49041a950b6e51d2ab37f9a836f4c7f_4 )
    {
        Py_DECREF( frame_a49041a950b6e51d2ab37f9a836f4c7f_4 );
    }
    cache_frame_a49041a950b6e51d2ab37f9a836f4c7f_4 = NULL;

    assertFrameObject( frame_a49041a950b6e51d2ab37f9a836f4c7f_4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_3;

    frame_no_exception_3:;

    goto skip_nested_handling_3;
    nested_frame_exit_3:;

    goto try_except_handler_7;
    skip_nested_handling_3:;
    tmp_outline_return_value_3 = locals_ModeWithTweak_40;
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_7;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_7:;
    Py_DECREF( locals_ModeWithTweak_40 );
    locals_ModeWithTweak_40 = NULL;
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

    Py_DECREF( locals_ModeWithTweak_40 );
    locals_ModeWithTweak_40 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto outline_exception_3;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 40;
    goto try_except_handler_6;
    outline_result_3:;
    tmp_assign_source_20 = tmp_outline_return_value_3;
    assert( tmp_class_creation_3__class_dict == NULL );
    tmp_class_creation_3__class_dict = tmp_assign_source_20;

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
    tmp_assign_source_21 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_6;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_21 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_21 );
    condexpr_end_3:;
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_21;

    tmp_called_name_7 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_7 );
    tmp_args_element_name_15 = const_str_plain_ModeWithTweak;
    tmp_args_element_name_16 = const_tuple_type_object_tuple;
    tmp_args_element_name_17 = tmp_class_creation_3__class_dict;

    CHECK_OBJECT( tmp_args_element_name_17 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 40;
    {
        PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17 };
        tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
    }

    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_6;
    }
    assert( tmp_class_creation_3__class == NULL );
    tmp_class_creation_3__class = tmp_assign_source_22;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_six );

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

        exception_lineno = 39;

        goto try_except_handler_6;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_add_metaclass );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;

        goto try_except_handler_6;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 39;

        goto try_except_handler_6;
    }

    tmp_args_element_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 39;

        goto try_except_handler_6;
    }
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 39;
    {
        PyObject *call_args[] = { tmp_args_element_name_18 };
        tmp_called_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_18 );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;

        goto try_except_handler_6;
    }
    tmp_args_element_name_19 = tmp_class_creation_3__class;

    CHECK_OBJECT( tmp_args_element_name_19 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 39;
    {
        PyObject *call_args[] = { tmp_args_element_name_19 };
        tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;

        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_class_creation_3__class;
        assert( old != NULL );
        tmp_class_creation_3__class = tmp_assign_source_23;
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
    tmp_assign_source_24 = tmp_class_creation_3__class;

    CHECK_OBJECT( tmp_assign_source_24 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_ModeWithTweak, tmp_assign_source_24 );
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
    locals_ModeWithNonce_49 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_dad71bd336cb898ea2767fe5d1d92e3c;
    tmp_res = PyDict_SetItem( locals_ModeWithNonce_49, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8ce8c9388050dbbd785922ffcaa48e05_5, codeobj_8ce8c9388050dbbd785922ffcaa48e05, module_cryptography$hazmat$primitives$ciphers$modes, 0 );
    frame_8ce8c9388050dbbd785922ffcaa48e05_5 = cache_frame_8ce8c9388050dbbd785922ffcaa48e05_5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8ce8c9388050dbbd785922ffcaa48e05_5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8ce8c9388050dbbd785922ffcaa48e05_5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 50;

        goto frame_exception_exit_5;
    }

    tmp_args_element_name_20 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_5_nonce(  );
    frame_8ce8c9388050dbbd785922ffcaa48e05_5->m_frame.f_lineno = 50;
    {
        PyObject *call_args[] = { tmp_args_element_name_20 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_20 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto frame_exception_exit_5;
    }
    tmp_res = PyDict_SetItem( locals_ModeWithNonce_49, const_str_plain_nonce, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto frame_exception_exit_5;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8ce8c9388050dbbd785922ffcaa48e05_5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;

    frame_exception_exit_5:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8ce8c9388050dbbd785922ffcaa48e05_5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8ce8c9388050dbbd785922ffcaa48e05_5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8ce8c9388050dbbd785922ffcaa48e05_5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8ce8c9388050dbbd785922ffcaa48e05_5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8ce8c9388050dbbd785922ffcaa48e05_5,
        type_description_2
    );


    // Release cached frame.
    if ( frame_8ce8c9388050dbbd785922ffcaa48e05_5 == cache_frame_8ce8c9388050dbbd785922ffcaa48e05_5 )
    {
        Py_DECREF( frame_8ce8c9388050dbbd785922ffcaa48e05_5 );
    }
    cache_frame_8ce8c9388050dbbd785922ffcaa48e05_5 = NULL;

    assertFrameObject( frame_8ce8c9388050dbbd785922ffcaa48e05_5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_4;

    frame_no_exception_4:;

    goto skip_nested_handling_4;
    nested_frame_exit_4:;

    goto try_except_handler_9;
    skip_nested_handling_4:;
    tmp_outline_return_value_4 = locals_ModeWithNonce_49;
    Py_INCREF( tmp_outline_return_value_4 );
    goto try_return_handler_9;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_9:;
    Py_DECREF( locals_ModeWithNonce_49 );
    locals_ModeWithNonce_49 = NULL;
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

    Py_DECREF( locals_ModeWithNonce_49 );
    locals_ModeWithNonce_49 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto outline_exception_4;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_4:;
    exception_lineno = 49;
    goto try_except_handler_8;
    outline_result_4:;
    tmp_assign_source_25 = tmp_outline_return_value_4;
    assert( tmp_class_creation_4__class_dict == NULL );
    tmp_class_creation_4__class_dict = tmp_assign_source_25;

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
    tmp_assign_source_26 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto try_except_handler_8;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_assign_source_26 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_26 );
    condexpr_end_4:;
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_26;

    tmp_called_name_10 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_called_name_10 );
    tmp_args_element_name_21 = const_str_plain_ModeWithNonce;
    tmp_args_element_name_22 = const_tuple_type_object_tuple;
    tmp_args_element_name_23 = tmp_class_creation_4__class_dict;

    CHECK_OBJECT( tmp_args_element_name_23 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 49;
    {
        PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22, tmp_args_element_name_23 };
        tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, call_args );
    }

    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto try_except_handler_8;
    }
    assert( tmp_class_creation_4__class == NULL );
    tmp_class_creation_4__class = tmp_assign_source_27;

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_six );

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

        exception_lineno = 48;

        goto try_except_handler_8;
    }

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_add_metaclass );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto try_except_handler_8;
    }
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 48;

        goto try_except_handler_8;
    }

    tmp_args_element_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );

        exception_lineno = 48;

        goto try_except_handler_8;
    }
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 48;
    {
        PyObject *call_args[] = { tmp_args_element_name_24 };
        tmp_called_name_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    Py_DECREF( tmp_args_element_name_24 );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto try_except_handler_8;
    }
    tmp_args_element_name_25 = tmp_class_creation_4__class;

    CHECK_OBJECT( tmp_args_element_name_25 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 48;
    {
        PyObject *call_args[] = { tmp_args_element_name_25 };
        tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto try_except_handler_8;
    }
    {
        PyObject *old = tmp_class_creation_4__class;
        assert( old != NULL );
        tmp_class_creation_4__class = tmp_assign_source_28;
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
    tmp_assign_source_29 = tmp_class_creation_4__class;

    CHECK_OBJECT( tmp_assign_source_29 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_ModeWithNonce, tmp_assign_source_29 );
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
    locals_ModeWithAuthenticationTag_58 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_dad71bd336cb898ea2767fe5d1d92e3c;
    tmp_res = PyDict_SetItem( locals_ModeWithAuthenticationTag_58, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fe9ec78069e5595ad7d9cfc116c0d461_6, codeobj_fe9ec78069e5595ad7d9cfc116c0d461, module_cryptography$hazmat$primitives$ciphers$modes, 0 );
    frame_fe9ec78069e5595ad7d9cfc116c0d461_6 = cache_frame_fe9ec78069e5595ad7d9cfc116c0d461_6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fe9ec78069e5595ad7d9cfc116c0d461_6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fe9ec78069e5595ad7d9cfc116c0d461_6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_6 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 59;

        goto frame_exception_exit_6;
    }

    tmp_args_element_name_26 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_6_tag(  );
    frame_fe9ec78069e5595ad7d9cfc116c0d461_6->m_frame.f_lineno = 59;
    {
        PyObject *call_args[] = { tmp_args_element_name_26 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_26 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto frame_exception_exit_6;
    }
    tmp_res = PyDict_SetItem( locals_ModeWithAuthenticationTag_58, const_str_plain_tag, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto frame_exception_exit_6;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fe9ec78069e5595ad7d9cfc116c0d461_6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_5;

    frame_exception_exit_6:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fe9ec78069e5595ad7d9cfc116c0d461_6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fe9ec78069e5595ad7d9cfc116c0d461_6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fe9ec78069e5595ad7d9cfc116c0d461_6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fe9ec78069e5595ad7d9cfc116c0d461_6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fe9ec78069e5595ad7d9cfc116c0d461_6,
        type_description_2
    );


    // Release cached frame.
    if ( frame_fe9ec78069e5595ad7d9cfc116c0d461_6 == cache_frame_fe9ec78069e5595ad7d9cfc116c0d461_6 )
    {
        Py_DECREF( frame_fe9ec78069e5595ad7d9cfc116c0d461_6 );
    }
    cache_frame_fe9ec78069e5595ad7d9cfc116c0d461_6 = NULL;

    assertFrameObject( frame_fe9ec78069e5595ad7d9cfc116c0d461_6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_5;

    frame_no_exception_5:;

    goto skip_nested_handling_5;
    nested_frame_exit_5:;

    goto try_except_handler_11;
    skip_nested_handling_5:;
    tmp_outline_return_value_5 = locals_ModeWithAuthenticationTag_58;
    Py_INCREF( tmp_outline_return_value_5 );
    goto try_return_handler_11;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_11:;
    Py_DECREF( locals_ModeWithAuthenticationTag_58 );
    locals_ModeWithAuthenticationTag_58 = NULL;
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

    Py_DECREF( locals_ModeWithAuthenticationTag_58 );
    locals_ModeWithAuthenticationTag_58 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto outline_exception_5;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_5:;
    exception_lineno = 58;
    goto try_except_handler_10;
    outline_result_5:;
    tmp_assign_source_30 = tmp_outline_return_value_5;
    assert( tmp_class_creation_5__class_dict == NULL );
    tmp_class_creation_5__class_dict = tmp_assign_source_30;

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
    tmp_assign_source_31 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto try_except_handler_10;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_assign_source_31 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_31 );
    condexpr_end_5:;
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_31;

    tmp_called_name_13 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_called_name_13 );
    tmp_args_element_name_27 = const_str_plain_ModeWithAuthenticationTag;
    tmp_args_element_name_28 = const_tuple_type_object_tuple;
    tmp_args_element_name_29 = tmp_class_creation_5__class_dict;

    CHECK_OBJECT( tmp_args_element_name_29 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 58;
    {
        PyObject *call_args[] = { tmp_args_element_name_27, tmp_args_element_name_28, tmp_args_element_name_29 };
        tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_13, call_args );
    }

    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto try_except_handler_10;
    }
    assert( tmp_class_creation_5__class == NULL );
    tmp_class_creation_5__class = tmp_assign_source_32;

    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_six );

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

        exception_lineno = 57;

        goto try_except_handler_10;
    }

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_add_metaclass );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;

        goto try_except_handler_10;
    }
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 57;

        goto try_except_handler_10;
    }

    tmp_args_element_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );

        exception_lineno = 57;

        goto try_except_handler_10;
    }
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 57;
    {
        PyObject *call_args[] = { tmp_args_element_name_30 };
        tmp_called_name_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_args_element_name_30 );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;

        goto try_except_handler_10;
    }
    tmp_args_element_name_31 = tmp_class_creation_5__class;

    CHECK_OBJECT( tmp_args_element_name_31 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 57;
    {
        PyObject *call_args[] = { tmp_args_element_name_31 };
        tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_called_name_14 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;

        goto try_except_handler_10;
    }
    {
        PyObject *old = tmp_class_creation_5__class;
        assert( old != NULL );
        tmp_class_creation_5__class = tmp_assign_source_33;
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
    tmp_assign_source_34 = tmp_class_creation_5__class;

    CHECK_OBJECT( tmp_assign_source_34 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_ModeWithAuthenticationTag, tmp_assign_source_34 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class );
    Py_DECREF( tmp_class_creation_5__class );
    tmp_class_creation_5__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_dict );
    Py_DECREF( tmp_class_creation_5__class_dict );
    tmp_class_creation_5__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__metaclass );
    Py_DECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    tmp_assign_source_35 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_7__check_aes_key_length(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain__check_aes_key_length, tmp_assign_source_35 );
    tmp_assign_source_36 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_8__check_iv_length(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain__check_iv_length, tmp_assign_source_36 );
    tmp_assign_source_37 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_9__check_iv_and_key_length(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain__check_iv_and_key_length, tmp_assign_source_37 );
    // Tried code:
    tmp_set_locals = PyDict_New();
    locals_CBC_87 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_dad71bd336cb898ea2767fe5d1d92e3c;
    tmp_res = PyDict_SetItem( locals_CBC_87, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_CBC;
    tmp_res = PyDict_SetItem( locals_CBC_87, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_10___init__(  );
    tmp_res = PyDict_SetItem( locals_CBC_87, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a059c3abae0b6acac2c04374c3fc928b_7, codeobj_a059c3abae0b6acac2c04374c3fc928b, module_cryptography$hazmat$primitives$ciphers$modes, 0 );
    frame_a059c3abae0b6acac2c04374c3fc928b_7 = cache_frame_a059c3abae0b6acac2c04374c3fc928b_7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a059c3abae0b6acac2c04374c3fc928b_7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a059c3abae0b6acac2c04374c3fc928b_7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_7 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_called_instance_7 == NULL ))
    {
        tmp_called_instance_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_called_instance_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 94;

        goto frame_exception_exit_7;
    }

    frame_a059c3abae0b6acac2c04374c3fc928b_7->m_frame.f_lineno = 94;
    tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_read_only_property, &PyTuple_GET_ITEM( const_tuple_str_plain__initialization_vector_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;

        goto frame_exception_exit_7;
    }
    tmp_res = PyDict_SetItem( locals_CBC_87, const_str_plain_initialization_vector, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;

        goto frame_exception_exit_7;
    }
    tmp_dictset_value = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain__check_iv_and_key_length );

    if (unlikely( tmp_dictset_value == NULL ))
    {
        tmp_dictset_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__check_iv_and_key_length );
    }

    if ( tmp_dictset_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_check_iv_and_key_length" );
        exception_tb = NULL;

        exception_lineno = 95;

        goto frame_exception_exit_7;
    }

    tmp_res = PyDict_SetItem( locals_CBC_87, const_str_plain_validate_for_algorithm, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;

        goto frame_exception_exit_7;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a059c3abae0b6acac2c04374c3fc928b_7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_6;

    frame_exception_exit_7:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a059c3abae0b6acac2c04374c3fc928b_7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a059c3abae0b6acac2c04374c3fc928b_7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a059c3abae0b6acac2c04374c3fc928b_7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a059c3abae0b6acac2c04374c3fc928b_7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a059c3abae0b6acac2c04374c3fc928b_7,
        type_description_2
    );


    // Release cached frame.
    if ( frame_a059c3abae0b6acac2c04374c3fc928b_7 == cache_frame_a059c3abae0b6acac2c04374c3fc928b_7 )
    {
        Py_DECREF( frame_a059c3abae0b6acac2c04374c3fc928b_7 );
    }
    cache_frame_a059c3abae0b6acac2c04374c3fc928b_7 = NULL;

    assertFrameObject( frame_a059c3abae0b6acac2c04374c3fc928b_7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_6;

    frame_no_exception_6:;

    goto skip_nested_handling_6;
    nested_frame_exit_6:;

    goto try_except_handler_13;
    skip_nested_handling_6:;
    tmp_outline_return_value_6 = locals_CBC_87;
    Py_INCREF( tmp_outline_return_value_6 );
    goto try_return_handler_13;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_13:;
    Py_DECREF( locals_CBC_87 );
    locals_CBC_87 = NULL;
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

    Py_DECREF( locals_CBC_87 );
    locals_CBC_87 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto outline_exception_6;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_6:;
    exception_lineno = 87;
    goto try_except_handler_12;
    outline_result_6:;
    tmp_assign_source_38 = tmp_outline_return_value_6;
    assert( tmp_class_creation_6__class_dict == NULL );
    tmp_class_creation_6__class_dict = tmp_assign_source_38;

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
    tmp_assign_source_39 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;

        goto try_except_handler_12;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_39 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_39 );
    condexpr_end_6:;
    assert( tmp_class_creation_6__metaclass == NULL );
    tmp_class_creation_6__metaclass = tmp_assign_source_39;

    tmp_called_name_16 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_called_name_16 );
    tmp_args_element_name_32 = const_str_plain_CBC;
    tmp_args_element_name_33 = const_tuple_type_object_tuple;
    tmp_args_element_name_34 = tmp_class_creation_6__class_dict;

    CHECK_OBJECT( tmp_args_element_name_34 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 87;
    {
        PyObject *call_args[] = { tmp_args_element_name_32, tmp_args_element_name_33, tmp_args_element_name_34 };
        tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_16, call_args );
    }

    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;

        goto try_except_handler_12;
    }
    assert( tmp_class_creation_6__class == NULL );
    tmp_class_creation_6__class = tmp_assign_source_40;

    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 86;

        goto try_except_handler_12;
    }

    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_register_interface );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;

        goto try_except_handler_12;
    }
    tmp_args_element_name_35 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_ModeWithInitializationVector );

    if (unlikely( tmp_args_element_name_35 == NULL ))
    {
        tmp_args_element_name_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ModeWithInitializationVector );
    }

    if ( tmp_args_element_name_35 == NULL )
    {
        Py_DECREF( tmp_called_name_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ModeWithInitializationVector" );
        exception_tb = NULL;

        exception_lineno = 86;

        goto try_except_handler_12;
    }

    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 86;
    {
        PyObject *call_args[] = { tmp_args_element_name_35 };
        tmp_called_name_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_called_name_18 );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;

        goto try_except_handler_12;
    }
    tmp_args_element_name_36 = tmp_class_creation_6__class;

    CHECK_OBJECT( tmp_args_element_name_36 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 86;
    {
        PyObject *call_args[] = { tmp_args_element_name_36 };
        tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
    }

    Py_DECREF( tmp_called_name_17 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;

        goto try_except_handler_12;
    }
    {
        PyObject *old = tmp_class_creation_6__class;
        assert( old != NULL );
        tmp_class_creation_6__class = tmp_assign_source_41;
        Py_DECREF( old );
    }

    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 85;

        goto try_except_handler_12;
    }

    tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_register_interface );
    if ( tmp_called_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto try_except_handler_12;
    }
    tmp_args_element_name_37 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_Mode );

    if (unlikely( tmp_args_element_name_37 == NULL ))
    {
        tmp_args_element_name_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Mode );
    }

    if ( tmp_args_element_name_37 == NULL )
    {
        Py_DECREF( tmp_called_name_20 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Mode" );
        exception_tb = NULL;

        exception_lineno = 85;

        goto try_except_handler_12;
    }

    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 85;
    {
        PyObject *call_args[] = { tmp_args_element_name_37 };
        tmp_called_name_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
    }

    Py_DECREF( tmp_called_name_20 );
    if ( tmp_called_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto try_except_handler_12;
    }
    tmp_args_element_name_38 = tmp_class_creation_6__class;

    CHECK_OBJECT( tmp_args_element_name_38 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 85;
    {
        PyObject *call_args[] = { tmp_args_element_name_38 };
        tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
    }

    Py_DECREF( tmp_called_name_19 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto try_except_handler_12;
    }
    {
        PyObject *old = tmp_class_creation_6__class;
        assert( old != NULL );
        tmp_class_creation_6__class = tmp_assign_source_42;
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
    tmp_assign_source_43 = tmp_class_creation_6__class;

    CHECK_OBJECT( tmp_assign_source_43 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_CBC, tmp_assign_source_43 );
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
    locals_XTS_100 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_dad71bd336cb898ea2767fe5d1d92e3c;
    tmp_res = PyDict_SetItem( locals_XTS_100, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_XTS;
    tmp_res = PyDict_SetItem( locals_XTS_100, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_11___init__(  );
    tmp_res = PyDict_SetItem( locals_XTS_100, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_52057b80d5aad2260dee2648d54f5a3a_8, codeobj_52057b80d5aad2260dee2648d54f5a3a, module_cryptography$hazmat$primitives$ciphers$modes, 0 );
    frame_52057b80d5aad2260dee2648d54f5a3a_8 = cache_frame_52057b80d5aad2260dee2648d54f5a3a_8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_52057b80d5aad2260dee2648d54f5a3a_8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_52057b80d5aad2260dee2648d54f5a3a_8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_8 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_called_instance_8 == NULL ))
    {
        tmp_called_instance_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_called_instance_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 111;

        goto frame_exception_exit_8;
    }

    frame_52057b80d5aad2260dee2648d54f5a3a_8->m_frame.f_lineno = 111;
    tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_read_only_property, &PyTuple_GET_ITEM( const_tuple_str_plain__tweak_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto frame_exception_exit_8;
    }
    tmp_res = PyDict_SetItem( locals_XTS_100, const_str_plain_tweak, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto frame_exception_exit_8;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_52057b80d5aad2260dee2648d54f5a3a_8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_7;

    frame_exception_exit_8:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_52057b80d5aad2260dee2648d54f5a3a_8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_52057b80d5aad2260dee2648d54f5a3a_8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_52057b80d5aad2260dee2648d54f5a3a_8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_52057b80d5aad2260dee2648d54f5a3a_8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_52057b80d5aad2260dee2648d54f5a3a_8,
        type_description_2
    );


    // Release cached frame.
    if ( frame_52057b80d5aad2260dee2648d54f5a3a_8 == cache_frame_52057b80d5aad2260dee2648d54f5a3a_8 )
    {
        Py_DECREF( frame_52057b80d5aad2260dee2648d54f5a3a_8 );
    }
    cache_frame_52057b80d5aad2260dee2648d54f5a3a_8 = NULL;

    assertFrameObject( frame_52057b80d5aad2260dee2648d54f5a3a_8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_7;

    frame_no_exception_7:;

    goto skip_nested_handling_7;
    nested_frame_exit_7:;

    goto try_except_handler_15;
    skip_nested_handling_7:;
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_12_validate_for_algorithm(  );
    tmp_res = PyDict_SetItem( locals_XTS_100, const_str_plain_validate_for_algorithm, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_outline_return_value_7 = locals_XTS_100;
    Py_INCREF( tmp_outline_return_value_7 );
    goto try_return_handler_15;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_15:;
    Py_DECREF( locals_XTS_100 );
    locals_XTS_100 = NULL;
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

    Py_DECREF( locals_XTS_100 );
    locals_XTS_100 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto outline_exception_7;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_7:;
    exception_lineno = 100;
    goto try_except_handler_14;
    outline_result_7:;
    tmp_assign_source_44 = tmp_outline_return_value_7;
    assert( tmp_class_creation_7__class_dict == NULL );
    tmp_class_creation_7__class_dict = tmp_assign_source_44;

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
    tmp_assign_source_45 = DICT_GET_ITEM( tmp_dict_name_7, tmp_key_name_7 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_14;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_assign_source_45 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_45 );
    condexpr_end_7:;
    assert( tmp_class_creation_7__metaclass == NULL );
    tmp_class_creation_7__metaclass = tmp_assign_source_45;

    tmp_called_name_21 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_called_name_21 );
    tmp_args_element_name_39 = const_str_plain_XTS;
    tmp_args_element_name_40 = const_tuple_type_object_tuple;
    tmp_args_element_name_41 = tmp_class_creation_7__class_dict;

    CHECK_OBJECT( tmp_args_element_name_41 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 100;
    {
        PyObject *call_args[] = { tmp_args_element_name_39, tmp_args_element_name_40, tmp_args_element_name_41 };
        tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_21, call_args );
    }

    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_14;
    }
    assert( tmp_class_creation_7__class == NULL );
    tmp_class_creation_7__class = tmp_assign_source_46;

    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 99;

        goto try_except_handler_14;
    }

    tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_register_interface );
    if ( tmp_called_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;

        goto try_except_handler_14;
    }
    tmp_args_element_name_42 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_ModeWithTweak );

    if (unlikely( tmp_args_element_name_42 == NULL ))
    {
        tmp_args_element_name_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ModeWithTweak );
    }

    if ( tmp_args_element_name_42 == NULL )
    {
        Py_DECREF( tmp_called_name_23 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ModeWithTweak" );
        exception_tb = NULL;

        exception_lineno = 99;

        goto try_except_handler_14;
    }

    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 99;
    {
        PyObject *call_args[] = { tmp_args_element_name_42 };
        tmp_called_name_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
    }

    Py_DECREF( tmp_called_name_23 );
    if ( tmp_called_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;

        goto try_except_handler_14;
    }
    tmp_args_element_name_43 = tmp_class_creation_7__class;

    CHECK_OBJECT( tmp_args_element_name_43 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 99;
    {
        PyObject *call_args[] = { tmp_args_element_name_43 };
        tmp_assign_source_47 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
    }

    Py_DECREF( tmp_called_name_22 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;

        goto try_except_handler_14;
    }
    {
        PyObject *old = tmp_class_creation_7__class;
        assert( old != NULL );
        tmp_class_creation_7__class = tmp_assign_source_47;
        Py_DECREF( old );
    }

    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 98;

        goto try_except_handler_14;
    }

    tmp_called_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_register_interface );
    if ( tmp_called_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;

        goto try_except_handler_14;
    }
    tmp_args_element_name_44 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_Mode );

    if (unlikely( tmp_args_element_name_44 == NULL ))
    {
        tmp_args_element_name_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Mode );
    }

    if ( tmp_args_element_name_44 == NULL )
    {
        Py_DECREF( tmp_called_name_25 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Mode" );
        exception_tb = NULL;

        exception_lineno = 98;

        goto try_except_handler_14;
    }

    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 98;
    {
        PyObject *call_args[] = { tmp_args_element_name_44 };
        tmp_called_name_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, call_args );
    }

    Py_DECREF( tmp_called_name_25 );
    if ( tmp_called_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;

        goto try_except_handler_14;
    }
    tmp_args_element_name_45 = tmp_class_creation_7__class;

    CHECK_OBJECT( tmp_args_element_name_45 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 98;
    {
        PyObject *call_args[] = { tmp_args_element_name_45 };
        tmp_assign_source_48 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, call_args );
    }

    Py_DECREF( tmp_called_name_24 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;

        goto try_except_handler_14;
    }
    {
        PyObject *old = tmp_class_creation_7__class;
        assert( old != NULL );
        tmp_class_creation_7__class = tmp_assign_source_48;
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
    tmp_assign_source_49 = tmp_class_creation_7__class;

    CHECK_OBJECT( tmp_assign_source_49 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_XTS, tmp_assign_source_49 );
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
    locals_ECB_122 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_dad71bd336cb898ea2767fe5d1d92e3c;
    tmp_res = PyDict_SetItem( locals_ECB_122, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_ECB;
    tmp_res = PyDict_SetItem( locals_ECB_122, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6ad4a4d24260ca441c095c8cbeb31960_9, codeobj_6ad4a4d24260ca441c095c8cbeb31960, module_cryptography$hazmat$primitives$ciphers$modes, 0 );
    frame_6ad4a4d24260ca441c095c8cbeb31960_9 = cache_frame_6ad4a4d24260ca441c095c8cbeb31960_9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6ad4a4d24260ca441c095c8cbeb31960_9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6ad4a4d24260ca441c095c8cbeb31960_9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain__check_aes_key_length );

    if (unlikely( tmp_dictset_value == NULL ))
    {
        tmp_dictset_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__check_aes_key_length );
    }

    if ( tmp_dictset_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_check_aes_key_length" );
        exception_tb = NULL;

        exception_lineno = 125;

        goto frame_exception_exit_9;
    }

    tmp_res = PyDict_SetItem( locals_ECB_122, const_str_plain_validate_for_algorithm, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;

        goto frame_exception_exit_9;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6ad4a4d24260ca441c095c8cbeb31960_9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_8;

    frame_exception_exit_9:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6ad4a4d24260ca441c095c8cbeb31960_9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6ad4a4d24260ca441c095c8cbeb31960_9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6ad4a4d24260ca441c095c8cbeb31960_9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6ad4a4d24260ca441c095c8cbeb31960_9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6ad4a4d24260ca441c095c8cbeb31960_9,
        type_description_2
    );


    // Release cached frame.
    if ( frame_6ad4a4d24260ca441c095c8cbeb31960_9 == cache_frame_6ad4a4d24260ca441c095c8cbeb31960_9 )
    {
        Py_DECREF( frame_6ad4a4d24260ca441c095c8cbeb31960_9 );
    }
    cache_frame_6ad4a4d24260ca441c095c8cbeb31960_9 = NULL;

    assertFrameObject( frame_6ad4a4d24260ca441c095c8cbeb31960_9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_8;

    frame_no_exception_8:;

    goto skip_nested_handling_8;
    nested_frame_exit_8:;

    goto try_except_handler_17;
    skip_nested_handling_8:;
    tmp_outline_return_value_8 = locals_ECB_122;
    Py_INCREF( tmp_outline_return_value_8 );
    goto try_return_handler_17;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_17:;
    Py_DECREF( locals_ECB_122 );
    locals_ECB_122 = NULL;
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

    Py_DECREF( locals_ECB_122 );
    locals_ECB_122 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto outline_exception_8;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_8:;
    exception_lineno = 122;
    goto try_except_handler_16;
    outline_result_8:;
    tmp_assign_source_50 = tmp_outline_return_value_8;
    assert( tmp_class_creation_8__class_dict == NULL );
    tmp_class_creation_8__class_dict = tmp_assign_source_50;

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
    tmp_assign_source_51 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;

        goto try_except_handler_16;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_assign_source_51 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_51 );
    condexpr_end_8:;
    assert( tmp_class_creation_8__metaclass == NULL );
    tmp_class_creation_8__metaclass = tmp_assign_source_51;

    tmp_called_name_26 = tmp_class_creation_8__metaclass;

    CHECK_OBJECT( tmp_called_name_26 );
    tmp_args_element_name_46 = const_str_plain_ECB;
    tmp_args_element_name_47 = const_tuple_type_object_tuple;
    tmp_args_element_name_48 = tmp_class_creation_8__class_dict;

    CHECK_OBJECT( tmp_args_element_name_48 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 122;
    {
        PyObject *call_args[] = { tmp_args_element_name_46, tmp_args_element_name_47, tmp_args_element_name_48 };
        tmp_assign_source_52 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_26, call_args );
    }

    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;

        goto try_except_handler_16;
    }
    assert( tmp_class_creation_8__class == NULL );
    tmp_class_creation_8__class = tmp_assign_source_52;

    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 121;

        goto try_except_handler_16;
    }

    tmp_called_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_register_interface );
    if ( tmp_called_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;

        goto try_except_handler_16;
    }
    tmp_args_element_name_49 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_Mode );

    if (unlikely( tmp_args_element_name_49 == NULL ))
    {
        tmp_args_element_name_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Mode );
    }

    if ( tmp_args_element_name_49 == NULL )
    {
        Py_DECREF( tmp_called_name_28 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Mode" );
        exception_tb = NULL;

        exception_lineno = 121;

        goto try_except_handler_16;
    }

    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 121;
    {
        PyObject *call_args[] = { tmp_args_element_name_49 };
        tmp_called_name_27 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_28, call_args );
    }

    Py_DECREF( tmp_called_name_28 );
    if ( tmp_called_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;

        goto try_except_handler_16;
    }
    tmp_args_element_name_50 = tmp_class_creation_8__class;

    CHECK_OBJECT( tmp_args_element_name_50 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 121;
    {
        PyObject *call_args[] = { tmp_args_element_name_50 };
        tmp_assign_source_53 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_27, call_args );
    }

    Py_DECREF( tmp_called_name_27 );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;

        goto try_except_handler_16;
    }
    {
        PyObject *old = tmp_class_creation_8__class;
        assert( old != NULL );
        tmp_class_creation_8__class = tmp_assign_source_53;
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
    tmp_assign_source_54 = tmp_class_creation_8__class;

    CHECK_OBJECT( tmp_assign_source_54 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_ECB, tmp_assign_source_54 );
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
    locals_OFB_130 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_dad71bd336cb898ea2767fe5d1d92e3c;
    tmp_res = PyDict_SetItem( locals_OFB_130, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_OFB;
    tmp_res = PyDict_SetItem( locals_OFB_130, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_13___init__(  );
    tmp_res = PyDict_SetItem( locals_OFB_130, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1825a3b71080a42ffd2a6864ef85d5ea_10, codeobj_1825a3b71080a42ffd2a6864ef85d5ea, module_cryptography$hazmat$primitives$ciphers$modes, 0 );
    frame_1825a3b71080a42ffd2a6864ef85d5ea_10 = cache_frame_1825a3b71080a42ffd2a6864ef85d5ea_10;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1825a3b71080a42ffd2a6864ef85d5ea_10 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1825a3b71080a42ffd2a6864ef85d5ea_10 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_9 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_called_instance_9 == NULL ))
    {
        tmp_called_instance_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_called_instance_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 137;

        goto frame_exception_exit_10;
    }

    frame_1825a3b71080a42ffd2a6864ef85d5ea_10->m_frame.f_lineno = 137;
    tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_read_only_property, &PyTuple_GET_ITEM( const_tuple_str_plain__initialization_vector_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto frame_exception_exit_10;
    }
    tmp_res = PyDict_SetItem( locals_OFB_130, const_str_plain_initialization_vector, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto frame_exception_exit_10;
    }
    tmp_dictset_value = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain__check_iv_and_key_length );

    if (unlikely( tmp_dictset_value == NULL ))
    {
        tmp_dictset_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__check_iv_and_key_length );
    }

    if ( tmp_dictset_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_check_iv_and_key_length" );
        exception_tb = NULL;

        exception_lineno = 138;

        goto frame_exception_exit_10;
    }

    tmp_res = PyDict_SetItem( locals_OFB_130, const_str_plain_validate_for_algorithm, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;

        goto frame_exception_exit_10;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1825a3b71080a42ffd2a6864ef85d5ea_10 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_9;

    frame_exception_exit_10:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1825a3b71080a42ffd2a6864ef85d5ea_10 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1825a3b71080a42ffd2a6864ef85d5ea_10, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1825a3b71080a42ffd2a6864ef85d5ea_10->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1825a3b71080a42ffd2a6864ef85d5ea_10, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1825a3b71080a42ffd2a6864ef85d5ea_10,
        type_description_2
    );


    // Release cached frame.
    if ( frame_1825a3b71080a42ffd2a6864ef85d5ea_10 == cache_frame_1825a3b71080a42ffd2a6864ef85d5ea_10 )
    {
        Py_DECREF( frame_1825a3b71080a42ffd2a6864ef85d5ea_10 );
    }
    cache_frame_1825a3b71080a42ffd2a6864ef85d5ea_10 = NULL;

    assertFrameObject( frame_1825a3b71080a42ffd2a6864ef85d5ea_10 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_9;

    frame_no_exception_9:;

    goto skip_nested_handling_9;
    nested_frame_exit_9:;

    goto try_except_handler_19;
    skip_nested_handling_9:;
    tmp_outline_return_value_9 = locals_OFB_130;
    Py_INCREF( tmp_outline_return_value_9 );
    goto try_return_handler_19;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_19:;
    Py_DECREF( locals_OFB_130 );
    locals_OFB_130 = NULL;
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

    Py_DECREF( locals_OFB_130 );
    locals_OFB_130 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto outline_exception_9;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_9:;
    exception_lineno = 130;
    goto try_except_handler_18;
    outline_result_9:;
    tmp_assign_source_55 = tmp_outline_return_value_9;
    assert( tmp_class_creation_9__class_dict == NULL );
    tmp_class_creation_9__class_dict = tmp_assign_source_55;

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
    tmp_assign_source_56 = DICT_GET_ITEM( tmp_dict_name_9, tmp_key_name_9 );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;

        goto try_except_handler_18;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_assign_source_56 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_56 );
    condexpr_end_9:;
    assert( tmp_class_creation_9__metaclass == NULL );
    tmp_class_creation_9__metaclass = tmp_assign_source_56;

    tmp_called_name_29 = tmp_class_creation_9__metaclass;

    CHECK_OBJECT( tmp_called_name_29 );
    tmp_args_element_name_51 = const_str_plain_OFB;
    tmp_args_element_name_52 = const_tuple_type_object_tuple;
    tmp_args_element_name_53 = tmp_class_creation_9__class_dict;

    CHECK_OBJECT( tmp_args_element_name_53 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 130;
    {
        PyObject *call_args[] = { tmp_args_element_name_51, tmp_args_element_name_52, tmp_args_element_name_53 };
        tmp_assign_source_57 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_29, call_args );
    }

    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;

        goto try_except_handler_18;
    }
    assert( tmp_class_creation_9__class == NULL );
    tmp_class_creation_9__class = tmp_assign_source_57;

    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 129;

        goto try_except_handler_18;
    }

    tmp_called_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_register_interface );
    if ( tmp_called_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto try_except_handler_18;
    }
    tmp_args_element_name_54 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_ModeWithInitializationVector );

    if (unlikely( tmp_args_element_name_54 == NULL ))
    {
        tmp_args_element_name_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ModeWithInitializationVector );
    }

    if ( tmp_args_element_name_54 == NULL )
    {
        Py_DECREF( tmp_called_name_31 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ModeWithInitializationVector" );
        exception_tb = NULL;

        exception_lineno = 129;

        goto try_except_handler_18;
    }

    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 129;
    {
        PyObject *call_args[] = { tmp_args_element_name_54 };
        tmp_called_name_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_31, call_args );
    }

    Py_DECREF( tmp_called_name_31 );
    if ( tmp_called_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto try_except_handler_18;
    }
    tmp_args_element_name_55 = tmp_class_creation_9__class;

    CHECK_OBJECT( tmp_args_element_name_55 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 129;
    {
        PyObject *call_args[] = { tmp_args_element_name_55 };
        tmp_assign_source_58 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_30, call_args );
    }

    Py_DECREF( tmp_called_name_30 );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto try_except_handler_18;
    }
    {
        PyObject *old = tmp_class_creation_9__class;
        assert( old != NULL );
        tmp_class_creation_9__class = tmp_assign_source_58;
        Py_DECREF( old );
    }

    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 128;

        goto try_except_handler_18;
    }

    tmp_called_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_register_interface );
    if ( tmp_called_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;

        goto try_except_handler_18;
    }
    tmp_args_element_name_56 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_Mode );

    if (unlikely( tmp_args_element_name_56 == NULL ))
    {
        tmp_args_element_name_56 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Mode );
    }

    if ( tmp_args_element_name_56 == NULL )
    {
        Py_DECREF( tmp_called_name_33 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Mode" );
        exception_tb = NULL;

        exception_lineno = 128;

        goto try_except_handler_18;
    }

    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 128;
    {
        PyObject *call_args[] = { tmp_args_element_name_56 };
        tmp_called_name_32 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_33, call_args );
    }

    Py_DECREF( tmp_called_name_33 );
    if ( tmp_called_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;

        goto try_except_handler_18;
    }
    tmp_args_element_name_57 = tmp_class_creation_9__class;

    CHECK_OBJECT( tmp_args_element_name_57 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 128;
    {
        PyObject *call_args[] = { tmp_args_element_name_57 };
        tmp_assign_source_59 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_32, call_args );
    }

    Py_DECREF( tmp_called_name_32 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;

        goto try_except_handler_18;
    }
    {
        PyObject *old = tmp_class_creation_9__class;
        assert( old != NULL );
        tmp_class_creation_9__class = tmp_assign_source_59;
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
    tmp_assign_source_60 = tmp_class_creation_9__class;

    CHECK_OBJECT( tmp_assign_source_60 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_OFB, tmp_assign_source_60 );
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
    locals_CFB_143 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_dad71bd336cb898ea2767fe5d1d92e3c;
    tmp_res = PyDict_SetItem( locals_CFB_143, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_CFB;
    tmp_res = PyDict_SetItem( locals_CFB_143, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_14___init__(  );
    tmp_res = PyDict_SetItem( locals_CFB_143, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cbb1cf9767116bb582d6d52c8a8270fa_11, codeobj_cbb1cf9767116bb582d6d52c8a8270fa, module_cryptography$hazmat$primitives$ciphers$modes, 0 );
    frame_cbb1cf9767116bb582d6d52c8a8270fa_11 = cache_frame_cbb1cf9767116bb582d6d52c8a8270fa_11;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cbb1cf9767116bb582d6d52c8a8270fa_11 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cbb1cf9767116bb582d6d52c8a8270fa_11 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_10 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_called_instance_10 == NULL ))
    {
        tmp_called_instance_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_called_instance_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 150;

        goto frame_exception_exit_11;
    }

    frame_cbb1cf9767116bb582d6d52c8a8270fa_11->m_frame.f_lineno = 150;
    tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_read_only_property, &PyTuple_GET_ITEM( const_tuple_str_plain__initialization_vector_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;

        goto frame_exception_exit_11;
    }
    tmp_res = PyDict_SetItem( locals_CFB_143, const_str_plain_initialization_vector, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;

        goto frame_exception_exit_11;
    }
    tmp_dictset_value = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain__check_iv_and_key_length );

    if (unlikely( tmp_dictset_value == NULL ))
    {
        tmp_dictset_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__check_iv_and_key_length );
    }

    if ( tmp_dictset_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_check_iv_and_key_length" );
        exception_tb = NULL;

        exception_lineno = 151;

        goto frame_exception_exit_11;
    }

    tmp_res = PyDict_SetItem( locals_CFB_143, const_str_plain_validate_for_algorithm, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;

        goto frame_exception_exit_11;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cbb1cf9767116bb582d6d52c8a8270fa_11 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_10;

    frame_exception_exit_11:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cbb1cf9767116bb582d6d52c8a8270fa_11 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cbb1cf9767116bb582d6d52c8a8270fa_11, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cbb1cf9767116bb582d6d52c8a8270fa_11->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cbb1cf9767116bb582d6d52c8a8270fa_11, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cbb1cf9767116bb582d6d52c8a8270fa_11,
        type_description_2
    );


    // Release cached frame.
    if ( frame_cbb1cf9767116bb582d6d52c8a8270fa_11 == cache_frame_cbb1cf9767116bb582d6d52c8a8270fa_11 )
    {
        Py_DECREF( frame_cbb1cf9767116bb582d6d52c8a8270fa_11 );
    }
    cache_frame_cbb1cf9767116bb582d6d52c8a8270fa_11 = NULL;

    assertFrameObject( frame_cbb1cf9767116bb582d6d52c8a8270fa_11 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_10;

    frame_no_exception_10:;

    goto skip_nested_handling_10;
    nested_frame_exit_10:;

    goto try_except_handler_21;
    skip_nested_handling_10:;
    tmp_outline_return_value_10 = locals_CFB_143;
    Py_INCREF( tmp_outline_return_value_10 );
    goto try_return_handler_21;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_21:;
    Py_DECREF( locals_CFB_143 );
    locals_CFB_143 = NULL;
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

    Py_DECREF( locals_CFB_143 );
    locals_CFB_143 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto outline_exception_10;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_10:;
    exception_lineno = 143;
    goto try_except_handler_20;
    outline_result_10:;
    tmp_assign_source_61 = tmp_outline_return_value_10;
    assert( tmp_class_creation_10__class_dict == NULL );
    tmp_class_creation_10__class_dict = tmp_assign_source_61;

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
    tmp_assign_source_62 = DICT_GET_ITEM( tmp_dict_name_10, tmp_key_name_10 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;

        goto try_except_handler_20;
    }
    goto condexpr_end_10;
    condexpr_false_10:;
    tmp_assign_source_62 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_62 );
    condexpr_end_10:;
    assert( tmp_class_creation_10__metaclass == NULL );
    tmp_class_creation_10__metaclass = tmp_assign_source_62;

    tmp_called_name_34 = tmp_class_creation_10__metaclass;

    CHECK_OBJECT( tmp_called_name_34 );
    tmp_args_element_name_58 = const_str_plain_CFB;
    tmp_args_element_name_59 = const_tuple_type_object_tuple;
    tmp_args_element_name_60 = tmp_class_creation_10__class_dict;

    CHECK_OBJECT( tmp_args_element_name_60 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 143;
    {
        PyObject *call_args[] = { tmp_args_element_name_58, tmp_args_element_name_59, tmp_args_element_name_60 };
        tmp_assign_source_63 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_34, call_args );
    }

    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;

        goto try_except_handler_20;
    }
    assert( tmp_class_creation_10__class == NULL );
    tmp_class_creation_10__class = tmp_assign_source_63;

    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 142;

        goto try_except_handler_20;
    }

    tmp_called_name_36 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_register_interface );
    if ( tmp_called_name_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;

        goto try_except_handler_20;
    }
    tmp_args_element_name_61 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_ModeWithInitializationVector );

    if (unlikely( tmp_args_element_name_61 == NULL ))
    {
        tmp_args_element_name_61 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ModeWithInitializationVector );
    }

    if ( tmp_args_element_name_61 == NULL )
    {
        Py_DECREF( tmp_called_name_36 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ModeWithInitializationVector" );
        exception_tb = NULL;

        exception_lineno = 142;

        goto try_except_handler_20;
    }

    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 142;
    {
        PyObject *call_args[] = { tmp_args_element_name_61 };
        tmp_called_name_35 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_36, call_args );
    }

    Py_DECREF( tmp_called_name_36 );
    if ( tmp_called_name_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;

        goto try_except_handler_20;
    }
    tmp_args_element_name_62 = tmp_class_creation_10__class;

    CHECK_OBJECT( tmp_args_element_name_62 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 142;
    {
        PyObject *call_args[] = { tmp_args_element_name_62 };
        tmp_assign_source_64 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_35, call_args );
    }

    Py_DECREF( tmp_called_name_35 );
    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;

        goto try_except_handler_20;
    }
    {
        PyObject *old = tmp_class_creation_10__class;
        assert( old != NULL );
        tmp_class_creation_10__class = tmp_assign_source_64;
        Py_DECREF( old );
    }

    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 141;

        goto try_except_handler_20;
    }

    tmp_called_name_38 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_register_interface );
    if ( tmp_called_name_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;

        goto try_except_handler_20;
    }
    tmp_args_element_name_63 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_Mode );

    if (unlikely( tmp_args_element_name_63 == NULL ))
    {
        tmp_args_element_name_63 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Mode );
    }

    if ( tmp_args_element_name_63 == NULL )
    {
        Py_DECREF( tmp_called_name_38 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Mode" );
        exception_tb = NULL;

        exception_lineno = 141;

        goto try_except_handler_20;
    }

    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 141;
    {
        PyObject *call_args[] = { tmp_args_element_name_63 };
        tmp_called_name_37 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_38, call_args );
    }

    Py_DECREF( tmp_called_name_38 );
    if ( tmp_called_name_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;

        goto try_except_handler_20;
    }
    tmp_args_element_name_64 = tmp_class_creation_10__class;

    CHECK_OBJECT( tmp_args_element_name_64 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 141;
    {
        PyObject *call_args[] = { tmp_args_element_name_64 };
        tmp_assign_source_65 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_37, call_args );
    }

    Py_DECREF( tmp_called_name_37 );
    if ( tmp_assign_source_65 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;

        goto try_except_handler_20;
    }
    {
        PyObject *old = tmp_class_creation_10__class;
        assert( old != NULL );
        tmp_class_creation_10__class = tmp_assign_source_65;
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
    tmp_assign_source_66 = tmp_class_creation_10__class;

    CHECK_OBJECT( tmp_assign_source_66 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_CFB, tmp_assign_source_66 );
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
    locals_CFB8_156 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_dad71bd336cb898ea2767fe5d1d92e3c;
    tmp_res = PyDict_SetItem( locals_CFB8_156, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_CFB8;
    tmp_res = PyDict_SetItem( locals_CFB8_156, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_15___init__(  );
    tmp_res = PyDict_SetItem( locals_CFB8_156, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bbee94e0ed2616c6fbee83dc57df0f75_12, codeobj_bbee94e0ed2616c6fbee83dc57df0f75, module_cryptography$hazmat$primitives$ciphers$modes, 0 );
    frame_bbee94e0ed2616c6fbee83dc57df0f75_12 = cache_frame_bbee94e0ed2616c6fbee83dc57df0f75_12;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bbee94e0ed2616c6fbee83dc57df0f75_12 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bbee94e0ed2616c6fbee83dc57df0f75_12 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_11 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_called_instance_11 == NULL ))
    {
        tmp_called_instance_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_called_instance_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 163;

        goto frame_exception_exit_12;
    }

    frame_bbee94e0ed2616c6fbee83dc57df0f75_12->m_frame.f_lineno = 163;
    tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_read_only_property, &PyTuple_GET_ITEM( const_tuple_str_plain__initialization_vector_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;

        goto frame_exception_exit_12;
    }
    tmp_res = PyDict_SetItem( locals_CFB8_156, const_str_plain_initialization_vector, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;

        goto frame_exception_exit_12;
    }
    tmp_dictset_value = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain__check_iv_and_key_length );

    if (unlikely( tmp_dictset_value == NULL ))
    {
        tmp_dictset_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__check_iv_and_key_length );
    }

    if ( tmp_dictset_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_check_iv_and_key_length" );
        exception_tb = NULL;

        exception_lineno = 164;

        goto frame_exception_exit_12;
    }

    tmp_res = PyDict_SetItem( locals_CFB8_156, const_str_plain_validate_for_algorithm, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;

        goto frame_exception_exit_12;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bbee94e0ed2616c6fbee83dc57df0f75_12 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_11;

    frame_exception_exit_12:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bbee94e0ed2616c6fbee83dc57df0f75_12 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bbee94e0ed2616c6fbee83dc57df0f75_12, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bbee94e0ed2616c6fbee83dc57df0f75_12->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bbee94e0ed2616c6fbee83dc57df0f75_12, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bbee94e0ed2616c6fbee83dc57df0f75_12,
        type_description_2
    );


    // Release cached frame.
    if ( frame_bbee94e0ed2616c6fbee83dc57df0f75_12 == cache_frame_bbee94e0ed2616c6fbee83dc57df0f75_12 )
    {
        Py_DECREF( frame_bbee94e0ed2616c6fbee83dc57df0f75_12 );
    }
    cache_frame_bbee94e0ed2616c6fbee83dc57df0f75_12 = NULL;

    assertFrameObject( frame_bbee94e0ed2616c6fbee83dc57df0f75_12 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_11;

    frame_no_exception_11:;

    goto skip_nested_handling_11;
    nested_frame_exit_11:;

    goto try_except_handler_23;
    skip_nested_handling_11:;
    tmp_outline_return_value_11 = locals_CFB8_156;
    Py_INCREF( tmp_outline_return_value_11 );
    goto try_return_handler_23;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_23:;
    Py_DECREF( locals_CFB8_156 );
    locals_CFB8_156 = NULL;
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

    Py_DECREF( locals_CFB8_156 );
    locals_CFB8_156 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto outline_exception_11;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_11:;
    exception_lineno = 156;
    goto try_except_handler_22;
    outline_result_11:;
    tmp_assign_source_67 = tmp_outline_return_value_11;
    assert( tmp_class_creation_11__class_dict == NULL );
    tmp_class_creation_11__class_dict = tmp_assign_source_67;

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
    tmp_assign_source_68 = DICT_GET_ITEM( tmp_dict_name_11, tmp_key_name_11 );
    if ( tmp_assign_source_68 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;

        goto try_except_handler_22;
    }
    goto condexpr_end_11;
    condexpr_false_11:;
    tmp_assign_source_68 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_68 );
    condexpr_end_11:;
    assert( tmp_class_creation_11__metaclass == NULL );
    tmp_class_creation_11__metaclass = tmp_assign_source_68;

    tmp_called_name_39 = tmp_class_creation_11__metaclass;

    CHECK_OBJECT( tmp_called_name_39 );
    tmp_args_element_name_65 = const_str_plain_CFB8;
    tmp_args_element_name_66 = const_tuple_type_object_tuple;
    tmp_args_element_name_67 = tmp_class_creation_11__class_dict;

    CHECK_OBJECT( tmp_args_element_name_67 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 156;
    {
        PyObject *call_args[] = { tmp_args_element_name_65, tmp_args_element_name_66, tmp_args_element_name_67 };
        tmp_assign_source_69 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_39, call_args );
    }

    if ( tmp_assign_source_69 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;

        goto try_except_handler_22;
    }
    assert( tmp_class_creation_11__class == NULL );
    tmp_class_creation_11__class = tmp_assign_source_69;

    tmp_source_name_20 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_20 == NULL ))
    {
        tmp_source_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 155;

        goto try_except_handler_22;
    }

    tmp_called_name_41 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_register_interface );
    if ( tmp_called_name_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;

        goto try_except_handler_22;
    }
    tmp_args_element_name_68 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_ModeWithInitializationVector );

    if (unlikely( tmp_args_element_name_68 == NULL ))
    {
        tmp_args_element_name_68 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ModeWithInitializationVector );
    }

    if ( tmp_args_element_name_68 == NULL )
    {
        Py_DECREF( tmp_called_name_41 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ModeWithInitializationVector" );
        exception_tb = NULL;

        exception_lineno = 155;

        goto try_except_handler_22;
    }

    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 155;
    {
        PyObject *call_args[] = { tmp_args_element_name_68 };
        tmp_called_name_40 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_41, call_args );
    }

    Py_DECREF( tmp_called_name_41 );
    if ( tmp_called_name_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;

        goto try_except_handler_22;
    }
    tmp_args_element_name_69 = tmp_class_creation_11__class;

    CHECK_OBJECT( tmp_args_element_name_69 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 155;
    {
        PyObject *call_args[] = { tmp_args_element_name_69 };
        tmp_assign_source_70 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_40, call_args );
    }

    Py_DECREF( tmp_called_name_40 );
    if ( tmp_assign_source_70 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;

        goto try_except_handler_22;
    }
    {
        PyObject *old = tmp_class_creation_11__class;
        assert( old != NULL );
        tmp_class_creation_11__class = tmp_assign_source_70;
        Py_DECREF( old );
    }

    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 154;

        goto try_except_handler_22;
    }

    tmp_called_name_43 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_register_interface );
    if ( tmp_called_name_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;

        goto try_except_handler_22;
    }
    tmp_args_element_name_70 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_Mode );

    if (unlikely( tmp_args_element_name_70 == NULL ))
    {
        tmp_args_element_name_70 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Mode );
    }

    if ( tmp_args_element_name_70 == NULL )
    {
        Py_DECREF( tmp_called_name_43 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Mode" );
        exception_tb = NULL;

        exception_lineno = 154;

        goto try_except_handler_22;
    }

    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 154;
    {
        PyObject *call_args[] = { tmp_args_element_name_70 };
        tmp_called_name_42 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_43, call_args );
    }

    Py_DECREF( tmp_called_name_43 );
    if ( tmp_called_name_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;

        goto try_except_handler_22;
    }
    tmp_args_element_name_71 = tmp_class_creation_11__class;

    CHECK_OBJECT( tmp_args_element_name_71 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 154;
    {
        PyObject *call_args[] = { tmp_args_element_name_71 };
        tmp_assign_source_71 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_42, call_args );
    }

    Py_DECREF( tmp_called_name_42 );
    if ( tmp_assign_source_71 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;

        goto try_except_handler_22;
    }
    {
        PyObject *old = tmp_class_creation_11__class;
        assert( old != NULL );
        tmp_class_creation_11__class = tmp_assign_source_71;
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
    tmp_assign_source_72 = tmp_class_creation_11__class;

    CHECK_OBJECT( tmp_assign_source_72 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_CFB8, tmp_assign_source_72 );
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
    locals_CTR_169 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_dad71bd336cb898ea2767fe5d1d92e3c;
    tmp_res = PyDict_SetItem( locals_CTR_169, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_CTR;
    tmp_res = PyDict_SetItem( locals_CTR_169, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_16___init__(  );
    tmp_res = PyDict_SetItem( locals_CTR_169, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a9309ea2a37d5b860d93d6cc8d5ee2b2_13, codeobj_a9309ea2a37d5b860d93d6cc8d5ee2b2, module_cryptography$hazmat$primitives$ciphers$modes, 0 );
    frame_a9309ea2a37d5b860d93d6cc8d5ee2b2_13 = cache_frame_a9309ea2a37d5b860d93d6cc8d5ee2b2_13;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a9309ea2a37d5b860d93d6cc8d5ee2b2_13 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a9309ea2a37d5b860d93d6cc8d5ee2b2_13 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_12 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_called_instance_12 == NULL ))
    {
        tmp_called_instance_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_called_instance_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 176;

        goto frame_exception_exit_13;
    }

    frame_a9309ea2a37d5b860d93d6cc8d5ee2b2_13->m_frame.f_lineno = 176;
    tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_12, const_str_plain_read_only_property, &PyTuple_GET_ITEM( const_tuple_str_plain__nonce_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;

        goto frame_exception_exit_13;
    }
    tmp_res = PyDict_SetItem( locals_CTR_169, const_str_plain_nonce, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;

        goto frame_exception_exit_13;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a9309ea2a37d5b860d93d6cc8d5ee2b2_13 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_12;

    frame_exception_exit_13:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a9309ea2a37d5b860d93d6cc8d5ee2b2_13 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a9309ea2a37d5b860d93d6cc8d5ee2b2_13, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a9309ea2a37d5b860d93d6cc8d5ee2b2_13->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a9309ea2a37d5b860d93d6cc8d5ee2b2_13, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a9309ea2a37d5b860d93d6cc8d5ee2b2_13,
        type_description_2
    );


    // Release cached frame.
    if ( frame_a9309ea2a37d5b860d93d6cc8d5ee2b2_13 == cache_frame_a9309ea2a37d5b860d93d6cc8d5ee2b2_13 )
    {
        Py_DECREF( frame_a9309ea2a37d5b860d93d6cc8d5ee2b2_13 );
    }
    cache_frame_a9309ea2a37d5b860d93d6cc8d5ee2b2_13 = NULL;

    assertFrameObject( frame_a9309ea2a37d5b860d93d6cc8d5ee2b2_13 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_12;

    frame_no_exception_12:;

    goto skip_nested_handling_12;
    nested_frame_exit_12:;

    goto try_except_handler_25;
    skip_nested_handling_12:;
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_17_validate_for_algorithm(  );
    tmp_res = PyDict_SetItem( locals_CTR_169, const_str_plain_validate_for_algorithm, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_outline_return_value_12 = locals_CTR_169;
    Py_INCREF( tmp_outline_return_value_12 );
    goto try_return_handler_25;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_25:;
    Py_DECREF( locals_CTR_169 );
    locals_CTR_169 = NULL;
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

    Py_DECREF( locals_CTR_169 );
    locals_CTR_169 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto outline_exception_12;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_12:;
    exception_lineno = 169;
    goto try_except_handler_24;
    outline_result_12:;
    tmp_assign_source_73 = tmp_outline_return_value_12;
    assert( tmp_class_creation_12__class_dict == NULL );
    tmp_class_creation_12__class_dict = tmp_assign_source_73;

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
    tmp_assign_source_74 = DICT_GET_ITEM( tmp_dict_name_12, tmp_key_name_12 );
    if ( tmp_assign_source_74 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;

        goto try_except_handler_24;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_assign_source_74 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_74 );
    condexpr_end_12:;
    assert( tmp_class_creation_12__metaclass == NULL );
    tmp_class_creation_12__metaclass = tmp_assign_source_74;

    tmp_called_name_44 = tmp_class_creation_12__metaclass;

    CHECK_OBJECT( tmp_called_name_44 );
    tmp_args_element_name_72 = const_str_plain_CTR;
    tmp_args_element_name_73 = const_tuple_type_object_tuple;
    tmp_args_element_name_74 = tmp_class_creation_12__class_dict;

    CHECK_OBJECT( tmp_args_element_name_74 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 169;
    {
        PyObject *call_args[] = { tmp_args_element_name_72, tmp_args_element_name_73, tmp_args_element_name_74 };
        tmp_assign_source_75 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_44, call_args );
    }

    if ( tmp_assign_source_75 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;

        goto try_except_handler_24;
    }
    assert( tmp_class_creation_12__class == NULL );
    tmp_class_creation_12__class = tmp_assign_source_75;

    tmp_source_name_22 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_22 == NULL ))
    {
        tmp_source_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 168;

        goto try_except_handler_24;
    }

    tmp_called_name_46 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_register_interface );
    if ( tmp_called_name_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;

        goto try_except_handler_24;
    }
    tmp_args_element_name_75 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_ModeWithNonce );

    if (unlikely( tmp_args_element_name_75 == NULL ))
    {
        tmp_args_element_name_75 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ModeWithNonce );
    }

    if ( tmp_args_element_name_75 == NULL )
    {
        Py_DECREF( tmp_called_name_46 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ModeWithNonce" );
        exception_tb = NULL;

        exception_lineno = 168;

        goto try_except_handler_24;
    }

    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 168;
    {
        PyObject *call_args[] = { tmp_args_element_name_75 };
        tmp_called_name_45 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_46, call_args );
    }

    Py_DECREF( tmp_called_name_46 );
    if ( tmp_called_name_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;

        goto try_except_handler_24;
    }
    tmp_args_element_name_76 = tmp_class_creation_12__class;

    CHECK_OBJECT( tmp_args_element_name_76 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 168;
    {
        PyObject *call_args[] = { tmp_args_element_name_76 };
        tmp_assign_source_76 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_45, call_args );
    }

    Py_DECREF( tmp_called_name_45 );
    if ( tmp_assign_source_76 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;

        goto try_except_handler_24;
    }
    {
        PyObject *old = tmp_class_creation_12__class;
        assert( old != NULL );
        tmp_class_creation_12__class = tmp_assign_source_76;
        Py_DECREF( old );
    }

    tmp_source_name_23 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_23 == NULL ))
    {
        tmp_source_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 167;

        goto try_except_handler_24;
    }

    tmp_called_name_48 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_register_interface );
    if ( tmp_called_name_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;

        goto try_except_handler_24;
    }
    tmp_args_element_name_77 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_Mode );

    if (unlikely( tmp_args_element_name_77 == NULL ))
    {
        tmp_args_element_name_77 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Mode );
    }

    if ( tmp_args_element_name_77 == NULL )
    {
        Py_DECREF( tmp_called_name_48 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Mode" );
        exception_tb = NULL;

        exception_lineno = 167;

        goto try_except_handler_24;
    }

    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 167;
    {
        PyObject *call_args[] = { tmp_args_element_name_77 };
        tmp_called_name_47 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_48, call_args );
    }

    Py_DECREF( tmp_called_name_48 );
    if ( tmp_called_name_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;

        goto try_except_handler_24;
    }
    tmp_args_element_name_78 = tmp_class_creation_12__class;

    CHECK_OBJECT( tmp_args_element_name_78 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 167;
    {
        PyObject *call_args[] = { tmp_args_element_name_78 };
        tmp_assign_source_77 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_47, call_args );
    }

    Py_DECREF( tmp_called_name_47 );
    if ( tmp_assign_source_77 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;

        goto try_except_handler_24;
    }
    {
        PyObject *old = tmp_class_creation_12__class;
        assert( old != NULL );
        tmp_class_creation_12__class = tmp_assign_source_77;
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
    tmp_assign_source_78 = tmp_class_creation_12__class;

    CHECK_OBJECT( tmp_assign_source_78 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_CTR, tmp_assign_source_78 );
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
    locals_GCM_189 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_dad71bd336cb898ea2767fe5d1d92e3c;
    tmp_res = PyDict_SetItem( locals_GCM_189, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_GCM;
    tmp_res = PyDict_SetItem( locals_GCM_189, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_68719476704;
    tmp_res = PyDict_SetItem( locals_GCM_189, const_str_plain__MAX_ENCRYPTED_BYTES, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_long_pos_2305843009213693952;
    tmp_res = PyDict_SetItem( locals_GCM_189, const_str_plain__MAX_AAD_BYTES, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_defaults_1 = const_tuple_none_int_pos_16_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_18___init__( tmp_defaults_1 );
    tmp_res = PyDict_SetItem( locals_GCM_189, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e7b7d24f4941560b43cf898a64497051_14, codeobj_e7b7d24f4941560b43cf898a64497051, module_cryptography$hazmat$primitives$ciphers$modes, 0 );
    frame_e7b7d24f4941560b43cf898a64497051_14 = cache_frame_e7b7d24f4941560b43cf898a64497051_14;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e7b7d24f4941560b43cf898a64497051_14 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e7b7d24f4941560b43cf898a64497051_14 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_13 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_called_instance_13 == NULL ))
    {
        tmp_called_instance_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_called_instance_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 214;

        goto frame_exception_exit_14;
    }

    frame_e7b7d24f4941560b43cf898a64497051_14->m_frame.f_lineno = 214;
    tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_13, const_str_plain_read_only_property, &PyTuple_GET_ITEM( const_tuple_str_plain__tag_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;

        goto frame_exception_exit_14;
    }
    tmp_res = PyDict_SetItem( locals_GCM_189, const_str_plain_tag, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;

        goto frame_exception_exit_14;
    }
    tmp_called_instance_14 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_called_instance_14 == NULL ))
    {
        tmp_called_instance_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_called_instance_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 215;

        goto frame_exception_exit_14;
    }

    frame_e7b7d24f4941560b43cf898a64497051_14->m_frame.f_lineno = 215;
    tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_14, const_str_plain_read_only_property, &PyTuple_GET_ITEM( const_tuple_str_plain__initialization_vector_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;

        goto frame_exception_exit_14;
    }
    tmp_res = PyDict_SetItem( locals_GCM_189, const_str_plain_initialization_vector, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;

        goto frame_exception_exit_14;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e7b7d24f4941560b43cf898a64497051_14 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_13;

    frame_exception_exit_14:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e7b7d24f4941560b43cf898a64497051_14 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e7b7d24f4941560b43cf898a64497051_14, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e7b7d24f4941560b43cf898a64497051_14->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e7b7d24f4941560b43cf898a64497051_14, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e7b7d24f4941560b43cf898a64497051_14,
        type_description_2
    );


    // Release cached frame.
    if ( frame_e7b7d24f4941560b43cf898a64497051_14 == cache_frame_e7b7d24f4941560b43cf898a64497051_14 )
    {
        Py_DECREF( frame_e7b7d24f4941560b43cf898a64497051_14 );
    }
    cache_frame_e7b7d24f4941560b43cf898a64497051_14 = NULL;

    assertFrameObject( frame_e7b7d24f4941560b43cf898a64497051_14 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_13;

    frame_no_exception_13:;

    goto skip_nested_handling_13;
    nested_frame_exit_13:;

    goto try_except_handler_27;
    skip_nested_handling_13:;
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$modes$$$function_19_validate_for_algorithm(  );
    tmp_res = PyDict_SetItem( locals_GCM_189, const_str_plain_validate_for_algorithm, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_outline_return_value_13 = locals_GCM_189;
    Py_INCREF( tmp_outline_return_value_13 );
    goto try_return_handler_27;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_27:;
    Py_DECREF( locals_GCM_189 );
    locals_GCM_189 = NULL;
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

    Py_DECREF( locals_GCM_189 );
    locals_GCM_189 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto outline_exception_13;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$modes );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_13:;
    exception_lineno = 189;
    goto try_except_handler_26;
    outline_result_13:;
    tmp_assign_source_79 = tmp_outline_return_value_13;
    assert( tmp_class_creation_13__class_dict == NULL );
    tmp_class_creation_13__class_dict = tmp_assign_source_79;

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
    tmp_assign_source_80 = DICT_GET_ITEM( tmp_dict_name_13, tmp_key_name_13 );
    if ( tmp_assign_source_80 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;

        goto try_except_handler_26;
    }
    goto condexpr_end_13;
    condexpr_false_13:;
    tmp_assign_source_80 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_80 );
    condexpr_end_13:;
    assert( tmp_class_creation_13__metaclass == NULL );
    tmp_class_creation_13__metaclass = tmp_assign_source_80;

    tmp_called_name_49 = tmp_class_creation_13__metaclass;

    CHECK_OBJECT( tmp_called_name_49 );
    tmp_args_element_name_79 = const_str_plain_GCM;
    tmp_args_element_name_80 = const_tuple_type_object_tuple;
    tmp_args_element_name_81 = tmp_class_creation_13__class_dict;

    CHECK_OBJECT( tmp_args_element_name_81 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 189;
    {
        PyObject *call_args[] = { tmp_args_element_name_79, tmp_args_element_name_80, tmp_args_element_name_81 };
        tmp_assign_source_81 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_49, call_args );
    }

    if ( tmp_assign_source_81 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;

        goto try_except_handler_26;
    }
    assert( tmp_class_creation_13__class == NULL );
    tmp_class_creation_13__class = tmp_assign_source_81;

    tmp_source_name_24 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_24 == NULL ))
    {
        tmp_source_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_24 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 188;

        goto try_except_handler_26;
    }

    tmp_called_name_51 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_register_interface );
    if ( tmp_called_name_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;

        goto try_except_handler_26;
    }
    tmp_args_element_name_82 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_ModeWithAuthenticationTag );

    if (unlikely( tmp_args_element_name_82 == NULL ))
    {
        tmp_args_element_name_82 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ModeWithAuthenticationTag );
    }

    if ( tmp_args_element_name_82 == NULL )
    {
        Py_DECREF( tmp_called_name_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ModeWithAuthenticationTag" );
        exception_tb = NULL;

        exception_lineno = 188;

        goto try_except_handler_26;
    }

    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 188;
    {
        PyObject *call_args[] = { tmp_args_element_name_82 };
        tmp_called_name_50 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_51, call_args );
    }

    Py_DECREF( tmp_called_name_51 );
    if ( tmp_called_name_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;

        goto try_except_handler_26;
    }
    tmp_args_element_name_83 = tmp_class_creation_13__class;

    CHECK_OBJECT( tmp_args_element_name_83 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 188;
    {
        PyObject *call_args[] = { tmp_args_element_name_83 };
        tmp_assign_source_82 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_50, call_args );
    }

    Py_DECREF( tmp_called_name_50 );
    if ( tmp_assign_source_82 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;

        goto try_except_handler_26;
    }
    {
        PyObject *old = tmp_class_creation_13__class;
        assert( old != NULL );
        tmp_class_creation_13__class = tmp_assign_source_82;
        Py_DECREF( old );
    }

    tmp_source_name_25 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_25 == NULL ))
    {
        tmp_source_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_25 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 187;

        goto try_except_handler_26;
    }

    tmp_called_name_53 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_register_interface );
    if ( tmp_called_name_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;

        goto try_except_handler_26;
    }
    tmp_args_element_name_84 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_ModeWithInitializationVector );

    if (unlikely( tmp_args_element_name_84 == NULL ))
    {
        tmp_args_element_name_84 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ModeWithInitializationVector );
    }

    if ( tmp_args_element_name_84 == NULL )
    {
        Py_DECREF( tmp_called_name_53 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ModeWithInitializationVector" );
        exception_tb = NULL;

        exception_lineno = 187;

        goto try_except_handler_26;
    }

    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 187;
    {
        PyObject *call_args[] = { tmp_args_element_name_84 };
        tmp_called_name_52 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_53, call_args );
    }

    Py_DECREF( tmp_called_name_53 );
    if ( tmp_called_name_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;

        goto try_except_handler_26;
    }
    tmp_args_element_name_85 = tmp_class_creation_13__class;

    CHECK_OBJECT( tmp_args_element_name_85 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 187;
    {
        PyObject *call_args[] = { tmp_args_element_name_85 };
        tmp_assign_source_83 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_52, call_args );
    }

    Py_DECREF( tmp_called_name_52 );
    if ( tmp_assign_source_83 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;

        goto try_except_handler_26;
    }
    {
        PyObject *old = tmp_class_creation_13__class;
        assert( old != NULL );
        tmp_class_creation_13__class = tmp_assign_source_83;
        Py_DECREF( old );
    }

    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_26 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 186;

        goto try_except_handler_26;
    }

    tmp_called_name_55 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_register_interface );
    if ( tmp_called_name_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;

        goto try_except_handler_26;
    }
    tmp_args_element_name_86 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_Mode );

    if (unlikely( tmp_args_element_name_86 == NULL ))
    {
        tmp_args_element_name_86 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Mode );
    }

    if ( tmp_args_element_name_86 == NULL )
    {
        Py_DECREF( tmp_called_name_55 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Mode" );
        exception_tb = NULL;

        exception_lineno = 186;

        goto try_except_handler_26;
    }

    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 186;
    {
        PyObject *call_args[] = { tmp_args_element_name_86 };
        tmp_called_name_54 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_55, call_args );
    }

    Py_DECREF( tmp_called_name_55 );
    if ( tmp_called_name_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;

        goto try_except_handler_26;
    }
    tmp_args_element_name_87 = tmp_class_creation_13__class;

    CHECK_OBJECT( tmp_args_element_name_87 );
    frame_2e85538c26fbef7043cca59f20affb31->m_frame.f_lineno = 186;
    {
        PyObject *call_args[] = { tmp_args_element_name_87 };
        tmp_assign_source_84 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_54, call_args );
    }

    Py_DECREF( tmp_called_name_54 );
    if ( tmp_assign_source_84 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;

        goto try_except_handler_26;
    }
    {
        PyObject *old = tmp_class_creation_13__class;
        assert( old != NULL );
        tmp_class_creation_13__class = tmp_assign_source_84;
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
    RESTORE_FRAME_EXCEPTION( frame_2e85538c26fbef7043cca59f20affb31 );
#endif
    popFrameStack();

    assertFrameObject( frame_2e85538c26fbef7043cca59f20affb31 );

    goto frame_no_exception_14;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2e85538c26fbef7043cca59f20affb31 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2e85538c26fbef7043cca59f20affb31, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2e85538c26fbef7043cca59f20affb31->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2e85538c26fbef7043cca59f20affb31, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_14:;
    tmp_assign_source_85 = tmp_class_creation_13__class;

    CHECK_OBJECT( tmp_assign_source_85 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$modes, (Nuitka_StringObject *)const_str_plain_GCM, tmp_assign_source_85 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__class );
    Py_DECREF( tmp_class_creation_13__class );
    tmp_class_creation_13__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__class_dict );
    Py_DECREF( tmp_class_creation_13__class_dict );
    tmp_class_creation_13__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__metaclass );
    Py_DECREF( tmp_class_creation_13__metaclass );
    tmp_class_creation_13__metaclass = NULL;


    return MOD_RETURN_VALUE( module_cryptography$hazmat$primitives$ciphers$modes );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
