/* Generated code for Python source for module 'cryptography.hazmat.primitives.asymmetric.dh'
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

/* The _module_cryptography$hazmat$primitives$asymmetric$dh is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$primitives$asymmetric$dh;
PyDictObject *moduledict_cryptography$hazmat$primitives$asymmetric$dh;

/* The module constants used, if any. */
extern PyObject *const_str_digest_d85ec4ee6a6c677ceb63d9756226d9fc;
extern PyObject *const_str_plain_private_bytes;
extern PyObject *const_tuple_type_object_tuple;
static PyObject *const_str_digest_6b693132b6601d190c2def65fcfddb26;
extern PyObject *const_tuple_str_plain_self_str_plain_other_tuple;
extern PyObject *const_str_digest_33a8284036d6b35d11086a7fe76f8758;
extern PyObject *const_dict_empty;
static PyObject *const_str_digest_92f228bfe45cba9b32c7a0cf30b0618f;
extern PyObject *const_str_plain__p;
extern PyObject *const_str_plain__q;
extern PyObject *const_str_plain__x;
extern PyObject *const_str_plain__y;
extern PyObject *const_str_plain__g;
extern PyObject *const_str_plain_DHParametersWithSerialization;
static PyObject *const_str_digest_ef9256a902c2217e55f925ea50f06968;
static PyObject *const_str_plain_DHPublicKey;
extern PyObject *const_tuple_str_plain_self_str_plain_y_str_plain_parameter_numbers_tuple;
extern PyObject *const_str_plain_generate_parameters;
extern PyObject *const_str_plain_abstractproperty;
extern PyObject *const_str_plain_private_numbers;
extern PyObject *const_str_plain_parameters;
extern PyObject *const_str_plain_parameter_numbers;
extern PyObject *const_str_plain___ne__;
static PyObject *const_str_digest_3e42afc332a868f7eb7eff00f96833e1;
extern PyObject *const_str_plain_abstractmethod;
extern PyObject *const_str_plain_self;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_6d7070533b17c41014e7637331553bd8;
static PyObject *const_str_digest_bf058aa74ca7440d193c60f3bbe3aebd;
extern PyObject *const_str_plain_peer_public_key;
static PyObject *const_str_digest_1fa1eec5db733e50367dce431b7f7d18;
extern PyObject *const_tuple_str_plain_self_str_plain_p_str_plain_g_str_plain_q_tuple;
extern PyObject *const_str_plain_generate_dh_parameters;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_key_size;
extern PyObject *const_str_plain_read_only_property;
extern PyObject *const_str_plain_DHPrivateKeyWithSerialization;
extern PyObject *const_str_plain_DHPublicNumbers;
extern PyObject *const_tuple_str_plain_utils_tuple;
extern PyObject *const_str_plain_backend;
extern PyObject *const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple;
extern PyObject *const_str_plain_DHParameterNumbers;
extern PyObject *const_str_plain_private_key;
static PyObject *const_str_digest_f31fc374fcad40ecdda334c987a4bbac;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_abc;
extern PyObject *const_tuple_str_plain_self_str_plain_backend_tuple;
static PyObject *const_tuple_str_plain_generator_str_plain_key_size_str_plain_backend_tuple;
extern PyObject *const_tuple_str_plain__p_tuple;
static PyObject *const_str_digest_eda73c9f6a62990e4515ea2983cb051f;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_encoding;
extern PyObject *const_tuple_str_plain__g_tuple;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_encryption_algorithm;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_tuple_str_plain__public_numbers_tuple;
static PyObject *const_str_digest_9de521ee984dae1f96685628ec722581;
extern PyObject *const_str_plain__parameter_numbers;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_utils;
extern PyObject *const_tuple_str_plain__parameter_numbers_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_x_str_plain_public_numbers_tuple;
extern PyObject *const_str_plain_load_dh_public_numbers;
static PyObject *const_str_digest_b0bbc2f2f621a806ab4bc326bb45800b;
static PyObject *const_str_digest_15721c25e7ca324166b8ad5d2be649c2;
extern PyObject *const_str_plain__public_numbers;
extern PyObject *const_str_plain___eq__;
static PyObject *const_str_digest_9a1a4a9b9627d9d4301792fad7c520c7;
extern PyObject *const_str_plain_other;
static PyObject *const_str_digest_3961202544eefe3d541af41d5a164a3e;
extern PyObject *const_str_plain_generate_private_key;
static PyObject *const_str_digest_e28eecbfa7ae84d95da99ea6f875d4e4;
extern PyObject *const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple;
extern PyObject *const_str_plain_DHPrivateNumbers;
extern PyObject *const_str_plain_g;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_y;
extern PyObject *const_tuple_str_plain_self_str_plain_peer_public_key_tuple;
extern PyObject *const_str_plain_integer_types;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_plain_q;
extern PyObject *const_str_plain_public_key;
extern PyObject *const_str_plain_generator;
extern PyObject *const_str_plain_cryptography;
static PyObject *const_str_plain_DHPrivateKey;
extern PyObject *const_tuple_str_plain__x_tuple;
static PyObject *const_str_digest_da52a43600f05ed082368db8460d9d54;
static PyObject *const_str_plain_DHParameters;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_DHPublicKeyWithSerialization;
extern PyObject *const_str_plain_load_dh_parameter_numbers;
extern PyObject *const_str_plain_public_numbers;
extern PyObject *const_str_plain_exchange;
extern PyObject *const_str_plain_parameter_bytes;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_six;
extern PyObject *const_str_plain_division;
static PyObject *const_str_digest_bdd0178a2b211e9207e92ae6a2e28857;
extern PyObject *const_str_plain_load_dh_private_numbers;
extern PyObject *const_tuple_str_plain__y_tuple;
extern PyObject *const_str_plain_public_bytes;
static PyObject *const_str_digest_331bd8a1e3ca56014272e7e59fed2791;
static PyObject *const_str_digest_15ee95ab6193a087be99fa834f4ab688;
extern PyObject *const_str_plain_add_metaclass;
extern PyObject *const_tuple_str_plain__q_tuple;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_ABCMeta;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_6b693132b6601d190c2def65fcfddb26 = UNSTREAM_STRING( &constant_bin[ 673451 ], 47, 0 );
    const_str_digest_92f228bfe45cba9b32c7a0cf30b0618f = UNSTREAM_STRING( &constant_bin[ 673498 ], 21, 0 );
    const_str_digest_ef9256a902c2217e55f925ea50f06968 = UNSTREAM_STRING( &constant_bin[ 673519 ], 61, 0 );
    const_str_plain_DHPublicKey = UNSTREAM_STRING( &constant_bin[ 642046 ], 11, 1 );
    const_str_digest_3e42afc332a868f7eb7eff00f96833e1 = UNSTREAM_STRING( &constant_bin[ 673580 ], 45, 0 );
    const_str_digest_6d7070533b17c41014e7637331553bd8 = UNSTREAM_STRING( &constant_bin[ 673625 ], 110, 0 );
    const_str_digest_bf058aa74ca7440d193c60f3bbe3aebd = UNSTREAM_STRING( &constant_bin[ 673735 ], 75, 0 );
    const_str_digest_1fa1eec5db733e50367dce431b7f7d18 = UNSTREAM_STRING( &constant_bin[ 673810 ], 33, 0 );
    const_str_digest_f31fc374fcad40ecdda334c987a4bbac = UNSTREAM_STRING( &constant_bin[ 673843 ], 55, 0 );
    const_tuple_str_plain_generator_str_plain_key_size_str_plain_backend_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_generator_str_plain_key_size_str_plain_backend_tuple, 0, const_str_plain_generator ); Py_INCREF( const_str_plain_generator );
    PyTuple_SET_ITEM( const_tuple_str_plain_generator_str_plain_key_size_str_plain_backend_tuple, 1, const_str_plain_key_size ); Py_INCREF( const_str_plain_key_size );
    PyTuple_SET_ITEM( const_tuple_str_plain_generator_str_plain_key_size_str_plain_backend_tuple, 2, const_str_plain_backend ); Py_INCREF( const_str_plain_backend );
    const_str_digest_eda73c9f6a62990e4515ea2983cb051f = UNSTREAM_STRING( &constant_bin[ 673898 ], 25, 0 );
    const_str_digest_9de521ee984dae1f96685628ec722581 = UNSTREAM_STRING( &constant_bin[ 673923 ], 54, 0 );
    const_str_digest_b0bbc2f2f621a806ab4bc326bb45800b = UNSTREAM_STRING( &constant_bin[ 673977 ], 53, 0 );
    const_str_digest_15721c25e7ca324166b8ad5d2be649c2 = UNSTREAM_STRING( &constant_bin[ 674030 ], 21, 0 );
    const_str_digest_9a1a4a9b9627d9d4301792fad7c520c7 = UNSTREAM_STRING( &constant_bin[ 674051 ], 67, 0 );
    const_str_digest_3961202544eefe3d541af41d5a164a3e = UNSTREAM_STRING( &constant_bin[ 674118 ], 53, 0 );
    const_str_digest_e28eecbfa7ae84d95da99ea6f875d4e4 = UNSTREAM_STRING( &constant_bin[ 674171 ], 44, 0 );
    const_str_plain_DHPrivateKey = UNSTREAM_STRING( &constant_bin[ 641050 ], 12, 1 );
    const_str_digest_da52a43600f05ed082368db8460d9d54 = UNSTREAM_STRING( &constant_bin[ 674215 ], 47, 0 );
    const_str_plain_DHParameters = UNSTREAM_STRING( &constant_bin[ 640918 ], 12, 1 );
    const_str_digest_bdd0178a2b211e9207e92ae6a2e28857 = UNSTREAM_STRING( &constant_bin[ 674262 ], 24, 0 );
    const_str_digest_331bd8a1e3ca56014272e7e59fed2791 = UNSTREAM_STRING( &constant_bin[ 674286 ], 74, 0 );
    const_str_digest_15ee95ab6193a087be99fa834f4ab688 = UNSTREAM_STRING( &constant_bin[ 673985 ], 44, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$hazmat$primitives$asymmetric$dh( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_528801395dc53d0377b045d5310a1fa4;
static PyCodeObject *codeobj_62eee2e33158e6aafcbf42af0a061803;
static PyCodeObject *codeobj_a00f210fd96f9b7bc1a810efd8dc131f;
static PyCodeObject *codeobj_9f06e38d1ac517a33b79cc2ff1b034aa;
static PyCodeObject *codeobj_67a913406ac7f45dce05a619a5219f20;
static PyCodeObject *codeobj_d7a9fc9d671ef0fb6fe7543b14738784;
static PyCodeObject *codeobj_8775807d24a860dcf3435f4f8fa9f5cb;
static PyCodeObject *codeobj_c416efa7f631379f1843a975fea3ad4d;
static PyCodeObject *codeobj_1ddfd0cbf0fd521a8bdaae355e8df00d;
static PyCodeObject *codeobj_42582f041529bf52cdf6f5cf3e08d38f;
static PyCodeObject *codeobj_afd4590195f57638ac007204d54accc5;
static PyCodeObject *codeobj_4a7bc2a6d82a8e309c2f29eba6ac03c8;
static PyCodeObject *codeobj_d7be33b8d0c78c02bad195fda1fb9469;
static PyCodeObject *codeobj_bc9f580cb0fd1b6644c0a99ddcf5b236;
static PyCodeObject *codeobj_62ba98115b8c6b98cad4a13518cb1aa4;
static PyCodeObject *codeobj_14cae9da01038946c722c204269c037c;
static PyCodeObject *codeobj_fdde8bdde3289191e9642e0d1bd6bcb3;
static PyCodeObject *codeobj_fd6eb61ec464e364de5059979b9bea2e;
static PyCodeObject *codeobj_9666b1f02befeaf37baaec3b15d16827;
static PyCodeObject *codeobj_0720b2dc18a2531329e3bc20d9a1611f;
static PyCodeObject *codeobj_f96de94bce4922f1f5d1a7d109b390f4;
static PyCodeObject *codeobj_147748d44b292f2a35d13efff4556b08;
static PyCodeObject *codeobj_2d80c15a3c6a37a0f67137e04f4c86c0;
static PyCodeObject *codeobj_bd6bce2f1ec4ce576927213701aa48b3;
static PyCodeObject *codeobj_79d731d068b95539c3398fc87f0b9834;
static PyCodeObject *codeobj_a3cea5dfb618fb456834be90bbfac6f1;
static PyCodeObject *codeobj_a52526f7d3c1aabeb30e82f4a2776529;
static PyCodeObject *codeobj_f9c36638b76d83f1b750b5546574e1e0;
static PyCodeObject *codeobj_15df92a2687051aff364a281e2af5785;
static PyCodeObject *codeobj_84b0d566211dabbaf99dc4106c94526d;
static PyCodeObject *codeobj_f0d1e88f12245125d8bec8e4eafe8cdd;
static PyCodeObject *codeobj_906a3d6516d5979b4ff34464558c921e;
static PyCodeObject *codeobj_35949df0de4c01c2e989ed9c9b5e5687;
static PyCodeObject *codeobj_2e652e398d13294e2af9cb1093acccdb;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_da52a43600f05ed082368db8460d9d54 );
    codeobj_528801395dc53d0377b045d5310a1fa4 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_b0bbc2f2f621a806ab4bc326bb45800b, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_62eee2e33158e6aafcbf42af0a061803 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_DHParameterNumbers, 80, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a00f210fd96f9b7bc1a810efd8dc131f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_DHParameters, 119, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9f06e38d1ac517a33b79cc2ff1b034aa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_DHPrivateKey, 143, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_67a913406ac7f45dce05a619a5219f20 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_DHPrivateKeyWithSerialization, 171, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d7a9fc9d671ef0fb6fe7543b14738784 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_DHPrivateNumbers, 18, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8775807d24a860dcf3435f4f8fa9f5cb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_DHPublicKey, 186, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c416efa7f631379f1843a975fea3ad4d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_DHPublicNumbers, 49, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1ddfd0cbf0fd521a8bdaae355e8df00d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___eq__, 30, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_42582f041529bf52cdf6f5cf3e08d38f = MAKE_CODEOBJ( module_filename_obj, const_str_plain___eq__, 61, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_afd4590195f57638ac007204d54accc5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___eq__, 97, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4a7bc2a6d82a8e309c2f29eba6ac03c8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 19, const_tuple_str_plain_self_str_plain_x_str_plain_public_numbers_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d7be33b8d0c78c02bad195fda1fb9469 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 50, const_tuple_str_plain_self_str_plain_y_str_plain_parameter_numbers_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_bc9f580cb0fd1b6644c0a99ddcf5b236 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 81, const_tuple_str_plain_self_str_plain_p_str_plain_g_str_plain_q_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_62ba98115b8c6b98cad4a13518cb1aa4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___ne__, 39, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_14cae9da01038946c722c204269c037c = MAKE_CODEOBJ( module_filename_obj, const_str_plain___ne__, 70, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fdde8bdde3289191e9642e0d1bd6bcb3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___ne__, 107, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fd6eb61ec464e364de5059979b9bea2e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_exchange, 162, const_tuple_str_plain_self_str_plain_peer_public_key_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9666b1f02befeaf37baaec3b15d16827 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generate_parameters, 14, const_tuple_str_plain_generator_str_plain_key_size_str_plain_backend_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0720b2dc18a2531329e3bc20d9a1611f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generate_private_key, 120, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f96de94bce4922f1f5d1a7d109b390f4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_key_size, 144, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_147748d44b292f2a35d13efff4556b08 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_key_size, 187, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2d80c15a3c6a37a0f67137e04f4c86c0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parameter_bytes, 126, const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple, 3, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_bd6bce2f1ec4ce576927213701aa48b3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parameter_numbers, 132, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_79d731d068b95539c3398fc87f0b9834 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parameters, 110, const_tuple_str_plain_self_str_plain_backend_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a3cea5dfb618fb456834be90bbfac6f1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parameters, 156, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a52526f7d3c1aabeb30e82f4a2776529 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parameters, 193, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f9c36638b76d83f1b750b5546574e1e0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_private_bytes, 178, const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple, 4, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_15df92a2687051aff364a281e2af5785 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_private_key, 42, const_tuple_str_plain_self_str_plain_backend_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_84b0d566211dabbaf99dc4106c94526d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_private_numbers, 172, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f0d1e88f12245125d8bec8e4eafe8cdd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_public_bytes, 205, const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple, 3, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_906a3d6516d5979b4ff34464558c921e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_public_key, 73, const_tuple_str_plain_self_str_plain_backend_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_35949df0de4c01c2e989ed9c9b5e5687 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_public_key, 150, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2e652e398d13294e2af9cb1093acccdb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_public_numbers, 199, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_10___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_11___eq__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_12___ne__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_13_parameters(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_14_generate_private_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_15_parameter_bytes(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_16_parameter_numbers(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_17_key_size(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_18_public_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_19_parameters(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_1_generate_parameters(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_20_exchange(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_21_private_numbers(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_22_private_bytes(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_23_key_size(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_24_parameters(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_25_public_numbers(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_26_public_bytes(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_2___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_3___eq__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_4___ne__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_5_private_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_6___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_7___eq__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_8___ne__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_9_public_key(  );


// The module function definitions.
static PyObject *impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_1_generate_parameters( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_generator = python_pars[ 0 ];
    PyObject *par_key_size = python_pars[ 1 ];
    PyObject *par_backend = python_pars[ 2 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_9666b1f02befeaf37baaec3b15d16827 = NULL;

    struct Nuitka_FrameObject *frame_9666b1f02befeaf37baaec3b15d16827;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9666b1f02befeaf37baaec3b15d16827, codeobj_9666b1f02befeaf37baaec3b15d16827, module_cryptography$hazmat$primitives$asymmetric$dh, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9666b1f02befeaf37baaec3b15d16827 = cache_frame_9666b1f02befeaf37baaec3b15d16827;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9666b1f02befeaf37baaec3b15d16827 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9666b1f02befeaf37baaec3b15d16827 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_backend;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_generator;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_key_size;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_9666b1f02befeaf37baaec3b15d16827->m_frame.f_lineno = 15;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_generate_dh_parameters, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9666b1f02befeaf37baaec3b15d16827 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9666b1f02befeaf37baaec3b15d16827 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9666b1f02befeaf37baaec3b15d16827 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9666b1f02befeaf37baaec3b15d16827, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9666b1f02befeaf37baaec3b15d16827->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9666b1f02befeaf37baaec3b15d16827, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9666b1f02befeaf37baaec3b15d16827,
        type_description_1,
        par_generator,
        par_key_size,
        par_backend
    );


    // Release cached frame.
    if ( frame_9666b1f02befeaf37baaec3b15d16827 == cache_frame_9666b1f02befeaf37baaec3b15d16827 )
    {
        Py_DECREF( frame_9666b1f02befeaf37baaec3b15d16827 );
    }
    cache_frame_9666b1f02befeaf37baaec3b15d16827 = NULL;

    assertFrameObject( frame_9666b1f02befeaf37baaec3b15d16827 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_1_generate_parameters );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_key_size );
    Py_DECREF( par_key_size );
    par_key_size = NULL;

    CHECK_OBJECT( (PyObject *)par_generator );
    Py_DECREF( par_generator );
    par_generator = NULL;

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

    CHECK_OBJECT( (PyObject *)par_key_size );
    Py_DECREF( par_key_size );
    par_key_size = NULL;

    CHECK_OBJECT( (PyObject *)par_generator );
    Py_DECREF( par_generator );
    par_generator = NULL;

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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_1_generate_parameters );
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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_2___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_x = python_pars[ 1 ];
    PyObject *par_public_numbers = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_4a7bc2a6d82a8e309c2f29eba6ac03c8 = NULL;

    struct Nuitka_FrameObject *frame_4a7bc2a6d82a8e309c2f29eba6ac03c8;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4a7bc2a6d82a8e309c2f29eba6ac03c8, codeobj_4a7bc2a6d82a8e309c2f29eba6ac03c8, module_cryptography$hazmat$primitives$asymmetric$dh, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4a7bc2a6d82a8e309c2f29eba6ac03c8 = cache_frame_4a7bc2a6d82a8e309c2f29eba6ac03c8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4a7bc2a6d82a8e309c2f29eba6ac03c8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4a7bc2a6d82a8e309c2f29eba6ac03c8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_x;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "six" );
        exception_tb = NULL;

        exception_lineno = 20;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_integer_types );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_92f228bfe45cba9b32c7a0cf30b0618f;
    frame_4a7bc2a6d82a8e309c2f29eba6ac03c8->m_frame.f_lineno = 21;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 21;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_isinstance_inst_2 = par_public_numbers;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_DHPublicNumbers );

    if (unlikely( tmp_isinstance_cls_2 == NULL ))
    {
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DHPublicNumbers );
    }

    if ( tmp_isinstance_cls_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "DHPublicNumbers" );
        exception_tb = NULL;

        exception_lineno = 23;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_2 = const_str_digest_9de521ee984dae1f96685628ec722581;
    frame_4a7bc2a6d82a8e309c2f29eba6ac03c8->m_frame.f_lineno = 24;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 24;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_assattr_name_1 = par_x;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__x, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_public_numbers;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__public_numbers, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4a7bc2a6d82a8e309c2f29eba6ac03c8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4a7bc2a6d82a8e309c2f29eba6ac03c8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4a7bc2a6d82a8e309c2f29eba6ac03c8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4a7bc2a6d82a8e309c2f29eba6ac03c8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4a7bc2a6d82a8e309c2f29eba6ac03c8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4a7bc2a6d82a8e309c2f29eba6ac03c8,
        type_description_1,
        par_self,
        par_x,
        par_public_numbers
    );


    // Release cached frame.
    if ( frame_4a7bc2a6d82a8e309c2f29eba6ac03c8 == cache_frame_4a7bc2a6d82a8e309c2f29eba6ac03c8 )
    {
        Py_DECREF( frame_4a7bc2a6d82a8e309c2f29eba6ac03c8 );
    }
    cache_frame_4a7bc2a6d82a8e309c2f29eba6ac03c8 = NULL;

    assertFrameObject( frame_4a7bc2a6d82a8e309c2f29eba6ac03c8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_2___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_public_numbers );
    Py_DECREF( par_public_numbers );
    par_public_numbers = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_public_numbers );
    Py_DECREF( par_public_numbers );
    par_public_numbers = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_2___init__ );
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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_3___eq__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
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
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    static struct Nuitka_FrameObject *cache_frame_1ddfd0cbf0fd521a8bdaae355e8df00d = NULL;

    struct Nuitka_FrameObject *frame_1ddfd0cbf0fd521a8bdaae355e8df00d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1ddfd0cbf0fd521a8bdaae355e8df00d, codeobj_1ddfd0cbf0fd521a8bdaae355e8df00d, module_cryptography$hazmat$primitives$asymmetric$dh, sizeof(void *)+sizeof(void *) );
    frame_1ddfd0cbf0fd521a8bdaae355e8df00d = cache_frame_1ddfd0cbf0fd521a8bdaae355e8df00d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1ddfd0cbf0fd521a8bdaae355e8df00d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1ddfd0cbf0fd521a8bdaae355e8df00d ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_other;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_DHPrivateNumbers );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DHPrivateNumbers );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "DHPrivateNumbers" );
        exception_tb = NULL;

        exception_lineno = 31;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_NotImplemented;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__x );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_other;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__x );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 35;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 36;
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
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__public_numbers );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_other;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__public_numbers );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        exception_lineno = 36;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_return_value = tmp_and_left_value_1;
    and_end_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1ddfd0cbf0fd521a8bdaae355e8df00d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1ddfd0cbf0fd521a8bdaae355e8df00d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1ddfd0cbf0fd521a8bdaae355e8df00d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1ddfd0cbf0fd521a8bdaae355e8df00d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1ddfd0cbf0fd521a8bdaae355e8df00d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1ddfd0cbf0fd521a8bdaae355e8df00d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1ddfd0cbf0fd521a8bdaae355e8df00d,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_1ddfd0cbf0fd521a8bdaae355e8df00d == cache_frame_1ddfd0cbf0fd521a8bdaae355e8df00d )
    {
        Py_DECREF( frame_1ddfd0cbf0fd521a8bdaae355e8df00d );
    }
    cache_frame_1ddfd0cbf0fd521a8bdaae355e8df00d = NULL;

    assertFrameObject( frame_1ddfd0cbf0fd521a8bdaae355e8df00d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_3___eq__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_3___eq__ );
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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_4___ne__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_62ba98115b8c6b98cad4a13518cb1aa4 = NULL;

    struct Nuitka_FrameObject *frame_62ba98115b8c6b98cad4a13518cb1aa4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_62ba98115b8c6b98cad4a13518cb1aa4, codeobj_62ba98115b8c6b98cad4a13518cb1aa4, module_cryptography$hazmat$primitives$asymmetric$dh, sizeof(void *)+sizeof(void *) );
    frame_62ba98115b8c6b98cad4a13518cb1aa4 = cache_frame_62ba98115b8c6b98cad4a13518cb1aa4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_62ba98115b8c6b98cad4a13518cb1aa4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_62ba98115b8c6b98cad4a13518cb1aa4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compexpr_left_1 = par_self;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = par_other;

    CHECK_OBJECT( tmp_compexpr_right_1 );
    tmp_operand_name_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_62ba98115b8c6b98cad4a13518cb1aa4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_62ba98115b8c6b98cad4a13518cb1aa4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_62ba98115b8c6b98cad4a13518cb1aa4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_62ba98115b8c6b98cad4a13518cb1aa4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_62ba98115b8c6b98cad4a13518cb1aa4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_62ba98115b8c6b98cad4a13518cb1aa4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_62ba98115b8c6b98cad4a13518cb1aa4,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_62ba98115b8c6b98cad4a13518cb1aa4 == cache_frame_62ba98115b8c6b98cad4a13518cb1aa4 )
    {
        Py_DECREF( frame_62ba98115b8c6b98cad4a13518cb1aa4 );
    }
    cache_frame_62ba98115b8c6b98cad4a13518cb1aa4 = NULL;

    assertFrameObject( frame_62ba98115b8c6b98cad4a13518cb1aa4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_4___ne__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_4___ne__ );
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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_5_private_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_backend = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_15df92a2687051aff364a281e2af5785 = NULL;

    struct Nuitka_FrameObject *frame_15df92a2687051aff364a281e2af5785;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_15df92a2687051aff364a281e2af5785, codeobj_15df92a2687051aff364a281e2af5785, module_cryptography$hazmat$primitives$asymmetric$dh, sizeof(void *)+sizeof(void *) );
    frame_15df92a2687051aff364a281e2af5785 = cache_frame_15df92a2687051aff364a281e2af5785;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_15df92a2687051aff364a281e2af5785 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_15df92a2687051aff364a281e2af5785 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_backend;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_15df92a2687051aff364a281e2af5785->m_frame.f_lineno = 43;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_load_dh_private_numbers, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_15df92a2687051aff364a281e2af5785 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_15df92a2687051aff364a281e2af5785 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_15df92a2687051aff364a281e2af5785 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_15df92a2687051aff364a281e2af5785, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_15df92a2687051aff364a281e2af5785->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_15df92a2687051aff364a281e2af5785, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_15df92a2687051aff364a281e2af5785,
        type_description_1,
        par_self,
        par_backend
    );


    // Release cached frame.
    if ( frame_15df92a2687051aff364a281e2af5785 == cache_frame_15df92a2687051aff364a281e2af5785 )
    {
        Py_DECREF( frame_15df92a2687051aff364a281e2af5785 );
    }
    cache_frame_15df92a2687051aff364a281e2af5785 = NULL;

    assertFrameObject( frame_15df92a2687051aff364a281e2af5785 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_5_private_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_5_private_key );
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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_6___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_y = python_pars[ 1 ];
    PyObject *par_parameter_numbers = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_d7be33b8d0c78c02bad195fda1fb9469 = NULL;

    struct Nuitka_FrameObject *frame_d7be33b8d0c78c02bad195fda1fb9469;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d7be33b8d0c78c02bad195fda1fb9469, codeobj_d7be33b8d0c78c02bad195fda1fb9469, module_cryptography$hazmat$primitives$asymmetric$dh, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d7be33b8d0c78c02bad195fda1fb9469 = cache_frame_d7be33b8d0c78c02bad195fda1fb9469;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d7be33b8d0c78c02bad195fda1fb9469 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d7be33b8d0c78c02bad195fda1fb9469 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_y;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "six" );
        exception_tb = NULL;

        exception_lineno = 51;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_integer_types );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_15721c25e7ca324166b8ad5d2be649c2;
    frame_d7be33b8d0c78c02bad195fda1fb9469->m_frame.f_lineno = 52;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 52;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_isinstance_inst_2 = par_parameter_numbers;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_DHParameterNumbers );

    if (unlikely( tmp_isinstance_cls_2 == NULL ))
    {
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DHParameterNumbers );
    }

    if ( tmp_isinstance_cls_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "DHParameterNumbers" );
        exception_tb = NULL;

        exception_lineno = 54;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_2 = const_str_digest_3961202544eefe3d541af41d5a164a3e;
    frame_d7be33b8d0c78c02bad195fda1fb9469->m_frame.f_lineno = 55;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 55;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_assattr_name_1 = par_y;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__y, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_parameter_numbers;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__parameter_numbers, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d7be33b8d0c78c02bad195fda1fb9469 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d7be33b8d0c78c02bad195fda1fb9469 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d7be33b8d0c78c02bad195fda1fb9469, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d7be33b8d0c78c02bad195fda1fb9469->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d7be33b8d0c78c02bad195fda1fb9469, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d7be33b8d0c78c02bad195fda1fb9469,
        type_description_1,
        par_self,
        par_y,
        par_parameter_numbers
    );


    // Release cached frame.
    if ( frame_d7be33b8d0c78c02bad195fda1fb9469 == cache_frame_d7be33b8d0c78c02bad195fda1fb9469 )
    {
        Py_DECREF( frame_d7be33b8d0c78c02bad195fda1fb9469 );
    }
    cache_frame_d7be33b8d0c78c02bad195fda1fb9469 = NULL;

    assertFrameObject( frame_d7be33b8d0c78c02bad195fda1fb9469 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_6___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_parameter_numbers );
    Py_DECREF( par_parameter_numbers );
    par_parameter_numbers = NULL;

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

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_parameter_numbers );
    Py_DECREF( par_parameter_numbers );
    par_parameter_numbers = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_6___init__ );
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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_7___eq__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
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
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    static struct Nuitka_FrameObject *cache_frame_42582f041529bf52cdf6f5cf3e08d38f = NULL;

    struct Nuitka_FrameObject *frame_42582f041529bf52cdf6f5cf3e08d38f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_42582f041529bf52cdf6f5cf3e08d38f, codeobj_42582f041529bf52cdf6f5cf3e08d38f, module_cryptography$hazmat$primitives$asymmetric$dh, sizeof(void *)+sizeof(void *) );
    frame_42582f041529bf52cdf6f5cf3e08d38f = cache_frame_42582f041529bf52cdf6f5cf3e08d38f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_42582f041529bf52cdf6f5cf3e08d38f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_42582f041529bf52cdf6f5cf3e08d38f ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_other;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_DHPublicNumbers );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DHPublicNumbers );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "DHPublicNumbers" );
        exception_tb = NULL;

        exception_lineno = 62;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_NotImplemented;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__y );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_other;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__y );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 66;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
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
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__parameter_numbers );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_other;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__parameter_numbers );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        exception_lineno = 67;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_return_value = tmp_and_left_value_1;
    and_end_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_42582f041529bf52cdf6f5cf3e08d38f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_42582f041529bf52cdf6f5cf3e08d38f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_42582f041529bf52cdf6f5cf3e08d38f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_42582f041529bf52cdf6f5cf3e08d38f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_42582f041529bf52cdf6f5cf3e08d38f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_42582f041529bf52cdf6f5cf3e08d38f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_42582f041529bf52cdf6f5cf3e08d38f,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_42582f041529bf52cdf6f5cf3e08d38f == cache_frame_42582f041529bf52cdf6f5cf3e08d38f )
    {
        Py_DECREF( frame_42582f041529bf52cdf6f5cf3e08d38f );
    }
    cache_frame_42582f041529bf52cdf6f5cf3e08d38f = NULL;

    assertFrameObject( frame_42582f041529bf52cdf6f5cf3e08d38f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_7___eq__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_7___eq__ );
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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_8___ne__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_14cae9da01038946c722c204269c037c = NULL;

    struct Nuitka_FrameObject *frame_14cae9da01038946c722c204269c037c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_14cae9da01038946c722c204269c037c, codeobj_14cae9da01038946c722c204269c037c, module_cryptography$hazmat$primitives$asymmetric$dh, sizeof(void *)+sizeof(void *) );
    frame_14cae9da01038946c722c204269c037c = cache_frame_14cae9da01038946c722c204269c037c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_14cae9da01038946c722c204269c037c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_14cae9da01038946c722c204269c037c ) == 2 ); // Frame stack

    // Framed code:
    tmp_compexpr_left_1 = par_self;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = par_other;

    CHECK_OBJECT( tmp_compexpr_right_1 );
    tmp_operand_name_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_14cae9da01038946c722c204269c037c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_14cae9da01038946c722c204269c037c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_14cae9da01038946c722c204269c037c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_14cae9da01038946c722c204269c037c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_14cae9da01038946c722c204269c037c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_14cae9da01038946c722c204269c037c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_14cae9da01038946c722c204269c037c,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_14cae9da01038946c722c204269c037c == cache_frame_14cae9da01038946c722c204269c037c )
    {
        Py_DECREF( frame_14cae9da01038946c722c204269c037c );
    }
    cache_frame_14cae9da01038946c722c204269c037c = NULL;

    assertFrameObject( frame_14cae9da01038946c722c204269c037c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_8___ne__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_8___ne__ );
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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_9_public_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_backend = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_906a3d6516d5979b4ff34464558c921e = NULL;

    struct Nuitka_FrameObject *frame_906a3d6516d5979b4ff34464558c921e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_906a3d6516d5979b4ff34464558c921e, codeobj_906a3d6516d5979b4ff34464558c921e, module_cryptography$hazmat$primitives$asymmetric$dh, sizeof(void *)+sizeof(void *) );
    frame_906a3d6516d5979b4ff34464558c921e = cache_frame_906a3d6516d5979b4ff34464558c921e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_906a3d6516d5979b4ff34464558c921e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_906a3d6516d5979b4ff34464558c921e ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_backend;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_906a3d6516d5979b4ff34464558c921e->m_frame.f_lineno = 74;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_load_dh_public_numbers, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_906a3d6516d5979b4ff34464558c921e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_906a3d6516d5979b4ff34464558c921e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_906a3d6516d5979b4ff34464558c921e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_906a3d6516d5979b4ff34464558c921e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_906a3d6516d5979b4ff34464558c921e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_906a3d6516d5979b4ff34464558c921e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_906a3d6516d5979b4ff34464558c921e,
        type_description_1,
        par_self,
        par_backend
    );


    // Release cached frame.
    if ( frame_906a3d6516d5979b4ff34464558c921e == cache_frame_906a3d6516d5979b4ff34464558c921e )
    {
        Py_DECREF( frame_906a3d6516d5979b4ff34464558c921e );
    }
    cache_frame_906a3d6516d5979b4ff34464558c921e = NULL;

    assertFrameObject( frame_906a3d6516d5979b4ff34464558c921e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_9_public_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_9_public_key );
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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_10___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_cls_3;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_isinstance_inst_3;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    PyObject *tmp_operand_name_3;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_bc9f580cb0fd1b6644c0a99ddcf5b236 = NULL;

    struct Nuitka_FrameObject *frame_bc9f580cb0fd1b6644c0a99ddcf5b236;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bc9f580cb0fd1b6644c0a99ddcf5b236, codeobj_bc9f580cb0fd1b6644c0a99ddcf5b236, module_cryptography$hazmat$primitives$asymmetric$dh, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bc9f580cb0fd1b6644c0a99ddcf5b236 = cache_frame_bc9f580cb0fd1b6644c0a99ddcf5b236;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bc9f580cb0fd1b6644c0a99ddcf5b236 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bc9f580cb0fd1b6644c0a99ddcf5b236 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_p;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "six" );
        exception_tb = NULL;

        exception_lineno = 83;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_integer_types );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_operand_name_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_isinstance_inst_2 = par_g;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "six" );
        exception_tb = NULL;

        exception_lineno = 84;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_integer_types );
    if ( tmp_isinstance_cls_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_operand_name_2 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    Py_DECREF( tmp_isinstance_cls_2 );
    if ( tmp_operand_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_or_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_bdd0178a2b211e9207e92ae6a2e28857;
    frame_bc9f580cb0fd1b6644c0a99ddcf5b236->m_frame.f_lineno = 86;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 86;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_compexpr_left_1 = par_q;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = Py_None;
    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 != tmp_compexpr_right_1 );
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    assert( !(tmp_and_left_truth_1 == -1) );
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_isinstance_inst_3 = par_q;

    CHECK_OBJECT( tmp_isinstance_inst_3 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "six" );
        exception_tb = NULL;

        exception_lineno = 87;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_integer_types );
    if ( tmp_isinstance_cls_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_operand_name_3 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
    Py_DECREF( tmp_isinstance_cls_3 );
    if ( tmp_operand_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_3 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_2 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_2 = const_str_digest_eda73c9f6a62990e4515ea2983cb051f;
    frame_bc9f580cb0fd1b6644c0a99ddcf5b236->m_frame.f_lineno = 88;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 88;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_compare_left_1 = par_g;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_pos_2;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
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
    tmp_make_exception_arg_3 = const_str_digest_1fa1eec5db733e50367dce431b7f7d18;
    frame_bc9f580cb0fd1b6644c0a99ddcf5b236->m_frame.f_lineno = 91;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 91;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_assattr_name_1 = par_p;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__p, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_g;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__g, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_q;

    CHECK_OBJECT( tmp_assattr_name_3 );
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__q, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bc9f580cb0fd1b6644c0a99ddcf5b236 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bc9f580cb0fd1b6644c0a99ddcf5b236 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bc9f580cb0fd1b6644c0a99ddcf5b236, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bc9f580cb0fd1b6644c0a99ddcf5b236->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bc9f580cb0fd1b6644c0a99ddcf5b236, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bc9f580cb0fd1b6644c0a99ddcf5b236,
        type_description_1,
        par_self,
        par_p,
        par_g,
        par_q
    );


    // Release cached frame.
    if ( frame_bc9f580cb0fd1b6644c0a99ddcf5b236 == cache_frame_bc9f580cb0fd1b6644c0a99ddcf5b236 )
    {
        Py_DECREF( frame_bc9f580cb0fd1b6644c0a99ddcf5b236 );
    }
    cache_frame_bc9f580cb0fd1b6644c0a99ddcf5b236 = NULL;

    assertFrameObject( frame_bc9f580cb0fd1b6644c0a99ddcf5b236 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_10___init__ );
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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_10___init__ );
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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_11___eq__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    static struct Nuitka_FrameObject *cache_frame_afd4590195f57638ac007204d54accc5 = NULL;

    struct Nuitka_FrameObject *frame_afd4590195f57638ac007204d54accc5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_afd4590195f57638ac007204d54accc5, codeobj_afd4590195f57638ac007204d54accc5, module_cryptography$hazmat$primitives$asymmetric$dh, sizeof(void *)+sizeof(void *) );
    frame_afd4590195f57638ac007204d54accc5 = cache_frame_afd4590195f57638ac007204d54accc5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_afd4590195f57638ac007204d54accc5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_afd4590195f57638ac007204d54accc5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_other;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_DHParameterNumbers );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DHParameterNumbers );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "DHParameterNumbers" );
        exception_tb = NULL;

        exception_lineno = 98;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_NotImplemented;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__p );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_other;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__p );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 102;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 104;
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
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__g );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_other;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__g );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        exception_lineno = 103;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_2 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 104;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    Py_DECREF( tmp_and_left_value_2 );
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__q );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_other;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__q );
    if ( tmp_compexpr_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_3 );

        exception_lineno = 104;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_2 = RICH_COMPARE_EQ( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    Py_DECREF( tmp_compexpr_right_3 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_and_right_value_1 = tmp_and_left_value_2;
    and_end_2:;
    tmp_return_value = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_return_value = tmp_and_left_value_1;
    and_end_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_afd4590195f57638ac007204d54accc5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_afd4590195f57638ac007204d54accc5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_afd4590195f57638ac007204d54accc5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_afd4590195f57638ac007204d54accc5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_afd4590195f57638ac007204d54accc5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_afd4590195f57638ac007204d54accc5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_afd4590195f57638ac007204d54accc5,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_afd4590195f57638ac007204d54accc5 == cache_frame_afd4590195f57638ac007204d54accc5 )
    {
        Py_DECREF( frame_afd4590195f57638ac007204d54accc5 );
    }
    cache_frame_afd4590195f57638ac007204d54accc5 = NULL;

    assertFrameObject( frame_afd4590195f57638ac007204d54accc5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_11___eq__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_11___eq__ );
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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_12___ne__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_fdde8bdde3289191e9642e0d1bd6bcb3 = NULL;

    struct Nuitka_FrameObject *frame_fdde8bdde3289191e9642e0d1bd6bcb3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fdde8bdde3289191e9642e0d1bd6bcb3, codeobj_fdde8bdde3289191e9642e0d1bd6bcb3, module_cryptography$hazmat$primitives$asymmetric$dh, sizeof(void *)+sizeof(void *) );
    frame_fdde8bdde3289191e9642e0d1bd6bcb3 = cache_frame_fdde8bdde3289191e9642e0d1bd6bcb3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fdde8bdde3289191e9642e0d1bd6bcb3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fdde8bdde3289191e9642e0d1bd6bcb3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compexpr_left_1 = par_self;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = par_other;

    CHECK_OBJECT( tmp_compexpr_right_1 );
    tmp_operand_name_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fdde8bdde3289191e9642e0d1bd6bcb3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fdde8bdde3289191e9642e0d1bd6bcb3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fdde8bdde3289191e9642e0d1bd6bcb3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fdde8bdde3289191e9642e0d1bd6bcb3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fdde8bdde3289191e9642e0d1bd6bcb3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fdde8bdde3289191e9642e0d1bd6bcb3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fdde8bdde3289191e9642e0d1bd6bcb3,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_fdde8bdde3289191e9642e0d1bd6bcb3 == cache_frame_fdde8bdde3289191e9642e0d1bd6bcb3 )
    {
        Py_DECREF( frame_fdde8bdde3289191e9642e0d1bd6bcb3 );
    }
    cache_frame_fdde8bdde3289191e9642e0d1bd6bcb3 = NULL;

    assertFrameObject( frame_fdde8bdde3289191e9642e0d1bd6bcb3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_12___ne__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_12___ne__ );
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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_13_parameters( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_backend = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_79d731d068b95539c3398fc87f0b9834 = NULL;

    struct Nuitka_FrameObject *frame_79d731d068b95539c3398fc87f0b9834;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_79d731d068b95539c3398fc87f0b9834, codeobj_79d731d068b95539c3398fc87f0b9834, module_cryptography$hazmat$primitives$asymmetric$dh, sizeof(void *)+sizeof(void *) );
    frame_79d731d068b95539c3398fc87f0b9834 = cache_frame_79d731d068b95539c3398fc87f0b9834;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_79d731d068b95539c3398fc87f0b9834 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_79d731d068b95539c3398fc87f0b9834 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_backend;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_79d731d068b95539c3398fc87f0b9834->m_frame.f_lineno = 111;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_load_dh_parameter_numbers, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_79d731d068b95539c3398fc87f0b9834 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_79d731d068b95539c3398fc87f0b9834 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_79d731d068b95539c3398fc87f0b9834 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_79d731d068b95539c3398fc87f0b9834, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_79d731d068b95539c3398fc87f0b9834->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_79d731d068b95539c3398fc87f0b9834, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_79d731d068b95539c3398fc87f0b9834,
        type_description_1,
        par_self,
        par_backend
    );


    // Release cached frame.
    if ( frame_79d731d068b95539c3398fc87f0b9834 == cache_frame_79d731d068b95539c3398fc87f0b9834 )
    {
        Py_DECREF( frame_79d731d068b95539c3398fc87f0b9834 );
    }
    cache_frame_79d731d068b95539c3398fc87f0b9834 = NULL;

    assertFrameObject( frame_79d731d068b95539c3398fc87f0b9834 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_13_parameters );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_13_parameters );
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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_14_generate_private_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_14_generate_private_key );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_14_generate_private_key );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_15_parameter_bytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_encoding = python_pars[ 1 ];
    PyObject *par_format = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_15_parameter_bytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_15_parameter_bytes );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_16_parameter_numbers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_16_parameter_numbers );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_16_parameter_numbers );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_17_key_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_17_key_size );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_17_key_size );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_18_public_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_18_public_key );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_18_public_key );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_19_parameters( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_19_parameters );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_19_parameters );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_20_exchange( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_peer_public_key = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_20_exchange );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_peer_public_key );
    Py_DECREF( par_peer_public_key );
    par_peer_public_key = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_peer_public_key );
    Py_DECREF( par_peer_public_key );
    par_peer_public_key = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_20_exchange );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_21_private_numbers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_21_private_numbers );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_21_private_numbers );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_22_private_bytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_encoding = python_pars[ 1 ];
    PyObject *par_format = python_pars[ 2 ];
    PyObject *par_encryption_algorithm = python_pars[ 3 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_22_private_bytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_encryption_algorithm );
    Py_DECREF( par_encryption_algorithm );
    par_encryption_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_encryption_algorithm );
    Py_DECREF( par_encryption_algorithm );
    par_encryption_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_22_private_bytes );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_23_key_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_23_key_size );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_23_key_size );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_24_parameters( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_24_parameters );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_24_parameters );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_25_public_numbers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_25_public_numbers );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_25_public_numbers );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_26_public_bytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_encoding = python_pars[ 1 ];
    PyObject *par_format = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_26_public_bytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh$$$function_26_public_bytes );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_10___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_10___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bc9f580cb0fd1b6644c0a99ddcf5b236,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dh,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_11___eq__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_11___eq__,
        const_str_plain___eq__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_afd4590195f57638ac007204d54accc5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dh,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_12___ne__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_12___ne__,
        const_str_plain___ne__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fdde8bdde3289191e9642e0d1bd6bcb3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dh,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_13_parameters(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_13_parameters,
        const_str_plain_parameters,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_79d731d068b95539c3398fc87f0b9834,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dh,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_14_generate_private_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_14_generate_private_key,
        const_str_plain_generate_private_key,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0720b2dc18a2531329e3bc20d9a1611f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dh,
        const_str_digest_f31fc374fcad40ecdda334c987a4bbac,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_15_parameter_bytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_15_parameter_bytes,
        const_str_plain_parameter_bytes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2d80c15a3c6a37a0f67137e04f4c86c0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dh,
        const_str_digest_ef9256a902c2217e55f925ea50f06968,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_16_parameter_numbers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_16_parameter_numbers,
        const_str_plain_parameter_numbers,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bd6bce2f1ec4ce576927213701aa48b3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dh,
        const_str_digest_6b693132b6601d190c2def65fcfddb26,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_17_key_size(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_17_key_size,
        const_str_plain_key_size,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f96de94bce4922f1f5d1a7d109b390f4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dh,
        const_str_digest_33a8284036d6b35d11086a7fe76f8758,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_18_public_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_18_public_key,
        const_str_plain_public_key,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_35949df0de4c01c2e989ed9c9b5e5687,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dh,
        const_str_digest_9a1a4a9b9627d9d4301792fad7c520c7,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_19_parameters(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_19_parameters,
        const_str_plain_parameters,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a3cea5dfb618fb456834be90bbfac6f1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dh,
        const_str_digest_bf058aa74ca7440d193c60f3bbe3aebd,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_1_generate_parameters(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_1_generate_parameters,
        const_str_plain_generate_parameters,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9666b1f02befeaf37baaec3b15d16827,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dh,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_20_exchange(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_20_exchange,
        const_str_plain_exchange,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fd6eb61ec464e364de5059979b9bea2e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dh,
        const_str_digest_6d7070533b17c41014e7637331553bd8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_21_private_numbers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_21_private_numbers,
        const_str_plain_private_numbers,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_84b0d566211dabbaf99dc4106c94526d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dh,
        const_str_digest_3e42afc332a868f7eb7eff00f96833e1,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_22_private_bytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_22_private_bytes,
        const_str_plain_private_bytes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f9c36638b76d83f1b750b5546574e1e0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dh,
        const_str_digest_d85ec4ee6a6c677ceb63d9756226d9fc,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_23_key_size(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_23_key_size,
        const_str_plain_key_size,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_147748d44b292f2a35d13efff4556b08,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dh,
        const_str_digest_33a8284036d6b35d11086a7fe76f8758,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_24_parameters(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_24_parameters,
        const_str_plain_parameters,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a52526f7d3c1aabeb30e82f4a2776529,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dh,
        const_str_digest_331bd8a1e3ca56014272e7e59fed2791,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_25_public_numbers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_25_public_numbers,
        const_str_plain_public_numbers,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2e652e398d13294e2af9cb1093acccdb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dh,
        const_str_digest_e28eecbfa7ae84d95da99ea6f875d4e4,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_26_public_bytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_26_public_bytes,
        const_str_plain_public_bytes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f0d1e88f12245125d8bec8e4eafe8cdd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dh,
        const_str_digest_d85ec4ee6a6c677ceb63d9756226d9fc,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_2___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4a7bc2a6d82a8e309c2f29eba6ac03c8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dh,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_3___eq__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_3___eq__,
        const_str_plain___eq__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1ddfd0cbf0fd521a8bdaae355e8df00d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dh,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_4___ne__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_4___ne__,
        const_str_plain___ne__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_62ba98115b8c6b98cad4a13518cb1aa4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dh,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_5_private_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_5_private_key,
        const_str_plain_private_key,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_15df92a2687051aff364a281e2af5785,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dh,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_6___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d7be33b8d0c78c02bad195fda1fb9469,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dh,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_7___eq__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_7___eq__,
        const_str_plain___eq__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_42582f041529bf52cdf6f5cf3e08d38f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dh,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_8___ne__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_8___ne__,
        const_str_plain___ne__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_14cae9da01038946c722c204269c037c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dh,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_9_public_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$dh$$$function_9_public_key,
        const_str_plain_public_key,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_906a3d6516d5979b4ff34464558c921e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dh,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_cryptography$hazmat$primitives$asymmetric$dh =
{
    PyModuleDef_HEAD_INIT,
    "cryptography.hazmat.primitives.asymmetric.dh",   /* m_name */
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

MOD_INIT_DECL( cryptography$hazmat$primitives$asymmetric$dh )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_cryptography$hazmat$primitives$asymmetric$dh );
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
    puts("cryptography.hazmat.primitives.asymmetric.dh: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.primitives.asymmetric.dh: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.primitives.asymmetric.dh: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcryptography$hazmat$primitives$asymmetric$dh" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_cryptography$hazmat$primitives$asymmetric$dh = Py_InitModule4(
        "cryptography.hazmat.primitives.asymmetric.dh",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_cryptography$hazmat$primitives$asymmetric$dh = PyModule_Create( &mdef_cryptography$hazmat$primitives$asymmetric$dh );
#endif

    moduledict_cryptography$hazmat$primitives$asymmetric$dh = MODULE_DICT( module_cryptography$hazmat$primitives$asymmetric$dh );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_cryptography$hazmat$primitives$asymmetric$dh,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$asymmetric$dh,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_cryptography$hazmat$primitives$asymmetric$dh,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$asymmetric$dh,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_cryptography$hazmat$primitives$asymmetric$dh );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_15ee95ab6193a087be99fa834f4ab688, module_cryptography$hazmat$primitives$asymmetric$dh );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__class = NULL;
    PyObject *tmp_class_creation_6__class_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_7__class = NULL;
    PyObject *tmp_class_creation_7__class_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_select_metaclass_6__base = NULL;
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
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    int tmp_cmp_In_6;
    int tmp_cmp_In_7;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_defaults_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
    PyObject *tmp_dict_name_6;
    PyObject *tmp_dict_name_7;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    static struct Nuitka_FrameObject *cache_frame_d7a9fc9d671ef0fb6fe7543b14738784_2 = NULL;

    struct Nuitka_FrameObject *frame_d7a9fc9d671ef0fb6fe7543b14738784_2;

    static struct Nuitka_FrameObject *cache_frame_c416efa7f631379f1843a975fea3ad4d_3 = NULL;

    struct Nuitka_FrameObject *frame_c416efa7f631379f1843a975fea3ad4d_3;

    static struct Nuitka_FrameObject *cache_frame_62eee2e33158e6aafcbf42af0a061803_4 = NULL;

    struct Nuitka_FrameObject *frame_62eee2e33158e6aafcbf42af0a061803_4;

    static struct Nuitka_FrameObject *cache_frame_a00f210fd96f9b7bc1a810efd8dc131f_5 = NULL;

    struct Nuitka_FrameObject *frame_a00f210fd96f9b7bc1a810efd8dc131f_5;

    static struct Nuitka_FrameObject *cache_frame_9f06e38d1ac517a33b79cc2ff1b034aa_6 = NULL;

    struct Nuitka_FrameObject *frame_9f06e38d1ac517a33b79cc2ff1b034aa_6;

    static struct Nuitka_FrameObject *cache_frame_67a913406ac7f45dce05a619a5219f20_7 = NULL;

    struct Nuitka_FrameObject *frame_67a913406ac7f45dce05a619a5219f20_7;

    static struct Nuitka_FrameObject *cache_frame_8775807d24a860dcf3435f4f8fa9f5cb_8 = NULL;

    struct Nuitka_FrameObject *frame_8775807d24a860dcf3435f4f8fa9f5cb_8;

    struct Nuitka_FrameObject *frame_528801395dc53d0377b045d5310a1fa4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    tmp_outline_return_value_4 = NULL;
    tmp_outline_return_value_5 = NULL;
    tmp_outline_return_value_6 = NULL;
    tmp_outline_return_value_7 = NULL;
    tmp_outline_return_value_8 = NULL;
    PyObject *locals_DHPublicNumbers_49 = NULL;
    PyObject *locals_DHPrivateNumbers_18 = NULL;
    PyObject *locals_DHParameterNumbers_80 = NULL;
    PyObject *locals_DHPrivateKey_143 = NULL;
    PyObject *locals_DHParameters_119 = NULL;
    PyObject *locals_DHPrivateKeyWithSerialization_171 = NULL;
    PyObject *locals_DHPublicKey_186 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyImport_ImportModule("__future__");
    assert( tmp_assign_source_3 != NULL );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_3 );
    tmp_import_from_1__module = tmp_assign_source_3;

    // Frame without reuse.
    frame_528801395dc53d0377b045d5310a1fa4 = MAKE_MODULE_FRAME( codeobj_528801395dc53d0377b045d5310a1fa4, module_cryptography$hazmat$primitives$asymmetric$dh );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_528801395dc53d0377b045d5310a1fa4 );
    assert( Py_REFCNT( frame_528801395dc53d0377b045d5310a1fa4 ) == 2 );

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
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
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
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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
    tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$dh;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_528801395dc53d0377b045d5310a1fa4->m_frame.f_lineno = 7;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_abc, tmp_assign_source_7 );
    tmp_name_name_2 = const_str_plain_six;
    tmp_globals_name_2 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$dh;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_528801395dc53d0377b045d5310a1fa4->m_frame.f_lineno = 9;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_8 );
    tmp_name_name_3 = const_str_plain_cryptography;
    tmp_globals_name_3 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$dh;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_utils_tuple;
    tmp_level_name_3 = const_int_0;
    frame_528801395dc53d0377b045d5310a1fa4->m_frame.f_lineno = 11;
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
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_utils, tmp_assign_source_9 );
    tmp_assign_source_10 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_1_generate_parameters(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_generate_parameters, tmp_assign_source_10 );
    // Tried code:
    tmp_set_locals = PyDict_New();
    locals_DHPrivateNumbers_18 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_15ee95ab6193a087be99fa834f4ab688;
    tmp_res = PyDict_SetItem( locals_DHPrivateNumbers_18, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_2___init__(  );
    tmp_res = PyDict_SetItem( locals_DHPrivateNumbers_18, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_3___eq__(  );
    tmp_res = PyDict_SetItem( locals_DHPrivateNumbers_18, const_str_plain___eq__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_4___ne__(  );
    tmp_res = PyDict_SetItem( locals_DHPrivateNumbers_18, const_str_plain___ne__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_5_private_key(  );
    tmp_res = PyDict_SetItem( locals_DHPrivateNumbers_18, const_str_plain_private_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d7a9fc9d671ef0fb6fe7543b14738784_2, codeobj_d7a9fc9d671ef0fb6fe7543b14738784, module_cryptography$hazmat$primitives$asymmetric$dh, 0 );
    frame_d7a9fc9d671ef0fb6fe7543b14738784_2 = cache_frame_d7a9fc9d671ef0fb6fe7543b14738784_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d7a9fc9d671ef0fb6fe7543b14738784_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d7a9fc9d671ef0fb6fe7543b14738784_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_d7a9fc9d671ef0fb6fe7543b14738784_2->m_frame.f_lineno = 45;
    tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_read_only_property, &PyTuple_GET_ITEM( const_tuple_str_plain__public_numbers_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_DHPrivateNumbers_18, const_str_plain_public_numbers, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto frame_exception_exit_2;
    }
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 46;

        goto frame_exception_exit_2;
    }

    frame_d7a9fc9d671ef0fb6fe7543b14738784_2->m_frame.f_lineno = 46;
    tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_read_only_property, &PyTuple_GET_ITEM( const_tuple_str_plain__x_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_DHPrivateNumbers_18, const_str_plain_x, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d7a9fc9d671ef0fb6fe7543b14738784_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d7a9fc9d671ef0fb6fe7543b14738784_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d7a9fc9d671ef0fb6fe7543b14738784_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d7a9fc9d671ef0fb6fe7543b14738784_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d7a9fc9d671ef0fb6fe7543b14738784_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d7a9fc9d671ef0fb6fe7543b14738784_2,
        type_description_2
    );


    // Release cached frame.
    if ( frame_d7a9fc9d671ef0fb6fe7543b14738784_2 == cache_frame_d7a9fc9d671ef0fb6fe7543b14738784_2 )
    {
        Py_DECREF( frame_d7a9fc9d671ef0fb6fe7543b14738784_2 );
    }
    cache_frame_d7a9fc9d671ef0fb6fe7543b14738784_2 = NULL;

    assertFrameObject( frame_d7a9fc9d671ef0fb6fe7543b14738784_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_3;
    skip_nested_handling_1:;
    tmp_outline_return_value_1 = locals_DHPrivateNumbers_18;
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    Py_DECREF( locals_DHPrivateNumbers_18 );
    locals_DHPrivateNumbers_18 = NULL;
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

    Py_DECREF( locals_DHPrivateNumbers_18 );
    locals_DHPrivateNumbers_18 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 18;
    goto try_except_handler_2;
    outline_result_1:;
    tmp_assign_source_11 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_11;

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
    tmp_assign_source_12 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto try_except_handler_2;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_12 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_12 );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_12;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_DHPrivateNumbers;
    tmp_args_element_name_2 = const_tuple_type_object_tuple;
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_528801395dc53d0377b045d5310a1fa4->m_frame.f_lineno = 18;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_13;

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
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_DHPrivateNumbers, tmp_assign_source_14 );
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
    locals_DHPublicNumbers_49 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_15ee95ab6193a087be99fa834f4ab688;
    tmp_res = PyDict_SetItem( locals_DHPublicNumbers_49, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_6___init__(  );
    tmp_res = PyDict_SetItem( locals_DHPublicNumbers_49, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_7___eq__(  );
    tmp_res = PyDict_SetItem( locals_DHPublicNumbers_49, const_str_plain___eq__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_8___ne__(  );
    tmp_res = PyDict_SetItem( locals_DHPublicNumbers_49, const_str_plain___ne__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_9_public_key(  );
    tmp_res = PyDict_SetItem( locals_DHPublicNumbers_49, const_str_plain_public_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c416efa7f631379f1843a975fea3ad4d_3, codeobj_c416efa7f631379f1843a975fea3ad4d, module_cryptography$hazmat$primitives$asymmetric$dh, 0 );
    frame_c416efa7f631379f1843a975fea3ad4d_3 = cache_frame_c416efa7f631379f1843a975fea3ad4d_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c416efa7f631379f1843a975fea3ad4d_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c416efa7f631379f1843a975fea3ad4d_3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 76;

        goto frame_exception_exit_3;
    }

    frame_c416efa7f631379f1843a975fea3ad4d_3->m_frame.f_lineno = 76;
    tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_read_only_property, &PyTuple_GET_ITEM( const_tuple_str_plain__y_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto frame_exception_exit_3;
    }
    tmp_res = PyDict_SetItem( locals_DHPublicNumbers_49, const_str_plain_y, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto frame_exception_exit_3;
    }
    tmp_called_instance_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_called_instance_4 == NULL ))
    {
        tmp_called_instance_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 77;

        goto frame_exception_exit_3;
    }

    frame_c416efa7f631379f1843a975fea3ad4d_3->m_frame.f_lineno = 77;
    tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_read_only_property, &PyTuple_GET_ITEM( const_tuple_str_plain__parameter_numbers_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;

        goto frame_exception_exit_3;
    }
    tmp_res = PyDict_SetItem( locals_DHPublicNumbers_49, const_str_plain_parameter_numbers, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;

        goto frame_exception_exit_3;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c416efa7f631379f1843a975fea3ad4d_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c416efa7f631379f1843a975fea3ad4d_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c416efa7f631379f1843a975fea3ad4d_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c416efa7f631379f1843a975fea3ad4d_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c416efa7f631379f1843a975fea3ad4d_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c416efa7f631379f1843a975fea3ad4d_3,
        type_description_2
    );


    // Release cached frame.
    if ( frame_c416efa7f631379f1843a975fea3ad4d_3 == cache_frame_c416efa7f631379f1843a975fea3ad4d_3 )
    {
        Py_DECREF( frame_c416efa7f631379f1843a975fea3ad4d_3 );
    }
    cache_frame_c416efa7f631379f1843a975fea3ad4d_3 = NULL;

    assertFrameObject( frame_c416efa7f631379f1843a975fea3ad4d_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_5;
    skip_nested_handling_2:;
    tmp_outline_return_value_2 = locals_DHPublicNumbers_49;
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_5:;
    Py_DECREF( locals_DHPublicNumbers_49 );
    locals_DHPublicNumbers_49 = NULL;
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

    Py_DECREF( locals_DHPublicNumbers_49 );
    locals_DHPublicNumbers_49 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 49;
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


        exception_lineno = 49;

        goto try_except_handler_4;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_16 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_16 );
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_16;

    tmp_called_name_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_args_element_name_4 = const_str_plain_DHPublicNumbers;
    tmp_args_element_name_5 = const_tuple_type_object_tuple;
    tmp_args_element_name_6 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_528801395dc53d0377b045d5310a1fa4->m_frame.f_lineno = 49;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto try_except_handler_4;
    }
    assert( tmp_class_creation_2__class == NULL );
    tmp_class_creation_2__class = tmp_assign_source_17;

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
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_DHPublicNumbers, tmp_assign_source_18 );
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
    locals_DHParameterNumbers_80 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_15ee95ab6193a087be99fa834f4ab688;
    tmp_res = PyDict_SetItem( locals_DHParameterNumbers_80, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_defaults_1 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_10___init__( tmp_defaults_1 );
    tmp_res = PyDict_SetItem( locals_DHParameterNumbers_80, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_11___eq__(  );
    tmp_res = PyDict_SetItem( locals_DHParameterNumbers_80, const_str_plain___eq__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_12___ne__(  );
    tmp_res = PyDict_SetItem( locals_DHParameterNumbers_80, const_str_plain___ne__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_13_parameters(  );
    tmp_res = PyDict_SetItem( locals_DHParameterNumbers_80, const_str_plain_parameters, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_62eee2e33158e6aafcbf42af0a061803_4, codeobj_62eee2e33158e6aafcbf42af0a061803, module_cryptography$hazmat$primitives$asymmetric$dh, 0 );
    frame_62eee2e33158e6aafcbf42af0a061803_4 = cache_frame_62eee2e33158e6aafcbf42af0a061803_4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_62eee2e33158e6aafcbf42af0a061803_4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_62eee2e33158e6aafcbf42af0a061803_4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_called_instance_5 == NULL ))
    {
        tmp_called_instance_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_called_instance_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 113;

        goto frame_exception_exit_4;
    }

    frame_62eee2e33158e6aafcbf42af0a061803_4->m_frame.f_lineno = 113;
    tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_read_only_property, &PyTuple_GET_ITEM( const_tuple_str_plain__p_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;

        goto frame_exception_exit_4;
    }
    tmp_res = PyDict_SetItem( locals_DHParameterNumbers_80, const_str_plain_p, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;

        goto frame_exception_exit_4;
    }
    tmp_called_instance_6 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_called_instance_6 == NULL ))
    {
        tmp_called_instance_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 114;

        goto frame_exception_exit_4;
    }

    frame_62eee2e33158e6aafcbf42af0a061803_4->m_frame.f_lineno = 114;
    tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_read_only_property, &PyTuple_GET_ITEM( const_tuple_str_plain__g_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto frame_exception_exit_4;
    }
    tmp_res = PyDict_SetItem( locals_DHParameterNumbers_80, const_str_plain_g, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto frame_exception_exit_4;
    }
    tmp_called_instance_7 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_utils );

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

        exception_lineno = 115;

        goto frame_exception_exit_4;
    }

    frame_62eee2e33158e6aafcbf42af0a061803_4->m_frame.f_lineno = 115;
    tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_read_only_property, &PyTuple_GET_ITEM( const_tuple_str_plain__q_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto frame_exception_exit_4;
    }
    tmp_res = PyDict_SetItem( locals_DHParameterNumbers_80, const_str_plain_q, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto frame_exception_exit_4;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_62eee2e33158e6aafcbf42af0a061803_4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_exception_exit_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_62eee2e33158e6aafcbf42af0a061803_4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_62eee2e33158e6aafcbf42af0a061803_4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_62eee2e33158e6aafcbf42af0a061803_4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_62eee2e33158e6aafcbf42af0a061803_4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_62eee2e33158e6aafcbf42af0a061803_4,
        type_description_2
    );


    // Release cached frame.
    if ( frame_62eee2e33158e6aafcbf42af0a061803_4 == cache_frame_62eee2e33158e6aafcbf42af0a061803_4 )
    {
        Py_DECREF( frame_62eee2e33158e6aafcbf42af0a061803_4 );
    }
    cache_frame_62eee2e33158e6aafcbf42af0a061803_4 = NULL;

    assertFrameObject( frame_62eee2e33158e6aafcbf42af0a061803_4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_3;

    frame_no_exception_3:;

    goto skip_nested_handling_3;
    nested_frame_exit_3:;

    goto try_except_handler_7;
    skip_nested_handling_3:;
    tmp_outline_return_value_3 = locals_DHParameterNumbers_80;
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_7;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_7:;
    Py_DECREF( locals_DHParameterNumbers_80 );
    locals_DHParameterNumbers_80 = NULL;
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

    Py_DECREF( locals_DHParameterNumbers_80 );
    locals_DHParameterNumbers_80 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto outline_exception_3;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 80;
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


        exception_lineno = 80;

        goto try_except_handler_6;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_20 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_20 );
    condexpr_end_3:;
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_20;

    tmp_called_name_3 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_args_element_name_7 = const_str_plain_DHParameterNumbers;
    tmp_args_element_name_8 = const_tuple_type_object_tuple;
    tmp_args_element_name_9 = tmp_class_creation_3__class_dict;

    CHECK_OBJECT( tmp_args_element_name_9 );
    frame_528801395dc53d0377b045d5310a1fa4->m_frame.f_lineno = 80;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_6;
    }
    assert( tmp_class_creation_3__class == NULL );
    tmp_class_creation_3__class = tmp_assign_source_21;

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
    tmp_assign_source_22 = tmp_class_creation_3__class;

    CHECK_OBJECT( tmp_assign_source_22 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_DHParameterNumbers, tmp_assign_source_22 );
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
    locals_DHParameters_119 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_15ee95ab6193a087be99fa834f4ab688;
    tmp_res = PyDict_SetItem( locals_DHParameters_119, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a00f210fd96f9b7bc1a810efd8dc131f_5, codeobj_a00f210fd96f9b7bc1a810efd8dc131f, module_cryptography$hazmat$primitives$asymmetric$dh, 0 );
    frame_a00f210fd96f9b7bc1a810efd8dc131f_5 = cache_frame_a00f210fd96f9b7bc1a810efd8dc131f_5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a00f210fd96f9b7bc1a810efd8dc131f_5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a00f210fd96f9b7bc1a810efd8dc131f_5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_8 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 120;

        goto frame_exception_exit_5;
    }

    tmp_args_element_name_10 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_14_generate_private_key(  );
    frame_a00f210fd96f9b7bc1a810efd8dc131f_5->m_frame.f_lineno = 120;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto frame_exception_exit_5;
    }
    tmp_res = PyDict_SetItem( locals_DHParameters_119, const_str_plain_generate_private_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto frame_exception_exit_5;
    }
    tmp_called_instance_9 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 126;

        goto frame_exception_exit_5;
    }

    tmp_args_element_name_11 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_15_parameter_bytes(  );
    frame_a00f210fd96f9b7bc1a810efd8dc131f_5->m_frame.f_lineno = 126;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;

        goto frame_exception_exit_5;
    }
    tmp_res = PyDict_SetItem( locals_DHParameters_119, const_str_plain_parameter_bytes, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;

        goto frame_exception_exit_5;
    }
    tmp_called_instance_10 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 132;

        goto frame_exception_exit_5;
    }

    tmp_args_element_name_12 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_16_parameter_numbers(  );
    frame_a00f210fd96f9b7bc1a810efd8dc131f_5->m_frame.f_lineno = 132;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;

        goto frame_exception_exit_5;
    }
    tmp_res = PyDict_SetItem( locals_DHParameters_119, const_str_plain_parameter_numbers, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;

        goto frame_exception_exit_5;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a00f210fd96f9b7bc1a810efd8dc131f_5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;

    frame_exception_exit_5:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a00f210fd96f9b7bc1a810efd8dc131f_5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a00f210fd96f9b7bc1a810efd8dc131f_5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a00f210fd96f9b7bc1a810efd8dc131f_5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a00f210fd96f9b7bc1a810efd8dc131f_5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a00f210fd96f9b7bc1a810efd8dc131f_5,
        type_description_2
    );


    // Release cached frame.
    if ( frame_a00f210fd96f9b7bc1a810efd8dc131f_5 == cache_frame_a00f210fd96f9b7bc1a810efd8dc131f_5 )
    {
        Py_DECREF( frame_a00f210fd96f9b7bc1a810efd8dc131f_5 );
    }
    cache_frame_a00f210fd96f9b7bc1a810efd8dc131f_5 = NULL;

    assertFrameObject( frame_a00f210fd96f9b7bc1a810efd8dc131f_5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_4;

    frame_no_exception_4:;

    goto skip_nested_handling_4;
    nested_frame_exit_4:;

    goto try_except_handler_9;
    skip_nested_handling_4:;
    tmp_outline_return_value_4 = locals_DHParameters_119;
    Py_INCREF( tmp_outline_return_value_4 );
    goto try_return_handler_9;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_9:;
    Py_DECREF( locals_DHParameters_119 );
    locals_DHParameters_119 = NULL;
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

    Py_DECREF( locals_DHParameters_119 );
    locals_DHParameters_119 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto outline_exception_4;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_4:;
    exception_lineno = 119;
    goto try_except_handler_8;
    outline_result_4:;
    tmp_assign_source_23 = tmp_outline_return_value_4;
    assert( tmp_class_creation_4__class_dict == NULL );
    tmp_class_creation_4__class_dict = tmp_assign_source_23;

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
    tmp_assign_source_24 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;

        goto try_except_handler_8;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_assign_source_24 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_24 );
    condexpr_end_4:;
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_24;

    tmp_called_name_4 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_args_element_name_13 = const_str_plain_DHParameters;
    tmp_args_element_name_14 = const_tuple_type_object_tuple;
    tmp_args_element_name_15 = tmp_class_creation_4__class_dict;

    CHECK_OBJECT( tmp_args_element_name_15 );
    frame_528801395dc53d0377b045d5310a1fa4->m_frame.f_lineno = 119;
    {
        PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;

        goto try_except_handler_8;
    }
    assert( tmp_class_creation_4__class == NULL );
    tmp_class_creation_4__class = tmp_assign_source_25;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_six );

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

        exception_lineno = 118;

        goto try_except_handler_8;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add_metaclass );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;

        goto try_except_handler_8;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 118;

        goto try_except_handler_8;
    }

    tmp_args_element_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 118;

        goto try_except_handler_8;
    }
    frame_528801395dc53d0377b045d5310a1fa4->m_frame.f_lineno = 118;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_called_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_16 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;

        goto try_except_handler_8;
    }
    tmp_args_element_name_17 = tmp_class_creation_4__class;

    CHECK_OBJECT( tmp_args_element_name_17 );
    frame_528801395dc53d0377b045d5310a1fa4->m_frame.f_lineno = 118;
    {
        PyObject *call_args[] = { tmp_args_element_name_17 };
        tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;

        goto try_except_handler_8;
    }
    {
        PyObject *old = tmp_class_creation_4__class;
        assert( old != NULL );
        tmp_class_creation_4__class = tmp_assign_source_26;
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
    tmp_assign_source_27 = tmp_class_creation_4__class;

    CHECK_OBJECT( tmp_assign_source_27 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_DHParameters, tmp_assign_source_27 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class );
    Py_DECREF( tmp_class_creation_4__class );
    tmp_class_creation_4__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_dict );
    Py_DECREF( tmp_class_creation_4__class_dict );
    tmp_class_creation_4__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__metaclass );
    Py_DECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    tmp_assign_source_28 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_DHParameters );

    if (unlikely( tmp_assign_source_28 == NULL ))
    {
        tmp_assign_source_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DHParameters );
    }

    if ( tmp_assign_source_28 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "DHParameters" );
        exception_tb = NULL;

        exception_lineno = 139;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_DHParametersWithSerialization, tmp_assign_source_28 );
    // Tried code:
    tmp_set_locals = PyDict_New();
    locals_DHPrivateKey_143 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_15ee95ab6193a087be99fa834f4ab688;
    tmp_res = PyDict_SetItem( locals_DHPrivateKey_143, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9f06e38d1ac517a33b79cc2ff1b034aa_6, codeobj_9f06e38d1ac517a33b79cc2ff1b034aa, module_cryptography$hazmat$primitives$asymmetric$dh, 0 );
    frame_9f06e38d1ac517a33b79cc2ff1b034aa_6 = cache_frame_9f06e38d1ac517a33b79cc2ff1b034aa_6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9f06e38d1ac517a33b79cc2ff1b034aa_6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9f06e38d1ac517a33b79cc2ff1b034aa_6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_11 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 144;

        goto frame_exception_exit_6;
    }

    tmp_args_element_name_18 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_17_key_size(  );
    frame_9f06e38d1ac517a33b79cc2ff1b034aa_6->m_frame.f_lineno = 144;
    {
        PyObject *call_args[] = { tmp_args_element_name_18 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_18 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;

        goto frame_exception_exit_6;
    }
    tmp_res = PyDict_SetItem( locals_DHPrivateKey_143, const_str_plain_key_size, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;

        goto frame_exception_exit_6;
    }
    tmp_called_instance_12 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 150;

        goto frame_exception_exit_6;
    }

    tmp_args_element_name_19 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_18_public_key(  );
    frame_9f06e38d1ac517a33b79cc2ff1b034aa_6->m_frame.f_lineno = 150;
    {
        PyObject *call_args[] = { tmp_args_element_name_19 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_12, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_19 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;

        goto frame_exception_exit_6;
    }
    tmp_res = PyDict_SetItem( locals_DHPrivateKey_143, const_str_plain_public_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;

        goto frame_exception_exit_6;
    }
    tmp_called_instance_13 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 156;

        goto frame_exception_exit_6;
    }

    tmp_args_element_name_20 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_19_parameters(  );
    frame_9f06e38d1ac517a33b79cc2ff1b034aa_6->m_frame.f_lineno = 156;
    {
        PyObject *call_args[] = { tmp_args_element_name_20 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_13, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_20 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;

        goto frame_exception_exit_6;
    }
    tmp_res = PyDict_SetItem( locals_DHPrivateKey_143, const_str_plain_parameters, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;

        goto frame_exception_exit_6;
    }
    tmp_called_instance_14 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 162;

        goto frame_exception_exit_6;
    }

    tmp_args_element_name_21 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_20_exchange(  );
    frame_9f06e38d1ac517a33b79cc2ff1b034aa_6->m_frame.f_lineno = 162;
    {
        PyObject *call_args[] = { tmp_args_element_name_21 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_14, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_21 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;

        goto frame_exception_exit_6;
    }
    tmp_res = PyDict_SetItem( locals_DHPrivateKey_143, const_str_plain_exchange, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;

        goto frame_exception_exit_6;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9f06e38d1ac517a33b79cc2ff1b034aa_6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_5;

    frame_exception_exit_6:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9f06e38d1ac517a33b79cc2ff1b034aa_6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9f06e38d1ac517a33b79cc2ff1b034aa_6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9f06e38d1ac517a33b79cc2ff1b034aa_6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9f06e38d1ac517a33b79cc2ff1b034aa_6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9f06e38d1ac517a33b79cc2ff1b034aa_6,
        type_description_2
    );


    // Release cached frame.
    if ( frame_9f06e38d1ac517a33b79cc2ff1b034aa_6 == cache_frame_9f06e38d1ac517a33b79cc2ff1b034aa_6 )
    {
        Py_DECREF( frame_9f06e38d1ac517a33b79cc2ff1b034aa_6 );
    }
    cache_frame_9f06e38d1ac517a33b79cc2ff1b034aa_6 = NULL;

    assertFrameObject( frame_9f06e38d1ac517a33b79cc2ff1b034aa_6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_5;

    frame_no_exception_5:;

    goto skip_nested_handling_5;
    nested_frame_exit_5:;

    goto try_except_handler_11;
    skip_nested_handling_5:;
    tmp_outline_return_value_5 = locals_DHPrivateKey_143;
    Py_INCREF( tmp_outline_return_value_5 );
    goto try_return_handler_11;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_11:;
    Py_DECREF( locals_DHPrivateKey_143 );
    locals_DHPrivateKey_143 = NULL;
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

    Py_DECREF( locals_DHPrivateKey_143 );
    locals_DHPrivateKey_143 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto outline_exception_5;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_5:;
    exception_lineno = 143;
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


        exception_lineno = 143;

        goto try_except_handler_10;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_assign_source_30 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_30 );
    condexpr_end_5:;
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_30;

    tmp_called_name_7 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_called_name_7 );
    tmp_args_element_name_22 = const_str_plain_DHPrivateKey;
    tmp_args_element_name_23 = const_tuple_type_object_tuple;
    tmp_args_element_name_24 = tmp_class_creation_5__class_dict;

    CHECK_OBJECT( tmp_args_element_name_24 );
    frame_528801395dc53d0377b045d5310a1fa4->m_frame.f_lineno = 143;
    {
        PyObject *call_args[] = { tmp_args_element_name_22, tmp_args_element_name_23, tmp_args_element_name_24 };
        tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
    }

    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;

        goto try_except_handler_10;
    }
    assert( tmp_class_creation_5__class == NULL );
    tmp_class_creation_5__class = tmp_assign_source_31;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_six );

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

        exception_lineno = 142;

        goto try_except_handler_10;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_add_metaclass );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;

        goto try_except_handler_10;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 142;

        goto try_except_handler_10;
    }

    tmp_args_element_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 142;

        goto try_except_handler_10;
    }
    frame_528801395dc53d0377b045d5310a1fa4->m_frame.f_lineno = 142;
    {
        PyObject *call_args[] = { tmp_args_element_name_25 };
        tmp_called_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_25 );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;

        goto try_except_handler_10;
    }
    tmp_args_element_name_26 = tmp_class_creation_5__class;

    CHECK_OBJECT( tmp_args_element_name_26 );
    frame_528801395dc53d0377b045d5310a1fa4->m_frame.f_lineno = 142;
    {
        PyObject *call_args[] = { tmp_args_element_name_26 };
        tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;

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
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_DHPrivateKey, tmp_assign_source_33 );
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
    tmp_assign_source_34 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_DHPrivateKey );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DHPrivateKey );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_34 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "DHPrivateKey" );
        exception_tb = NULL;

        exception_lineno = 171;

        goto try_except_handler_12;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_34, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_6__bases == NULL );
    tmp_class_creation_6__bases = tmp_assign_source_34;

    tmp_set_locals = PyDict_New();
    locals_DHPrivateKeyWithSerialization_171 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_15ee95ab6193a087be99fa834f4ab688;
    tmp_res = PyDict_SetItem( locals_DHPrivateKeyWithSerialization_171, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_67a913406ac7f45dce05a619a5219f20_7, codeobj_67a913406ac7f45dce05a619a5219f20, module_cryptography$hazmat$primitives$asymmetric$dh, 0 );
    frame_67a913406ac7f45dce05a619a5219f20_7 = cache_frame_67a913406ac7f45dce05a619a5219f20_7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_67a913406ac7f45dce05a619a5219f20_7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_67a913406ac7f45dce05a619a5219f20_7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_15 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 172;

        goto frame_exception_exit_7;
    }

    tmp_args_element_name_27 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_21_private_numbers(  );
    frame_67a913406ac7f45dce05a619a5219f20_7->m_frame.f_lineno = 172;
    {
        PyObject *call_args[] = { tmp_args_element_name_27 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_15, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_27 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;

        goto frame_exception_exit_7;
    }
    tmp_res = PyDict_SetItem( locals_DHPrivateKeyWithSerialization_171, const_str_plain_private_numbers, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;

        goto frame_exception_exit_7;
    }
    tmp_called_instance_16 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 178;

        goto frame_exception_exit_7;
    }

    tmp_args_element_name_28 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_22_private_bytes(  );
    frame_67a913406ac7f45dce05a619a5219f20_7->m_frame.f_lineno = 178;
    {
        PyObject *call_args[] = { tmp_args_element_name_28 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_16, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_28 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;

        goto frame_exception_exit_7;
    }
    tmp_res = PyDict_SetItem( locals_DHPrivateKeyWithSerialization_171, const_str_plain_private_bytes, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;

        goto frame_exception_exit_7;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_67a913406ac7f45dce05a619a5219f20_7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_6;

    frame_exception_exit_7:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_67a913406ac7f45dce05a619a5219f20_7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_67a913406ac7f45dce05a619a5219f20_7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_67a913406ac7f45dce05a619a5219f20_7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_67a913406ac7f45dce05a619a5219f20_7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_67a913406ac7f45dce05a619a5219f20_7,
        type_description_2
    );


    // Release cached frame.
    if ( frame_67a913406ac7f45dce05a619a5219f20_7 == cache_frame_67a913406ac7f45dce05a619a5219f20_7 )
    {
        Py_DECREF( frame_67a913406ac7f45dce05a619a5219f20_7 );
    }
    cache_frame_67a913406ac7f45dce05a619a5219f20_7 = NULL;

    assertFrameObject( frame_67a913406ac7f45dce05a619a5219f20_7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_6;

    frame_no_exception_6:;

    goto skip_nested_handling_6;
    nested_frame_exit_6:;

    goto try_except_handler_13;
    skip_nested_handling_6:;
    tmp_outline_return_value_6 = locals_DHPrivateKeyWithSerialization_171;
    Py_INCREF( tmp_outline_return_value_6 );
    goto try_return_handler_13;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_13:;
    Py_DECREF( locals_DHPrivateKeyWithSerialization_171 );
    locals_DHPrivateKeyWithSerialization_171 = NULL;
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

    Py_DECREF( locals_DHPrivateKeyWithSerialization_171 );
    locals_DHPrivateKeyWithSerialization_171 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto outline_exception_6;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_6:;
    exception_lineno = 171;
    goto try_except_handler_12;
    outline_result_6:;
    tmp_assign_source_35 = tmp_outline_return_value_6;
    assert( tmp_class_creation_6__class_dict == NULL );
    tmp_class_creation_6__class_dict = tmp_assign_source_35;

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
    tmp_assign_source_36 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;

        goto try_except_handler_12;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_subscribed_name_1 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_37 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;

        goto try_except_handler_12;
    }
    assert( tmp_select_metaclass_6__base == NULL );
    tmp_select_metaclass_6__base = tmp_assign_source_37;

    // Tried code:
    // Tried code:
    tmp_source_name_5 = tmp_select_metaclass_6__base;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_outline_return_value_7 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_5 );
    if ( tmp_outline_return_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;

        goto try_except_handler_15;
    }
    goto try_return_handler_14;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_13 );
    Py_XDECREF( exception_keeper_value_13 );
    Py_XDECREF( exception_keeper_tb_13 );
    tmp_type_arg_1 = tmp_select_metaclass_6__base;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_outline_return_value_7 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_outline_return_value_7 != NULL );
    goto try_return_handler_14;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_14:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_6__base );
    Py_DECREF( tmp_select_metaclass_6__base );
    tmp_select_metaclass_6__base = NULL;

    goto outline_result_7;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_6__base );
    Py_DECREF( tmp_select_metaclass_6__base );
    tmp_select_metaclass_6__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh );
    return MOD_RETURN_VALUE( NULL );
    outline_result_7:;
    tmp_assign_source_36 = tmp_outline_return_value_7;
    condexpr_end_6:;
    assert( tmp_class_creation_6__metaclass == NULL );
    tmp_class_creation_6__metaclass = tmp_assign_source_36;

    tmp_called_name_10 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_called_name_10 );
    tmp_args_element_name_29 = const_str_plain_DHPrivateKeyWithSerialization;
    tmp_args_element_name_30 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_args_element_name_30 );
    tmp_args_element_name_31 = tmp_class_creation_6__class_dict;

    CHECK_OBJECT( tmp_args_element_name_31 );
    frame_528801395dc53d0377b045d5310a1fa4->m_frame.f_lineno = 171;
    {
        PyObject *call_args[] = { tmp_args_element_name_29, tmp_args_element_name_30, tmp_args_element_name_31 };
        tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, call_args );
    }

    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;

        goto try_except_handler_12;
    }
    assert( tmp_class_creation_6__class == NULL );
    tmp_class_creation_6__class = tmp_assign_source_38;

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;

        exception_lineno = 170;

        goto try_except_handler_12;
    }

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_add_metaclass );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto try_except_handler_12;
    }
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 170;

        goto try_except_handler_12;
    }

    tmp_args_element_name_32 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );

        exception_lineno = 170;

        goto try_except_handler_12;
    }
    frame_528801395dc53d0377b045d5310a1fa4->m_frame.f_lineno = 170;
    {
        PyObject *call_args[] = { tmp_args_element_name_32 };
        tmp_called_name_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    Py_DECREF( tmp_args_element_name_32 );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto try_except_handler_12;
    }
    tmp_args_element_name_33 = tmp_class_creation_6__class;

    CHECK_OBJECT( tmp_args_element_name_33 );
    frame_528801395dc53d0377b045d5310a1fa4->m_frame.f_lineno = 170;
    {
        PyObject *call_args[] = { tmp_args_element_name_33 };
        tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto try_except_handler_12;
    }
    {
        PyObject *old = tmp_class_creation_6__class;
        assert( old != NULL );
        tmp_class_creation_6__class = tmp_assign_source_39;
        Py_DECREF( old );
    }

    goto try_end_7;
    // Exception handler code:
    try_except_handler_12:;
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

    Py_XDECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

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
    try_end_7:;
    tmp_assign_source_40 = tmp_class_creation_6__class;

    CHECK_OBJECT( tmp_assign_source_40 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_DHPrivateKeyWithSerialization, tmp_assign_source_40 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class );
    Py_DECREF( tmp_class_creation_6__class );
    tmp_class_creation_6__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__bases );
    Py_DECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class_dict );
    Py_DECREF( tmp_class_creation_6__class_dict );
    tmp_class_creation_6__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__metaclass );
    Py_DECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    // Tried code:
    tmp_set_locals = PyDict_New();
    locals_DHPublicKey_186 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_15ee95ab6193a087be99fa834f4ab688;
    tmp_res = PyDict_SetItem( locals_DHPublicKey_186, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8775807d24a860dcf3435f4f8fa9f5cb_8, codeobj_8775807d24a860dcf3435f4f8fa9f5cb, module_cryptography$hazmat$primitives$asymmetric$dh, 0 );
    frame_8775807d24a860dcf3435f4f8fa9f5cb_8 = cache_frame_8775807d24a860dcf3435f4f8fa9f5cb_8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8775807d24a860dcf3435f4f8fa9f5cb_8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8775807d24a860dcf3435f4f8fa9f5cb_8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_17 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 187;

        goto frame_exception_exit_8;
    }

    tmp_args_element_name_34 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_23_key_size(  );
    frame_8775807d24a860dcf3435f4f8fa9f5cb_8->m_frame.f_lineno = 187;
    {
        PyObject *call_args[] = { tmp_args_element_name_34 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_17, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_34 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;

        goto frame_exception_exit_8;
    }
    tmp_res = PyDict_SetItem( locals_DHPublicKey_186, const_str_plain_key_size, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;

        goto frame_exception_exit_8;
    }
    tmp_called_instance_18 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 193;

        goto frame_exception_exit_8;
    }

    tmp_args_element_name_35 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_24_parameters(  );
    frame_8775807d24a860dcf3435f4f8fa9f5cb_8->m_frame.f_lineno = 193;
    {
        PyObject *call_args[] = { tmp_args_element_name_35 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_18, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_35 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;

        goto frame_exception_exit_8;
    }
    tmp_res = PyDict_SetItem( locals_DHPublicKey_186, const_str_plain_parameters, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;

        goto frame_exception_exit_8;
    }
    tmp_called_instance_19 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 199;

        goto frame_exception_exit_8;
    }

    tmp_args_element_name_36 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_25_public_numbers(  );
    frame_8775807d24a860dcf3435f4f8fa9f5cb_8->m_frame.f_lineno = 199;
    {
        PyObject *call_args[] = { tmp_args_element_name_36 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_19, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_36 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;

        goto frame_exception_exit_8;
    }
    tmp_res = PyDict_SetItem( locals_DHPublicKey_186, const_str_plain_public_numbers, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;

        goto frame_exception_exit_8;
    }
    tmp_called_instance_20 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 205;

        goto frame_exception_exit_8;
    }

    tmp_args_element_name_37 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dh$$$function_26_public_bytes(  );
    frame_8775807d24a860dcf3435f4f8fa9f5cb_8->m_frame.f_lineno = 205;
    {
        PyObject *call_args[] = { tmp_args_element_name_37 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_20, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_37 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;

        goto frame_exception_exit_8;
    }
    tmp_res = PyDict_SetItem( locals_DHPublicKey_186, const_str_plain_public_bytes, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;

        goto frame_exception_exit_8;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8775807d24a860dcf3435f4f8fa9f5cb_8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_7;

    frame_exception_exit_8:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8775807d24a860dcf3435f4f8fa9f5cb_8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8775807d24a860dcf3435f4f8fa9f5cb_8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8775807d24a860dcf3435f4f8fa9f5cb_8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8775807d24a860dcf3435f4f8fa9f5cb_8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8775807d24a860dcf3435f4f8fa9f5cb_8,
        type_description_2
    );


    // Release cached frame.
    if ( frame_8775807d24a860dcf3435f4f8fa9f5cb_8 == cache_frame_8775807d24a860dcf3435f4f8fa9f5cb_8 )
    {
        Py_DECREF( frame_8775807d24a860dcf3435f4f8fa9f5cb_8 );
    }
    cache_frame_8775807d24a860dcf3435f4f8fa9f5cb_8 = NULL;

    assertFrameObject( frame_8775807d24a860dcf3435f4f8fa9f5cb_8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_7;

    frame_no_exception_7:;

    goto skip_nested_handling_7;
    nested_frame_exit_7:;

    goto try_except_handler_17;
    skip_nested_handling_7:;
    tmp_outline_return_value_8 = locals_DHPublicKey_186;
    Py_INCREF( tmp_outline_return_value_8 );
    goto try_return_handler_17;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_17:;
    Py_DECREF( locals_DHPublicKey_186 );
    locals_DHPublicKey_186 = NULL;
    goto outline_result_8;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_DHPublicKey_186 );
    locals_DHPublicKey_186 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto outline_exception_7;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$dh );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_7:;
    exception_lineno = 186;
    goto try_except_handler_16;
    outline_result_8:;
    tmp_assign_source_41 = tmp_outline_return_value_8;
    assert( tmp_class_creation_7__class_dict == NULL );
    tmp_class_creation_7__class_dict = tmp_assign_source_41;

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
    tmp_assign_source_42 = DICT_GET_ITEM( tmp_dict_name_7, tmp_key_name_7 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;

        goto try_except_handler_16;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_assign_source_42 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_42 );
    condexpr_end_7:;
    assert( tmp_class_creation_7__metaclass == NULL );
    tmp_class_creation_7__metaclass = tmp_assign_source_42;

    tmp_called_name_13 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_called_name_13 );
    tmp_args_element_name_38 = const_str_plain_DHPublicKey;
    tmp_args_element_name_39 = const_tuple_type_object_tuple;
    tmp_args_element_name_40 = tmp_class_creation_7__class_dict;

    CHECK_OBJECT( tmp_args_element_name_40 );
    frame_528801395dc53d0377b045d5310a1fa4->m_frame.f_lineno = 186;
    {
        PyObject *call_args[] = { tmp_args_element_name_38, tmp_args_element_name_39, tmp_args_element_name_40 };
        tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_13, call_args );
    }

    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;

        goto try_except_handler_16;
    }
    assert( tmp_class_creation_7__class == NULL );
    tmp_class_creation_7__class = tmp_assign_source_43;

    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;

        exception_lineno = 185;

        goto try_except_handler_16;
    }

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_add_metaclass );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;

        goto try_except_handler_16;
    }
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_15 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 185;

        goto try_except_handler_16;
    }

    tmp_args_element_name_41 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );

        exception_lineno = 185;

        goto try_except_handler_16;
    }
    frame_528801395dc53d0377b045d5310a1fa4->m_frame.f_lineno = 185;
    {
        PyObject *call_args[] = { tmp_args_element_name_41 };
        tmp_called_name_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_args_element_name_41 );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;

        goto try_except_handler_16;
    }
    tmp_args_element_name_42 = tmp_class_creation_7__class;

    CHECK_OBJECT( tmp_args_element_name_42 );
    frame_528801395dc53d0377b045d5310a1fa4->m_frame.f_lineno = 185;
    {
        PyObject *call_args[] = { tmp_args_element_name_42 };
        tmp_assign_source_44 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_called_name_14 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;

        goto try_except_handler_16;
    }
    {
        PyObject *old = tmp_class_creation_7__class;
        assert( old != NULL );
        tmp_class_creation_7__class = tmp_assign_source_44;
        Py_DECREF( old );
    }

    goto try_end_8;
    // Exception handler code:
    try_except_handler_16:;
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
    try_end_8:;
    tmp_assign_source_45 = tmp_class_creation_7__class;

    CHECK_OBJECT( tmp_assign_source_45 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_DHPublicKey, tmp_assign_source_45 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class );
    Py_DECREF( tmp_class_creation_7__class );
    tmp_class_creation_7__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class_dict );
    Py_DECREF( tmp_class_creation_7__class_dict );
    tmp_class_creation_7__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__metaclass );
    Py_DECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    tmp_assign_source_46 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_DHPublicKey );

    if (unlikely( tmp_assign_source_46 == NULL ))
    {
        tmp_assign_source_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DHPublicKey );
    }

    if ( tmp_assign_source_46 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "DHPublicKey" );
        exception_tb = NULL;

        exception_lineno = 212;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$dh, (Nuitka_StringObject *)const_str_plain_DHPublicKeyWithSerialization, tmp_assign_source_46 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_528801395dc53d0377b045d5310a1fa4 );
#endif
    popFrameStack();

    assertFrameObject( frame_528801395dc53d0377b045d5310a1fa4 );

    goto frame_no_exception_8;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_528801395dc53d0377b045d5310a1fa4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_528801395dc53d0377b045d5310a1fa4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_528801395dc53d0377b045d5310a1fa4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_528801395dc53d0377b045d5310a1fa4, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_8:;

    return MOD_RETURN_VALUE( module_cryptography$hazmat$primitives$asymmetric$dh );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
