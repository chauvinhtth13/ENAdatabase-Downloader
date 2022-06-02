/* Generated code for Python source for module 'cryptography.hazmat.primitives.ciphers.algorithms'
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

/* The _module_cryptography$hazmat$primitives$ciphers$algorithms is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$primitives$ciphers$algorithms;
PyDictObject *moduledict_cryptography$hazmat$primitives$ciphers$algorithms;

/* The module constants used, if any. */
extern PyObject *const_tuple_str_plain__nonce_tuple;
static PyObject *const_tuple_str_plain_BlockCipherAlgorithm_str_plain_CipherAlgorithm_tuple;
extern PyObject *const_int_pos_512;
extern PyObject *const_int_pos_104;
static PyObject *const_frozenset_aece287703bf6a0e8bbd4620f66d4fcd;
extern PyObject *const_str_plain_ChaCha20;
extern PyObject *const_dict_empty;
extern PyObject *const_tuple_type_object_tuple;
static PyObject *const_int_pos_72;
static PyObject *const_str_plain_3DES;
static PyObject *const_frozenset_fe00a4f6ab944081e21008a0f74293d2;
extern PyObject *const_str_plain_key;
extern PyObject *const_int_pos_112;
static PyObject *const_str_plain_key_sizes;
extern PyObject *const_str_plain_BlockCipherAlgorithm;
extern PyObject *const_str_plain_self;
extern PyObject *const_int_pos_96;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_str_plain_algorithm_str_plain_key_tuple;
extern PyObject *const_str_plain_algorithm;
extern PyObject *const_int_pos_192;
extern PyObject *const_str_plain_AES;
extern PyObject *const_str_plain_format;
extern PyObject *const_int_pos_64;
extern PyObject *const_str_plain_read_only_property;
extern PyObject *const_int_pos_128;
extern PyObject *const_tuple_str_plain_utils_tuple;
extern PyObject *const_int_pos_80;
static PyObject *const_str_plain_camellia;
static PyObject *const_int_pos_88;
extern PyObject *const_str_plain_TripleDES;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_Blowfish;
extern PyObject *const_int_pos_16;
static PyObject *const_str_digest_789e8123a1ec29236b087e04298663cb;
static PyObject *const_tuple_str_plain_self_str_plain_key_str_plain_nonce_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_8ad4ca1b9bee9c8a9b3508a24b371827;
extern PyObject *const_str_plain_IDEA;
extern PyObject *const_str_plain_CAST5;
extern PyObject *const_str_plain___module__;
extern PyObject *const_int_pos_8;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_tuple_str_plain_ModeWithNonce_tuple;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_utils;
static PyObject *const_frozenset_966142b12d0c43c757208299c957e27b;
extern PyObject *const_int_pos_256;
static PyObject *const_frozenset_d970c1dd3abca9b60e7fe6fefb4a91d1;
extern PyObject *const_tuple_str_plain_self_str_plain_key_tuple;
static PyObject *const_str_digest_e15ea585011e5d8a0cd2a7118ea65863;
static PyObject *const_frozenset_cf609eb9051a7250c9a68e22cef7d49d;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_SEED;
static PyObject *const_str_digest_0e36af67a67936242fbfb4935bc69ee8;
extern PyObject *const_str_plain_ARC4;
extern PyObject *const_int_pos_120;
extern PyObject *const_str_plain_nonce;
static PyObject *const_str_plain_RC4;
extern PyObject *const_str_plain_register_interface;
extern PyObject *const_str_plain_key_size;
static PyObject *const_str_plain__verify_key_size;
extern PyObject *const_str_plain_cryptography;
extern PyObject *const_int_pos_160;
static PyObject *const_frozenset_b37166fd9df1977e2d8b975a0483e7cb;
extern PyObject *const_str_plain_ModeWithNonce;
static PyObject *const_frozenset_1abd2c5dc48294c2b53ccf2b12c895e9;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_block_size;
extern PyObject *const_int_pos_56;
extern PyObject *const_str_digest_87335604a4a83d266089f9a1aef4f588;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_int_0;
extern PyObject *const_str_digest_9af74ab7ec8186e2f6a1218dfc2da4e5;
extern PyObject *const_str_plain_Camellia;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain__nonce;
extern PyObject *const_str_plain__check_byteslike;
extern PyObject *const_str_plain_CipherAlgorithm;
static PyObject *const_frozenset_6fd33e8d75e9cb199acea43a44f90987;
extern PyObject *const_str_digest_dad71bd336cb898ea2767fe5d1d92e3c;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_int_pos_40;
extern PyObject *const_int_pos_48;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_plain_BlockCipherAlgorithm_str_plain_CipherAlgorithm_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_BlockCipherAlgorithm_str_plain_CipherAlgorithm_tuple, 0, const_str_plain_BlockCipherAlgorithm ); Py_INCREF( const_str_plain_BlockCipherAlgorithm );
    PyTuple_SET_ITEM( const_tuple_str_plain_BlockCipherAlgorithm_str_plain_CipherAlgorithm_tuple, 1, const_str_plain_CipherAlgorithm ); Py_INCREF( const_str_plain_CipherAlgorithm );
    const_frozenset_aece287703bf6a0e8bbd4620f66d4fcd = PyFrozenSet_New( NULL );
    PySet_Add( const_frozenset_aece287703bf6a0e8bbd4620f66d4fcd, const_int_pos_256 );
    assert( PySet_Size( const_frozenset_aece287703bf6a0e8bbd4620f66d4fcd ) == 1 );
    const_int_pos_72 = PyInt_FromLong( 72l );
    const_str_plain_3DES = UNSTREAM_STRING( &constant_bin[ 681695 ], 4, 0 );
    const_frozenset_fe00a4f6ab944081e21008a0f74293d2 = PyFrozenSet_New( NULL );
    PySet_Add( const_frozenset_fe00a4f6ab944081e21008a0f74293d2, const_int_pos_64 );
    PySet_Add( const_frozenset_fe00a4f6ab944081e21008a0f74293d2, const_int_pos_80 );
    PySet_Add( const_frozenset_fe00a4f6ab944081e21008a0f74293d2, const_int_pos_40 );
    PySet_Add( const_frozenset_fe00a4f6ab944081e21008a0f74293d2, const_int_pos_96 );
    PySet_Add( const_frozenset_fe00a4f6ab944081e21008a0f74293d2, const_int_pos_128 );
    PySet_Add( const_frozenset_fe00a4f6ab944081e21008a0f74293d2, const_int_pos_112 );
    PySet_Add( const_frozenset_fe00a4f6ab944081e21008a0f74293d2, const_int_pos_48 );
    PySet_Add( const_frozenset_fe00a4f6ab944081e21008a0f74293d2, const_int_pos_72 );
    PySet_Add( const_frozenset_fe00a4f6ab944081e21008a0f74293d2, const_int_pos_120 );
    PySet_Add( const_frozenset_fe00a4f6ab944081e21008a0f74293d2, const_int_pos_56 );
    const_int_pos_88 = PyInt_FromLong( 88l );
    PySet_Add( const_frozenset_fe00a4f6ab944081e21008a0f74293d2, const_int_pos_88 );
    PySet_Add( const_frozenset_fe00a4f6ab944081e21008a0f74293d2, const_int_pos_104 );
    assert( PySet_Size( const_frozenset_fe00a4f6ab944081e21008a0f74293d2 ) == 12 );
    const_str_plain_key_sizes = UNSTREAM_STRING( &constant_bin[ 681699 ], 9, 1 );
    const_tuple_str_plain_algorithm_str_plain_key_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_algorithm_str_plain_key_tuple, 0, const_str_plain_algorithm ); Py_INCREF( const_str_plain_algorithm );
    PyTuple_SET_ITEM( const_tuple_str_plain_algorithm_str_plain_key_tuple, 1, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    const_str_plain_camellia = UNSTREAM_STRING( &constant_bin[ 681708 ], 8, 1 );
    const_str_digest_789e8123a1ec29236b087e04298663cb = UNSTREAM_STRING( &constant_bin[ 681716 ], 33, 0 );
    const_tuple_str_plain_self_str_plain_key_str_plain_nonce_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_key_str_plain_nonce_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_key_str_plain_nonce_tuple, 1, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_key_str_plain_nonce_tuple, 2, const_str_plain_nonce ); Py_INCREF( const_str_plain_nonce );
    const_str_digest_8ad4ca1b9bee9c8a9b3508a24b371827 = UNSTREAM_STRING( &constant_bin[ 681749 ], 52, 0 );
    const_tuple_str_plain_ModeWithNonce_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ModeWithNonce_tuple, 0, const_str_plain_ModeWithNonce ); Py_INCREF( const_str_plain_ModeWithNonce );
    const_frozenset_966142b12d0c43c757208299c957e27b = PyFrozenSet_New( NULL );
    PySet_Add( const_frozenset_966142b12d0c43c757208299c957e27b, const_int_pos_128 );
    PySet_Add( const_frozenset_966142b12d0c43c757208299c957e27b, const_int_pos_192 );
    PySet_Add( const_frozenset_966142b12d0c43c757208299c957e27b, const_int_pos_256 );
    assert( PySet_Size( const_frozenset_966142b12d0c43c757208299c957e27b ) == 3 );
    const_frozenset_d970c1dd3abca9b60e7fe6fefb4a91d1 = PyFrozenSet_New( NULL );
    PySet_Add( const_frozenset_d970c1dd3abca9b60e7fe6fefb4a91d1, const_int_pos_64 );
    PySet_Add( const_frozenset_d970c1dd3abca9b60e7fe6fefb4a91d1, const_int_pos_128 );
    PySet_Add( const_frozenset_d970c1dd3abca9b60e7fe6fefb4a91d1, const_int_pos_192 );
    assert( PySet_Size( const_frozenset_d970c1dd3abca9b60e7fe6fefb4a91d1 ) == 3 );
    const_str_digest_e15ea585011e5d8a0cd2a7118ea65863 = UNSTREAM_STRING( &constant_bin[ 681801 ], 29, 0 );
    const_frozenset_cf609eb9051a7250c9a68e22cef7d49d = PyFrozenSet_New( NULL );
    PySet_Add( const_frozenset_cf609eb9051a7250c9a68e22cef7d49d, const_int_pos_128 );
    assert( PySet_Size( const_frozenset_cf609eb9051a7250c9a68e22cef7d49d ) == 1 );
    const_str_digest_0e36af67a67936242fbfb4935bc69ee8 = UNSTREAM_STRING( &constant_bin[ 681830 ], 58, 0 );
    const_str_plain_RC4 = UNSTREAM_STRING( &constant_bin[ 681888 ], 3, 1 );
    const_str_plain__verify_key_size = UNSTREAM_STRING( &constant_bin[ 681891 ], 16, 1 );
    const_frozenset_b37166fd9df1977e2d8b975a0483e7cb = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 681907 ], 270 );
    const_frozenset_1abd2c5dc48294c2b53ccf2b12c895e9 = PyFrozenSet_New( NULL );
    PySet_Add( const_frozenset_1abd2c5dc48294c2b53ccf2b12c895e9, const_int_pos_128 );
    PySet_Add( const_frozenset_1abd2c5dc48294c2b53ccf2b12c895e9, const_int_pos_160 );
    PySet_Add( const_frozenset_1abd2c5dc48294c2b53ccf2b12c895e9, const_int_pos_40 );
    PySet_Add( const_frozenset_1abd2c5dc48294c2b53ccf2b12c895e9, const_int_pos_64 );
    PySet_Add( const_frozenset_1abd2c5dc48294c2b53ccf2b12c895e9, const_int_pos_192 );
    PySet_Add( const_frozenset_1abd2c5dc48294c2b53ccf2b12c895e9, const_int_pos_256 );
    PySet_Add( const_frozenset_1abd2c5dc48294c2b53ccf2b12c895e9, const_int_pos_80 );
    PySet_Add( const_frozenset_1abd2c5dc48294c2b53ccf2b12c895e9, const_int_pos_56 );
    assert( PySet_Size( const_frozenset_1abd2c5dc48294c2b53ccf2b12c895e9 ) == 8 );
    const_frozenset_6fd33e8d75e9cb199acea43a44f90987 = PyFrozenSet_New( NULL );
    PySet_Add( const_frozenset_6fd33e8d75e9cb199acea43a44f90987, const_int_pos_128 );
    PySet_Add( const_frozenset_6fd33e8d75e9cb199acea43a44f90987, const_int_pos_192 );
    PySet_Add( const_frozenset_6fd33e8d75e9cb199acea43a44f90987, const_int_pos_256 );
    PySet_Add( const_frozenset_6fd33e8d75e9cb199acea43a44f90987, const_int_pos_512 );
    assert( PySet_Size( const_frozenset_6fd33e8d75e9cb199acea43a44f90987 ) == 4 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$hazmat$primitives$ciphers$algorithms( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_5c2e62abefb9be015949e318722291f4;
static PyCodeObject *codeobj_58a980dd72d3323d731059c8594a13c0;
static PyCodeObject *codeobj_88a494526fdd969adc4b07a72d9f9194;
static PyCodeObject *codeobj_378c57866b5fe74cca637311422418d3;
static PyCodeObject *codeobj_fbab14c67064acbf2ec8cbdea9dae7ab;
static PyCodeObject *codeobj_99e7bc33cba9af18b5e1f820da9be11c;
static PyCodeObject *codeobj_2ee44661858e4354ca7317a3f55639cf;
static PyCodeObject *codeobj_491ddef574a04eaa713ed785b71d7ca3;
static PyCodeObject *codeobj_78cfa2e577b8e5a1a4764aed365e5f05;
static PyCodeObject *codeobj_78290a2b9718e3d187c749b1d447209c;
static PyCodeObject *codeobj_eab637d976019f8e398c0df714f82b6a;
static PyCodeObject *codeobj_1ce2ff8d04bd6536c7b45bb71f17d9b0;
static PyCodeObject *codeobj_f60687386f11b6e21a526e9c4832b8e4;
static PyCodeObject *codeobj_b3854992d52281bc0d8c4549ddaa9f5d;
static PyCodeObject *codeobj_022a0f576fc995f7490b530aadf9bf81;
static PyCodeObject *codeobj_c66a8fdf49b2eb271c91d07070138667;
static PyCodeObject *codeobj_91b9b82d67c672425a50b0dbc581635d;
static PyCodeObject *codeobj_3256d711a3f279d81a3d9c48978a04dd;
static PyCodeObject *codeobj_03894ffeeb40167a72000f4de3dc1487;
static PyCodeObject *codeobj_3517b245f8ffcb3846c0c07d5fc623b6;
static PyCodeObject *codeobj_58f161d08f84dbc14adaab09cba29bed;
static PyCodeObject *codeobj_47beec3ce2ddd2e34b93e21faad08168;
static PyCodeObject *codeobj_ab9900bd99a9b1b16346a8458b8fb025;
static PyCodeObject *codeobj_1a4455cf9acc4ace315caf8269c70b18;
static PyCodeObject *codeobj_fd3a61729c11cb6bf38e3769c70a00a9;
static PyCodeObject *codeobj_fac24699b166f5fa57f078d2ae2a7a15;
static PyCodeObject *codeobj_0353055e2355ff851b56636855c0a22b;
static PyCodeObject *codeobj_b2d40970fce13caf64c7986a24dafc07;
static PyCodeObject *codeobj_6edf61416f83308013f9e10a615e676e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_8ad4ca1b9bee9c8a9b3508a24b371827 );
    codeobj_5c2e62abefb9be015949e318722291f4 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_0e36af67a67936242fbfb4935bc69ee8, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_58a980dd72d3323d731059c8594a13c0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_AES, 28, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_88a494526fdd969adc4b07a72d9f9194 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ARC4, 107, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_378c57866b5fe74cca637311422418d3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Blowfish, 78, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fbab14c67064acbf2ec8cbdea9dae7ab = MAKE_CODEOBJ( module_filename_obj, const_str_plain_CAST5, 93, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_99e7bc33cba9af18b5e1f820da9be11c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Camellia, 44, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2ee44661858e4354ca7317a3f55639cf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ChaCha20, 150, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_491ddef574a04eaa713ed785b71d7ca3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_IDEA, 120, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_78cfa2e577b8e5a1a4764aed365e5f05 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SEED, 135, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_78290a2b9718e3d187c749b1d447209c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_TripleDES, 59, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_eab637d976019f8e398c0df714f82b6a = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 34, const_tuple_str_plain_self_str_plain_key_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1ce2ff8d04bd6536c7b45bb71f17d9b0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 49, const_tuple_str_plain_self_str_plain_key_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f60687386f11b6e21a526e9c4832b8e4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 64, const_tuple_str_plain_self_str_plain_key_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b3854992d52281bc0d8c4549ddaa9f5d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 83, const_tuple_str_plain_self_str_plain_key_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_022a0f576fc995f7490b530aadf9bf81 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 98, const_tuple_str_plain_self_str_plain_key_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c66a8fdf49b2eb271c91d07070138667 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 111, const_tuple_str_plain_self_str_plain_key_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_91b9b82d67c672425a50b0dbc581635d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 125, const_tuple_str_plain_self_str_plain_key_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3256d711a3f279d81a3d9c48978a04dd = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 140, const_tuple_str_plain_self_str_plain_key_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_03894ffeeb40167a72000f4de3dc1487 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 154, const_tuple_str_plain_self_str_plain_key_str_plain_nonce_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3517b245f8ffcb3846c0c07d5fc623b6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__verify_key_size, 14, const_tuple_str_plain_algorithm_str_plain_key_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_58f161d08f84dbc14adaab09cba29bed = MAKE_CODEOBJ( module_filename_obj, const_str_plain_key_size, 37, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_47beec3ce2ddd2e34b93e21faad08168 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_key_size, 52, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ab9900bd99a9b1b16346a8458b8fb025 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_key_size, 71, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1a4455cf9acc4ace315caf8269c70b18 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_key_size, 86, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fd3a61729c11cb6bf38e3769c70a00a9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_key_size, 101, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fac24699b166f5fa57f078d2ae2a7a15 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_key_size, 114, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0353055e2355ff851b56636855c0a22b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_key_size, 128, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b2d40970fce13caf64c7986a24dafc07 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_key_size, 143, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6edf61416f83308013f9e10a615e676e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_key_size, 165, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_10___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_11_key_size(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_12___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_13_key_size(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_14___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_15_key_size(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_16___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_17_key_size(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_18___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_19_key_size(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_1__verify_key_size(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_2___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_3_key_size(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_4___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_5_key_size(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_6___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_7_key_size(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_8___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_9_key_size(  );


// The module function definitions.
static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_1__verify_key_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_algorithm = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_3517b245f8ffcb3846c0c07d5fc623b6 = NULL;

    struct Nuitka_FrameObject *frame_3517b245f8ffcb3846c0c07d5fc623b6;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3517b245f8ffcb3846c0c07d5fc623b6, codeobj_3517b245f8ffcb3846c0c07d5fc623b6, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *)+sizeof(void *) );
    frame_3517b245f8ffcb3846c0c07d5fc623b6 = cache_frame_3517b245f8ffcb3846c0c07d5fc623b6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3517b245f8ffcb3846c0c07d5fc623b6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3517b245f8ffcb3846c0c07d5fc623b6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

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

        exception_lineno = 16;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_plain_key;
    tmp_args_element_name_2 = par_key;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_3517b245f8ffcb3846c0c07d5fc623b6->m_frame.f_lineno = 16;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain__check_byteslike, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_len_arg_1 = par_key;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
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


        exception_lineno = 19;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = par_algorithm;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_key_sizes );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 19;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_2 = const_str_digest_e15ea585011e5d8a0cd2a7118ea65863;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_format );
    assert( tmp_called_name_1 != NULL );
    tmp_len_arg_2 = par_key;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_left_name_2 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 21;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_pos_8;
    tmp_args_element_name_3 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 21;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_algorithm;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_name );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 21;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_3517b245f8ffcb3846c0c07d5fc623b6->m_frame.f_lineno = 20;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_3517b245f8ffcb3846c0c07d5fc623b6->m_frame.f_lineno = 20;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 20;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3517b245f8ffcb3846c0c07d5fc623b6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3517b245f8ffcb3846c0c07d5fc623b6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3517b245f8ffcb3846c0c07d5fc623b6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3517b245f8ffcb3846c0c07d5fc623b6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3517b245f8ffcb3846c0c07d5fc623b6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3517b245f8ffcb3846c0c07d5fc623b6,
        type_description_1,
        par_algorithm,
        par_key
    );


    // Release cached frame.
    if ( frame_3517b245f8ffcb3846c0c07d5fc623b6 == cache_frame_3517b245f8ffcb3846c0c07d5fc623b6 )
    {
        Py_DECREF( frame_3517b245f8ffcb3846c0c07d5fc623b6 );
    }
    cache_frame_3517b245f8ffcb3846c0c07d5fc623b6 = NULL;

    assertFrameObject( frame_3517b245f8ffcb3846c0c07d5fc623b6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = par_key;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_1__verify_key_size );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

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

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_1__verify_key_size );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_2___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_eab637d976019f8e398c0df714f82b6a = NULL;

    struct Nuitka_FrameObject *frame_eab637d976019f8e398c0df714f82b6a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_eab637d976019f8e398c0df714f82b6a, codeobj_eab637d976019f8e398c0df714f82b6a, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *)+sizeof(void *) );
    frame_eab637d976019f8e398c0df714f82b6a = cache_frame_eab637d976019f8e398c0df714f82b6a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_eab637d976019f8e398c0df714f82b6a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_eab637d976019f8e398c0df714f82b6a ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain__verify_key_size );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__verify_key_size );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_verify_key_size" );
        exception_tb = NULL;

        exception_lineno = 35;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_key;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_eab637d976019f8e398c0df714f82b6a->m_frame.f_lineno = 35;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_key, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 35;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eab637d976019f8e398c0df714f82b6a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eab637d976019f8e398c0df714f82b6a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_eab637d976019f8e398c0df714f82b6a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_eab637d976019f8e398c0df714f82b6a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_eab637d976019f8e398c0df714f82b6a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_eab637d976019f8e398c0df714f82b6a,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame.
    if ( frame_eab637d976019f8e398c0df714f82b6a == cache_frame_eab637d976019f8e398c0df714f82b6a )
    {
        Py_DECREF( frame_eab637d976019f8e398c0df714f82b6a );
    }
    cache_frame_eab637d976019f8e398c0df714f82b6a = NULL;

    assertFrameObject( frame_eab637d976019f8e398c0df714f82b6a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_2___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

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

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_2___init__ );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_3_key_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_58f161d08f84dbc14adaab09cba29bed = NULL;

    struct Nuitka_FrameObject *frame_58f161d08f84dbc14adaab09cba29bed;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_58f161d08f84dbc14adaab09cba29bed, codeobj_58f161d08f84dbc14adaab09cba29bed, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *) );
    frame_58f161d08f84dbc14adaab09cba29bed = cache_frame_58f161d08f84dbc14adaab09cba29bed;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_58f161d08f84dbc14adaab09cba29bed );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_58f161d08f84dbc14adaab09cba29bed ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_key );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_8;
    tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_58f161d08f84dbc14adaab09cba29bed );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_58f161d08f84dbc14adaab09cba29bed );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_58f161d08f84dbc14adaab09cba29bed );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_58f161d08f84dbc14adaab09cba29bed, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_58f161d08f84dbc14adaab09cba29bed->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_58f161d08f84dbc14adaab09cba29bed, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_58f161d08f84dbc14adaab09cba29bed,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_58f161d08f84dbc14adaab09cba29bed == cache_frame_58f161d08f84dbc14adaab09cba29bed )
    {
        Py_DECREF( frame_58f161d08f84dbc14adaab09cba29bed );
    }
    cache_frame_58f161d08f84dbc14adaab09cba29bed = NULL;

    assertFrameObject( frame_58f161d08f84dbc14adaab09cba29bed );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_3_key_size );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_3_key_size );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_4___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_1ce2ff8d04bd6536c7b45bb71f17d9b0 = NULL;

    struct Nuitka_FrameObject *frame_1ce2ff8d04bd6536c7b45bb71f17d9b0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1ce2ff8d04bd6536c7b45bb71f17d9b0, codeobj_1ce2ff8d04bd6536c7b45bb71f17d9b0, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *)+sizeof(void *) );
    frame_1ce2ff8d04bd6536c7b45bb71f17d9b0 = cache_frame_1ce2ff8d04bd6536c7b45bb71f17d9b0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1ce2ff8d04bd6536c7b45bb71f17d9b0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1ce2ff8d04bd6536c7b45bb71f17d9b0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain__verify_key_size );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__verify_key_size );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_verify_key_size" );
        exception_tb = NULL;

        exception_lineno = 50;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_key;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_1ce2ff8d04bd6536c7b45bb71f17d9b0->m_frame.f_lineno = 50;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_key, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 50;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1ce2ff8d04bd6536c7b45bb71f17d9b0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1ce2ff8d04bd6536c7b45bb71f17d9b0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1ce2ff8d04bd6536c7b45bb71f17d9b0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1ce2ff8d04bd6536c7b45bb71f17d9b0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1ce2ff8d04bd6536c7b45bb71f17d9b0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1ce2ff8d04bd6536c7b45bb71f17d9b0,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame.
    if ( frame_1ce2ff8d04bd6536c7b45bb71f17d9b0 == cache_frame_1ce2ff8d04bd6536c7b45bb71f17d9b0 )
    {
        Py_DECREF( frame_1ce2ff8d04bd6536c7b45bb71f17d9b0 );
    }
    cache_frame_1ce2ff8d04bd6536c7b45bb71f17d9b0 = NULL;

    assertFrameObject( frame_1ce2ff8d04bd6536c7b45bb71f17d9b0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_4___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

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

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_4___init__ );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_5_key_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_47beec3ce2ddd2e34b93e21faad08168 = NULL;

    struct Nuitka_FrameObject *frame_47beec3ce2ddd2e34b93e21faad08168;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_47beec3ce2ddd2e34b93e21faad08168, codeobj_47beec3ce2ddd2e34b93e21faad08168, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *) );
    frame_47beec3ce2ddd2e34b93e21faad08168 = cache_frame_47beec3ce2ddd2e34b93e21faad08168;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_47beec3ce2ddd2e34b93e21faad08168 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_47beec3ce2ddd2e34b93e21faad08168 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_key );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_8;
    tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_47beec3ce2ddd2e34b93e21faad08168 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_47beec3ce2ddd2e34b93e21faad08168 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_47beec3ce2ddd2e34b93e21faad08168 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_47beec3ce2ddd2e34b93e21faad08168, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_47beec3ce2ddd2e34b93e21faad08168->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_47beec3ce2ddd2e34b93e21faad08168, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_47beec3ce2ddd2e34b93e21faad08168,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_47beec3ce2ddd2e34b93e21faad08168 == cache_frame_47beec3ce2ddd2e34b93e21faad08168 )
    {
        Py_DECREF( frame_47beec3ce2ddd2e34b93e21faad08168 );
    }
    cache_frame_47beec3ce2ddd2e34b93e21faad08168 = NULL;

    assertFrameObject( frame_47beec3ce2ddd2e34b93e21faad08168 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_5_key_size );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_5_key_size );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_6___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    static struct Nuitka_FrameObject *cache_frame_f60687386f11b6e21a526e9c4832b8e4 = NULL;

    struct Nuitka_FrameObject *frame_f60687386f11b6e21a526e9c4832b8e4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f60687386f11b6e21a526e9c4832b8e4, codeobj_f60687386f11b6e21a526e9c4832b8e4, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *)+sizeof(void *) );
    frame_f60687386f11b6e21a526e9c4832b8e4 = cache_frame_f60687386f11b6e21a526e9c4832b8e4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f60687386f11b6e21a526e9c4832b8e4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f60687386f11b6e21a526e9c4832b8e4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_len_arg_1 = par_key;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_8;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 65;
        type_description_1 = "oo";
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
    tmp_left_name_1 = par_key;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_left_name_2 = par_key;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_right_name_2 = par_key;

    CHECK_OBJECT( tmp_right_name_2 );
    tmp_right_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_1 = tmp_left_name_1;
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    par_key = tmp_assign_source_1;

    goto branch_end_1;
    branch_no_1:;
    tmp_len_arg_2 = par_key;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_16;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 67;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_left_name_3 = par_key;

    CHECK_OBJECT( tmp_left_name_3 );
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = 8;
    tmp_slice_source_1 = par_key;

    CHECK_OBJECT( tmp_slice_source_1 );
    tmp_right_name_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
    tmp_assign_source_2 = tmp_left_name_3;
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    par_key = tmp_assign_source_2;

    branch_no_2:;
    branch_end_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain__verify_key_size );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__verify_key_size );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_verify_key_size" );
        exception_tb = NULL;

        exception_lineno = 69;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_key;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;

        exception_lineno = 69;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_f60687386f11b6e21a526e9c4832b8e4->m_frame.f_lineno = 69;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_key, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 69;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f60687386f11b6e21a526e9c4832b8e4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f60687386f11b6e21a526e9c4832b8e4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f60687386f11b6e21a526e9c4832b8e4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f60687386f11b6e21a526e9c4832b8e4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f60687386f11b6e21a526e9c4832b8e4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f60687386f11b6e21a526e9c4832b8e4,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame.
    if ( frame_f60687386f11b6e21a526e9c4832b8e4 == cache_frame_f60687386f11b6e21a526e9c4832b8e4 )
    {
        Py_DECREF( frame_f60687386f11b6e21a526e9c4832b8e4 );
    }
    cache_frame_f60687386f11b6e21a526e9c4832b8e4 = NULL;

    assertFrameObject( frame_f60687386f11b6e21a526e9c4832b8e4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_6___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_key );
    par_key = NULL;

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

    Py_XDECREF( par_key );
    par_key = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_6___init__ );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_7_key_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_ab9900bd99a9b1b16346a8458b8fb025 = NULL;

    struct Nuitka_FrameObject *frame_ab9900bd99a9b1b16346a8458b8fb025;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ab9900bd99a9b1b16346a8458b8fb025, codeobj_ab9900bd99a9b1b16346a8458b8fb025, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *) );
    frame_ab9900bd99a9b1b16346a8458b8fb025 = cache_frame_ab9900bd99a9b1b16346a8458b8fb025;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ab9900bd99a9b1b16346a8458b8fb025 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ab9900bd99a9b1b16346a8458b8fb025 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_key );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_8;
    tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ab9900bd99a9b1b16346a8458b8fb025 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ab9900bd99a9b1b16346a8458b8fb025 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ab9900bd99a9b1b16346a8458b8fb025 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ab9900bd99a9b1b16346a8458b8fb025, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ab9900bd99a9b1b16346a8458b8fb025->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ab9900bd99a9b1b16346a8458b8fb025, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ab9900bd99a9b1b16346a8458b8fb025,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_ab9900bd99a9b1b16346a8458b8fb025 == cache_frame_ab9900bd99a9b1b16346a8458b8fb025 )
    {
        Py_DECREF( frame_ab9900bd99a9b1b16346a8458b8fb025 );
    }
    cache_frame_ab9900bd99a9b1b16346a8458b8fb025 = NULL;

    assertFrameObject( frame_ab9900bd99a9b1b16346a8458b8fb025 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_7_key_size );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_7_key_size );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_8___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_b3854992d52281bc0d8c4549ddaa9f5d = NULL;

    struct Nuitka_FrameObject *frame_b3854992d52281bc0d8c4549ddaa9f5d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b3854992d52281bc0d8c4549ddaa9f5d, codeobj_b3854992d52281bc0d8c4549ddaa9f5d, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *)+sizeof(void *) );
    frame_b3854992d52281bc0d8c4549ddaa9f5d = cache_frame_b3854992d52281bc0d8c4549ddaa9f5d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b3854992d52281bc0d8c4549ddaa9f5d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b3854992d52281bc0d8c4549ddaa9f5d ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain__verify_key_size );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__verify_key_size );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_verify_key_size" );
        exception_tb = NULL;

        exception_lineno = 84;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_key;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_b3854992d52281bc0d8c4549ddaa9f5d->m_frame.f_lineno = 84;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_key, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 84;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b3854992d52281bc0d8c4549ddaa9f5d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b3854992d52281bc0d8c4549ddaa9f5d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b3854992d52281bc0d8c4549ddaa9f5d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b3854992d52281bc0d8c4549ddaa9f5d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b3854992d52281bc0d8c4549ddaa9f5d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b3854992d52281bc0d8c4549ddaa9f5d,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame.
    if ( frame_b3854992d52281bc0d8c4549ddaa9f5d == cache_frame_b3854992d52281bc0d8c4549ddaa9f5d )
    {
        Py_DECREF( frame_b3854992d52281bc0d8c4549ddaa9f5d );
    }
    cache_frame_b3854992d52281bc0d8c4549ddaa9f5d = NULL;

    assertFrameObject( frame_b3854992d52281bc0d8c4549ddaa9f5d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_8___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

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

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_8___init__ );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_9_key_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_1a4455cf9acc4ace315caf8269c70b18 = NULL;

    struct Nuitka_FrameObject *frame_1a4455cf9acc4ace315caf8269c70b18;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1a4455cf9acc4ace315caf8269c70b18, codeobj_1a4455cf9acc4ace315caf8269c70b18, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *) );
    frame_1a4455cf9acc4ace315caf8269c70b18 = cache_frame_1a4455cf9acc4ace315caf8269c70b18;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1a4455cf9acc4ace315caf8269c70b18 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1a4455cf9acc4ace315caf8269c70b18 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_key );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_8;
    tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1a4455cf9acc4ace315caf8269c70b18 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1a4455cf9acc4ace315caf8269c70b18 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1a4455cf9acc4ace315caf8269c70b18 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1a4455cf9acc4ace315caf8269c70b18, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1a4455cf9acc4ace315caf8269c70b18->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1a4455cf9acc4ace315caf8269c70b18, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1a4455cf9acc4ace315caf8269c70b18,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_1a4455cf9acc4ace315caf8269c70b18 == cache_frame_1a4455cf9acc4ace315caf8269c70b18 )
    {
        Py_DECREF( frame_1a4455cf9acc4ace315caf8269c70b18 );
    }
    cache_frame_1a4455cf9acc4ace315caf8269c70b18 = NULL;

    assertFrameObject( frame_1a4455cf9acc4ace315caf8269c70b18 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_9_key_size );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_9_key_size );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_10___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_022a0f576fc995f7490b530aadf9bf81 = NULL;

    struct Nuitka_FrameObject *frame_022a0f576fc995f7490b530aadf9bf81;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_022a0f576fc995f7490b530aadf9bf81, codeobj_022a0f576fc995f7490b530aadf9bf81, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *)+sizeof(void *) );
    frame_022a0f576fc995f7490b530aadf9bf81 = cache_frame_022a0f576fc995f7490b530aadf9bf81;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_022a0f576fc995f7490b530aadf9bf81 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_022a0f576fc995f7490b530aadf9bf81 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain__verify_key_size );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__verify_key_size );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_verify_key_size" );
        exception_tb = NULL;

        exception_lineno = 99;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_key;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_022a0f576fc995f7490b530aadf9bf81->m_frame.f_lineno = 99;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_key, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 99;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_022a0f576fc995f7490b530aadf9bf81 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_022a0f576fc995f7490b530aadf9bf81 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_022a0f576fc995f7490b530aadf9bf81, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_022a0f576fc995f7490b530aadf9bf81->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_022a0f576fc995f7490b530aadf9bf81, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_022a0f576fc995f7490b530aadf9bf81,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame.
    if ( frame_022a0f576fc995f7490b530aadf9bf81 == cache_frame_022a0f576fc995f7490b530aadf9bf81 )
    {
        Py_DECREF( frame_022a0f576fc995f7490b530aadf9bf81 );
    }
    cache_frame_022a0f576fc995f7490b530aadf9bf81 = NULL;

    assertFrameObject( frame_022a0f576fc995f7490b530aadf9bf81 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_10___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

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

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_10___init__ );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_11_key_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_fd3a61729c11cb6bf38e3769c70a00a9 = NULL;

    struct Nuitka_FrameObject *frame_fd3a61729c11cb6bf38e3769c70a00a9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fd3a61729c11cb6bf38e3769c70a00a9, codeobj_fd3a61729c11cb6bf38e3769c70a00a9, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *) );
    frame_fd3a61729c11cb6bf38e3769c70a00a9 = cache_frame_fd3a61729c11cb6bf38e3769c70a00a9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fd3a61729c11cb6bf38e3769c70a00a9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fd3a61729c11cb6bf38e3769c70a00a9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_key );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_8;
    tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fd3a61729c11cb6bf38e3769c70a00a9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fd3a61729c11cb6bf38e3769c70a00a9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fd3a61729c11cb6bf38e3769c70a00a9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fd3a61729c11cb6bf38e3769c70a00a9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fd3a61729c11cb6bf38e3769c70a00a9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fd3a61729c11cb6bf38e3769c70a00a9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fd3a61729c11cb6bf38e3769c70a00a9,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_fd3a61729c11cb6bf38e3769c70a00a9 == cache_frame_fd3a61729c11cb6bf38e3769c70a00a9 )
    {
        Py_DECREF( frame_fd3a61729c11cb6bf38e3769c70a00a9 );
    }
    cache_frame_fd3a61729c11cb6bf38e3769c70a00a9 = NULL;

    assertFrameObject( frame_fd3a61729c11cb6bf38e3769c70a00a9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_11_key_size );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_11_key_size );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_12___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_c66a8fdf49b2eb271c91d07070138667 = NULL;

    struct Nuitka_FrameObject *frame_c66a8fdf49b2eb271c91d07070138667;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c66a8fdf49b2eb271c91d07070138667, codeobj_c66a8fdf49b2eb271c91d07070138667, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *)+sizeof(void *) );
    frame_c66a8fdf49b2eb271c91d07070138667 = cache_frame_c66a8fdf49b2eb271c91d07070138667;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c66a8fdf49b2eb271c91d07070138667 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c66a8fdf49b2eb271c91d07070138667 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain__verify_key_size );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__verify_key_size );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_verify_key_size" );
        exception_tb = NULL;

        exception_lineno = 112;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_key;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_c66a8fdf49b2eb271c91d07070138667->m_frame.f_lineno = 112;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_key, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 112;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c66a8fdf49b2eb271c91d07070138667 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c66a8fdf49b2eb271c91d07070138667 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c66a8fdf49b2eb271c91d07070138667, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c66a8fdf49b2eb271c91d07070138667->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c66a8fdf49b2eb271c91d07070138667, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c66a8fdf49b2eb271c91d07070138667,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame.
    if ( frame_c66a8fdf49b2eb271c91d07070138667 == cache_frame_c66a8fdf49b2eb271c91d07070138667 )
    {
        Py_DECREF( frame_c66a8fdf49b2eb271c91d07070138667 );
    }
    cache_frame_c66a8fdf49b2eb271c91d07070138667 = NULL;

    assertFrameObject( frame_c66a8fdf49b2eb271c91d07070138667 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_12___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

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

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_12___init__ );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_13_key_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_fac24699b166f5fa57f078d2ae2a7a15 = NULL;

    struct Nuitka_FrameObject *frame_fac24699b166f5fa57f078d2ae2a7a15;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fac24699b166f5fa57f078d2ae2a7a15, codeobj_fac24699b166f5fa57f078d2ae2a7a15, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *) );
    frame_fac24699b166f5fa57f078d2ae2a7a15 = cache_frame_fac24699b166f5fa57f078d2ae2a7a15;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fac24699b166f5fa57f078d2ae2a7a15 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fac24699b166f5fa57f078d2ae2a7a15 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_key );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_8;
    tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fac24699b166f5fa57f078d2ae2a7a15 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fac24699b166f5fa57f078d2ae2a7a15 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fac24699b166f5fa57f078d2ae2a7a15 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fac24699b166f5fa57f078d2ae2a7a15, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fac24699b166f5fa57f078d2ae2a7a15->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fac24699b166f5fa57f078d2ae2a7a15, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fac24699b166f5fa57f078d2ae2a7a15,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_fac24699b166f5fa57f078d2ae2a7a15 == cache_frame_fac24699b166f5fa57f078d2ae2a7a15 )
    {
        Py_DECREF( frame_fac24699b166f5fa57f078d2ae2a7a15 );
    }
    cache_frame_fac24699b166f5fa57f078d2ae2a7a15 = NULL;

    assertFrameObject( frame_fac24699b166f5fa57f078d2ae2a7a15 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_13_key_size );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_13_key_size );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_14___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_91b9b82d67c672425a50b0dbc581635d = NULL;

    struct Nuitka_FrameObject *frame_91b9b82d67c672425a50b0dbc581635d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_91b9b82d67c672425a50b0dbc581635d, codeobj_91b9b82d67c672425a50b0dbc581635d, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *)+sizeof(void *) );
    frame_91b9b82d67c672425a50b0dbc581635d = cache_frame_91b9b82d67c672425a50b0dbc581635d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_91b9b82d67c672425a50b0dbc581635d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_91b9b82d67c672425a50b0dbc581635d ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain__verify_key_size );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__verify_key_size );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_verify_key_size" );
        exception_tb = NULL;

        exception_lineno = 126;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_key;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_91b9b82d67c672425a50b0dbc581635d->m_frame.f_lineno = 126;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_key, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 126;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_91b9b82d67c672425a50b0dbc581635d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_91b9b82d67c672425a50b0dbc581635d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_91b9b82d67c672425a50b0dbc581635d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_91b9b82d67c672425a50b0dbc581635d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_91b9b82d67c672425a50b0dbc581635d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_91b9b82d67c672425a50b0dbc581635d,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame.
    if ( frame_91b9b82d67c672425a50b0dbc581635d == cache_frame_91b9b82d67c672425a50b0dbc581635d )
    {
        Py_DECREF( frame_91b9b82d67c672425a50b0dbc581635d );
    }
    cache_frame_91b9b82d67c672425a50b0dbc581635d = NULL;

    assertFrameObject( frame_91b9b82d67c672425a50b0dbc581635d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_14___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

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

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_14___init__ );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_15_key_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_0353055e2355ff851b56636855c0a22b = NULL;

    struct Nuitka_FrameObject *frame_0353055e2355ff851b56636855c0a22b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0353055e2355ff851b56636855c0a22b, codeobj_0353055e2355ff851b56636855c0a22b, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *) );
    frame_0353055e2355ff851b56636855c0a22b = cache_frame_0353055e2355ff851b56636855c0a22b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0353055e2355ff851b56636855c0a22b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0353055e2355ff851b56636855c0a22b ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_key );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_8;
    tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0353055e2355ff851b56636855c0a22b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0353055e2355ff851b56636855c0a22b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0353055e2355ff851b56636855c0a22b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0353055e2355ff851b56636855c0a22b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0353055e2355ff851b56636855c0a22b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0353055e2355ff851b56636855c0a22b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0353055e2355ff851b56636855c0a22b,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_0353055e2355ff851b56636855c0a22b == cache_frame_0353055e2355ff851b56636855c0a22b )
    {
        Py_DECREF( frame_0353055e2355ff851b56636855c0a22b );
    }
    cache_frame_0353055e2355ff851b56636855c0a22b = NULL;

    assertFrameObject( frame_0353055e2355ff851b56636855c0a22b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_15_key_size );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_15_key_size );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_16___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_3256d711a3f279d81a3d9c48978a04dd = NULL;

    struct Nuitka_FrameObject *frame_3256d711a3f279d81a3d9c48978a04dd;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3256d711a3f279d81a3d9c48978a04dd, codeobj_3256d711a3f279d81a3d9c48978a04dd, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *)+sizeof(void *) );
    frame_3256d711a3f279d81a3d9c48978a04dd = cache_frame_3256d711a3f279d81a3d9c48978a04dd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3256d711a3f279d81a3d9c48978a04dd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3256d711a3f279d81a3d9c48978a04dd ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain__verify_key_size );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__verify_key_size );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_verify_key_size" );
        exception_tb = NULL;

        exception_lineno = 141;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_key;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_3256d711a3f279d81a3d9c48978a04dd->m_frame.f_lineno = 141;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_key, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 141;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3256d711a3f279d81a3d9c48978a04dd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3256d711a3f279d81a3d9c48978a04dd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3256d711a3f279d81a3d9c48978a04dd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3256d711a3f279d81a3d9c48978a04dd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3256d711a3f279d81a3d9c48978a04dd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3256d711a3f279d81a3d9c48978a04dd,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame.
    if ( frame_3256d711a3f279d81a3d9c48978a04dd == cache_frame_3256d711a3f279d81a3d9c48978a04dd )
    {
        Py_DECREF( frame_3256d711a3f279d81a3d9c48978a04dd );
    }
    cache_frame_3256d711a3f279d81a3d9c48978a04dd = NULL;

    assertFrameObject( frame_3256d711a3f279d81a3d9c48978a04dd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_16___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

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

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_16___init__ );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_17_key_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_b2d40970fce13caf64c7986a24dafc07 = NULL;

    struct Nuitka_FrameObject *frame_b2d40970fce13caf64c7986a24dafc07;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b2d40970fce13caf64c7986a24dafc07, codeobj_b2d40970fce13caf64c7986a24dafc07, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *) );
    frame_b2d40970fce13caf64c7986a24dafc07 = cache_frame_b2d40970fce13caf64c7986a24dafc07;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b2d40970fce13caf64c7986a24dafc07 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b2d40970fce13caf64c7986a24dafc07 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_key );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_8;
    tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b2d40970fce13caf64c7986a24dafc07 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b2d40970fce13caf64c7986a24dafc07 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b2d40970fce13caf64c7986a24dafc07 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b2d40970fce13caf64c7986a24dafc07, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b2d40970fce13caf64c7986a24dafc07->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b2d40970fce13caf64c7986a24dafc07, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b2d40970fce13caf64c7986a24dafc07,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_b2d40970fce13caf64c7986a24dafc07 == cache_frame_b2d40970fce13caf64c7986a24dafc07 )
    {
        Py_DECREF( frame_b2d40970fce13caf64c7986a24dafc07 );
    }
    cache_frame_b2d40970fce13caf64c7986a24dafc07 = NULL;

    assertFrameObject( frame_b2d40970fce13caf64c7986a24dafc07 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_17_key_size );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_17_key_size );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_18___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    PyObject *par_nonce = python_pars[ 2 ];
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_03894ffeeb40167a72000f4de3dc1487 = NULL;

    struct Nuitka_FrameObject *frame_03894ffeeb40167a72000f4de3dc1487;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_03894ffeeb40167a72000f4de3dc1487, codeobj_03894ffeeb40167a72000f4de3dc1487, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_03894ffeeb40167a72000f4de3dc1487 = cache_frame_03894ffeeb40167a72000f4de3dc1487;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_03894ffeeb40167a72000f4de3dc1487 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_03894ffeeb40167a72000f4de3dc1487 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain__verify_key_size );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__verify_key_size );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_verify_key_size" );
        exception_tb = NULL;

        exception_lineno = 155;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_key;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_03894ffeeb40167a72000f4de3dc1487->m_frame.f_lineno = 155;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_key, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 155;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

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

        exception_lineno = 156;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = const_str_plain_nonce;
    tmp_args_element_name_4 = par_nonce;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_03894ffeeb40167a72000f4de3dc1487->m_frame.f_lineno = 156;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain__check_byteslike, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_len_arg_1 = par_nonce;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_16;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 158;
        type_description_1 = "ooo";
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
    tmp_make_exception_arg_1 = const_str_digest_789e8123a1ec29236b087e04298663cb;
    frame_03894ffeeb40167a72000f4de3dc1487->m_frame.f_lineno = 159;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 159;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_assattr_name_2 = par_nonce;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__nonce, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_03894ffeeb40167a72000f4de3dc1487 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_03894ffeeb40167a72000f4de3dc1487 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_03894ffeeb40167a72000f4de3dc1487, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_03894ffeeb40167a72000f4de3dc1487->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_03894ffeeb40167a72000f4de3dc1487, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_03894ffeeb40167a72000f4de3dc1487,
        type_description_1,
        par_self,
        par_key,
        par_nonce
    );


    // Release cached frame.
    if ( frame_03894ffeeb40167a72000f4de3dc1487 == cache_frame_03894ffeeb40167a72000f4de3dc1487 )
    {
        Py_DECREF( frame_03894ffeeb40167a72000f4de3dc1487 );
    }
    cache_frame_03894ffeeb40167a72000f4de3dc1487 = NULL;

    assertFrameObject( frame_03894ffeeb40167a72000f4de3dc1487 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_18___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_nonce );
    Py_DECREF( par_nonce );
    par_nonce = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

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

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_18___init__ );
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


static PyObject *impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_19_key_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_6edf61416f83308013f9e10a615e676e = NULL;

    struct Nuitka_FrameObject *frame_6edf61416f83308013f9e10a615e676e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6edf61416f83308013f9e10a615e676e, codeobj_6edf61416f83308013f9e10a615e676e, module_cryptography$hazmat$primitives$ciphers$algorithms, sizeof(void *) );
    frame_6edf61416f83308013f9e10a615e676e = cache_frame_6edf61416f83308013f9e10a615e676e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6edf61416f83308013f9e10a615e676e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6edf61416f83308013f9e10a615e676e ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_key );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_8;
    tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6edf61416f83308013f9e10a615e676e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6edf61416f83308013f9e10a615e676e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6edf61416f83308013f9e10a615e676e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6edf61416f83308013f9e10a615e676e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6edf61416f83308013f9e10a615e676e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6edf61416f83308013f9e10a615e676e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6edf61416f83308013f9e10a615e676e,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_6edf61416f83308013f9e10a615e676e == cache_frame_6edf61416f83308013f9e10a615e676e )
    {
        Py_DECREF( frame_6edf61416f83308013f9e10a615e676e );
    }
    cache_frame_6edf61416f83308013f9e10a615e676e = NULL;

    assertFrameObject( frame_6edf61416f83308013f9e10a615e676e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_19_key_size );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms$$$function_19_key_size );
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



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_10___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_10___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_022a0f576fc995f7490b530aadf9bf81,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_11_key_size(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_11_key_size,
        const_str_plain_key_size,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fd3a61729c11cb6bf38e3769c70a00a9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_12___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_12___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c66a8fdf49b2eb271c91d07070138667,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_13_key_size(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_13_key_size,
        const_str_plain_key_size,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fac24699b166f5fa57f078d2ae2a7a15,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_14___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_14___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_91b9b82d67c672425a50b0dbc581635d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_15_key_size(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_15_key_size,
        const_str_plain_key_size,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0353055e2355ff851b56636855c0a22b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_16___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_16___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3256d711a3f279d81a3d9c48978a04dd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_17_key_size(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_17_key_size,
        const_str_plain_key_size,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b2d40970fce13caf64c7986a24dafc07,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_18___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_18___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_03894ffeeb40167a72000f4de3dc1487,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_19_key_size(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_19_key_size,
        const_str_plain_key_size,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6edf61416f83308013f9e10a615e676e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_1__verify_key_size(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_1__verify_key_size,
        const_str_plain__verify_key_size,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3517b245f8ffcb3846c0c07d5fc623b6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_2___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_eab637d976019f8e398c0df714f82b6a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_3_key_size(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_3_key_size,
        const_str_plain_key_size,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_58f161d08f84dbc14adaab09cba29bed,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_4___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1ce2ff8d04bd6536c7b45bb71f17d9b0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_5_key_size(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_5_key_size,
        const_str_plain_key_size,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_47beec3ce2ddd2e34b93e21faad08168,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_6___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f60687386f11b6e21a526e9c4832b8e4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_7_key_size(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_7_key_size,
        const_str_plain_key_size,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ab9900bd99a9b1b16346a8458b8fb025,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_8___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b3854992d52281bc0d8c4549ddaa9f5d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_9_key_size(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$ciphers$algorithms$$$function_9_key_size,
        const_str_plain_key_size,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1a4455cf9acc4ace315caf8269c70b18,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$ciphers$algorithms,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_cryptography$hazmat$primitives$ciphers$algorithms =
{
    PyModuleDef_HEAD_INIT,
    "cryptography.hazmat.primitives.ciphers.algorithms",   /* m_name */
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

MOD_INIT_DECL( cryptography$hazmat$primitives$ciphers$algorithms )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_cryptography$hazmat$primitives$ciphers$algorithms );
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
    puts("cryptography.hazmat.primitives.ciphers.algorithms: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.primitives.ciphers.algorithms: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.primitives.ciphers.algorithms: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcryptography$hazmat$primitives$ciphers$algorithms" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_cryptography$hazmat$primitives$ciphers$algorithms = Py_InitModule4(
        "cryptography.hazmat.primitives.ciphers.algorithms",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_cryptography$hazmat$primitives$ciphers$algorithms = PyModule_Create( &mdef_cryptography$hazmat$primitives$ciphers$algorithms );
#endif

    moduledict_cryptography$hazmat$primitives$ciphers$algorithms = MODULE_DICT( module_cryptography$hazmat$primitives$ciphers$algorithms );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_cryptography$hazmat$primitives$ciphers$algorithms,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$ciphers$algorithms,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_cryptography$hazmat$primitives$ciphers$algorithms,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$ciphers$algorithms,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_cryptography$hazmat$primitives$ciphers$algorithms );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_87335604a4a83d266089f9a1aef4f588, module_cryptography$hazmat$primitives$ciphers$algorithms );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
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
    PyObject *tmp_import_from_2__module = NULL;
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
    PyObject *tmp_called_instance_1;
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
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    int tmp_cmp_In_6;
    int tmp_cmp_In_7;
    int tmp_cmp_In_8;
    int tmp_cmp_In_9;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
    PyObject *tmp_dict_name_6;
    PyObject *tmp_dict_name_7;
    PyObject *tmp_dict_name_8;
    PyObject *tmp_dict_name_9;
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
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_key_name_4;
    PyObject *tmp_key_name_5;
    PyObject *tmp_key_name_6;
    PyObject *tmp_key_name_7;
    PyObject *tmp_key_name_8;
    PyObject *tmp_key_name_9;
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
    static struct Nuitka_FrameObject *cache_frame_58a980dd72d3323d731059c8594a13c0_2 = NULL;

    struct Nuitka_FrameObject *frame_58a980dd72d3323d731059c8594a13c0_2;

    static struct Nuitka_FrameObject *cache_frame_99e7bc33cba9af18b5e1f820da9be11c_3 = NULL;

    struct Nuitka_FrameObject *frame_99e7bc33cba9af18b5e1f820da9be11c_3;

    static struct Nuitka_FrameObject *cache_frame_78290a2b9718e3d187c749b1d447209c_4 = NULL;

    struct Nuitka_FrameObject *frame_78290a2b9718e3d187c749b1d447209c_4;

    static struct Nuitka_FrameObject *cache_frame_378c57866b5fe74cca637311422418d3_5 = NULL;

    struct Nuitka_FrameObject *frame_378c57866b5fe74cca637311422418d3_5;

    static struct Nuitka_FrameObject *cache_frame_fbab14c67064acbf2ec8cbdea9dae7ab_6 = NULL;

    struct Nuitka_FrameObject *frame_fbab14c67064acbf2ec8cbdea9dae7ab_6;

    static struct Nuitka_FrameObject *cache_frame_88a494526fdd969adc4b07a72d9f9194_7 = NULL;

    struct Nuitka_FrameObject *frame_88a494526fdd969adc4b07a72d9f9194_7;

    static struct Nuitka_FrameObject *cache_frame_491ddef574a04eaa713ed785b71d7ca3_8 = NULL;

    struct Nuitka_FrameObject *frame_491ddef574a04eaa713ed785b71d7ca3_8;

    static struct Nuitka_FrameObject *cache_frame_78cfa2e577b8e5a1a4764aed365e5f05_9 = NULL;

    struct Nuitka_FrameObject *frame_78cfa2e577b8e5a1a4764aed365e5f05_9;

    static struct Nuitka_FrameObject *cache_frame_2ee44661858e4354ca7317a3f55639cf_10 = NULL;

    struct Nuitka_FrameObject *frame_2ee44661858e4354ca7317a3f55639cf_10;

    struct Nuitka_FrameObject *frame_5c2e62abefb9be015949e318722291f4;

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
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    tmp_outline_return_value_4 = NULL;
    tmp_outline_return_value_5 = NULL;
    tmp_outline_return_value_6 = NULL;
    tmp_outline_return_value_7 = NULL;
    tmp_outline_return_value_8 = NULL;
    tmp_outline_return_value_9 = NULL;
    PyObject *locals_AES_28 = NULL;
    PyObject *locals_ChaCha20_150 = NULL;
    PyObject *locals_SEED_135 = NULL;
    PyObject *locals_ARC4_107 = NULL;
    PyObject *locals_TripleDES_59 = NULL;
    PyObject *locals_IDEA_120 = NULL;
    PyObject *locals_CAST5_93 = NULL;
    PyObject *locals_Blowfish_78 = NULL;
    PyObject *locals_Camellia_44 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyImport_ImportModule("__future__");
    assert( tmp_assign_source_3 != NULL );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_3 );
    tmp_import_from_1__module = tmp_assign_source_3;

    // Frame without reuse.
    frame_5c2e62abefb9be015949e318722291f4 = MAKE_MODULE_FRAME( codeobj_5c2e62abefb9be015949e318722291f4, module_cryptography$hazmat$primitives$ciphers$algorithms );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_5c2e62abefb9be015949e318722291f4 );
    assert( Py_REFCNT( frame_5c2e62abefb9be015949e318722291f4 ) == 2 );

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
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
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
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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

    tmp_name_name_1 = const_str_plain_cryptography;
    tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$ciphers$algorithms;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_utils_tuple;
    tmp_level_name_1 = const_int_0;
    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 7;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_utils );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils, tmp_assign_source_7 );
    tmp_name_name_2 = const_str_digest_9af74ab7ec8186e2f6a1218dfc2da4e5;
    tmp_globals_name_2 = (PyObject *)moduledict_cryptography$hazmat$primitives$ciphers$algorithms;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_BlockCipherAlgorithm_str_plain_CipherAlgorithm_tuple;
    tmp_level_name_2 = const_int_0;
    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 8;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_8;

    // Tried code:
    tmp_import_name_from_5 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_BlockCipherAlgorithm );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_BlockCipherAlgorithm, tmp_assign_source_9 );
    tmp_import_name_from_6 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_CipherAlgorithm );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm, tmp_assign_source_10 );
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    tmp_name_name_3 = const_str_digest_dad71bd336cb898ea2767fe5d1d92e3c;
    tmp_globals_name_3 = (PyObject *)moduledict_cryptography$hazmat$primitives$ciphers$algorithms;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_ModeWithNonce_tuple;
    tmp_level_name_3 = const_int_0;
    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 11;
    tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_ModeWithNonce );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_ModeWithNonce, tmp_assign_source_11 );
    tmp_assign_source_12 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_1__verify_key_size(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain__verify_key_size, tmp_assign_source_12 );
    // Tried code:
    tmp_set_locals = PyDict_New();
    locals_AES_28 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_87335604a4a83d266089f9a1aef4f588;
    tmp_res = PyDict_SetItem( locals_AES_28, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_AES;
    tmp_res = PyDict_SetItem( locals_AES_28, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_128;
    tmp_res = PyDict_SetItem( locals_AES_28, const_str_plain_block_size, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_frozenset_6fd33e8d75e9cb199acea43a44f90987;
    tmp_res = PyDict_SetItem( locals_AES_28, const_str_plain_key_sizes, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_2___init__(  );
    tmp_res = PyDict_SetItem( locals_AES_28, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_58a980dd72d3323d731059c8594a13c0_2, codeobj_58a980dd72d3323d731059c8594a13c0, module_cryptography$hazmat$primitives$ciphers$algorithms, 0 );
    frame_58a980dd72d3323d731059c8594a13c0_2 = cache_frame_58a980dd72d3323d731059c8594a13c0_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_58a980dd72d3323d731059c8594a13c0_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_58a980dd72d3323d731059c8594a13c0_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_1 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_3_key_size(  );
    frame_58a980dd72d3323d731059c8594a13c0_2->m_frame.f_lineno = 37;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_AES_28, const_str_plain_key_size, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_58a980dd72d3323d731059c8594a13c0_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_58a980dd72d3323d731059c8594a13c0_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_58a980dd72d3323d731059c8594a13c0_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_58a980dd72d3323d731059c8594a13c0_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_58a980dd72d3323d731059c8594a13c0_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_58a980dd72d3323d731059c8594a13c0_2,
        type_description_2
    );


    // Release cached frame.
    if ( frame_58a980dd72d3323d731059c8594a13c0_2 == cache_frame_58a980dd72d3323d731059c8594a13c0_2 )
    {
        Py_DECREF( frame_58a980dd72d3323d731059c8594a13c0_2 );
    }
    cache_frame_58a980dd72d3323d731059c8594a13c0_2 = NULL;

    assertFrameObject( frame_58a980dd72d3323d731059c8594a13c0_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_4;
    skip_nested_handling_1:;
    tmp_outline_return_value_1 = locals_AES_28;
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_4:;
    Py_DECREF( locals_AES_28 );
    locals_AES_28 = NULL;
    goto outline_result_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_AES_28 );
    locals_AES_28 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 28;
    goto try_except_handler_3;
    outline_result_1:;
    tmp_assign_source_13 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_13;

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
    tmp_assign_source_14 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_3;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_14 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_14 );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_14;

    tmp_called_name_2 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_args_element_name_2 = const_str_plain_AES;
    tmp_args_element_name_3 = const_tuple_type_object_tuple;
    tmp_args_element_name_4 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 28;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_3;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_15;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 27;

        goto try_except_handler_3;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_register_interface );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto try_except_handler_3;
    }
    tmp_args_element_name_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );

    if (unlikely( tmp_args_element_name_5 == NULL ))
    {
        tmp_args_element_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );
    }

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "CipherAlgorithm" );
        exception_tb = NULL;

        exception_lineno = 27;

        goto try_except_handler_3;
    }

    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 27;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_called_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto try_except_handler_3;
    }
    tmp_args_element_name_6 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 27;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_class_creation_1__class;
        assert( old != NULL );
        tmp_class_creation_1__class = tmp_assign_source_16;
        Py_DECREF( old );
    }

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 26;

        goto try_except_handler_3;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_register_interface );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_3;
    }
    tmp_args_element_name_7 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_BlockCipherAlgorithm );

    if (unlikely( tmp_args_element_name_7 == NULL ))
    {
        tmp_args_element_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BlockCipherAlgorithm );
    }

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "BlockCipherAlgorithm" );
        exception_tb = NULL;

        exception_lineno = 26;

        goto try_except_handler_3;
    }

    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 26;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_called_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_3;
    }
    tmp_args_element_name_8 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_args_element_name_8 );
    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 26;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_class_creation_1__class;
        assert( old != NULL );
        tmp_class_creation_1__class = tmp_assign_source_17;
        Py_DECREF( old );
    }

    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    tmp_assign_source_18 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_18 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_AES, tmp_assign_source_18 );
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
    locals_Camellia_44 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_87335604a4a83d266089f9a1aef4f588;
    tmp_res = PyDict_SetItem( locals_Camellia_44, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_camellia;
    tmp_res = PyDict_SetItem( locals_Camellia_44, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_128;
    tmp_res = PyDict_SetItem( locals_Camellia_44, const_str_plain_block_size, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_frozenset_966142b12d0c43c757208299c957e27b;
    tmp_res = PyDict_SetItem( locals_Camellia_44, const_str_plain_key_sizes, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_4___init__(  );
    tmp_res = PyDict_SetItem( locals_Camellia_44, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_99e7bc33cba9af18b5e1f820da9be11c_3, codeobj_99e7bc33cba9af18b5e1f820da9be11c, module_cryptography$hazmat$primitives$ciphers$algorithms, 0 );
    frame_99e7bc33cba9af18b5e1f820da9be11c_3 = cache_frame_99e7bc33cba9af18b5e1f820da9be11c_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_99e7bc33cba9af18b5e1f820da9be11c_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_99e7bc33cba9af18b5e1f820da9be11c_3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_7 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_9 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_5_key_size(  );
    frame_99e7bc33cba9af18b5e1f820da9be11c_3->m_frame.f_lineno = 52;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;

        goto frame_exception_exit_3;
    }
    tmp_res = PyDict_SetItem( locals_Camellia_44, const_str_plain_key_size, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;

        goto frame_exception_exit_3;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_99e7bc33cba9af18b5e1f820da9be11c_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_99e7bc33cba9af18b5e1f820da9be11c_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_99e7bc33cba9af18b5e1f820da9be11c_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_99e7bc33cba9af18b5e1f820da9be11c_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_99e7bc33cba9af18b5e1f820da9be11c_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_99e7bc33cba9af18b5e1f820da9be11c_3,
        type_description_2
    );


    // Release cached frame.
    if ( frame_99e7bc33cba9af18b5e1f820da9be11c_3 == cache_frame_99e7bc33cba9af18b5e1f820da9be11c_3 )
    {
        Py_DECREF( frame_99e7bc33cba9af18b5e1f820da9be11c_3 );
    }
    cache_frame_99e7bc33cba9af18b5e1f820da9be11c_3 = NULL;

    assertFrameObject( frame_99e7bc33cba9af18b5e1f820da9be11c_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_6;
    skip_nested_handling_2:;
    tmp_outline_return_value_2 = locals_Camellia_44;
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_6:;
    Py_DECREF( locals_Camellia_44 );
    locals_Camellia_44 = NULL;
    goto outline_result_2;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_Camellia_44 );
    locals_Camellia_44 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 44;
    goto try_except_handler_5;
    outline_result_2:;
    tmp_assign_source_19 = tmp_outline_return_value_2;
    assert( tmp_class_creation_2__class_dict == NULL );
    tmp_class_creation_2__class_dict = tmp_assign_source_19;

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
    tmp_assign_source_20 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_5;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_20 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_20 );
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_20;

    tmp_called_name_8 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_8 );
    tmp_args_element_name_10 = const_str_plain_Camellia;
    tmp_args_element_name_11 = const_tuple_type_object_tuple;
    tmp_args_element_name_12 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_args_element_name_12 );
    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 44;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_8, call_args );
    }

    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_5;
    }
    assert( tmp_class_creation_2__class == NULL );
    tmp_class_creation_2__class = tmp_assign_source_21;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 43;

        goto try_except_handler_5;
    }

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_register_interface );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_5;
    }
    tmp_args_element_name_13 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );

    if (unlikely( tmp_args_element_name_13 == NULL ))
    {
        tmp_args_element_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );
    }

    if ( tmp_args_element_name_13 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "CipherAlgorithm" );
        exception_tb = NULL;

        exception_lineno = 43;

        goto try_except_handler_5;
    }

    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 43;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_called_name_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_5;
    }
    tmp_args_element_name_14 = tmp_class_creation_2__class;

    CHECK_OBJECT( tmp_args_element_name_14 );
    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 43;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_class_creation_2__class;
        assert( old != NULL );
        tmp_class_creation_2__class = tmp_assign_source_22;
        Py_DECREF( old );
    }

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 42;

        goto try_except_handler_5;
    }

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_register_interface );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    tmp_args_element_name_15 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_BlockCipherAlgorithm );

    if (unlikely( tmp_args_element_name_15 == NULL ))
    {
        tmp_args_element_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BlockCipherAlgorithm );
    }

    if ( tmp_args_element_name_15 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "BlockCipherAlgorithm" );
        exception_tb = NULL;

        exception_lineno = 42;

        goto try_except_handler_5;
    }

    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 42;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_called_name_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    tmp_args_element_name_16 = tmp_class_creation_2__class;

    CHECK_OBJECT( tmp_args_element_name_16 );
    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 42;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_class_creation_2__class;
        assert( old != NULL );
        tmp_class_creation_2__class = tmp_assign_source_23;
        Py_DECREF( old );
    }

    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    tmp_assign_source_24 = tmp_class_creation_2__class;

    CHECK_OBJECT( tmp_assign_source_24 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_Camellia, tmp_assign_source_24 );
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
    locals_TripleDES_59 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_87335604a4a83d266089f9a1aef4f588;
    tmp_res = PyDict_SetItem( locals_TripleDES_59, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_3DES;
    tmp_res = PyDict_SetItem( locals_TripleDES_59, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_64;
    tmp_res = PyDict_SetItem( locals_TripleDES_59, const_str_plain_block_size, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_frozenset_d970c1dd3abca9b60e7fe6fefb4a91d1;
    tmp_res = PyDict_SetItem( locals_TripleDES_59, const_str_plain_key_sizes, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_6___init__(  );
    tmp_res = PyDict_SetItem( locals_TripleDES_59, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_78290a2b9718e3d187c749b1d447209c_4, codeobj_78290a2b9718e3d187c749b1d447209c, module_cryptography$hazmat$primitives$ciphers$algorithms, 0 );
    frame_78290a2b9718e3d187c749b1d447209c_4 = cache_frame_78290a2b9718e3d187c749b1d447209c_4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_78290a2b9718e3d187c749b1d447209c_4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_78290a2b9718e3d187c749b1d447209c_4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_13 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_17 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_7_key_size(  );
    frame_78290a2b9718e3d187c749b1d447209c_4->m_frame.f_lineno = 71;
    {
        PyObject *call_args[] = { tmp_args_element_name_17 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_args_element_name_17 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;

        goto frame_exception_exit_4;
    }
    tmp_res = PyDict_SetItem( locals_TripleDES_59, const_str_plain_key_size, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;

        goto frame_exception_exit_4;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_78290a2b9718e3d187c749b1d447209c_4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_exception_exit_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_78290a2b9718e3d187c749b1d447209c_4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_78290a2b9718e3d187c749b1d447209c_4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_78290a2b9718e3d187c749b1d447209c_4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_78290a2b9718e3d187c749b1d447209c_4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_78290a2b9718e3d187c749b1d447209c_4,
        type_description_2
    );


    // Release cached frame.
    if ( frame_78290a2b9718e3d187c749b1d447209c_4 == cache_frame_78290a2b9718e3d187c749b1d447209c_4 )
    {
        Py_DECREF( frame_78290a2b9718e3d187c749b1d447209c_4 );
    }
    cache_frame_78290a2b9718e3d187c749b1d447209c_4 = NULL;

    assertFrameObject( frame_78290a2b9718e3d187c749b1d447209c_4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_3;

    frame_no_exception_3:;

    goto skip_nested_handling_3;
    nested_frame_exit_3:;

    goto try_except_handler_8;
    skip_nested_handling_3:;
    tmp_outline_return_value_3 = locals_TripleDES_59;
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_8;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_8:;
    Py_DECREF( locals_TripleDES_59 );
    locals_TripleDES_59 = NULL;
    goto outline_result_3;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_TripleDES_59 );
    locals_TripleDES_59 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto outline_exception_3;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 59;
    goto try_except_handler_7;
    outline_result_3:;
    tmp_assign_source_25 = tmp_outline_return_value_3;
    assert( tmp_class_creation_3__class_dict == NULL );
    tmp_class_creation_3__class_dict = tmp_assign_source_25;

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
    tmp_assign_source_26 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_7;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_26 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_26 );
    condexpr_end_3:;
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_26;

    tmp_called_name_14 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_14 );
    tmp_args_element_name_18 = const_str_plain_TripleDES;
    tmp_args_element_name_19 = const_tuple_type_object_tuple;
    tmp_args_element_name_20 = tmp_class_creation_3__class_dict;

    CHECK_OBJECT( tmp_args_element_name_20 );
    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 59;
    {
        PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20 };
        tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_14, call_args );
    }

    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_7;
    }
    assert( tmp_class_creation_3__class == NULL );
    tmp_class_creation_3__class = tmp_assign_source_27;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 58;

        goto try_except_handler_7;
    }

    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_register_interface );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto try_except_handler_7;
    }
    tmp_args_element_name_21 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );

    if (unlikely( tmp_args_element_name_21 == NULL ))
    {
        tmp_args_element_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );
    }

    if ( tmp_args_element_name_21 == NULL )
    {
        Py_DECREF( tmp_called_name_16 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "CipherAlgorithm" );
        exception_tb = NULL;

        exception_lineno = 58;

        goto try_except_handler_7;
    }

    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 58;
    {
        PyObject *call_args[] = { tmp_args_element_name_21 };
        tmp_called_name_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
    }

    Py_DECREF( tmp_called_name_16 );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto try_except_handler_7;
    }
    tmp_args_element_name_22 = tmp_class_creation_3__class;

    CHECK_OBJECT( tmp_args_element_name_22 );
    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 58;
    {
        PyObject *call_args[] = { tmp_args_element_name_22 };
        tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_called_name_15 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_class_creation_3__class;
        assert( old != NULL );
        tmp_class_creation_3__class = tmp_assign_source_28;
        Py_DECREF( old );
    }

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 57;

        goto try_except_handler_7;
    }

    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_register_interface );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;

        goto try_except_handler_7;
    }
    tmp_args_element_name_23 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_BlockCipherAlgorithm );

    if (unlikely( tmp_args_element_name_23 == NULL ))
    {
        tmp_args_element_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BlockCipherAlgorithm );
    }

    if ( tmp_args_element_name_23 == NULL )
    {
        Py_DECREF( tmp_called_name_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "BlockCipherAlgorithm" );
        exception_tb = NULL;

        exception_lineno = 57;

        goto try_except_handler_7;
    }

    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 57;
    {
        PyObject *call_args[] = { tmp_args_element_name_23 };
        tmp_called_name_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_called_name_18 );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;

        goto try_except_handler_7;
    }
    tmp_args_element_name_24 = tmp_class_creation_3__class;

    CHECK_OBJECT( tmp_args_element_name_24 );
    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 57;
    {
        PyObject *call_args[] = { tmp_args_element_name_24 };
        tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
    }

    Py_DECREF( tmp_called_name_17 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;

        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_class_creation_3__class;
        assert( old != NULL );
        tmp_class_creation_3__class = tmp_assign_source_29;
        Py_DECREF( old );
    }

    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    tmp_assign_source_30 = tmp_class_creation_3__class;

    CHECK_OBJECT( tmp_assign_source_30 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_TripleDES, tmp_assign_source_30 );
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
    locals_Blowfish_78 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_87335604a4a83d266089f9a1aef4f588;
    tmp_res = PyDict_SetItem( locals_Blowfish_78, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_Blowfish;
    tmp_res = PyDict_SetItem( locals_Blowfish_78, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_64;
    tmp_res = PyDict_SetItem( locals_Blowfish_78, const_str_plain_block_size, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_frozenset_b37166fd9df1977e2d8b975a0483e7cb;
    tmp_res = PyDict_SetItem( locals_Blowfish_78, const_str_plain_key_sizes, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_8___init__(  );
    tmp_res = PyDict_SetItem( locals_Blowfish_78, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_378c57866b5fe74cca637311422418d3_5, codeobj_378c57866b5fe74cca637311422418d3, module_cryptography$hazmat$primitives$ciphers$algorithms, 0 );
    frame_378c57866b5fe74cca637311422418d3_5 = cache_frame_378c57866b5fe74cca637311422418d3_5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_378c57866b5fe74cca637311422418d3_5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_378c57866b5fe74cca637311422418d3_5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_19 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_25 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_9_key_size(  );
    frame_378c57866b5fe74cca637311422418d3_5->m_frame.f_lineno = 86;
    {
        PyObject *call_args[] = { tmp_args_element_name_25 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
    }

    Py_DECREF( tmp_args_element_name_25 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;

        goto frame_exception_exit_5;
    }
    tmp_res = PyDict_SetItem( locals_Blowfish_78, const_str_plain_key_size, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;

        goto frame_exception_exit_5;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_378c57866b5fe74cca637311422418d3_5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;

    frame_exception_exit_5:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_378c57866b5fe74cca637311422418d3_5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_378c57866b5fe74cca637311422418d3_5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_378c57866b5fe74cca637311422418d3_5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_378c57866b5fe74cca637311422418d3_5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_378c57866b5fe74cca637311422418d3_5,
        type_description_2
    );


    // Release cached frame.
    if ( frame_378c57866b5fe74cca637311422418d3_5 == cache_frame_378c57866b5fe74cca637311422418d3_5 )
    {
        Py_DECREF( frame_378c57866b5fe74cca637311422418d3_5 );
    }
    cache_frame_378c57866b5fe74cca637311422418d3_5 = NULL;

    assertFrameObject( frame_378c57866b5fe74cca637311422418d3_5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_4;

    frame_no_exception_4:;

    goto skip_nested_handling_4;
    nested_frame_exit_4:;

    goto try_except_handler_10;
    skip_nested_handling_4:;
    tmp_outline_return_value_4 = locals_Blowfish_78;
    Py_INCREF( tmp_outline_return_value_4 );
    goto try_return_handler_10;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_10:;
    Py_DECREF( locals_Blowfish_78 );
    locals_Blowfish_78 = NULL;
    goto outline_result_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_Blowfish_78 );
    locals_Blowfish_78 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto outline_exception_4;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_4:;
    exception_lineno = 78;
    goto try_except_handler_9;
    outline_result_4:;
    tmp_assign_source_31 = tmp_outline_return_value_4;
    assert( tmp_class_creation_4__class_dict == NULL );
    tmp_class_creation_4__class_dict = tmp_assign_source_31;

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
    tmp_assign_source_32 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;

        goto try_except_handler_9;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_assign_source_32 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_32 );
    condexpr_end_4:;
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_32;

    tmp_called_name_20 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_called_name_20 );
    tmp_args_element_name_26 = const_str_plain_Blowfish;
    tmp_args_element_name_27 = const_tuple_type_object_tuple;
    tmp_args_element_name_28 = tmp_class_creation_4__class_dict;

    CHECK_OBJECT( tmp_args_element_name_28 );
    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 78;
    {
        PyObject *call_args[] = { tmp_args_element_name_26, tmp_args_element_name_27, tmp_args_element_name_28 };
        tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_20, call_args );
    }

    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;

        goto try_except_handler_9;
    }
    assert( tmp_class_creation_4__class == NULL );
    tmp_class_creation_4__class = tmp_assign_source_33;

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 77;

        goto try_except_handler_9;
    }

    tmp_called_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_register_interface );
    if ( tmp_called_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;

        goto try_except_handler_9;
    }
    tmp_args_element_name_29 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );

    if (unlikely( tmp_args_element_name_29 == NULL ))
    {
        tmp_args_element_name_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );
    }

    if ( tmp_args_element_name_29 == NULL )
    {
        Py_DECREF( tmp_called_name_22 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "CipherAlgorithm" );
        exception_tb = NULL;

        exception_lineno = 77;

        goto try_except_handler_9;
    }

    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 77;
    {
        PyObject *call_args[] = { tmp_args_element_name_29 };
        tmp_called_name_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
    }

    Py_DECREF( tmp_called_name_22 );
    if ( tmp_called_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;

        goto try_except_handler_9;
    }
    tmp_args_element_name_30 = tmp_class_creation_4__class;

    CHECK_OBJECT( tmp_args_element_name_30 );
    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 77;
    {
        PyObject *call_args[] = { tmp_args_element_name_30 };
        tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
    }

    Py_DECREF( tmp_called_name_21 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;

        goto try_except_handler_9;
    }
    {
        PyObject *old = tmp_class_creation_4__class;
        assert( old != NULL );
        tmp_class_creation_4__class = tmp_assign_source_34;
        Py_DECREF( old );
    }

    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 76;

        goto try_except_handler_9;
    }

    tmp_called_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_register_interface );
    if ( tmp_called_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_9;
    }
    tmp_args_element_name_31 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_BlockCipherAlgorithm );

    if (unlikely( tmp_args_element_name_31 == NULL ))
    {
        tmp_args_element_name_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BlockCipherAlgorithm );
    }

    if ( tmp_args_element_name_31 == NULL )
    {
        Py_DECREF( tmp_called_name_24 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "BlockCipherAlgorithm" );
        exception_tb = NULL;

        exception_lineno = 76;

        goto try_except_handler_9;
    }

    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 76;
    {
        PyObject *call_args[] = { tmp_args_element_name_31 };
        tmp_called_name_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, call_args );
    }

    Py_DECREF( tmp_called_name_24 );
    if ( tmp_called_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_9;
    }
    tmp_args_element_name_32 = tmp_class_creation_4__class;

    CHECK_OBJECT( tmp_args_element_name_32 );
    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 76;
    {
        PyObject *call_args[] = { tmp_args_element_name_32 };
        tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
    }

    Py_DECREF( tmp_called_name_23 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_9;
    }
    {
        PyObject *old = tmp_class_creation_4__class;
        assert( old != NULL );
        tmp_class_creation_4__class = tmp_assign_source_35;
        Py_DECREF( old );
    }

    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
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
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    tmp_assign_source_36 = tmp_class_creation_4__class;

    CHECK_OBJECT( tmp_assign_source_36 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_Blowfish, tmp_assign_source_36 );
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
    locals_CAST5_93 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_87335604a4a83d266089f9a1aef4f588;
    tmp_res = PyDict_SetItem( locals_CAST5_93, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_CAST5;
    tmp_res = PyDict_SetItem( locals_CAST5_93, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_64;
    tmp_res = PyDict_SetItem( locals_CAST5_93, const_str_plain_block_size, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_frozenset_fe00a4f6ab944081e21008a0f74293d2;
    tmp_res = PyDict_SetItem( locals_CAST5_93, const_str_plain_key_sizes, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_10___init__(  );
    tmp_res = PyDict_SetItem( locals_CAST5_93, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fbab14c67064acbf2ec8cbdea9dae7ab_6, codeobj_fbab14c67064acbf2ec8cbdea9dae7ab, module_cryptography$hazmat$primitives$ciphers$algorithms, 0 );
    frame_fbab14c67064acbf2ec8cbdea9dae7ab_6 = cache_frame_fbab14c67064acbf2ec8cbdea9dae7ab_6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fbab14c67064acbf2ec8cbdea9dae7ab_6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fbab14c67064acbf2ec8cbdea9dae7ab_6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_25 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_33 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_11_key_size(  );
    frame_fbab14c67064acbf2ec8cbdea9dae7ab_6->m_frame.f_lineno = 101;
    {
        PyObject *call_args[] = { tmp_args_element_name_33 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, call_args );
    }

    Py_DECREF( tmp_args_element_name_33 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;

        goto frame_exception_exit_6;
    }
    tmp_res = PyDict_SetItem( locals_CAST5_93, const_str_plain_key_size, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;

        goto frame_exception_exit_6;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fbab14c67064acbf2ec8cbdea9dae7ab_6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_5;

    frame_exception_exit_6:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fbab14c67064acbf2ec8cbdea9dae7ab_6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fbab14c67064acbf2ec8cbdea9dae7ab_6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fbab14c67064acbf2ec8cbdea9dae7ab_6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fbab14c67064acbf2ec8cbdea9dae7ab_6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fbab14c67064acbf2ec8cbdea9dae7ab_6,
        type_description_2
    );


    // Release cached frame.
    if ( frame_fbab14c67064acbf2ec8cbdea9dae7ab_6 == cache_frame_fbab14c67064acbf2ec8cbdea9dae7ab_6 )
    {
        Py_DECREF( frame_fbab14c67064acbf2ec8cbdea9dae7ab_6 );
    }
    cache_frame_fbab14c67064acbf2ec8cbdea9dae7ab_6 = NULL;

    assertFrameObject( frame_fbab14c67064acbf2ec8cbdea9dae7ab_6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_5;

    frame_no_exception_5:;

    goto skip_nested_handling_5;
    nested_frame_exit_5:;

    goto try_except_handler_12;
    skip_nested_handling_5:;
    tmp_outline_return_value_5 = locals_CAST5_93;
    Py_INCREF( tmp_outline_return_value_5 );
    goto try_return_handler_12;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_12:;
    Py_DECREF( locals_CAST5_93 );
    locals_CAST5_93 = NULL;
    goto outline_result_5;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_CAST5_93 );
    locals_CAST5_93 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto outline_exception_5;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_5:;
    exception_lineno = 93;
    goto try_except_handler_11;
    outline_result_5:;
    tmp_assign_source_37 = tmp_outline_return_value_5;
    assert( tmp_class_creation_5__class_dict == NULL );
    tmp_class_creation_5__class_dict = tmp_assign_source_37;

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
    tmp_assign_source_38 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;

        goto try_except_handler_11;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_assign_source_38 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_38 );
    condexpr_end_5:;
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_38;

    tmp_called_name_26 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_called_name_26 );
    tmp_args_element_name_34 = const_str_plain_CAST5;
    tmp_args_element_name_35 = const_tuple_type_object_tuple;
    tmp_args_element_name_36 = tmp_class_creation_5__class_dict;

    CHECK_OBJECT( tmp_args_element_name_36 );
    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 93;
    {
        PyObject *call_args[] = { tmp_args_element_name_34, tmp_args_element_name_35, tmp_args_element_name_36 };
        tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_26, call_args );
    }

    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;

        goto try_except_handler_11;
    }
    assert( tmp_class_creation_5__class == NULL );
    tmp_class_creation_5__class = tmp_assign_source_39;

    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 92;

        goto try_except_handler_11;
    }

    tmp_called_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_register_interface );
    if ( tmp_called_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto try_except_handler_11;
    }
    tmp_args_element_name_37 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );

    if (unlikely( tmp_args_element_name_37 == NULL ))
    {
        tmp_args_element_name_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );
    }

    if ( tmp_args_element_name_37 == NULL )
    {
        Py_DECREF( tmp_called_name_28 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "CipherAlgorithm" );
        exception_tb = NULL;

        exception_lineno = 92;

        goto try_except_handler_11;
    }

    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 92;
    {
        PyObject *call_args[] = { tmp_args_element_name_37 };
        tmp_called_name_27 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_28, call_args );
    }

    Py_DECREF( tmp_called_name_28 );
    if ( tmp_called_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto try_except_handler_11;
    }
    tmp_args_element_name_38 = tmp_class_creation_5__class;

    CHECK_OBJECT( tmp_args_element_name_38 );
    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 92;
    {
        PyObject *call_args[] = { tmp_args_element_name_38 };
        tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_27, call_args );
    }

    Py_DECREF( tmp_called_name_27 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto try_except_handler_11;
    }
    {
        PyObject *old = tmp_class_creation_5__class;
        assert( old != NULL );
        tmp_class_creation_5__class = tmp_assign_source_40;
        Py_DECREF( old );
    }

    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 91;

        goto try_except_handler_11;
    }

    tmp_called_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_register_interface );
    if ( tmp_called_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;

        goto try_except_handler_11;
    }
    tmp_args_element_name_39 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_BlockCipherAlgorithm );

    if (unlikely( tmp_args_element_name_39 == NULL ))
    {
        tmp_args_element_name_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BlockCipherAlgorithm );
    }

    if ( tmp_args_element_name_39 == NULL )
    {
        Py_DECREF( tmp_called_name_30 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "BlockCipherAlgorithm" );
        exception_tb = NULL;

        exception_lineno = 91;

        goto try_except_handler_11;
    }

    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 91;
    {
        PyObject *call_args[] = { tmp_args_element_name_39 };
        tmp_called_name_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_30, call_args );
    }

    Py_DECREF( tmp_called_name_30 );
    if ( tmp_called_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;

        goto try_except_handler_11;
    }
    tmp_args_element_name_40 = tmp_class_creation_5__class;

    CHECK_OBJECT( tmp_args_element_name_40 );
    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 91;
    {
        PyObject *call_args[] = { tmp_args_element_name_40 };
        tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_29, call_args );
    }

    Py_DECREF( tmp_called_name_29 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;

        goto try_except_handler_11;
    }
    {
        PyObject *old = tmp_class_creation_5__class;
        assert( old != NULL );
        tmp_class_creation_5__class = tmp_assign_source_41;
        Py_DECREF( old );
    }

    goto try_end_7;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
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
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    tmp_assign_source_42 = tmp_class_creation_5__class;

    CHECK_OBJECT( tmp_assign_source_42 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_CAST5, tmp_assign_source_42 );
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
    locals_ARC4_107 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_87335604a4a83d266089f9a1aef4f588;
    tmp_res = PyDict_SetItem( locals_ARC4_107, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_RC4;
    tmp_res = PyDict_SetItem( locals_ARC4_107, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_frozenset_1abd2c5dc48294c2b53ccf2b12c895e9;
    tmp_res = PyDict_SetItem( locals_ARC4_107, const_str_plain_key_sizes, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_12___init__(  );
    tmp_res = PyDict_SetItem( locals_ARC4_107, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_88a494526fdd969adc4b07a72d9f9194_7, codeobj_88a494526fdd969adc4b07a72d9f9194, module_cryptography$hazmat$primitives$ciphers$algorithms, 0 );
    frame_88a494526fdd969adc4b07a72d9f9194_7 = cache_frame_88a494526fdd969adc4b07a72d9f9194_7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_88a494526fdd969adc4b07a72d9f9194_7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_88a494526fdd969adc4b07a72d9f9194_7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_31 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_41 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_13_key_size(  );
    frame_88a494526fdd969adc4b07a72d9f9194_7->m_frame.f_lineno = 114;
    {
        PyObject *call_args[] = { tmp_args_element_name_41 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_31, call_args );
    }

    Py_DECREF( tmp_args_element_name_41 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto frame_exception_exit_7;
    }
    tmp_res = PyDict_SetItem( locals_ARC4_107, const_str_plain_key_size, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto frame_exception_exit_7;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_88a494526fdd969adc4b07a72d9f9194_7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_6;

    frame_exception_exit_7:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_88a494526fdd969adc4b07a72d9f9194_7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_88a494526fdd969adc4b07a72d9f9194_7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_88a494526fdd969adc4b07a72d9f9194_7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_88a494526fdd969adc4b07a72d9f9194_7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_88a494526fdd969adc4b07a72d9f9194_7,
        type_description_2
    );


    // Release cached frame.
    if ( frame_88a494526fdd969adc4b07a72d9f9194_7 == cache_frame_88a494526fdd969adc4b07a72d9f9194_7 )
    {
        Py_DECREF( frame_88a494526fdd969adc4b07a72d9f9194_7 );
    }
    cache_frame_88a494526fdd969adc4b07a72d9f9194_7 = NULL;

    assertFrameObject( frame_88a494526fdd969adc4b07a72d9f9194_7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_6;

    frame_no_exception_6:;

    goto skip_nested_handling_6;
    nested_frame_exit_6:;

    goto try_except_handler_14;
    skip_nested_handling_6:;
    tmp_outline_return_value_6 = locals_ARC4_107;
    Py_INCREF( tmp_outline_return_value_6 );
    goto try_return_handler_14;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_14:;
    Py_DECREF( locals_ARC4_107 );
    locals_ARC4_107 = NULL;
    goto outline_result_6;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_ARC4_107 );
    locals_ARC4_107 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto outline_exception_6;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_6:;
    exception_lineno = 107;
    goto try_except_handler_13;
    outline_result_6:;
    tmp_assign_source_43 = tmp_outline_return_value_6;
    assert( tmp_class_creation_6__class_dict == NULL );
    tmp_class_creation_6__class_dict = tmp_assign_source_43;

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
    tmp_assign_source_44 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;

        goto try_except_handler_13;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_44 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_44 );
    condexpr_end_6:;
    assert( tmp_class_creation_6__metaclass == NULL );
    tmp_class_creation_6__metaclass = tmp_assign_source_44;

    tmp_called_name_32 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_called_name_32 );
    tmp_args_element_name_42 = const_str_plain_ARC4;
    tmp_args_element_name_43 = const_tuple_type_object_tuple;
    tmp_args_element_name_44 = tmp_class_creation_6__class_dict;

    CHECK_OBJECT( tmp_args_element_name_44 );
    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 107;
    {
        PyObject *call_args[] = { tmp_args_element_name_42, tmp_args_element_name_43, tmp_args_element_name_44 };
        tmp_assign_source_45 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_32, call_args );
    }

    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;

        goto try_except_handler_13;
    }
    assert( tmp_class_creation_6__class == NULL );
    tmp_class_creation_6__class = tmp_assign_source_45;

    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

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

        exception_lineno = 106;

        goto try_except_handler_13;
    }

    tmp_called_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_register_interface );
    if ( tmp_called_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;

        goto try_except_handler_13;
    }
    tmp_args_element_name_45 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );

    if (unlikely( tmp_args_element_name_45 == NULL ))
    {
        tmp_args_element_name_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );
    }

    if ( tmp_args_element_name_45 == NULL )
    {
        Py_DECREF( tmp_called_name_34 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "CipherAlgorithm" );
        exception_tb = NULL;

        exception_lineno = 106;

        goto try_except_handler_13;
    }

    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 106;
    {
        PyObject *call_args[] = { tmp_args_element_name_45 };
        tmp_called_name_33 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_34, call_args );
    }

    Py_DECREF( tmp_called_name_34 );
    if ( tmp_called_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;

        goto try_except_handler_13;
    }
    tmp_args_element_name_46 = tmp_class_creation_6__class;

    CHECK_OBJECT( tmp_args_element_name_46 );
    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 106;
    {
        PyObject *call_args[] = { tmp_args_element_name_46 };
        tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_33, call_args );
    }

    Py_DECREF( tmp_called_name_33 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;

        goto try_except_handler_13;
    }
    {
        PyObject *old = tmp_class_creation_6__class;
        assert( old != NULL );
        tmp_class_creation_6__class = tmp_assign_source_46;
        Py_DECREF( old );
    }

    goto try_end_8;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
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
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    tmp_assign_source_47 = tmp_class_creation_6__class;

    CHECK_OBJECT( tmp_assign_source_47 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_ARC4, tmp_assign_source_47 );
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
    locals_IDEA_120 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_87335604a4a83d266089f9a1aef4f588;
    tmp_res = PyDict_SetItem( locals_IDEA_120, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_IDEA;
    tmp_res = PyDict_SetItem( locals_IDEA_120, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_64;
    tmp_res = PyDict_SetItem( locals_IDEA_120, const_str_plain_block_size, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_frozenset_cf609eb9051a7250c9a68e22cef7d49d;
    tmp_res = PyDict_SetItem( locals_IDEA_120, const_str_plain_key_sizes, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_14___init__(  );
    tmp_res = PyDict_SetItem( locals_IDEA_120, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_491ddef574a04eaa713ed785b71d7ca3_8, codeobj_491ddef574a04eaa713ed785b71d7ca3, module_cryptography$hazmat$primitives$ciphers$algorithms, 0 );
    frame_491ddef574a04eaa713ed785b71d7ca3_8 = cache_frame_491ddef574a04eaa713ed785b71d7ca3_8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_491ddef574a04eaa713ed785b71d7ca3_8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_491ddef574a04eaa713ed785b71d7ca3_8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_35 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_47 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_15_key_size(  );
    frame_491ddef574a04eaa713ed785b71d7ca3_8->m_frame.f_lineno = 128;
    {
        PyObject *call_args[] = { tmp_args_element_name_47 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_35, call_args );
    }

    Py_DECREF( tmp_args_element_name_47 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;

        goto frame_exception_exit_8;
    }
    tmp_res = PyDict_SetItem( locals_IDEA_120, const_str_plain_key_size, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;

        goto frame_exception_exit_8;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_491ddef574a04eaa713ed785b71d7ca3_8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_7;

    frame_exception_exit_8:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_491ddef574a04eaa713ed785b71d7ca3_8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_491ddef574a04eaa713ed785b71d7ca3_8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_491ddef574a04eaa713ed785b71d7ca3_8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_491ddef574a04eaa713ed785b71d7ca3_8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_491ddef574a04eaa713ed785b71d7ca3_8,
        type_description_2
    );


    // Release cached frame.
    if ( frame_491ddef574a04eaa713ed785b71d7ca3_8 == cache_frame_491ddef574a04eaa713ed785b71d7ca3_8 )
    {
        Py_DECREF( frame_491ddef574a04eaa713ed785b71d7ca3_8 );
    }
    cache_frame_491ddef574a04eaa713ed785b71d7ca3_8 = NULL;

    assertFrameObject( frame_491ddef574a04eaa713ed785b71d7ca3_8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_7;

    frame_no_exception_7:;

    goto skip_nested_handling_7;
    nested_frame_exit_7:;

    goto try_except_handler_16;
    skip_nested_handling_7:;
    tmp_outline_return_value_7 = locals_IDEA_120;
    Py_INCREF( tmp_outline_return_value_7 );
    goto try_return_handler_16;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_16:;
    Py_DECREF( locals_IDEA_120 );
    locals_IDEA_120 = NULL;
    goto outline_result_7;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_IDEA_120 );
    locals_IDEA_120 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto outline_exception_7;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_7:;
    exception_lineno = 120;
    goto try_except_handler_15;
    outline_result_7:;
    tmp_assign_source_48 = tmp_outline_return_value_7;
    assert( tmp_class_creation_7__class_dict == NULL );
    tmp_class_creation_7__class_dict = tmp_assign_source_48;

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
    tmp_assign_source_49 = DICT_GET_ITEM( tmp_dict_name_7, tmp_key_name_7 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_15;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_assign_source_49 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_49 );
    condexpr_end_7:;
    assert( tmp_class_creation_7__metaclass == NULL );
    tmp_class_creation_7__metaclass = tmp_assign_source_49;

    tmp_called_name_36 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_called_name_36 );
    tmp_args_element_name_48 = const_str_plain_IDEA;
    tmp_args_element_name_49 = const_tuple_type_object_tuple;
    tmp_args_element_name_50 = tmp_class_creation_7__class_dict;

    CHECK_OBJECT( tmp_args_element_name_50 );
    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 120;
    {
        PyObject *call_args[] = { tmp_args_element_name_48, tmp_args_element_name_49, tmp_args_element_name_50 };
        tmp_assign_source_50 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_36, call_args );
    }

    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_15;
    }
    assert( tmp_class_creation_7__class == NULL );
    tmp_class_creation_7__class = tmp_assign_source_50;

    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

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

        exception_lineno = 119;

        goto try_except_handler_15;
    }

    tmp_called_name_38 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_register_interface );
    if ( tmp_called_name_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;

        goto try_except_handler_15;
    }
    tmp_args_element_name_51 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );

    if (unlikely( tmp_args_element_name_51 == NULL ))
    {
        tmp_args_element_name_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );
    }

    if ( tmp_args_element_name_51 == NULL )
    {
        Py_DECREF( tmp_called_name_38 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "CipherAlgorithm" );
        exception_tb = NULL;

        exception_lineno = 119;

        goto try_except_handler_15;
    }

    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 119;
    {
        PyObject *call_args[] = { tmp_args_element_name_51 };
        tmp_called_name_37 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_38, call_args );
    }

    Py_DECREF( tmp_called_name_38 );
    if ( tmp_called_name_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;

        goto try_except_handler_15;
    }
    tmp_args_element_name_52 = tmp_class_creation_7__class;

    CHECK_OBJECT( tmp_args_element_name_52 );
    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 119;
    {
        PyObject *call_args[] = { tmp_args_element_name_52 };
        tmp_assign_source_51 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_37, call_args );
    }

    Py_DECREF( tmp_called_name_37 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;

        goto try_except_handler_15;
    }
    {
        PyObject *old = tmp_class_creation_7__class;
        assert( old != NULL );
        tmp_class_creation_7__class = tmp_assign_source_51;
        Py_DECREF( old );
    }

    goto try_end_9;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
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
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    tmp_assign_source_52 = tmp_class_creation_7__class;

    CHECK_OBJECT( tmp_assign_source_52 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_IDEA, tmp_assign_source_52 );
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
    locals_SEED_135 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_87335604a4a83d266089f9a1aef4f588;
    tmp_res = PyDict_SetItem( locals_SEED_135, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_SEED;
    tmp_res = PyDict_SetItem( locals_SEED_135, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_128;
    tmp_res = PyDict_SetItem( locals_SEED_135, const_str_plain_block_size, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_frozenset_cf609eb9051a7250c9a68e22cef7d49d;
    tmp_res = PyDict_SetItem( locals_SEED_135, const_str_plain_key_sizes, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_16___init__(  );
    tmp_res = PyDict_SetItem( locals_SEED_135, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_78cfa2e577b8e5a1a4764aed365e5f05_9, codeobj_78cfa2e577b8e5a1a4764aed365e5f05, module_cryptography$hazmat$primitives$ciphers$algorithms, 0 );
    frame_78cfa2e577b8e5a1a4764aed365e5f05_9 = cache_frame_78cfa2e577b8e5a1a4764aed365e5f05_9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_78cfa2e577b8e5a1a4764aed365e5f05_9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_78cfa2e577b8e5a1a4764aed365e5f05_9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_39 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_53 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_17_key_size(  );
    frame_78cfa2e577b8e5a1a4764aed365e5f05_9->m_frame.f_lineno = 143;
    {
        PyObject *call_args[] = { tmp_args_element_name_53 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_39, call_args );
    }

    Py_DECREF( tmp_args_element_name_53 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;

        goto frame_exception_exit_9;
    }
    tmp_res = PyDict_SetItem( locals_SEED_135, const_str_plain_key_size, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;

        goto frame_exception_exit_9;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_78cfa2e577b8e5a1a4764aed365e5f05_9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_8;

    frame_exception_exit_9:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_78cfa2e577b8e5a1a4764aed365e5f05_9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_78cfa2e577b8e5a1a4764aed365e5f05_9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_78cfa2e577b8e5a1a4764aed365e5f05_9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_78cfa2e577b8e5a1a4764aed365e5f05_9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_78cfa2e577b8e5a1a4764aed365e5f05_9,
        type_description_2
    );


    // Release cached frame.
    if ( frame_78cfa2e577b8e5a1a4764aed365e5f05_9 == cache_frame_78cfa2e577b8e5a1a4764aed365e5f05_9 )
    {
        Py_DECREF( frame_78cfa2e577b8e5a1a4764aed365e5f05_9 );
    }
    cache_frame_78cfa2e577b8e5a1a4764aed365e5f05_9 = NULL;

    assertFrameObject( frame_78cfa2e577b8e5a1a4764aed365e5f05_9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_8;

    frame_no_exception_8:;

    goto skip_nested_handling_8;
    nested_frame_exit_8:;

    goto try_except_handler_18;
    skip_nested_handling_8:;
    tmp_outline_return_value_8 = locals_SEED_135;
    Py_INCREF( tmp_outline_return_value_8 );
    goto try_return_handler_18;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_18:;
    Py_DECREF( locals_SEED_135 );
    locals_SEED_135 = NULL;
    goto outline_result_8;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_SEED_135 );
    locals_SEED_135 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto outline_exception_8;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_8:;
    exception_lineno = 135;
    goto try_except_handler_17;
    outline_result_8:;
    tmp_assign_source_53 = tmp_outline_return_value_8;
    assert( tmp_class_creation_8__class_dict == NULL );
    tmp_class_creation_8__class_dict = tmp_assign_source_53;

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
    tmp_assign_source_54 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;

        goto try_except_handler_17;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_assign_source_54 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_54 );
    condexpr_end_8:;
    assert( tmp_class_creation_8__metaclass == NULL );
    tmp_class_creation_8__metaclass = tmp_assign_source_54;

    tmp_called_name_40 = tmp_class_creation_8__metaclass;

    CHECK_OBJECT( tmp_called_name_40 );
    tmp_args_element_name_54 = const_str_plain_SEED;
    tmp_args_element_name_55 = const_tuple_type_object_tuple;
    tmp_args_element_name_56 = tmp_class_creation_8__class_dict;

    CHECK_OBJECT( tmp_args_element_name_56 );
    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 135;
    {
        PyObject *call_args[] = { tmp_args_element_name_54, tmp_args_element_name_55, tmp_args_element_name_56 };
        tmp_assign_source_55 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_40, call_args );
    }

    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;

        goto try_except_handler_17;
    }
    assert( tmp_class_creation_8__class == NULL );
    tmp_class_creation_8__class = tmp_assign_source_55;

    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

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

        exception_lineno = 134;

        goto try_except_handler_17;
    }

    tmp_called_name_42 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_register_interface );
    if ( tmp_called_name_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;

        goto try_except_handler_17;
    }
    tmp_args_element_name_57 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );

    if (unlikely( tmp_args_element_name_57 == NULL ))
    {
        tmp_args_element_name_57 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );
    }

    if ( tmp_args_element_name_57 == NULL )
    {
        Py_DECREF( tmp_called_name_42 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "CipherAlgorithm" );
        exception_tb = NULL;

        exception_lineno = 134;

        goto try_except_handler_17;
    }

    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 134;
    {
        PyObject *call_args[] = { tmp_args_element_name_57 };
        tmp_called_name_41 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_42, call_args );
    }

    Py_DECREF( tmp_called_name_42 );
    if ( tmp_called_name_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;

        goto try_except_handler_17;
    }
    tmp_args_element_name_58 = tmp_class_creation_8__class;

    CHECK_OBJECT( tmp_args_element_name_58 );
    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 134;
    {
        PyObject *call_args[] = { tmp_args_element_name_58 };
        tmp_assign_source_56 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_41, call_args );
    }

    Py_DECREF( tmp_called_name_41 );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;

        goto try_except_handler_17;
    }
    {
        PyObject *old = tmp_class_creation_8__class;
        assert( old != NULL );
        tmp_class_creation_8__class = tmp_assign_source_56;
        Py_DECREF( old );
    }

    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

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

        exception_lineno = 133;

        goto try_except_handler_17;
    }

    tmp_called_name_44 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_register_interface );
    if ( tmp_called_name_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_17;
    }
    tmp_args_element_name_59 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_BlockCipherAlgorithm );

    if (unlikely( tmp_args_element_name_59 == NULL ))
    {
        tmp_args_element_name_59 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BlockCipherAlgorithm );
    }

    if ( tmp_args_element_name_59 == NULL )
    {
        Py_DECREF( tmp_called_name_44 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "BlockCipherAlgorithm" );
        exception_tb = NULL;

        exception_lineno = 133;

        goto try_except_handler_17;
    }

    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 133;
    {
        PyObject *call_args[] = { tmp_args_element_name_59 };
        tmp_called_name_43 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_44, call_args );
    }

    Py_DECREF( tmp_called_name_44 );
    if ( tmp_called_name_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_17;
    }
    tmp_args_element_name_60 = tmp_class_creation_8__class;

    CHECK_OBJECT( tmp_args_element_name_60 );
    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 133;
    {
        PyObject *call_args[] = { tmp_args_element_name_60 };
        tmp_assign_source_57 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_43, call_args );
    }

    Py_DECREF( tmp_called_name_43 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_17;
    }
    {
        PyObject *old = tmp_class_creation_8__class;
        assert( old != NULL );
        tmp_class_creation_8__class = tmp_assign_source_57;
        Py_DECREF( old );
    }

    goto try_end_10;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
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
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    tmp_assign_source_58 = tmp_class_creation_8__class;

    CHECK_OBJECT( tmp_assign_source_58 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_SEED, tmp_assign_source_58 );
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
    locals_ChaCha20_150 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_87335604a4a83d266089f9a1aef4f588;
    tmp_res = PyDict_SetItem( locals_ChaCha20_150, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_ChaCha20;
    tmp_res = PyDict_SetItem( locals_ChaCha20_150, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_frozenset_aece287703bf6a0e8bbd4620f66d4fcd;
    tmp_res = PyDict_SetItem( locals_ChaCha20_150, const_str_plain_key_sizes, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_18___init__(  );
    tmp_res = PyDict_SetItem( locals_ChaCha20_150, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2ee44661858e4354ca7317a3f55639cf_10, codeobj_2ee44661858e4354ca7317a3f55639cf, module_cryptography$hazmat$primitives$ciphers$algorithms, 0 );
    frame_2ee44661858e4354ca7317a3f55639cf_10 = cache_frame_2ee44661858e4354ca7317a3f55639cf_10;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2ee44661858e4354ca7317a3f55639cf_10 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2ee44661858e4354ca7317a3f55639cf_10 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 163;

        goto frame_exception_exit_10;
    }

    frame_2ee44661858e4354ca7317a3f55639cf_10->m_frame.f_lineno = 163;
    tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_read_only_property, &PyTuple_GET_ITEM( const_tuple_str_plain__nonce_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;

        goto frame_exception_exit_10;
    }
    tmp_res = PyDict_SetItem( locals_ChaCha20_150, const_str_plain_nonce, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;

        goto frame_exception_exit_10;
    }
    tmp_called_name_45 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_61 = MAKE_FUNCTION_cryptography$hazmat$primitives$ciphers$algorithms$$$function_19_key_size(  );
    frame_2ee44661858e4354ca7317a3f55639cf_10->m_frame.f_lineno = 165;
    {
        PyObject *call_args[] = { tmp_args_element_name_61 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_45, call_args );
    }

    Py_DECREF( tmp_args_element_name_61 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;

        goto frame_exception_exit_10;
    }
    tmp_res = PyDict_SetItem( locals_ChaCha20_150, const_str_plain_key_size, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;

        goto frame_exception_exit_10;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2ee44661858e4354ca7317a3f55639cf_10 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_9;

    frame_exception_exit_10:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2ee44661858e4354ca7317a3f55639cf_10 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2ee44661858e4354ca7317a3f55639cf_10, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2ee44661858e4354ca7317a3f55639cf_10->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2ee44661858e4354ca7317a3f55639cf_10, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2ee44661858e4354ca7317a3f55639cf_10,
        type_description_2
    );


    // Release cached frame.
    if ( frame_2ee44661858e4354ca7317a3f55639cf_10 == cache_frame_2ee44661858e4354ca7317a3f55639cf_10 )
    {
        Py_DECREF( frame_2ee44661858e4354ca7317a3f55639cf_10 );
    }
    cache_frame_2ee44661858e4354ca7317a3f55639cf_10 = NULL;

    assertFrameObject( frame_2ee44661858e4354ca7317a3f55639cf_10 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_9;

    frame_no_exception_9:;

    goto skip_nested_handling_9;
    nested_frame_exit_9:;

    goto try_except_handler_20;
    skip_nested_handling_9:;
    tmp_outline_return_value_9 = locals_ChaCha20_150;
    Py_INCREF( tmp_outline_return_value_9 );
    goto try_return_handler_20;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_20:;
    Py_DECREF( locals_ChaCha20_150 );
    locals_ChaCha20_150 = NULL;
    goto outline_result_9;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_ChaCha20_150 );
    locals_ChaCha20_150 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto outline_exception_9;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$ciphers$algorithms );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_9:;
    exception_lineno = 150;
    goto try_except_handler_19;
    outline_result_9:;
    tmp_assign_source_59 = tmp_outline_return_value_9;
    assert( tmp_class_creation_9__class_dict == NULL );
    tmp_class_creation_9__class_dict = tmp_assign_source_59;

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
    tmp_assign_source_60 = DICT_GET_ITEM( tmp_dict_name_9, tmp_key_name_9 );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;

        goto try_except_handler_19;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_assign_source_60 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_60 );
    condexpr_end_9:;
    assert( tmp_class_creation_9__metaclass == NULL );
    tmp_class_creation_9__metaclass = tmp_assign_source_60;

    tmp_called_name_46 = tmp_class_creation_9__metaclass;

    CHECK_OBJECT( tmp_called_name_46 );
    tmp_args_element_name_62 = const_str_plain_ChaCha20;
    tmp_args_element_name_63 = const_tuple_type_object_tuple;
    tmp_args_element_name_64 = tmp_class_creation_9__class_dict;

    CHECK_OBJECT( tmp_args_element_name_64 );
    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 150;
    {
        PyObject *call_args[] = { tmp_args_element_name_62, tmp_args_element_name_63, tmp_args_element_name_64 };
        tmp_assign_source_61 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_46, call_args );
    }

    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;

        goto try_except_handler_19;
    }
    assert( tmp_class_creation_9__class == NULL );
    tmp_class_creation_9__class = tmp_assign_source_61;

    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

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

        exception_lineno = 149;

        goto try_except_handler_19;
    }

    tmp_called_name_48 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_register_interface );
    if ( tmp_called_name_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;

        goto try_except_handler_19;
    }
    tmp_args_element_name_65 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_ModeWithNonce );

    if (unlikely( tmp_args_element_name_65 == NULL ))
    {
        tmp_args_element_name_65 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ModeWithNonce );
    }

    if ( tmp_args_element_name_65 == NULL )
    {
        Py_DECREF( tmp_called_name_48 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ModeWithNonce" );
        exception_tb = NULL;

        exception_lineno = 149;

        goto try_except_handler_19;
    }

    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 149;
    {
        PyObject *call_args[] = { tmp_args_element_name_65 };
        tmp_called_name_47 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_48, call_args );
    }

    Py_DECREF( tmp_called_name_48 );
    if ( tmp_called_name_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;

        goto try_except_handler_19;
    }
    tmp_args_element_name_66 = tmp_class_creation_9__class;

    CHECK_OBJECT( tmp_args_element_name_66 );
    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 149;
    {
        PyObject *call_args[] = { tmp_args_element_name_66 };
        tmp_assign_source_62 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_47, call_args );
    }

    Py_DECREF( tmp_called_name_47 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;

        goto try_except_handler_19;
    }
    {
        PyObject *old = tmp_class_creation_9__class;
        assert( old != NULL );
        tmp_class_creation_9__class = tmp_assign_source_62;
        Py_DECREF( old );
    }

    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_utils );

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

        exception_lineno = 148;

        goto try_except_handler_19;
    }

    tmp_called_name_50 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_register_interface );
    if ( tmp_called_name_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;

        goto try_except_handler_19;
    }
    tmp_args_element_name_67 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );

    if (unlikely( tmp_args_element_name_67 == NULL ))
    {
        tmp_args_element_name_67 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CipherAlgorithm );
    }

    if ( tmp_args_element_name_67 == NULL )
    {
        Py_DECREF( tmp_called_name_50 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "CipherAlgorithm" );
        exception_tb = NULL;

        exception_lineno = 148;

        goto try_except_handler_19;
    }

    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 148;
    {
        PyObject *call_args[] = { tmp_args_element_name_67 };
        tmp_called_name_49 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_50, call_args );
    }

    Py_DECREF( tmp_called_name_50 );
    if ( tmp_called_name_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;

        goto try_except_handler_19;
    }
    tmp_args_element_name_68 = tmp_class_creation_9__class;

    CHECK_OBJECT( tmp_args_element_name_68 );
    frame_5c2e62abefb9be015949e318722291f4->m_frame.f_lineno = 148;
    {
        PyObject *call_args[] = { tmp_args_element_name_68 };
        tmp_assign_source_63 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_49, call_args );
    }

    Py_DECREF( tmp_called_name_49 );
    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;

        goto try_except_handler_19;
    }
    {
        PyObject *old = tmp_class_creation_9__class;
        assert( old != NULL );
        tmp_class_creation_9__class = tmp_assign_source_63;
        Py_DECREF( old );
    }

    goto try_end_11;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
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
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5c2e62abefb9be015949e318722291f4 );
#endif
    popFrameStack();

    assertFrameObject( frame_5c2e62abefb9be015949e318722291f4 );

    goto frame_no_exception_10;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5c2e62abefb9be015949e318722291f4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5c2e62abefb9be015949e318722291f4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5c2e62abefb9be015949e318722291f4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5c2e62abefb9be015949e318722291f4, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_10:;
    tmp_assign_source_64 = tmp_class_creation_9__class;

    CHECK_OBJECT( tmp_assign_source_64 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$ciphers$algorithms, (Nuitka_StringObject *)const_str_plain_ChaCha20, tmp_assign_source_64 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__class );
    Py_DECREF( tmp_class_creation_9__class );
    tmp_class_creation_9__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__class_dict );
    Py_DECREF( tmp_class_creation_9__class_dict );
    tmp_class_creation_9__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__metaclass );
    Py_DECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;


    return MOD_RETURN_VALUE( module_cryptography$hazmat$primitives$ciphers$algorithms );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
