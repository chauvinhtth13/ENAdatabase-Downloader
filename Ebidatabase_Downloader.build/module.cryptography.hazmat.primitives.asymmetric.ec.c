/* Generated code for Python source for module 'cryptography.hazmat.primitives.asymmetric.ec'
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

/* The _module_cryptography$hazmat$primitives$asymmetric$ec is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$primitives$asymmetric$ec;
PyDictObject *moduledict_cryptography$hazmat$primitives$asymmetric$ec;

/* The module constants used, if any. */
static PyObject *const_tuple_str_digest_5d9f5c68057f6bda68db87834d8c8486_tuple;
extern PyObject *const_str_plain_secp192r1;
static PyObject *const_str_plain_sect409k1;
extern PyObject *const_str_digest_d85ec4ee6a6c677ceb63d9756226d9fc;
extern PyObject *const_str_plain_private_bytes;
static PyObject *const_str_digest_7beb17962c98b506f4aed6151df29ace;
extern PyObject *const_tuple_type_object_tuple;
static PyObject *const_str_digest_c6b43e2c56a86af0a4c780cb9abfec2c;
extern PyObject *const_str_plain_data;
extern PyObject *const_int_pos_512;
static PyObject *const_str_digest_55edae73ac71eac674f1a79882f11e93;
extern PyObject *const_str_plain_EllipticCurvePublicNumbers;
static PyObject *const_tuple_str_digest_c6b43e2c56a86af0a4c780cb9abfec2c_tuple;
extern PyObject *const_str_digest_3686cdf8ae053c257cc4f251370611ff;
static PyObject *const_str_digest_e0664444e0374ef7a5ca5154da13cd83;
extern PyObject *const_dict_empty;
static PyObject *const_str_plain_sect233k1;
static PyObject *const_tuple_str_plain_private_value_str_plain_curve_str_plain_backend_tuple;
extern PyObject *const_str_plain_cls;
static PyObject *const_str_digest_603eaff03e191a700a2b1914671df0da;
static PyObject *const_str_plain_SECT571R1;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_plain_indexbytes;
extern PyObject *const_str_plain_EllipticCurvePublicKeyWithSerialization;
static PyObject *const_tuple_str_digest_603eaff03e191a700a2b1914671df0da_tuple;
extern PyObject *const_str_plain__x;
extern PyObject *const_str_plain__y;
static PyObject *const_int_pos_409;
static PyObject *const_str_digest_dbf6d039f8f60c267f16f0e2d57f3c97;
extern PyObject *const_str_plain_ECDH;
static PyObject *const_str_plain_SECP256K1;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_backend;
static PyObject *const_str_plain__private_value;
static PyObject *const_str_plain_EllipticCurvePrivateKey;
extern PyObject *const_str_plain_private_numbers;
static PyObject *const_str_digest_71604db97cd557151e77dc7b6e330582;
extern PyObject *const_str_plain_SECP384R1;
extern PyObject *const_str_plain___repr__;
static PyObject *const_str_digest_5f8986471195a2c6620c662ae960224d;
extern PyObject *const_str_plain_DeprecatedIn25;
static PyObject *const_str_plain_derive_private_key;
extern PyObject *const_str_plain___ne__;
static PyObject *const_str_plain_brainpoolP256r1;
extern PyObject *const_str_plain_abstractmethod;
static PyObject *const_str_plain_EllipticCurveSignatureAlgorithm;
static PyObject *const_int_pos_521;
static PyObject *const_str_digest_c5663714080ad9d26f42b5707c55d604;
static PyObject *const_str_plain_brainpoolP384r1;
static PyObject *const_tuple_str_digest_71604db97cd557151e77dc7b6e330582_tuple;
static PyObject *const_int_pos_283;
static PyObject *const_str_plain_sect163r2;
extern PyObject *const_str_plain_EllipticCurvePrivateKeyWithSerialization;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_signature;
extern PyObject *const_str_plain_load_elliptic_curve_public_bytes;
static PyObject *const_str_plain_SECT233R1;
extern PyObject *const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
static PyObject *const_str_digest_51afd334fbe9e34a366509dd059a227d;
static PyObject *const_tuple_dfa545644cbf45e11d8387e47c18b043_tuple;
static PyObject *const_str_digest_baeeba41dbef214ecfcc75c5e4124a57;
static PyObject *const_tuple_str_digest_05c2a42c3e111fb4b7cbbcbc29aaf4bc_tuple;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain_peer_public_key;
extern PyObject *const_str_plain_algorithm;
extern PyObject *const_int_pos_192;
extern PyObject *const_str_plain_curve;
static PyObject *const_str_digest_1834b88554d4d6e7b81f203bfe4e8f26;
extern PyObject *const_tuple_str_plain__algorithm_tuple;
static PyObject *const_tuple_str_digest_a39d4e9786867a0ed9cd6eb4b7286db4_tuple;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_prime192v1;
extern PyObject *const_str_plain_EllipticCurvePublicKey;
extern PyObject *const_str_plain_read_only_property;
static PyObject *const_int_pos_233;
static PyObject *const_str_plain_sect571r1;
static PyObject *const_str_digest_5b16067d701c39d436831860552eefd8;
static PyObject *const_str_digest_6dce02eea2e5fbd78aa8484eb41bc7c6;
static PyObject *const_str_plain_get_curve_for_oid;
static PyObject *const_str_plain_BrainpoolP256R1;
static PyObject *const_tuple_str_digest_b208da37988e2096e7fa65ac4c84795a_tuple;
static PyObject *const_tuple_str_digest_b93015b1083ca77765479f2883c39099_tuple;
extern PyObject *const_tuple_str_plain_utils_tuple;
extern PyObject *const_str_plain_sign;
extern PyObject *const_str_digest_9abb9f40508debfa3aae6d9135753f7e;
static PyObject *const_str_plain_secp256k1;
extern PyObject *const_str_plain_signature_algorithm;
static PyObject *const_int_pos_384;
static PyObject *const_str_digest_b208da37988e2096e7fa65ac4c84795a;
extern PyObject *const_str_plain_SECP256R1;
static PyObject *const_str_digest_020828480d454cdd619f3cc0d1946bfd;
extern PyObject *const_str_plain_signer;
static PyObject *const_str_digest_96a408375a13edb2276fba1f824d31b2;
extern PyObject *const_str_plain_private_key;
extern PyObject *const_str_plain_abstractproperty;
extern PyObject *const_str_plain_stacklevel;
static PyObject *const_str_plain_SECP224R1;
static PyObject *const_str_digest_3c88421968c6b8038a7f79f32d667557;
static PyObject *const_str_plain_sect571k1;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_plain_sect409r1;
static PyObject *const_str_digest_ec0bf4d39d376a71f13ee5736877c3a7;
extern PyObject *const_str_plain_abc;
static PyObject *const_str_plain_sect163k1;
static PyObject *const_tuple_str_plain_self_str_plain_algorithm_str_plain_peer_public_key_tuple;
static PyObject *const_str_digest_1695a5979e0056f6b4900bcc6c9f0a55;
extern PyObject *const_tuple_str_plain_self_str_plain_backend_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_algorithm_tuple;
static PyObject *const_str_digest_966887908e82249bf5393418c35b1969;
extern PyObject *const_str_plain_y;
extern PyObject *const_tuple_str_plain_self_str_plain_signature_algorithm_tuple;
static PyObject *const_str_digest_8268d206d02d3cfab7d6f01b4f940926;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_46042ee23f2c2527013b7a3413c65a23;
static PyObject *const_str_plain_secp521r1;
extern PyObject *const_str_digest_28043235218c2d974c2e2f1ca18ea169;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_BRAINPOOLP256R1;
extern PyObject *const_str_plain_secp256r1;
extern PyObject *const_str_plain_encoding;
extern PyObject *const_str_plain_integer_types;
extern PyObject *const_str_plain_verify;
static PyObject *const_str_digest_614e54485392174eef8d5e8f50fc27bd;
extern PyObject *const_str_plain_generate_elliptic_curve_private_key;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_private_value;
extern PyObject *const_str_plain_int_from_bytes;
extern PyObject *const_str_plain___module__;
extern PyObject *const_int_pos_8;
extern PyObject *const_str_plain_from_encoded_point;
static PyObject *const_str_digest_d95a4ed0ea3d4b3fc1eb5e7764156231;
static PyObject *const_str_digest_11e20910d4cc9a6eaaf2f0fe5c7be75a;
extern PyObject *const_int_pos_7;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_tuple_str_plain__public_numbers_tuple;
extern PyObject *const_str_plain_encryption_algorithm;
extern PyObject *const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple;
extern PyObject *const_str_plain__curve;
static PyObject *const_str_digest_3dc40e53dd4b24847b544b6f257eb244;
static PyObject *const_tuple_str_plain_self_str_plain_data_str_plain_signature_algorithm_tuple;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain__algorithm;
static PyObject *const_str_plain_SECT233K1;
static PyObject *const_str_digest_814981df5369fce8ded82ee3dce783a1;
static PyObject *const_str_digest_9496fbf0e3defd9636cd9a9bd5e76a54;
extern PyObject *const_str_plain_ObjectIdentifier;
extern PyObject *const_str_plain_int_to_bytes;
extern PyObject *const_str_plain_utils;
static PyObject *const_str_digest_78ab400544644b8c62c9d5b48f3728fe;
static PyObject *const_str_plain_EllipticCurve;
static PyObject *const_tuple_str_digest_5b16067d701c39d436831860552eefd8_tuple;
static PyObject *const_tuple_str_digest_abebb11f759e62172f50a69356b78032_tuple;
static PyObject *const_tuple_str_plain_curve_str_plain_backend_tuple;
static PyObject *const_tuple_str_digest_cdd70fc541188a5f76f08641296b35f6_tuple;
static PyObject *const_str_plain_BrainpoolP384R1;
static PyObject *const_str_digest_cdd70fc541188a5f76f08641296b35f6;
extern PyObject *const_int_pos_224;
static PyObject *const_tuple_str_digest_55edae73ac71eac674f1a79882f11e93_tuple;
extern PyObject *const_dict_f154c9a58c9419d7e391901d7b7fe49e;
static PyObject *const_tuple_str_plain_self_str_plain_x_str_plain_y_str_plain_curve_tuple;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_5d9f5c68057f6bda68db87834d8c8486;
static PyObject *const_str_plain_secp384r1;
static PyObject *const_tuple_str_digest_dbf6d039f8f60c267f16f0e2d57f3c97_tuple;
static PyObject *const_str_digest_1da9b665673c38de4d13f4b35a02315b;
extern PyObject *const_str_plain___hash__;
extern PyObject *const_str_plain__CURVE_TYPES;
static PyObject *const_str_plain_SECP192R1;
extern PyObject *const_str_plain_big;
extern PyObject *const_str_plain_prime256v1;
static PyObject *const_str_digest_0de3f4b40f0ef4eb9c079a1682e5fb6e;
static PyObject *const_tuple_500c97f9b280c02cc782ba8c687cf2b8_tuple;
static PyObject *const_tuple_str_plain__private_value_tuple;
extern PyObject *const_str_plain__public_numbers;
extern PyObject *const_str_plain_name;
static PyObject *const_str_digest_91434c7bffcf3c5ef2019dde3efc9536;
static PyObject *const_str_digest_1d186293a8d3705fb2ad2e419c12c23d;
extern PyObject *const_str_plain_derive_elliptic_curve_private_key;
extern PyObject *const_str_plain___eq__;
extern PyObject *const_str_plain_other;
static PyObject *const_str_plain_byte_length;
static PyObject *const_tuple_str_digest_78ab400544644b8c62c9d5b48f3728fe_tuple;
static PyObject *const_tuple_str_digest_7beb17962c98b506f4aed6151df29ace_tuple;
static PyObject *const_str_plain_BRAINPOOLP384R1;
extern PyObject *const_str_plain_load_elliptic_curve_public_numbers;
extern PyObject *const_str_plain_generate_private_key;
static PyObject *const_str_plain_BrainpoolP512R1;
extern PyObject *const_str_plain_ECDSA;
extern PyObject *const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple;
static PyObject *const_tuple_str_digest_814981df5369fce8ded82ee3dce783a1_tuple;
static PyObject *const_str_digest_a39d4e9786867a0ed9cd6eb4b7286db4;
static PyObject *const_str_plain_SECT283R1;
extern PyObject *const_str_chr_4;
extern PyObject *const_str_plain_register_interface;
static PyObject *const_str_digest_542729c625481529de7c47bb8d546552;
extern PyObject *const_str_plain_x;
static PyObject *const_str_plain_SECT283K1;
static PyObject *const_str_digest_b93015b1083ca77765479f2883c39099;
extern PyObject *const_tuple_str_plain__curve_tuple;
extern PyObject *const_str_plain_key_size;
static PyObject *const_tuple_str_plain_self_str_plain_byte_length_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_other_tuple;
extern PyObject *const_str_plain_public_key;
static PyObject *const_tuple_str_plain_oid_tuple;
static PyObject *const_str_digest_a16ca6848a0687233aa378d6bdbd74c2;
extern PyObject *const_str_plain_load_elliptic_curve_private_numbers;
static PyObject *const_str_plain_sect233r1;
extern PyObject *const_tuple_str_plain_ObjectIdentifier_tuple;
extern PyObject *const_str_plain__check_bytes;
static PyObject *const_int_pos_570;
static PyObject *const_int_pos_571;
extern PyObject *const_str_plain_oid;
static PyObject *const_str_digest_05c2a42c3e111fb4b7cbbcbc29aaf4bc;
static PyObject *const_str_plain_brainpoolP512r1;
extern PyObject *const_str_plain_EllipticCurvePrivateNumbers;
static PyObject *const_tuple_str_digest_6dce02eea2e5fbd78aa8484eb41bc7c6_tuple;
extern PyObject *const_tuple_str_plain_backend_tuple;
static PyObject *const_int_pos_163;
extern PyObject *const_str_plain_cryptography;
extern PyObject *const_tuple_str_plain__x_tuple;
static PyObject *const_tuple_3d24a8d2eed0b3b732a22bad9237bdd8_tuple;
extern PyObject *const_tuple_cd246bff18aa775d61bc8164c5fc3494_tuple;
static PyObject *const_str_plain_sect283k1;
static PyObject *const_str_digest_39a7423921fce97ca805dcdabbb3f5a3;
static PyObject *const_str_plain_SECT409K1;
extern PyObject *const_str_plain_SECP521R1;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_int_pos_256;
static PyObject *const_str_digest_abebb11f759e62172f50a69356b78032;
extern PyObject *const_str_plain_public_numbers;
extern PyObject *const_str_plain_exchange;
static PyObject *const_tuple_str_chr_4_tuple;
static PyObject *const_tuple_str_digest_5f8986471195a2c6620c662ae960224d_tuple;
static PyObject *const_list_int_pos_2_int_pos_3_int_pos_4_list;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_int_0;
extern PyObject *const_str_digest_2f788a0baaba09f2767363f45eba5c18;
extern PyObject *const_str_plain_six;
static PyObject *const_tuple_str_digest_c5663714080ad9d26f42b5707c55d604_tuple;
static PyObject *const_str_plain_secp224r1;
static PyObject *const_str_plain_sect283r1;
static PyObject *const_str_plain_SECT571K1;
static PyObject *const_str_plain_SECT409R1;
static PyObject *const_str_plain_BRAINPOOLP512R1;
extern PyObject *const_str_plain_division;
static PyObject *const_str_plain_SECT163K1;
extern PyObject *const_tuple_str_plain__y_tuple;
extern PyObject *const_str_plain_public_bytes;
extern PyObject *const_str_plain_verifier;
static PyObject *const_str_plain__OID_TO_CURVE;
extern PyObject *const_str_plain_self;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_add_metaclass;
extern PyObject *const_str_digest_8b46617860949875a4a83e83f0bd40f5;
static PyObject *const_str_plain_EllipticCurveOID;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_digest_1ad2cf3b84b8bacd26104238bca76891;
static PyObject *const_str_plain_SECT163R2;
static PyObject *const_tuple_7a81e18996a6b6809a16344310d0778f_tuple;
extern PyObject *const_str_plain_ABCMeta;
static PyObject *const_str_plain_encode_point;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_digest_5d9f5c68057f6bda68db87834d8c8486_tuple = PyTuple_New( 1 );
    const_str_digest_5d9f5c68057f6bda68db87834d8c8486 = UNSTREAM_STRING( &constant_bin[ 675443 ], 19, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_5d9f5c68057f6bda68db87834d8c8486_tuple, 0, const_str_digest_5d9f5c68057f6bda68db87834d8c8486 ); Py_INCREF( const_str_digest_5d9f5c68057f6bda68db87834d8c8486 );
    const_str_plain_sect409k1 = UNSTREAM_STRING( &constant_bin[ 675462 ], 9, 1 );
    const_str_digest_7beb17962c98b506f4aed6151df29ace = UNSTREAM_STRING( &constant_bin[ 675471 ], 12, 0 );
    const_str_digest_c6b43e2c56a86af0a4c780cb9abfec2c = UNSTREAM_STRING( &constant_bin[ 675483 ], 12, 0 );
    const_str_digest_55edae73ac71eac674f1a79882f11e93 = UNSTREAM_STRING( &constant_bin[ 675495 ], 12, 0 );
    const_tuple_str_digest_c6b43e2c56a86af0a4c780cb9abfec2c_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_c6b43e2c56a86af0a4c780cb9abfec2c_tuple, 0, const_str_digest_c6b43e2c56a86af0a4c780cb9abfec2c ); Py_INCREF( const_str_digest_c6b43e2c56a86af0a4c780cb9abfec2c );
    const_str_digest_e0664444e0374ef7a5ca5154da13cd83 = UNSTREAM_STRING( &constant_bin[ 675507 ], 66, 0 );
    const_str_plain_sect233k1 = UNSTREAM_STRING( &constant_bin[ 675573 ], 9, 1 );
    const_tuple_str_plain_private_value_str_plain_curve_str_plain_backend_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_private_value_str_plain_curve_str_plain_backend_tuple, 0, const_str_plain_private_value ); Py_INCREF( const_str_plain_private_value );
    PyTuple_SET_ITEM( const_tuple_str_plain_private_value_str_plain_curve_str_plain_backend_tuple, 1, const_str_plain_curve ); Py_INCREF( const_str_plain_curve );
    PyTuple_SET_ITEM( const_tuple_str_plain_private_value_str_plain_curve_str_plain_backend_tuple, 2, const_str_plain_backend ); Py_INCREF( const_str_plain_backend );
    const_str_digest_603eaff03e191a700a2b1914671df0da = UNSTREAM_STRING( &constant_bin[ 675582 ], 12, 0 );
    const_str_plain_SECT571R1 = UNSTREAM_STRING( &constant_bin[ 675594 ], 9, 1 );
    const_tuple_str_digest_603eaff03e191a700a2b1914671df0da_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_603eaff03e191a700a2b1914671df0da_tuple, 0, const_str_digest_603eaff03e191a700a2b1914671df0da ); Py_INCREF( const_str_digest_603eaff03e191a700a2b1914671df0da );
    const_int_pos_409 = PyInt_FromLong( 409l );
    const_str_digest_dbf6d039f8f60c267f16f0e2d57f3c97 = UNSTREAM_STRING( &constant_bin[ 675603 ], 12, 0 );
    const_str_plain_SECP256K1 = UNSTREAM_STRING( &constant_bin[ 675615 ], 9, 1 );
    const_str_plain__private_value = UNSTREAM_STRING( &constant_bin[ 675624 ], 14, 1 );
    const_str_plain_EllipticCurvePrivateKey = UNSTREAM_STRING( &constant_bin[ 642271 ], 23, 1 );
    const_str_digest_71604db97cd557151e77dc7b6e330582 = UNSTREAM_STRING( &constant_bin[ 675638 ], 12, 0 );
    const_str_digest_5f8986471195a2c6620c662ae960224d = UNSTREAM_STRING( &constant_bin[ 675650 ], 12, 0 );
    const_str_plain_derive_private_key = UNSTREAM_STRING( &constant_bin[ 675662 ], 18, 1 );
    const_str_plain_brainpoolP256r1 = UNSTREAM_STRING( &constant_bin[ 675680 ], 15, 1 );
    const_str_plain_EllipticCurveSignatureAlgorithm = UNSTREAM_STRING( &constant_bin[ 675695 ], 31, 1 );
    const_int_pos_521 = PyInt_FromLong( 521l );
    const_str_digest_c5663714080ad9d26f42b5707c55d604 = UNSTREAM_STRING( &constant_bin[ 675726 ], 20, 0 );
    const_str_plain_brainpoolP384r1 = UNSTREAM_STRING( &constant_bin[ 675746 ], 15, 1 );
    const_tuple_str_digest_71604db97cd557151e77dc7b6e330582_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_71604db97cd557151e77dc7b6e330582_tuple, 0, const_str_digest_71604db97cd557151e77dc7b6e330582 ); Py_INCREF( const_str_digest_71604db97cd557151e77dc7b6e330582 );
    const_int_pos_283 = PyInt_FromLong( 283l );
    const_str_plain_sect163r2 = UNSTREAM_STRING( &constant_bin[ 675761 ], 9, 1 );
    const_str_plain_SECT233R1 = UNSTREAM_STRING( &constant_bin[ 675770 ], 9, 1 );
    const_str_digest_51afd334fbe9e34a366509dd059a227d = UNSTREAM_STRING( &constant_bin[ 675779 ], 56, 0 );
    const_tuple_dfa545644cbf45e11d8387e47c18b043_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_dfa545644cbf45e11d8387e47c18b043_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_dfa545644cbf45e11d8387e47c18b043_tuple, 1, const_str_plain_private_value ); Py_INCREF( const_str_plain_private_value );
    PyTuple_SET_ITEM( const_tuple_dfa545644cbf45e11d8387e47c18b043_tuple, 2, const_str_plain_public_numbers ); Py_INCREF( const_str_plain_public_numbers );
    const_str_digest_baeeba41dbef214ecfcc75c5e4124a57 = UNSTREAM_STRING( &constant_bin[ 675835 ], 47, 0 );
    const_tuple_str_digest_05c2a42c3e111fb4b7cbbcbc29aaf4bc_tuple = PyTuple_New( 1 );
    const_str_digest_05c2a42c3e111fb4b7cbbcbc29aaf4bc = UNSTREAM_STRING( &constant_bin[ 675882 ], 21, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_05c2a42c3e111fb4b7cbbcbc29aaf4bc_tuple, 0, const_str_digest_05c2a42c3e111fb4b7cbbcbc29aaf4bc ); Py_INCREF( const_str_digest_05c2a42c3e111fb4b7cbbcbc29aaf4bc );
    const_str_digest_1834b88554d4d6e7b81f203bfe4e8f26 = UNSTREAM_STRING( &constant_bin[ 675903 ], 56, 0 );
    const_tuple_str_digest_a39d4e9786867a0ed9cd6eb4b7286db4_tuple = PyTuple_New( 1 );
    const_str_digest_a39d4e9786867a0ed9cd6eb4b7286db4 = UNSTREAM_STRING( &constant_bin[ 675959 ], 12, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_a39d4e9786867a0ed9cd6eb4b7286db4_tuple, 0, const_str_digest_a39d4e9786867a0ed9cd6eb4b7286db4 ); Py_INCREF( const_str_digest_a39d4e9786867a0ed9cd6eb4b7286db4 );
    const_int_pos_233 = PyInt_FromLong( 233l );
    const_str_plain_sect571r1 = UNSTREAM_STRING( &constant_bin[ 675971 ], 9, 1 );
    const_str_digest_5b16067d701c39d436831860552eefd8 = UNSTREAM_STRING( &constant_bin[ 675582 ], 11, 0 );
    const_str_digest_6dce02eea2e5fbd78aa8484eb41bc7c6 = UNSTREAM_STRING( &constant_bin[ 675980 ], 19, 0 );
    const_str_plain_get_curve_for_oid = UNSTREAM_STRING( &constant_bin[ 675999 ], 17, 1 );
    const_str_plain_BrainpoolP256R1 = UNSTREAM_STRING( &constant_bin[ 676016 ], 15, 1 );
    const_tuple_str_digest_b208da37988e2096e7fa65ac4c84795a_tuple = PyTuple_New( 1 );
    const_str_digest_b208da37988e2096e7fa65ac4c84795a = UNSTREAM_STRING( &constant_bin[ 676031 ], 12, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b208da37988e2096e7fa65ac4c84795a_tuple, 0, const_str_digest_b208da37988e2096e7fa65ac4c84795a ); Py_INCREF( const_str_digest_b208da37988e2096e7fa65ac4c84795a );
    const_tuple_str_digest_b93015b1083ca77765479f2883c39099_tuple = PyTuple_New( 1 );
    const_str_digest_b93015b1083ca77765479f2883c39099 = UNSTREAM_STRING( &constant_bin[ 676043 ], 12, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b93015b1083ca77765479f2883c39099_tuple, 0, const_str_digest_b93015b1083ca77765479f2883c39099 ); Py_INCREF( const_str_digest_b93015b1083ca77765479f2883c39099 );
    const_str_plain_secp256k1 = UNSTREAM_STRING( &constant_bin[ 676055 ], 9, 1 );
    const_int_pos_384 = PyInt_FromLong( 384l );
    const_str_digest_020828480d454cdd619f3cc0d1946bfd = UNSTREAM_STRING( &constant_bin[ 676064 ], 64, 0 );
    const_str_digest_96a408375a13edb2276fba1f824d31b2 = UNSTREAM_STRING( &constant_bin[ 676128 ], 56, 0 );
    const_str_plain_SECP224R1 = UNSTREAM_STRING( &constant_bin[ 676184 ], 9, 1 );
    const_str_digest_3c88421968c6b8038a7f79f32d667557 = UNSTREAM_STRING( &constant_bin[ 676193 ], 37, 0 );
    const_str_plain_sect571k1 = UNSTREAM_STRING( &constant_bin[ 676230 ], 9, 1 );
    const_str_plain_sect409r1 = UNSTREAM_STRING( &constant_bin[ 676239 ], 9, 1 );
    const_str_digest_ec0bf4d39d376a71f13ee5736877c3a7 = UNSTREAM_STRING( &constant_bin[ 676248 ], 47, 0 );
    const_str_plain_sect163k1 = UNSTREAM_STRING( &constant_bin[ 676295 ], 9, 1 );
    const_tuple_str_plain_self_str_plain_algorithm_str_plain_peer_public_key_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_algorithm_str_plain_peer_public_key_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_algorithm_str_plain_peer_public_key_tuple, 1, const_str_plain_algorithm ); Py_INCREF( const_str_plain_algorithm );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_algorithm_str_plain_peer_public_key_tuple, 2, const_str_plain_peer_public_key ); Py_INCREF( const_str_plain_peer_public_key );
    const_str_digest_1695a5979e0056f6b4900bcc6c9f0a55 = UNSTREAM_STRING( &constant_bin[ 676304 ], 57, 0 );
    const_str_digest_966887908e82249bf5393418c35b1969 = UNSTREAM_STRING( &constant_bin[ 676361 ], 39, 0 );
    const_str_digest_8268d206d02d3cfab7d6f01b4f940926 = UNSTREAM_STRING( &constant_bin[ 676400 ], 60, 0 );
    const_str_digest_46042ee23f2c2527013b7a3413c65a23 = UNSTREAM_STRING( &constant_bin[ 676460 ], 40, 0 );
    const_str_plain_secp521r1 = UNSTREAM_STRING( &constant_bin[ 676500 ], 9, 1 );
    const_str_plain_BRAINPOOLP256R1 = UNSTREAM_STRING( &constant_bin[ 676509 ], 15, 1 );
    const_str_digest_614e54485392174eef8d5e8f50fc27bd = UNSTREAM_STRING( &constant_bin[ 676524 ], 157, 0 );
    const_str_digest_d95a4ed0ea3d4b3fc1eb5e7764156231 = UNSTREAM_STRING( &constant_bin[ 676681 ], 62, 0 );
    const_str_digest_11e20910d4cc9a6eaaf2f0fe5c7be75a = UNSTREAM_STRING( &constant_bin[ 676743 ], 38, 0 );
    const_str_digest_3dc40e53dd4b24847b544b6f257eb244 = UNSTREAM_STRING( &constant_bin[ 676781 ], 67, 0 );
    const_tuple_str_plain_self_str_plain_data_str_plain_signature_algorithm_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_data_str_plain_signature_algorithm_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_data_str_plain_signature_algorithm_tuple, 1, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_data_str_plain_signature_algorithm_tuple, 2, const_str_plain_signature_algorithm ); Py_INCREF( const_str_plain_signature_algorithm );
    const_str_plain_SECT233K1 = UNSTREAM_STRING( &constant_bin[ 676848 ], 9, 1 );
    const_str_digest_814981df5369fce8ded82ee3dce783a1 = UNSTREAM_STRING( &constant_bin[ 676857 ], 21, 0 );
    const_str_digest_9496fbf0e3defd9636cd9a9bd5e76a54 = UNSTREAM_STRING( &constant_bin[ 676878 ], 25, 0 );
    const_str_digest_78ab400544644b8c62c9d5b48f3728fe = UNSTREAM_STRING( &constant_bin[ 676903 ], 12, 0 );
    const_str_plain_EllipticCurve = UNSTREAM_STRING( &constant_bin[ 79661 ], 13, 1 );
    const_tuple_str_digest_5b16067d701c39d436831860552eefd8_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_5b16067d701c39d436831860552eefd8_tuple, 0, const_str_digest_5b16067d701c39d436831860552eefd8 ); Py_INCREF( const_str_digest_5b16067d701c39d436831860552eefd8 );
    const_tuple_str_digest_abebb11f759e62172f50a69356b78032_tuple = PyTuple_New( 1 );
    const_str_digest_abebb11f759e62172f50a69356b78032 = UNSTREAM_STRING( &constant_bin[ 676915 ], 12, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_abebb11f759e62172f50a69356b78032_tuple, 0, const_str_digest_abebb11f759e62172f50a69356b78032 ); Py_INCREF( const_str_digest_abebb11f759e62172f50a69356b78032 );
    const_tuple_str_plain_curve_str_plain_backend_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_curve_str_plain_backend_tuple, 0, const_str_plain_curve ); Py_INCREF( const_str_plain_curve );
    PyTuple_SET_ITEM( const_tuple_str_plain_curve_str_plain_backend_tuple, 1, const_str_plain_backend ); Py_INCREF( const_str_plain_backend );
    const_tuple_str_digest_cdd70fc541188a5f76f08641296b35f6_tuple = PyTuple_New( 1 );
    const_str_digest_cdd70fc541188a5f76f08641296b35f6 = UNSTREAM_STRING( &constant_bin[ 676927 ], 12, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_cdd70fc541188a5f76f08641296b35f6_tuple, 0, const_str_digest_cdd70fc541188a5f76f08641296b35f6 ); Py_INCREF( const_str_digest_cdd70fc541188a5f76f08641296b35f6 );
    const_str_plain_BrainpoolP384R1 = UNSTREAM_STRING( &constant_bin[ 676939 ], 15, 1 );
    const_tuple_str_digest_55edae73ac71eac674f1a79882f11e93_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_55edae73ac71eac674f1a79882f11e93_tuple, 0, const_str_digest_55edae73ac71eac674f1a79882f11e93 ); Py_INCREF( const_str_digest_55edae73ac71eac674f1a79882f11e93 );
    const_tuple_str_plain_self_str_plain_x_str_plain_y_str_plain_curve_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_x_str_plain_y_str_plain_curve_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_x_str_plain_y_str_plain_curve_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_x_str_plain_y_str_plain_curve_tuple, 2, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_x_str_plain_y_str_plain_curve_tuple, 3, const_str_plain_curve ); Py_INCREF( const_str_plain_curve );
    const_str_plain_secp384r1 = UNSTREAM_STRING( &constant_bin[ 676954 ], 9, 1 );
    const_tuple_str_digest_dbf6d039f8f60c267f16f0e2d57f3c97_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_dbf6d039f8f60c267f16f0e2d57f3c97_tuple, 0, const_str_digest_dbf6d039f8f60c267f16f0e2d57f3c97 ); Py_INCREF( const_str_digest_dbf6d039f8f60c267f16f0e2d57f3c97 );
    const_str_digest_1da9b665673c38de4d13f4b35a02315b = UNSTREAM_STRING( &constant_bin[ 676963 ], 67, 0 );
    const_str_plain_SECP192R1 = UNSTREAM_STRING( &constant_bin[ 677030 ], 9, 1 );
    const_str_digest_0de3f4b40f0ef4eb9c079a1682e5fb6e = UNSTREAM_STRING( &constant_bin[ 677039 ], 37, 0 );
    const_tuple_500c97f9b280c02cc782ba8c687cf2b8_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_500c97f9b280c02cc782ba8c687cf2b8_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_500c97f9b280c02cc782ba8c687cf2b8_tuple, 1, const_str_plain_signature ); Py_INCREF( const_str_plain_signature );
    PyTuple_SET_ITEM( const_tuple_500c97f9b280c02cc782ba8c687cf2b8_tuple, 2, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_500c97f9b280c02cc782ba8c687cf2b8_tuple, 3, const_str_plain_signature_algorithm ); Py_INCREF( const_str_plain_signature_algorithm );
    const_tuple_str_plain__private_value_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__private_value_tuple, 0, const_str_plain__private_value ); Py_INCREF( const_str_plain__private_value );
    const_str_digest_91434c7bffcf3c5ef2019dde3efc9536 = UNSTREAM_STRING( &constant_bin[ 677076 ], 33, 0 );
    const_str_digest_1d186293a8d3705fb2ad2e419c12c23d = UNSTREAM_STRING( &constant_bin[ 677109 ], 125, 0 );
    const_str_plain_byte_length = UNSTREAM_STRING( &constant_bin[ 677234 ], 11, 1 );
    const_tuple_str_digest_78ab400544644b8c62c9d5b48f3728fe_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_78ab400544644b8c62c9d5b48f3728fe_tuple, 0, const_str_digest_78ab400544644b8c62c9d5b48f3728fe ); Py_INCREF( const_str_digest_78ab400544644b8c62c9d5b48f3728fe );
    const_tuple_str_digest_7beb17962c98b506f4aed6151df29ace_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_7beb17962c98b506f4aed6151df29ace_tuple, 0, const_str_digest_7beb17962c98b506f4aed6151df29ace ); Py_INCREF( const_str_digest_7beb17962c98b506f4aed6151df29ace );
    const_str_plain_BRAINPOOLP384R1 = UNSTREAM_STRING( &constant_bin[ 677245 ], 15, 1 );
    const_str_plain_BrainpoolP512R1 = UNSTREAM_STRING( &constant_bin[ 677260 ], 15, 1 );
    const_tuple_str_digest_814981df5369fce8ded82ee3dce783a1_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_814981df5369fce8ded82ee3dce783a1_tuple, 0, const_str_digest_814981df5369fce8ded82ee3dce783a1 ); Py_INCREF( const_str_digest_814981df5369fce8ded82ee3dce783a1 );
    const_str_plain_SECT283R1 = UNSTREAM_STRING( &constant_bin[ 677275 ], 9, 1 );
    const_str_digest_542729c625481529de7c47bb8d546552 = UNSTREAM_STRING( &constant_bin[ 677284 ], 41, 0 );
    const_str_plain_SECT283K1 = UNSTREAM_STRING( &constant_bin[ 677325 ], 9, 1 );
    const_tuple_str_plain_self_str_plain_byte_length_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_byte_length_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_byte_length_tuple, 1, const_str_plain_byte_length ); Py_INCREF( const_str_plain_byte_length );
    const_tuple_str_plain_oid_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_oid_tuple, 0, const_str_plain_oid ); Py_INCREF( const_str_plain_oid );
    const_str_digest_a16ca6848a0687233aa378d6bdbd74c2 = UNSTREAM_STRING( &constant_bin[ 677334 ], 53, 0 );
    const_str_plain_sect233r1 = UNSTREAM_STRING( &constant_bin[ 677387 ], 9, 1 );
    const_int_pos_570 = PyInt_FromLong( 570l );
    const_int_pos_571 = PyInt_FromLong( 571l );
    const_str_plain_brainpoolP512r1 = UNSTREAM_STRING( &constant_bin[ 677396 ], 15, 1 );
    const_tuple_str_digest_6dce02eea2e5fbd78aa8484eb41bc7c6_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_6dce02eea2e5fbd78aa8484eb41bc7c6_tuple, 0, const_str_digest_6dce02eea2e5fbd78aa8484eb41bc7c6 ); Py_INCREF( const_str_digest_6dce02eea2e5fbd78aa8484eb41bc7c6 );
    const_int_pos_163 = PyInt_FromLong( 163l );
    const_tuple_3d24a8d2eed0b3b732a22bad9237bdd8_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_3d24a8d2eed0b3b732a22bad9237bdd8_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_3d24a8d2eed0b3b732a22bad9237bdd8_tuple, 1, const_str_plain_curve ); Py_INCREF( const_str_plain_curve );
    PyTuple_SET_ITEM( const_tuple_3d24a8d2eed0b3b732a22bad9237bdd8_tuple, 2, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_3d24a8d2eed0b3b732a22bad9237bdd8_tuple, 3, const_str_plain_backend ); Py_INCREF( const_str_plain_backend );
    const_str_plain_sect283k1 = UNSTREAM_STRING( &constant_bin[ 677411 ], 9, 1 );
    const_str_digest_39a7423921fce97ca805dcdabbb3f5a3 = UNSTREAM_STRING( &constant_bin[ 677420 ], 209, 0 );
    const_str_plain_SECT409K1 = UNSTREAM_STRING( &constant_bin[ 677629 ], 9, 1 );
    const_tuple_str_chr_4_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_chr_4_tuple, 0, const_str_chr_4 ); Py_INCREF( const_str_chr_4 );
    const_tuple_str_digest_5f8986471195a2c6620c662ae960224d_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_5f8986471195a2c6620c662ae960224d_tuple, 0, const_str_digest_5f8986471195a2c6620c662ae960224d ); Py_INCREF( const_str_digest_5f8986471195a2c6620c662ae960224d );
    const_list_int_pos_2_int_pos_3_int_pos_4_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_int_pos_2_int_pos_3_int_pos_4_list, 0, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    PyList_SET_ITEM( const_list_int_pos_2_int_pos_3_int_pos_4_list, 1, const_int_pos_3 ); Py_INCREF( const_int_pos_3 );
    PyList_SET_ITEM( const_list_int_pos_2_int_pos_3_int_pos_4_list, 2, const_int_pos_4 ); Py_INCREF( const_int_pos_4 );
    const_tuple_str_digest_c5663714080ad9d26f42b5707c55d604_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_c5663714080ad9d26f42b5707c55d604_tuple, 0, const_str_digest_c5663714080ad9d26f42b5707c55d604 ); Py_INCREF( const_str_digest_c5663714080ad9d26f42b5707c55d604 );
    const_str_plain_secp224r1 = UNSTREAM_STRING( &constant_bin[ 677638 ], 9, 1 );
    const_str_plain_sect283r1 = UNSTREAM_STRING( &constant_bin[ 677647 ], 9, 1 );
    const_str_plain_SECT571K1 = UNSTREAM_STRING( &constant_bin[ 677656 ], 9, 1 );
    const_str_plain_SECT409R1 = UNSTREAM_STRING( &constant_bin[ 677665 ], 9, 1 );
    const_str_plain_BRAINPOOLP512R1 = UNSTREAM_STRING( &constant_bin[ 677674 ], 15, 1 );
    const_str_plain_SECT163K1 = UNSTREAM_STRING( &constant_bin[ 677689 ], 9, 1 );
    const_str_plain__OID_TO_CURVE = UNSTREAM_STRING( &constant_bin[ 677698 ], 13, 1 );
    const_str_plain_EllipticCurveOID = UNSTREAM_STRING( &constant_bin[ 677711 ], 16, 1 );
    const_str_plain_SECT163R2 = UNSTREAM_STRING( &constant_bin[ 677727 ], 9, 1 );
    const_tuple_7a81e18996a6b6809a16344310d0778f_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_7a81e18996a6b6809a16344310d0778f_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_7a81e18996a6b6809a16344310d0778f_tuple, 1, const_str_plain_curve ); Py_INCREF( const_str_plain_curve );
    PyTuple_SET_ITEM( const_tuple_7a81e18996a6b6809a16344310d0778f_tuple, 2, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_7a81e18996a6b6809a16344310d0778f_tuple, 3, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_7a81e18996a6b6809a16344310d0778f_tuple, 4, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_7a81e18996a6b6809a16344310d0778f_tuple, 5, const_str_plain_byte_length ); Py_INCREF( const_str_plain_byte_length );
    const_str_plain_encode_point = UNSTREAM_STRING( &constant_bin[ 658617 ], 12, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$hazmat$primitives$asymmetric$ec( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_546b65168cc038495051af0d76cca4f6;
static PyCodeObject *codeobj_cc4e888cc94df5c1328d0569bb35c9a6;
static PyCodeObject *codeobj_cc397b59a6ac7c20e5bb9707430aa4d6;
static PyCodeObject *codeobj_035f23bd6fb1c44577d68aa9c7f5692a;
static PyCodeObject *codeobj_1a159964efa70eb57a461347405834b5;
static PyCodeObject *codeobj_6d6a3047393374d1a1724a05a2d8f966;
static PyCodeObject *codeobj_66b4421857cfa70618deb61e7277fbc2;
static PyCodeObject *codeobj_0ed21e32ea6fb2f78de16033f39d4689;
static PyCodeObject *codeobj_72cdff8c1865c1ed080e88abf19128d5;
static PyCodeObject *codeobj_6eb5dd285be8dfa611911792699ffbb0;
static PyCodeObject *codeobj_8fab0213febefe4b3b54a04d9c49b1ed;
static PyCodeObject *codeobj_f262b5f8691f35715f436a309358affd;
static PyCodeObject *codeobj_0349a367393d070a57f597ff1cf01bef;
static PyCodeObject *codeobj_eef3494d50203485b1e2734732811cb9;
static PyCodeObject *codeobj_083f395734704d525573c6aaa30f0bed;
static PyCodeObject *codeobj_2671787c1ec7609a2fb54bc6fc3a96b6;
static PyCodeObject *codeobj_9e28924ae7c5702e314ef9a888ef620c;
static PyCodeObject *codeobj_52210d768c08d43e18949ebc582d899c;
static PyCodeObject *codeobj_573787752998cfc233a7b18b5f0cde4c;
static PyCodeObject *codeobj_66ba9a80adc97cf09e8872f03260b1a6;
static PyCodeObject *codeobj_4ac756da57f41accf05333d840a20823;
static PyCodeObject *codeobj_1d00551c57d953fcd96d7bca37e42b4c;
static PyCodeObject *codeobj_409f1b989d2ae9bd03ef02e2bfd2cadf;
static PyCodeObject *codeobj_655ec7922642b8a96eb5ad1fdbeaa984;
static PyCodeObject *codeobj_378283b89290ea2673fb249dbc55ae88;
static PyCodeObject *codeobj_cb76565d004188a85adfb364389bc3e0;
static PyCodeObject *codeobj_1dbf78ceea286a6dd8ebfbcd47bd4c99;
static PyCodeObject *codeobj_f9609f97425c6b6880ec8699f30740b8;
static PyCodeObject *codeobj_f064fbe01968e95d26ab8e842fd80f2f;
static PyCodeObject *codeobj_2abdcd65b1747e23172598d806d26647;
static PyCodeObject *codeobj_b638d63aa4c8ba18b295d1297488d167;
static PyCodeObject *codeobj_a760dff5250cbe324689e4a4e582fc77;
static PyCodeObject *codeobj_f246ef9097f222e2c49b897c669bda65;
static PyCodeObject *codeobj_26fea039ab0f604aaa0c512b5f352647;
static PyCodeObject *codeobj_8ea847e3da19b70b75c3d063145cdde8;
static PyCodeObject *codeobj_5224c73fa83ca5b1c6d569b9cb716ea2;
static PyCodeObject *codeobj_d8b0ef723fe6de7850ff8f9c7ba17ba5;
static PyCodeObject *codeobj_daabe35adacc16b67b2e798124488c75;
static PyCodeObject *codeobj_3855b4494f40d5c5942e44e89549f363;
static PyCodeObject *codeobj_7147dc4cb1c408b7f3d1fca7de2969cf;
static PyCodeObject *codeobj_001018b7d24ec62dfed99c0dfb438427;
static PyCodeObject *codeobj_39af2a2611a9a8dd4cbd644e9adbc8b9;
static PyCodeObject *codeobj_267ddf43d2b24f8e3ebed97b0123eb8a;
static PyCodeObject *codeobj_b88f47efd18844172db162a307d348f7;
static PyCodeObject *codeobj_54e7e0cc4728699d575b5f5bc4863fdb;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_baeeba41dbef214ecfcc75c5e4124a57 );
    codeobj_546b65168cc038495051af0d76cca4f6 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_a16ca6848a0687233aa378d6bdbd74c2, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_cc4e888cc94df5c1328d0569bb35c9a6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ECDSA, 319, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_cc397b59a6ac7c20e5bb9707430aa4d6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_EllipticCurve, 39, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_035f23bd6fb1c44577d68aa9c7f5692a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_EllipticCurveOID, 16, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1a159964efa70eb57a461347405834b5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_EllipticCurvePrivateKey, 63, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6d6a3047393374d1a1724a05a2d8f966 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_EllipticCurvePrivateKeyWithSerialization, 103, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_66b4421857cfa70618deb61e7277fbc2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_EllipticCurvePrivateNumbers, 430, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0ed21e32ea6fb2f78de16033f39d4689 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_EllipticCurvePublicKey, 118, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_72cdff8c1865c1ed080e88abf19128d5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_EllipticCurvePublicNumbers, 343, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6eb5dd285be8dfa611911792699ffbb0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_EllipticCurveSignatureAlgorithm, 54, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8fab0213febefe4b3b54a04d9c49b1ed = MAKE_CODEOBJ( module_filename_obj, const_str_plain___eq__, 406, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f262b5f8691f35715f436a309358affd = MAKE_CODEOBJ( module_filename_obj, const_str_plain___eq__, 450, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0349a367393d070a57f597ff1cf01bef = MAKE_CODEOBJ( module_filename_obj, const_str_plain___hash__, 420, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_eef3494d50203485b1e2734732811cb9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___hash__, 462, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_083f395734704d525573c6aaa30f0bed = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 320, const_tuple_str_plain_self_str_plain_algorithm_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2671787c1ec7609a2fb54bc6fc3a96b6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 344, const_tuple_str_plain_self_str_plain_x_str_plain_y_str_plain_curve_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9e28924ae7c5702e314ef9a888ef620c = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 431, const_tuple_dfa545644cbf45e11d8387e47c18b043_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_52210d768c08d43e18949ebc582d899c = MAKE_CODEOBJ( module_filename_obj, const_str_plain___ne__, 417, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_573787752998cfc233a7b18b5f0cde4c = MAKE_CODEOBJ( module_filename_obj, const_str_plain___ne__, 459, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_66ba9a80adc97cf09e8872f03260b1a6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr__, 423, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4ac756da57f41accf05333d840a20823 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_algorithm, 55, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1d00551c57d953fcd96d7bca37e42b4c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_curve, 83, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_409f1b989d2ae9bd03ef02e2bfd2cadf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_curve, 125, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_655ec7922642b8a96eb5ad1fdbeaa984 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_derive_private_key, 330, const_tuple_str_plain_private_value_str_plain_curve_str_plain_backend_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_378283b89290ea2673fb249dbc55ae88 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encode_point, 361, const_tuple_str_plain_self_str_plain_byte_length_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_cb76565d004188a85adfb364389bc3e0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_exchange, 70, const_tuple_str_plain_self_str_plain_algorithm_str_plain_peer_public_key_tuple, 3, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1dbf78ceea286a6dd8ebfbcd47bd4c99 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_from_encoded_point, 155, const_tuple_3d24a8d2eed0b3b732a22bad9237bdd8_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f9609f97425c6b6880ec8699f30740b8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_from_encoded_point, 377, const_tuple_7a81e18996a6b6809a16344310d0778f_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f064fbe01968e95d26ab8e842fd80f2f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generate_private_key, 326, const_tuple_str_plain_curve_str_plain_backend_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2abdcd65b1747e23172598d806d26647 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_curve_for_oid, 493, const_tuple_str_plain_oid_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b638d63aa4c8ba18b295d1297488d167 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_key_size, 46, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a760dff5250cbe324689e4a4e582fc77 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_key_size, 89, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f246ef9097f222e2c49b897c669bda65 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_key_size, 131, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_26fea039ab0f604aaa0c512b5f352647 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_name, 40, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8ea847e3da19b70b75c3d063145cdde8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_private_bytes, 110, const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple, 4, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5224c73fa83ca5b1c6d569b9cb716ea2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_private_key, 444, const_tuple_str_plain_self_str_plain_backend_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d8b0ef723fe6de7850ff8f9c7ba17ba5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_private_numbers, 104, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_daabe35adacc16b67b2e798124488c75 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_public_bytes, 143, const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple, 3, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3855b4494f40d5c5942e44e89549f363 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_public_key, 77, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7147dc4cb1c408b7f3d1fca7de2969cf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_public_key, 358, const_tuple_str_plain_self_str_plain_backend_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_001018b7d24ec62dfed99c0dfb438427 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_public_numbers, 137, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_39af2a2611a9a8dd4cbd644e9adbc8b9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sign, 95, const_tuple_str_plain_self_str_plain_data_str_plain_signature_algorithm_tuple, 3, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_267ddf43d2b24f8e3ebed97b0123eb8a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_signer, 64, const_tuple_str_plain_self_str_plain_signature_algorithm_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b88f47efd18844172db162a307d348f7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_verifier, 119, const_tuple_cd246bff18aa775d61bc8164c5fc3494_tuple, 3, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_54e7e0cc4728699d575b5f5bc4863fdb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_verify, 149, const_tuple_500c97f9b280c02cc782ba8c687cf2b8_tuple, 4, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_10_private_numbers(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_11_private_bytes(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_12_verifier(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_13_curve(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_14_key_size(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_15_public_numbers(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_16_public_bytes(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_17_verify(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_18_from_encoded_point(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_19___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_1_name(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_20_generate_private_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_21_derive_private_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_22___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_23_public_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_24_encode_point(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_25_from_encoded_point(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_26___eq__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_27___ne__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_28___hash__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_29___repr__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_2_key_size(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_30___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_31_private_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_32___eq__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_33___ne__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_34___hash__(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_35_get_curve_for_oid(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_3_algorithm(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_4_signer(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_5_exchange(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_6_public_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_7_curve(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_8_key_size(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_9_sign(  );


// The module function definitions.
static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_1_name( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_1_name );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_1_name );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_2_key_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_2_key_size );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_2_key_size );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_3_algorithm( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_3_algorithm );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_3_algorithm );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_4_signer( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_signature_algorithm = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_4_signer );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_signature_algorithm );
    Py_DECREF( par_signature_algorithm );
    par_signature_algorithm = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_signature_algorithm );
    Py_DECREF( par_signature_algorithm );
    par_signature_algorithm = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_4_signer );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_5_exchange( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_algorithm = python_pars[ 1 ];
    PyObject *par_peer_public_key = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_5_exchange );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_peer_public_key );
    Py_DECREF( par_peer_public_key );
    par_peer_public_key = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_peer_public_key );
    Py_DECREF( par_peer_public_key );
    par_peer_public_key = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_5_exchange );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_6_public_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_6_public_key );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_6_public_key );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_7_curve( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_7_curve );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_7_curve );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_8_key_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_8_key_size );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_8_key_size );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_9_sign( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *par_signature_algorithm = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_9_sign );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_signature_algorithm );
    Py_DECREF( par_signature_algorithm );
    par_signature_algorithm = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_signature_algorithm );
    Py_DECREF( par_signature_algorithm );
    par_signature_algorithm = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_9_sign );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_10_private_numbers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_10_private_numbers );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_10_private_numbers );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_11_private_bytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_11_private_bytes );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_11_private_bytes );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_12_verifier( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_signature = python_pars[ 1 ];
    PyObject *par_signature_algorithm = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_12_verifier );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_signature_algorithm );
    Py_DECREF( par_signature_algorithm );
    par_signature_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_signature );
    Py_DECREF( par_signature );
    par_signature = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_signature_algorithm );
    Py_DECREF( par_signature_algorithm );
    par_signature_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_signature );
    Py_DECREF( par_signature );
    par_signature = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_12_verifier );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_13_curve( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_13_curve );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_13_curve );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_14_key_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_14_key_size );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_14_key_size );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_15_public_numbers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_15_public_numbers );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_15_public_numbers );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_16_public_bytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_16_public_bytes );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_16_public_bytes );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_17_verify( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_signature = python_pars[ 1 ];
    PyObject *par_data = python_pars[ 2 ];
    PyObject *par_signature_algorithm = python_pars[ 3 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_17_verify );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_signature_algorithm );
    Py_DECREF( par_signature_algorithm );
    par_signature_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_signature );
    Py_DECREF( par_signature );
    par_signature = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_signature_algorithm );
    Py_DECREF( par_signature_algorithm );
    par_signature_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_signature );
    Py_DECREF( par_signature );
    par_signature = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_17_verify );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_18_from_encoded_point( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_curve = python_pars[ 1 ];
    PyObject *par_data = python_pars[ 2 ];
    PyObject *var_backend = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    int tmp_cmp_Eq_1;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_name_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    int tmp_res;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1dbf78ceea286a6dd8ebfbcd47bd4c99 = NULL;

    struct Nuitka_FrameObject *frame_1dbf78ceea286a6dd8ebfbcd47bd4c99;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1dbf78ceea286a6dd8ebfbcd47bd4c99, codeobj_1dbf78ceea286a6dd8ebfbcd47bd4c99, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1dbf78ceea286a6dd8ebfbcd47bd4c99 = cache_frame_1dbf78ceea286a6dd8ebfbcd47bd4c99;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1dbf78ceea286a6dd8ebfbcd47bd4c99 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1dbf78ceea286a6dd8ebfbcd47bd4c99 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

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

        exception_lineno = 157;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_plain_data;
    tmp_args_element_name_2 = par_data;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_1dbf78ceea286a6dd8ebfbcd47bd4c99->m_frame.f_lineno = 157;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain__check_bytes, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_isinstance_inst_1 = par_curve;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurve );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurve );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "EllipticCurve" );
        exception_tb = NULL;

        exception_lineno = 159;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_1 = "oooo";
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
    tmp_make_exception_arg_1 = const_str_digest_966887908e82249bf5393418c35b1969;
    frame_1dbf78ceea286a6dd8ebfbcd47bd4c99->m_frame.f_lineno = 160;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 160;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_len_arg_1 = par_data;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
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

        exception_lineno = 162;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_2 = const_str_digest_3c88421968c6b8038a7f79f32d667557;
    frame_1dbf78ceea286a6dd8ebfbcd47bd4c99->m_frame.f_lineno = 163;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 163;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "six" );
        exception_tb = NULL;

        exception_lineno = 165;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_data;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = const_int_0;
    frame_1dbf78ceea286a6dd8ebfbcd47bd4c99->m_frame.f_lineno = 165;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_compare_left_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_indexbytes, call_args );
    }

    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = LIST_COPY( const_list_int_pos_2_int_pos_3_int_pos_4_list );
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_make_exception_arg_3 = const_str_digest_0de3f4b40f0ef4eb9c079a1682e5fb6e;
    frame_1dbf78ceea286a6dd8ebfbcd47bd4c99->m_frame.f_lineno = 166;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 166;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_name_name_1 = const_str_digest_9abb9f40508debfa3aae6d9135753f7e;
    tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ec;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_backend_tuple;
    tmp_level_name_1 = const_int_0;
    frame_1dbf78ceea286a6dd8ebfbcd47bd4c99->m_frame.f_lineno = 168;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_backend );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_backend == NULL );
    var_backend = tmp_assign_source_1;

    tmp_called_instance_3 = var_backend;

    CHECK_OBJECT( tmp_called_instance_3 );
    tmp_args_element_name_5 = par_curve;

    CHECK_OBJECT( tmp_args_element_name_5 );
    tmp_args_element_name_6 = par_data;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_1dbf78ceea286a6dd8ebfbcd47bd4c99->m_frame.f_lineno = 169;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_load_elliptic_curve_public_bytes, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1dbf78ceea286a6dd8ebfbcd47bd4c99 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1dbf78ceea286a6dd8ebfbcd47bd4c99 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1dbf78ceea286a6dd8ebfbcd47bd4c99 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1dbf78ceea286a6dd8ebfbcd47bd4c99, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1dbf78ceea286a6dd8ebfbcd47bd4c99->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1dbf78ceea286a6dd8ebfbcd47bd4c99, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1dbf78ceea286a6dd8ebfbcd47bd4c99,
        type_description_1,
        par_cls,
        par_curve,
        par_data,
        var_backend
    );


    // Release cached frame.
    if ( frame_1dbf78ceea286a6dd8ebfbcd47bd4c99 == cache_frame_1dbf78ceea286a6dd8ebfbcd47bd4c99 )
    {
        Py_DECREF( frame_1dbf78ceea286a6dd8ebfbcd47bd4c99 );
    }
    cache_frame_1dbf78ceea286a6dd8ebfbcd47bd4c99 = NULL;

    assertFrameObject( frame_1dbf78ceea286a6dd8ebfbcd47bd4c99 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_18_from_encoded_point );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)var_backend );
    Py_DECREF( var_backend );
    var_backend = NULL;

    CHECK_OBJECT( (PyObject *)par_curve );
    Py_DECREF( par_curve );
    par_curve = NULL;

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

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

    Py_XDECREF( var_backend );
    var_backend = NULL;

    CHECK_OBJECT( (PyObject *)par_curve );
    Py_DECREF( par_curve );
    par_curve = NULL;

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_18_from_encoded_point );
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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_19___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_083f395734704d525573c6aaa30f0bed = NULL;

    struct Nuitka_FrameObject *frame_083f395734704d525573c6aaa30f0bed;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_083f395734704d525573c6aaa30f0bed, codeobj_083f395734704d525573c6aaa30f0bed, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *)+sizeof(void *) );
    frame_083f395734704d525573c6aaa30f0bed = cache_frame_083f395734704d525573c6aaa30f0bed;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_083f395734704d525573c6aaa30f0bed );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_083f395734704d525573c6aaa30f0bed ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_algorithm;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__algorithm, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_083f395734704d525573c6aaa30f0bed );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_083f395734704d525573c6aaa30f0bed );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_083f395734704d525573c6aaa30f0bed, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_083f395734704d525573c6aaa30f0bed->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_083f395734704d525573c6aaa30f0bed, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_083f395734704d525573c6aaa30f0bed,
        type_description_1,
        par_self,
        par_algorithm
    );


    // Release cached frame.
    if ( frame_083f395734704d525573c6aaa30f0bed == cache_frame_083f395734704d525573c6aaa30f0bed )
    {
        Py_DECREF( frame_083f395734704d525573c6aaa30f0bed );
    }
    cache_frame_083f395734704d525573c6aaa30f0bed = NULL;

    assertFrameObject( frame_083f395734704d525573c6aaa30f0bed );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_19___init__ );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_19___init__ );
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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_20_generate_private_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_curve = python_pars[ 0 ];
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
    static struct Nuitka_FrameObject *cache_frame_f064fbe01968e95d26ab8e842fd80f2f = NULL;

    struct Nuitka_FrameObject *frame_f064fbe01968e95d26ab8e842fd80f2f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f064fbe01968e95d26ab8e842fd80f2f, codeobj_f064fbe01968e95d26ab8e842fd80f2f, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *)+sizeof(void *) );
    frame_f064fbe01968e95d26ab8e842fd80f2f = cache_frame_f064fbe01968e95d26ab8e842fd80f2f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f064fbe01968e95d26ab8e842fd80f2f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f064fbe01968e95d26ab8e842fd80f2f ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_backend;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_curve;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_f064fbe01968e95d26ab8e842fd80f2f->m_frame.f_lineno = 327;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_generate_elliptic_curve_private_key, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 327;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f064fbe01968e95d26ab8e842fd80f2f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f064fbe01968e95d26ab8e842fd80f2f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f064fbe01968e95d26ab8e842fd80f2f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f064fbe01968e95d26ab8e842fd80f2f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f064fbe01968e95d26ab8e842fd80f2f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f064fbe01968e95d26ab8e842fd80f2f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f064fbe01968e95d26ab8e842fd80f2f,
        type_description_1,
        par_curve,
        par_backend
    );


    // Release cached frame.
    if ( frame_f064fbe01968e95d26ab8e842fd80f2f == cache_frame_f064fbe01968e95d26ab8e842fd80f2f )
    {
        Py_DECREF( frame_f064fbe01968e95d26ab8e842fd80f2f );
    }
    cache_frame_f064fbe01968e95d26ab8e842fd80f2f = NULL;

    assertFrameObject( frame_f064fbe01968e95d26ab8e842fd80f2f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_20_generate_private_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_curve );
    Py_DECREF( par_curve );
    par_curve = NULL;

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

    CHECK_OBJECT( (PyObject *)par_curve );
    Py_DECREF( par_curve );
    par_curve = NULL;

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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_20_generate_private_key );
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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_21_derive_private_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_private_value = python_pars[ 0 ];
    PyObject *par_curve = python_pars[ 1 ];
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
    int tmp_cmp_LtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_655ec7922642b8a96eb5ad1fdbeaa984 = NULL;

    struct Nuitka_FrameObject *frame_655ec7922642b8a96eb5ad1fdbeaa984;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_655ec7922642b8a96eb5ad1fdbeaa984, codeobj_655ec7922642b8a96eb5ad1fdbeaa984, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_655ec7922642b8a96eb5ad1fdbeaa984 = cache_frame_655ec7922642b8a96eb5ad1fdbeaa984;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_655ec7922642b8a96eb5ad1fdbeaa984 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_655ec7922642b8a96eb5ad1fdbeaa984 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_private_value;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_six );

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

        exception_lineno = 331;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_integer_types );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
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
    tmp_make_exception_arg_1 = const_str_digest_11e20910d4cc9a6eaaf2f0fe5c7be75a;
    frame_655ec7922642b8a96eb5ad1fdbeaa984->m_frame.f_lineno = 332;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 332;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_compare_left_1 = par_private_value;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_LtE_1 = RICH_COMPARE_BOOL_LE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_LtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_LtE_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_2 = const_str_digest_542729c625481529de7c47bb8d546552;
    frame_655ec7922642b8a96eb5ad1fdbeaa984->m_frame.f_lineno = 335;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 335;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_isinstance_inst_2 = par_curve;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurve );

    if (unlikely( tmp_isinstance_cls_2 == NULL ))
    {
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurve );
    }

    if ( tmp_isinstance_cls_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "EllipticCurve" );
        exception_tb = NULL;

        exception_lineno = 337;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 337;
        type_description_1 = "ooo";
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
    tmp_make_exception_arg_3 = const_str_digest_ec0bf4d39d376a71f13ee5736877c3a7;
    frame_655ec7922642b8a96eb5ad1fdbeaa984->m_frame.f_lineno = 338;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 338;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_called_instance_1 = par_backend;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_private_value;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_curve;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_655ec7922642b8a96eb5ad1fdbeaa984->m_frame.f_lineno = 340;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_derive_elliptic_curve_private_key, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 340;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_655ec7922642b8a96eb5ad1fdbeaa984 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_655ec7922642b8a96eb5ad1fdbeaa984 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_655ec7922642b8a96eb5ad1fdbeaa984 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_655ec7922642b8a96eb5ad1fdbeaa984, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_655ec7922642b8a96eb5ad1fdbeaa984->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_655ec7922642b8a96eb5ad1fdbeaa984, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_655ec7922642b8a96eb5ad1fdbeaa984,
        type_description_1,
        par_private_value,
        par_curve,
        par_backend
    );


    // Release cached frame.
    if ( frame_655ec7922642b8a96eb5ad1fdbeaa984 == cache_frame_655ec7922642b8a96eb5ad1fdbeaa984 )
    {
        Py_DECREF( frame_655ec7922642b8a96eb5ad1fdbeaa984 );
    }
    cache_frame_655ec7922642b8a96eb5ad1fdbeaa984 = NULL;

    assertFrameObject( frame_655ec7922642b8a96eb5ad1fdbeaa984 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_21_derive_private_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_private_value );
    Py_DECREF( par_private_value );
    par_private_value = NULL;

    CHECK_OBJECT( (PyObject *)par_curve );
    Py_DECREF( par_curve );
    par_curve = NULL;

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

    CHECK_OBJECT( (PyObject *)par_private_value );
    Py_DECREF( par_private_value );
    par_private_value = NULL;

    CHECK_OBJECT( (PyObject *)par_curve );
    Py_DECREF( par_curve );
    par_curve = NULL;

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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_21_derive_private_key );
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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_22___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_x = python_pars[ 1 ];
    PyObject *par_y = python_pars[ 2 ];
    PyObject *par_curve = python_pars[ 3 ];
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
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_cls_3;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_isinstance_inst_3;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_2671787c1ec7609a2fb54bc6fc3a96b6 = NULL;

    struct Nuitka_FrameObject *frame_2671787c1ec7609a2fb54bc6fc3a96b6;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2671787c1ec7609a2fb54bc6fc3a96b6, codeobj_2671787c1ec7609a2fb54bc6fc3a96b6, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2671787c1ec7609a2fb54bc6fc3a96b6 = cache_frame_2671787c1ec7609a2fb54bc6fc3a96b6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2671787c1ec7609a2fb54bc6fc3a96b6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2671787c1ec7609a2fb54bc6fc3a96b6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_x;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_six );

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

        exception_lineno = 346;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_integer_types );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 346;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_operand_name_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 346;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 346;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
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
    tmp_isinstance_inst_2 = par_y;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_six );

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

        exception_lineno = 347;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_integer_types );
    if ( tmp_isinstance_cls_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_operand_name_2 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    Py_DECREF( tmp_isinstance_cls_2 );
    if ( tmp_operand_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_or_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
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


        exception_lineno = 347;
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
    tmp_make_exception_arg_1 = const_str_digest_9496fbf0e3defd9636cd9a9bd5e76a54;
    frame_2671787c1ec7609a2fb54bc6fc3a96b6->m_frame.f_lineno = 349;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 349;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_isinstance_inst_3 = par_curve;

    CHECK_OBJECT( tmp_isinstance_inst_3 );
    tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurve );

    if (unlikely( tmp_isinstance_cls_3 == NULL ))
    {
        tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurve );
    }

    if ( tmp_isinstance_cls_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "EllipticCurve" );
        exception_tb = NULL;

        exception_lineno = 351;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 351;
        type_description_1 = "oooo";
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
    tmp_make_exception_arg_2 = const_str_digest_ec0bf4d39d376a71f13ee5736877c3a7;
    frame_2671787c1ec7609a2fb54bc6fc3a96b6->m_frame.f_lineno = 352;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 352;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
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


        exception_lineno = 354;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_x;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__x, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 355;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_curve;

    CHECK_OBJECT( tmp_assattr_name_3 );
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__curve, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2671787c1ec7609a2fb54bc6fc3a96b6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2671787c1ec7609a2fb54bc6fc3a96b6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2671787c1ec7609a2fb54bc6fc3a96b6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2671787c1ec7609a2fb54bc6fc3a96b6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2671787c1ec7609a2fb54bc6fc3a96b6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2671787c1ec7609a2fb54bc6fc3a96b6,
        type_description_1,
        par_self,
        par_x,
        par_y,
        par_curve
    );


    // Release cached frame.
    if ( frame_2671787c1ec7609a2fb54bc6fc3a96b6 == cache_frame_2671787c1ec7609a2fb54bc6fc3a96b6 )
    {
        Py_DECREF( frame_2671787c1ec7609a2fb54bc6fc3a96b6 );
    }
    cache_frame_2671787c1ec7609a2fb54bc6fc3a96b6 = NULL;

    assertFrameObject( frame_2671787c1ec7609a2fb54bc6fc3a96b6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_22___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_curve );
    Py_DECREF( par_curve );
    par_curve = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_curve );
    Py_DECREF( par_curve );
    par_curve = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_22___init__ );
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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_23_public_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_7147dc4cb1c408b7f3d1fca7de2969cf = NULL;

    struct Nuitka_FrameObject *frame_7147dc4cb1c408b7f3d1fca7de2969cf;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7147dc4cb1c408b7f3d1fca7de2969cf, codeobj_7147dc4cb1c408b7f3d1fca7de2969cf, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *)+sizeof(void *) );
    frame_7147dc4cb1c408b7f3d1fca7de2969cf = cache_frame_7147dc4cb1c408b7f3d1fca7de2969cf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7147dc4cb1c408b7f3d1fca7de2969cf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7147dc4cb1c408b7f3d1fca7de2969cf ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_backend;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_7147dc4cb1c408b7f3d1fca7de2969cf->m_frame.f_lineno = 359;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_load_elliptic_curve_public_numbers, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 359;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7147dc4cb1c408b7f3d1fca7de2969cf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7147dc4cb1c408b7f3d1fca7de2969cf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7147dc4cb1c408b7f3d1fca7de2969cf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7147dc4cb1c408b7f3d1fca7de2969cf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7147dc4cb1c408b7f3d1fca7de2969cf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7147dc4cb1c408b7f3d1fca7de2969cf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7147dc4cb1c408b7f3d1fca7de2969cf,
        type_description_1,
        par_self,
        par_backend
    );


    // Release cached frame.
    if ( frame_7147dc4cb1c408b7f3d1fca7de2969cf == cache_frame_7147dc4cb1c408b7f3d1fca7de2969cf )
    {
        Py_DECREF( frame_7147dc4cb1c408b7f3d1fca7de2969cf );
    }
    cache_frame_7147dc4cb1c408b7f3d1fca7de2969cf = NULL;

    assertFrameObject( frame_7147dc4cb1c408b7f3d1fca7de2969cf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_23_public_key );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_23_public_key );
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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_24_encode_point( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_byte_length = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_378283b89290ea2673fb249dbc55ae88 = NULL;

    struct Nuitka_FrameObject *frame_378283b89290ea2673fb249dbc55ae88;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_378283b89290ea2673fb249dbc55ae88, codeobj_378283b89290ea2673fb249dbc55ae88, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *)+sizeof(void *) );
    frame_378283b89290ea2673fb249dbc55ae88 = cache_frame_378283b89290ea2673fb249dbc55ae88;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_378283b89290ea2673fb249dbc55ae88 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_378283b89290ea2673fb249dbc55ae88 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "warnings" );
        exception_tb = NULL;

        exception_lineno = 362;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 362;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_digest_39a7423921fce97ca805dcdabbb3f5a3;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 367;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_DeprecatedIn25 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 367;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_f154c9a58c9419d7e391901d7b7fe49e );
    frame_378283b89290ea2673fb249dbc55ae88->m_frame.f_lineno = 362;
    tmp_unused = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 362;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_curve );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 371;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_key_size );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 371;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_7;
    tmp_left_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 371;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_pos_8;
    tmp_assign_source_1 = BINARY_OPERATION_FLOORDIV( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 371;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_byte_length == NULL );
    var_byte_length = tmp_assign_source_1;

    tmp_left_name_4 = const_str_chr_4;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 373;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_int_to_bytes );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_x );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 373;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = var_byte_length;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_378283b89290ea2673fb249dbc55ae88->m_frame.f_lineno = 373;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_3 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_left_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 374;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_int_to_bytes );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_3 );

        exception_lineno = 374;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = par_self;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_y );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 374;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_byte_length;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_378283b89290ea2673fb249dbc55ae88->m_frame.f_lineno = 374;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_3 );

        exception_lineno = 374;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_3 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_378283b89290ea2673fb249dbc55ae88 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_378283b89290ea2673fb249dbc55ae88 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_378283b89290ea2673fb249dbc55ae88 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_378283b89290ea2673fb249dbc55ae88, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_378283b89290ea2673fb249dbc55ae88->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_378283b89290ea2673fb249dbc55ae88, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_378283b89290ea2673fb249dbc55ae88,
        type_description_1,
        par_self,
        var_byte_length
    );


    // Release cached frame.
    if ( frame_378283b89290ea2673fb249dbc55ae88 == cache_frame_378283b89290ea2673fb249dbc55ae88 )
    {
        Py_DECREF( frame_378283b89290ea2673fb249dbc55ae88 );
    }
    cache_frame_378283b89290ea2673fb249dbc55ae88 = NULL;

    assertFrameObject( frame_378283b89290ea2673fb249dbc55ae88 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_24_encode_point );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_byte_length );
    Py_DECREF( var_byte_length );
    var_byte_length = NULL;

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

    Py_XDECREF( var_byte_length );
    var_byte_length = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_24_encode_point );
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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_25_from_encoded_point( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_curve = python_pars[ 1 ];
    PyObject *par_data = python_pars[ 2 ];
    PyObject *var_y = NULL;
    PyObject *var_x = NULL;
    PyObject *var_byte_length = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_slice_lower_1;
    PyObject *tmp_slice_lower_2;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_upper_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f9609f97425c6b6880ec8699f30740b8 = NULL;

    struct Nuitka_FrameObject *frame_f9609f97425c6b6880ec8699f30740b8;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f9609f97425c6b6880ec8699f30740b8, codeobj_f9609f97425c6b6880ec8699f30740b8, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f9609f97425c6b6880ec8699f30740b8 = cache_frame_f9609f97425c6b6880ec8699f30740b8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f9609f97425c6b6880ec8699f30740b8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f9609f97425c6b6880ec8699f30740b8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_curve;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurve );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurve );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "EllipticCurve" );
        exception_tb = NULL;

        exception_lineno = 379;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 379;
        type_description_1 = "oooooo";
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
    tmp_make_exception_arg_1 = const_str_digest_966887908e82249bf5393418c35b1969;
    frame_f9609f97425c6b6880ec8699f30740b8->m_frame.f_lineno = 380;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 380;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "warnings" );
        exception_tb = NULL;

        exception_lineno = 382;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 382;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_digest_614e54485392174eef8d5e8f50fc27bd;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 386;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_DeprecatedIn25 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 386;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_f154c9a58c9419d7e391901d7b7fe49e );
    frame_f9609f97425c6b6880ec8699f30740b8->m_frame.f_lineno = 382;
    tmp_unused = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 382;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_1 = par_data;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_f9609f97425c6b6880ec8699f30740b8->m_frame.f_lineno = 390;
    tmp_cond_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_chr_4_tuple, 0 ) );

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 390;
        type_description_1 = "oooooo";
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
    tmp_source_name_3 = par_curve;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_key_size );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 392;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_7;
    tmp_left_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 392;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_pos_8;
    tmp_assign_source_1 = BINARY_OPERATION_FLOORDIV( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 392;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_byte_length == NULL );
    var_byte_length = tmp_assign_source_1;

    tmp_len_arg_1 = par_data;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_4 = const_int_pos_2;
    tmp_right_name_3 = var_byte_length;

    CHECK_OBJECT( tmp_right_name_3 );
    tmp_left_name_3 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_3 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 393;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = const_int_pos_1;
    tmp_compare_right_1 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 393;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 393;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 394;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_int_from_bytes );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 394;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_slice_source_1 = par_data;

    CHECK_OBJECT( tmp_slice_source_1 );
    tmp_slice_lower_1 = const_int_pos_1;
    tmp_left_name_5 = var_byte_length;

    CHECK_OBJECT( tmp_left_name_5 );
    tmp_right_name_5 = const_int_pos_1;
    tmp_slice_upper_1 = BINARY_OPERATION_ADD( tmp_left_name_5, tmp_right_name_5 );
    if ( tmp_slice_upper_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 394;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = LOOKUP_SLICE( tmp_slice_source_1, tmp_slice_lower_1, tmp_slice_upper_1 );
    Py_DECREF( tmp_slice_upper_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 394;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = const_str_plain_big;
    frame_f9609f97425c6b6880ec8699f30740b8->m_frame.f_lineno = 394;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 394;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_x == NULL );
    var_x = tmp_assign_source_2;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 395;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_int_from_bytes );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 395;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_slice_source_2 = par_data;

    CHECK_OBJECT( tmp_slice_source_2 );
    tmp_left_name_6 = var_byte_length;

    CHECK_OBJECT( tmp_left_name_6 );
    tmp_right_name_6 = const_int_pos_1;
    tmp_slice_lower_2 = BINARY_OPERATION_ADD( tmp_left_name_6, tmp_right_name_6 );
    if ( tmp_slice_lower_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 395;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = LOOKUP_SLICE( tmp_slice_source_2, tmp_slice_lower_2, Py_None );
    Py_DECREF( tmp_slice_lower_2 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 395;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = const_str_plain_big;
    frame_f9609f97425c6b6880ec8699f30740b8->m_frame.f_lineno = 395;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 395;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_y == NULL );
    var_y = tmp_assign_source_3;

    tmp_called_name_4 = par_cls;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_args_element_name_5 = var_x;

    CHECK_OBJECT( tmp_args_element_name_5 );
    tmp_args_element_name_6 = var_y;

    CHECK_OBJECT( tmp_args_element_name_6 );
    tmp_args_element_name_7 = par_curve;

    CHECK_OBJECT( tmp_args_element_name_7 );
    frame_f9609f97425c6b6880ec8699f30740b8->m_frame.f_lineno = 396;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 396;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_make_exception_arg_2 = const_str_digest_46042ee23f2c2527013b7a3413c65a23;
    frame_f9609f97425c6b6880ec8699f30740b8->m_frame.f_lineno = 398;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 398;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_end_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_make_exception_arg_3 = const_str_digest_0de3f4b40f0ef4eb9c079a1682e5fb6e;
    frame_f9609f97425c6b6880ec8699f30740b8->m_frame.f_lineno = 400;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 400;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f9609f97425c6b6880ec8699f30740b8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f9609f97425c6b6880ec8699f30740b8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f9609f97425c6b6880ec8699f30740b8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f9609f97425c6b6880ec8699f30740b8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f9609f97425c6b6880ec8699f30740b8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f9609f97425c6b6880ec8699f30740b8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f9609f97425c6b6880ec8699f30740b8,
        type_description_1,
        par_cls,
        par_curve,
        par_data,
        var_y,
        var_x,
        var_byte_length
    );


    // Release cached frame.
    if ( frame_f9609f97425c6b6880ec8699f30740b8 == cache_frame_f9609f97425c6b6880ec8699f30740b8 )
    {
        Py_DECREF( frame_f9609f97425c6b6880ec8699f30740b8 );
    }
    cache_frame_f9609f97425c6b6880ec8699f30740b8 = NULL;

    assertFrameObject( frame_f9609f97425c6b6880ec8699f30740b8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_25_from_encoded_point );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_curve );
    Py_DECREF( par_curve );
    par_curve = NULL;

    CHECK_OBJECT( (PyObject *)var_y );
    Py_DECREF( var_y );
    var_y = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)var_byte_length );
    Py_DECREF( var_byte_length );
    var_byte_length = NULL;

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

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

    CHECK_OBJECT( (PyObject *)par_curve );
    Py_DECREF( par_curve );
    par_curve = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    Py_XDECREF( var_byte_length );
    var_byte_length = NULL;

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_25_from_encoded_point );
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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_26___eq__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    int tmp_and_left_truth_3;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
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
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    static struct Nuitka_FrameObject *cache_frame_8fab0213febefe4b3b54a04d9c49b1ed = NULL;

    struct Nuitka_FrameObject *frame_8fab0213febefe4b3b54a04d9c49b1ed;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8fab0213febefe4b3b54a04d9c49b1ed, codeobj_8fab0213febefe4b3b54a04d9c49b1ed, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *)+sizeof(void *) );
    frame_8fab0213febefe4b3b54a04d9c49b1ed = cache_frame_8fab0213febefe4b3b54a04d9c49b1ed;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8fab0213febefe4b3b54a04d9c49b1ed );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8fab0213febefe4b3b54a04d9c49b1ed ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_other;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurvePublicNumbers );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurvePublicNumbers );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "EllipticCurvePublicNumbers" );
        exception_tb = NULL;

        exception_lineno = 407;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 407;
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
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_x );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 411;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_other;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_x );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 411;
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


        exception_lineno = 411;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 414;
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
    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_y );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 412;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_other;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_y );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        exception_lineno = 412;
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


        exception_lineno = 412;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 414;
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
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_curve );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 413;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_name );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 413;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = par_other;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_curve );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_3 );

        exception_lineno = 413;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_name );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_compexpr_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_3 );

        exception_lineno = 413;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_3 = RICH_COMPARE_EQ( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    Py_DECREF( tmp_compexpr_right_3 );
    if ( tmp_and_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 413;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_3 );

        exception_lineno = 414;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_3 == 1 )
    {
        goto and_right_3;
    }
    else
    {
        goto and_left_3;
    }
    and_right_3:;
    Py_DECREF( tmp_and_left_value_3 );
    tmp_source_name_10 = par_self;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_curve );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 414;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_key_size );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 414;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = par_other;

    CHECK_OBJECT( tmp_source_name_12 );
    tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_curve );
    if ( tmp_source_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_4 );

        exception_lineno = 414;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_key_size );
    Py_DECREF( tmp_source_name_11 );
    if ( tmp_compexpr_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_4 );

        exception_lineno = 414;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_3 = RICH_COMPARE_EQ( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    Py_DECREF( tmp_compexpr_right_4 );
    if ( tmp_and_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 414;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_2 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    tmp_and_right_value_2 = tmp_and_left_value_3;
    and_end_3:;
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
    RESTORE_FRAME_EXCEPTION( frame_8fab0213febefe4b3b54a04d9c49b1ed );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8fab0213febefe4b3b54a04d9c49b1ed );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8fab0213febefe4b3b54a04d9c49b1ed );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8fab0213febefe4b3b54a04d9c49b1ed, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8fab0213febefe4b3b54a04d9c49b1ed->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8fab0213febefe4b3b54a04d9c49b1ed, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8fab0213febefe4b3b54a04d9c49b1ed,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_8fab0213febefe4b3b54a04d9c49b1ed == cache_frame_8fab0213febefe4b3b54a04d9c49b1ed )
    {
        Py_DECREF( frame_8fab0213febefe4b3b54a04d9c49b1ed );
    }
    cache_frame_8fab0213febefe4b3b54a04d9c49b1ed = NULL;

    assertFrameObject( frame_8fab0213febefe4b3b54a04d9c49b1ed );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_26___eq__ );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_26___eq__ );
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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_27___ne__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_52210d768c08d43e18949ebc582d899c = NULL;

    struct Nuitka_FrameObject *frame_52210d768c08d43e18949ebc582d899c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_52210d768c08d43e18949ebc582d899c, codeobj_52210d768c08d43e18949ebc582d899c, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *)+sizeof(void *) );
    frame_52210d768c08d43e18949ebc582d899c = cache_frame_52210d768c08d43e18949ebc582d899c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_52210d768c08d43e18949ebc582d899c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_52210d768c08d43e18949ebc582d899c ) == 2 ); // Frame stack

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


        exception_lineno = 418;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 418;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_52210d768c08d43e18949ebc582d899c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_52210d768c08d43e18949ebc582d899c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_52210d768c08d43e18949ebc582d899c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_52210d768c08d43e18949ebc582d899c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_52210d768c08d43e18949ebc582d899c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_52210d768c08d43e18949ebc582d899c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_52210d768c08d43e18949ebc582d899c,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_52210d768c08d43e18949ebc582d899c == cache_frame_52210d768c08d43e18949ebc582d899c )
    {
        Py_DECREF( frame_52210d768c08d43e18949ebc582d899c );
    }
    cache_frame_52210d768c08d43e18949ebc582d899c = NULL;

    assertFrameObject( frame_52210d768c08d43e18949ebc582d899c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_27___ne__ );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_27___ne__ );
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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_28___hash__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_hash_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_0349a367393d070a57f597ff1cf01bef = NULL;

    struct Nuitka_FrameObject *frame_0349a367393d070a57f597ff1cf01bef;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0349a367393d070a57f597ff1cf01bef, codeobj_0349a367393d070a57f597ff1cf01bef, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *) );
    frame_0349a367393d070a57f597ff1cf01bef = cache_frame_0349a367393d070a57f597ff1cf01bef;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0349a367393d070a57f597ff1cf01bef );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0349a367393d070a57f597ff1cf01bef ) == 2 ); // Frame stack

    // Framed code:
    tmp_hash_arg_1 = PyTuple_New( 4 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_x );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_hash_arg_1 );

        exception_lineno = 421;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_hash_arg_1, 0, tmp_tuple_element_1 );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_y );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_hash_arg_1 );

        exception_lineno = 421;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_hash_arg_1, 1, tmp_tuple_element_1 );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_curve );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_hash_arg_1 );

        exception_lineno = 421;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_name );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_hash_arg_1 );

        exception_lineno = 421;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_hash_arg_1, 2, tmp_tuple_element_1 );
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_curve );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_hash_arg_1 );

        exception_lineno = 421;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_key_size );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_hash_arg_1 );

        exception_lineno = 421;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_hash_arg_1, 3, tmp_tuple_element_1 );
    tmp_return_value = BUILTIN_HASH( tmp_hash_arg_1 );
    Py_DECREF( tmp_hash_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 421;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0349a367393d070a57f597ff1cf01bef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0349a367393d070a57f597ff1cf01bef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0349a367393d070a57f597ff1cf01bef );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0349a367393d070a57f597ff1cf01bef, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0349a367393d070a57f597ff1cf01bef->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0349a367393d070a57f597ff1cf01bef, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0349a367393d070a57f597ff1cf01bef,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_0349a367393d070a57f597ff1cf01bef == cache_frame_0349a367393d070a57f597ff1cf01bef )
    {
        Py_DECREF( frame_0349a367393d070a57f597ff1cf01bef );
    }
    cache_frame_0349a367393d070a57f597ff1cf01bef = NULL;

    assertFrameObject( frame_0349a367393d070a57f597ff1cf01bef );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_28___hash__ );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_28___hash__ );
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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_29___repr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_66ba9a80adc97cf09e8872f03260b1a6 = NULL;

    struct Nuitka_FrameObject *frame_66ba9a80adc97cf09e8872f03260b1a6;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_66ba9a80adc97cf09e8872f03260b1a6, codeobj_66ba9a80adc97cf09e8872f03260b1a6, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *) );
    frame_66ba9a80adc97cf09e8872f03260b1a6 = cache_frame_66ba9a80adc97cf09e8872f03260b1a6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_66ba9a80adc97cf09e8872f03260b1a6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_66ba9a80adc97cf09e8872f03260b1a6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = const_str_digest_1da9b665673c38de4d13f4b35a02315b;
    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_66ba9a80adc97cf09e8872f03260b1a6->m_frame.f_lineno = 425;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_format, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 425;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_66ba9a80adc97cf09e8872f03260b1a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_66ba9a80adc97cf09e8872f03260b1a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_66ba9a80adc97cf09e8872f03260b1a6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_66ba9a80adc97cf09e8872f03260b1a6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_66ba9a80adc97cf09e8872f03260b1a6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_66ba9a80adc97cf09e8872f03260b1a6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_66ba9a80adc97cf09e8872f03260b1a6,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_66ba9a80adc97cf09e8872f03260b1a6 == cache_frame_66ba9a80adc97cf09e8872f03260b1a6 )
    {
        Py_DECREF( frame_66ba9a80adc97cf09e8872f03260b1a6 );
    }
    cache_frame_66ba9a80adc97cf09e8872f03260b1a6 = NULL;

    assertFrameObject( frame_66ba9a80adc97cf09e8872f03260b1a6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_29___repr__ );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_29___repr__ );
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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_30___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_private_value = python_pars[ 1 ];
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
    static struct Nuitka_FrameObject *cache_frame_9e28924ae7c5702e314ef9a888ef620c = NULL;

    struct Nuitka_FrameObject *frame_9e28924ae7c5702e314ef9a888ef620c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9e28924ae7c5702e314ef9a888ef620c, codeobj_9e28924ae7c5702e314ef9a888ef620c, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9e28924ae7c5702e314ef9a888ef620c = cache_frame_9e28924ae7c5702e314ef9a888ef620c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9e28924ae7c5702e314ef9a888ef620c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9e28924ae7c5702e314ef9a888ef620c ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_private_value;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_six );

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

        exception_lineno = 432;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_integer_types );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 432;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 432;
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
    tmp_make_exception_arg_1 = const_str_digest_91434c7bffcf3c5ef2019dde3efc9536;
    frame_9e28924ae7c5702e314ef9a888ef620c->m_frame.f_lineno = 433;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 433;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_isinstance_inst_2 = par_public_numbers;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurvePublicNumbers );

    if (unlikely( tmp_isinstance_cls_2 == NULL ))
    {
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurvePublicNumbers );
    }

    if ( tmp_isinstance_cls_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "EllipticCurvePublicNumbers" );
        exception_tb = NULL;

        exception_lineno = 435;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 435;
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
    tmp_make_exception_arg_2 = const_str_digest_d95a4ed0ea3d4b3fc1eb5e7764156231;
    frame_9e28924ae7c5702e314ef9a888ef620c->m_frame.f_lineno = 436;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 436;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_assattr_name_1 = par_private_value;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__private_value, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 441;
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


        exception_lineno = 442;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e28924ae7c5702e314ef9a888ef620c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e28924ae7c5702e314ef9a888ef620c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9e28924ae7c5702e314ef9a888ef620c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9e28924ae7c5702e314ef9a888ef620c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9e28924ae7c5702e314ef9a888ef620c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9e28924ae7c5702e314ef9a888ef620c,
        type_description_1,
        par_self,
        par_private_value,
        par_public_numbers
    );


    // Release cached frame.
    if ( frame_9e28924ae7c5702e314ef9a888ef620c == cache_frame_9e28924ae7c5702e314ef9a888ef620c )
    {
        Py_DECREF( frame_9e28924ae7c5702e314ef9a888ef620c );
    }
    cache_frame_9e28924ae7c5702e314ef9a888ef620c = NULL;

    assertFrameObject( frame_9e28924ae7c5702e314ef9a888ef620c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_30___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_public_numbers );
    Py_DECREF( par_public_numbers );
    par_public_numbers = NULL;

    CHECK_OBJECT( (PyObject *)par_private_value );
    Py_DECREF( par_private_value );
    par_private_value = NULL;

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

    CHECK_OBJECT( (PyObject *)par_public_numbers );
    Py_DECREF( par_public_numbers );
    par_public_numbers = NULL;

    CHECK_OBJECT( (PyObject *)par_private_value );
    Py_DECREF( par_private_value );
    par_private_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_30___init__ );
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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_31_private_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_5224c73fa83ca5b1c6d569b9cb716ea2 = NULL;

    struct Nuitka_FrameObject *frame_5224c73fa83ca5b1c6d569b9cb716ea2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5224c73fa83ca5b1c6d569b9cb716ea2, codeobj_5224c73fa83ca5b1c6d569b9cb716ea2, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *)+sizeof(void *) );
    frame_5224c73fa83ca5b1c6d569b9cb716ea2 = cache_frame_5224c73fa83ca5b1c6d569b9cb716ea2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5224c73fa83ca5b1c6d569b9cb716ea2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5224c73fa83ca5b1c6d569b9cb716ea2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_backend;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_5224c73fa83ca5b1c6d569b9cb716ea2->m_frame.f_lineno = 445;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_load_elliptic_curve_private_numbers, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 445;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5224c73fa83ca5b1c6d569b9cb716ea2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5224c73fa83ca5b1c6d569b9cb716ea2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5224c73fa83ca5b1c6d569b9cb716ea2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5224c73fa83ca5b1c6d569b9cb716ea2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5224c73fa83ca5b1c6d569b9cb716ea2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5224c73fa83ca5b1c6d569b9cb716ea2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5224c73fa83ca5b1c6d569b9cb716ea2,
        type_description_1,
        par_self,
        par_backend
    );


    // Release cached frame.
    if ( frame_5224c73fa83ca5b1c6d569b9cb716ea2 == cache_frame_5224c73fa83ca5b1c6d569b9cb716ea2 )
    {
        Py_DECREF( frame_5224c73fa83ca5b1c6d569b9cb716ea2 );
    }
    cache_frame_5224c73fa83ca5b1c6d569b9cb716ea2 = NULL;

    assertFrameObject( frame_5224c73fa83ca5b1c6d569b9cb716ea2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_31_private_key );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_31_private_key );
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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_32___eq__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_f262b5f8691f35715f436a309358affd = NULL;

    struct Nuitka_FrameObject *frame_f262b5f8691f35715f436a309358affd;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f262b5f8691f35715f436a309358affd, codeobj_f262b5f8691f35715f436a309358affd, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *)+sizeof(void *) );
    frame_f262b5f8691f35715f436a309358affd = cache_frame_f262b5f8691f35715f436a309358affd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f262b5f8691f35715f436a309358affd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f262b5f8691f35715f436a309358affd ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_other;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurvePrivateNumbers );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurvePrivateNumbers );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "EllipticCurvePrivateNumbers" );
        exception_tb = NULL;

        exception_lineno = 451;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 451;
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
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_private_value );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 455;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_other;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_private_value );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 455;
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


        exception_lineno = 455;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 456;
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
    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_public_numbers );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 456;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_other;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_public_numbers );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        exception_lineno = 456;
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


        exception_lineno = 456;
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
    RESTORE_FRAME_EXCEPTION( frame_f262b5f8691f35715f436a309358affd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f262b5f8691f35715f436a309358affd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f262b5f8691f35715f436a309358affd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f262b5f8691f35715f436a309358affd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f262b5f8691f35715f436a309358affd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f262b5f8691f35715f436a309358affd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f262b5f8691f35715f436a309358affd,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_f262b5f8691f35715f436a309358affd == cache_frame_f262b5f8691f35715f436a309358affd )
    {
        Py_DECREF( frame_f262b5f8691f35715f436a309358affd );
    }
    cache_frame_f262b5f8691f35715f436a309358affd = NULL;

    assertFrameObject( frame_f262b5f8691f35715f436a309358affd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_32___eq__ );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_32___eq__ );
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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_33___ne__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_573787752998cfc233a7b18b5f0cde4c = NULL;

    struct Nuitka_FrameObject *frame_573787752998cfc233a7b18b5f0cde4c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_573787752998cfc233a7b18b5f0cde4c, codeobj_573787752998cfc233a7b18b5f0cde4c, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *)+sizeof(void *) );
    frame_573787752998cfc233a7b18b5f0cde4c = cache_frame_573787752998cfc233a7b18b5f0cde4c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_573787752998cfc233a7b18b5f0cde4c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_573787752998cfc233a7b18b5f0cde4c ) == 2 ); // Frame stack

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


        exception_lineno = 460;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 460;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_573787752998cfc233a7b18b5f0cde4c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_573787752998cfc233a7b18b5f0cde4c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_573787752998cfc233a7b18b5f0cde4c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_573787752998cfc233a7b18b5f0cde4c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_573787752998cfc233a7b18b5f0cde4c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_573787752998cfc233a7b18b5f0cde4c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_573787752998cfc233a7b18b5f0cde4c,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_573787752998cfc233a7b18b5f0cde4c == cache_frame_573787752998cfc233a7b18b5f0cde4c )
    {
        Py_DECREF( frame_573787752998cfc233a7b18b5f0cde4c );
    }
    cache_frame_573787752998cfc233a7b18b5f0cde4c = NULL;

    assertFrameObject( frame_573787752998cfc233a7b18b5f0cde4c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_33___ne__ );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_33___ne__ );
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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_34___hash__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_hash_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_eef3494d50203485b1e2734732811cb9 = NULL;

    struct Nuitka_FrameObject *frame_eef3494d50203485b1e2734732811cb9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_eef3494d50203485b1e2734732811cb9, codeobj_eef3494d50203485b1e2734732811cb9, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *) );
    frame_eef3494d50203485b1e2734732811cb9 = cache_frame_eef3494d50203485b1e2734732811cb9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_eef3494d50203485b1e2734732811cb9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_eef3494d50203485b1e2734732811cb9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_hash_arg_1 = PyTuple_New( 2 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_private_value );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_hash_arg_1 );

        exception_lineno = 463;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_hash_arg_1, 0, tmp_tuple_element_1 );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_public_numbers );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_hash_arg_1 );

        exception_lineno = 463;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_hash_arg_1, 1, tmp_tuple_element_1 );
    tmp_return_value = BUILTIN_HASH( tmp_hash_arg_1 );
    Py_DECREF( tmp_hash_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 463;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eef3494d50203485b1e2734732811cb9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_eef3494d50203485b1e2734732811cb9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eef3494d50203485b1e2734732811cb9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_eef3494d50203485b1e2734732811cb9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_eef3494d50203485b1e2734732811cb9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_eef3494d50203485b1e2734732811cb9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_eef3494d50203485b1e2734732811cb9,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_eef3494d50203485b1e2734732811cb9 == cache_frame_eef3494d50203485b1e2734732811cb9 )
    {
        Py_DECREF( frame_eef3494d50203485b1e2734732811cb9 );
    }
    cache_frame_eef3494d50203485b1e2734732811cb9 = NULL;

    assertFrameObject( frame_eef3494d50203485b1e2734732811cb9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_34___hash__ );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_34___hash__ );
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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_35_get_curve_for_oid( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_oid = python_pars[ 0 ];
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_2abdcd65b1747e23172598d806d26647 = NULL;

    struct Nuitka_FrameObject *frame_2abdcd65b1747e23172598d806d26647;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2abdcd65b1747e23172598d806d26647, codeobj_2abdcd65b1747e23172598d806d26647, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *) );
    frame_2abdcd65b1747e23172598d806d26647 = cache_frame_2abdcd65b1747e23172598d806d26647;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2abdcd65b1747e23172598d806d26647 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2abdcd65b1747e23172598d806d26647 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain__OID_TO_CURVE );

    if (unlikely( tmp_subscribed_name_1 == NULL ))
    {
        tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__OID_TO_CURVE );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_OID_TO_CURVE" );
        exception_tb = NULL;

        exception_lineno = 495;
        type_description_1 = "o";
        goto try_except_handler_2;
    }

    tmp_subscript_name_1 = par_oid;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 495;
        type_description_1 = "o";
        goto try_except_handler_2;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_35_get_curve_for_oid );
    return NULL;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_2abdcd65b1747e23172598d806d26647 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_2abdcd65b1747e23172598d806d26647, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_2abdcd65b1747e23172598d806d26647, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_KeyError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 496;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_3dc40e53dd4b24847b544b6f257eb244;
    frame_2abdcd65b1747e23172598d806d26647->m_frame.f_lineno = 497;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_LookupError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 497;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "o";
    goto frame_exception_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 494;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2abdcd65b1747e23172598d806d26647->m_frame) frame_2abdcd65b1747e23172598d806d26647->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto frame_exception_exit_1;
    branch_end_1:;
    // End of try:

#if 1
    RESTORE_FRAME_EXCEPTION( frame_2abdcd65b1747e23172598d806d26647 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_2abdcd65b1747e23172598d806d26647 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_2abdcd65b1747e23172598d806d26647 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2abdcd65b1747e23172598d806d26647, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2abdcd65b1747e23172598d806d26647->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2abdcd65b1747e23172598d806d26647, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2abdcd65b1747e23172598d806d26647,
        type_description_1,
        par_oid
    );


    // Release cached frame.
    if ( frame_2abdcd65b1747e23172598d806d26647 == cache_frame_2abdcd65b1747e23172598d806d26647 )
    {
        Py_DECREF( frame_2abdcd65b1747e23172598d806d26647 );
    }
    cache_frame_2abdcd65b1747e23172598d806d26647 = NULL;

    assertFrameObject( frame_2abdcd65b1747e23172598d806d26647 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_35_get_curve_for_oid );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_oid );
    Py_DECREF( par_oid );
    par_oid = NULL;

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

    CHECK_OBJECT( (PyObject *)par_oid );
    Py_DECREF( par_oid );
    par_oid = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec$$$function_35_get_curve_for_oid );
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



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_10_private_numbers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_10_private_numbers,
        const_str_plain_private_numbers,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d8b0ef723fe6de7850ff8f9c7ba17ba5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        const_str_digest_1695a5979e0056f6b4900bcc6c9f0a55,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_11_private_bytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_11_private_bytes,
        const_str_plain_private_bytes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8ea847e3da19b70b75c3d063145cdde8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        const_str_digest_d85ec4ee6a6c677ceb63d9756226d9fc,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_12_verifier(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_12_verifier,
        const_str_plain_verifier,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b88f47efd18844172db162a307d348f7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        const_str_digest_28043235218c2d974c2e2f1ca18ea169,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_13_curve(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_13_curve,
        const_str_plain_curve,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_409f1b989d2ae9bd03ef02e2bfd2cadf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        const_str_digest_51afd334fbe9e34a366509dd059a227d,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_14_key_size(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_14_key_size,
        const_str_plain_key_size,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f246ef9097f222e2c49b897c669bda65,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        const_str_digest_8268d206d02d3cfab7d6f01b4f940926,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_15_public_numbers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_15_public_numbers,
        const_str_plain_public_numbers,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_001018b7d24ec62dfed99c0dfb438427,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        const_str_digest_96a408375a13edb2276fba1f824d31b2,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_16_public_bytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_16_public_bytes,
        const_str_plain_public_bytes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_daabe35adacc16b67b2e798124488c75,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        const_str_digest_d85ec4ee6a6c677ceb63d9756226d9fc,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_17_verify(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_17_verify,
        const_str_plain_verify,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_54e7e0cc4728699d575b5f5bc4863fdb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        const_str_digest_8b46617860949875a4a83e83f0bd40f5,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_18_from_encoded_point(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_18_from_encoded_point,
        const_str_plain_from_encoded_point,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1dbf78ceea286a6dd8ebfbcd47bd4c99,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_19___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_19___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_083f395734704d525573c6aaa30f0bed,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_1_name(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_1_name,
        const_str_plain_name,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_26fea039ab0f604aaa0c512b5f352647,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        const_str_digest_1834b88554d4d6e7b81f203bfe4e8f26,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_20_generate_private_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_20_generate_private_key,
        const_str_plain_generate_private_key,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f064fbe01968e95d26ab8e842fd80f2f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_21_derive_private_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_21_derive_private_key,
        const_str_plain_derive_private_key,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_655ec7922642b8a96eb5ad1fdbeaa984,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_22___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_22___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2671787c1ec7609a2fb54bc6fc3a96b6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_23_public_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_23_public_key,
        const_str_plain_public_key,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7147dc4cb1c408b7f3d1fca7de2969cf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_24_encode_point(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_24_encode_point,
        const_str_plain_encode_point,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_378283b89290ea2673fb249dbc55ae88,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_25_from_encoded_point(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_25_from_encoded_point,
        const_str_plain_from_encoded_point,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f9609f97425c6b6880ec8699f30740b8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_26___eq__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_26___eq__,
        const_str_plain___eq__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8fab0213febefe4b3b54a04d9c49b1ed,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_27___ne__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_27___ne__,
        const_str_plain___ne__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_52210d768c08d43e18949ebc582d899c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_28___hash__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_28___hash__,
        const_str_plain___hash__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0349a367393d070a57f597ff1cf01bef,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_29___repr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_29___repr__,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_66ba9a80adc97cf09e8872f03260b1a6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_2_key_size(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_2_key_size,
        const_str_plain_key_size,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b638d63aa4c8ba18b295d1297488d167,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        const_str_digest_8268d206d02d3cfab7d6f01b4f940926,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_30___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_30___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9e28924ae7c5702e314ef9a888ef620c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_31_private_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_31_private_key,
        const_str_plain_private_key,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5224c73fa83ca5b1c6d569b9cb716ea2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_32___eq__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_32___eq__,
        const_str_plain___eq__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f262b5f8691f35715f436a309358affd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_33___ne__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_33___ne__,
        const_str_plain___ne__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_573787752998cfc233a7b18b5f0cde4c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_34___hash__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_34___hash__,
        const_str_plain___hash__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_eef3494d50203485b1e2734732811cb9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_35_get_curve_for_oid(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_35_get_curve_for_oid,
        const_str_plain_get_curve_for_oid,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2abdcd65b1747e23172598d806d26647,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_3_algorithm(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_3_algorithm,
        const_str_plain_algorithm,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4ac756da57f41accf05333d840a20823,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        const_str_digest_020828480d454cdd619f3cc0d1946bfd,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_4_signer(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_4_signer,
        const_str_plain_signer,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_267ddf43d2b24f8e3ebed97b0123eb8a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        const_str_digest_2f788a0baaba09f2767363f45eba5c18,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_5_exchange(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_5_exchange,
        const_str_plain_exchange,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cb76565d004188a85adfb364389bc3e0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        const_str_digest_1d186293a8d3705fb2ad2e419c12c23d,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_6_public_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_6_public_key,
        const_str_plain_public_key,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3855b4494f40d5c5942e44e89549f363,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        const_str_digest_e0664444e0374ef7a5ca5154da13cd83,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_7_curve(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_7_curve,
        const_str_plain_curve,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1d00551c57d953fcd96d7bca37e42b4c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        const_str_digest_51afd334fbe9e34a366509dd059a227d,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_8_key_size(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_8_key_size,
        const_str_plain_key_size,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a760dff5250cbe324689e4a4e582fc77,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        const_str_digest_8268d206d02d3cfab7d6f01b4f940926,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_9_sign(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_9_sign,
        const_str_plain_sign,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_39af2a2611a9a8dd4cbd644e9adbc8b9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        const_str_digest_3686cdf8ae053c257cc4f251370611ff,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_cryptography$hazmat$primitives$asymmetric$ec =
{
    PyModuleDef_HEAD_INIT,
    "cryptography.hazmat.primitives.asymmetric.ec",   /* m_name */
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

MOD_INIT_DECL( cryptography$hazmat$primitives$asymmetric$ec )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_cryptography$hazmat$primitives$asymmetric$ec );
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
    puts("cryptography.hazmat.primitives.asymmetric.ec: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.primitives.asymmetric.ec: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.primitives.asymmetric.ec: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcryptography$hazmat$primitives$asymmetric$ec" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_cryptography$hazmat$primitives$asymmetric$ec = Py_InitModule4(
        "cryptography.hazmat.primitives.asymmetric.ec",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_cryptography$hazmat$primitives$asymmetric$ec = PyModule_Create( &mdef_cryptography$hazmat$primitives$asymmetric$ec );
#endif

    moduledict_cryptography$hazmat$primitives$asymmetric$ec = MODULE_DICT( module_cryptography$hazmat$primitives$asymmetric$ec );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_cryptography$hazmat$primitives$asymmetric$ec,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$asymmetric$ec,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_cryptography$hazmat$primitives$asymmetric$ec,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$asymmetric$ec,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_cryptography$hazmat$primitives$asymmetric$ec );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_bd71b5d9106eb6b876b65e57bcd30837, module_cryptography$hazmat$primitives$asymmetric$ec );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_class_creation_14__class = NULL;
    PyObject *tmp_class_creation_14__class_dict = NULL;
    PyObject *tmp_class_creation_14__metaclass = NULL;
    PyObject *tmp_class_creation_15__class = NULL;
    PyObject *tmp_class_creation_15__class_dict = NULL;
    PyObject *tmp_class_creation_15__metaclass = NULL;
    PyObject *tmp_class_creation_16__class = NULL;
    PyObject *tmp_class_creation_16__class_dict = NULL;
    PyObject *tmp_class_creation_16__metaclass = NULL;
    PyObject *tmp_class_creation_17__class = NULL;
    PyObject *tmp_class_creation_17__class_dict = NULL;
    PyObject *tmp_class_creation_17__metaclass = NULL;
    PyObject *tmp_class_creation_18__class = NULL;
    PyObject *tmp_class_creation_18__class_dict = NULL;
    PyObject *tmp_class_creation_18__metaclass = NULL;
    PyObject *tmp_class_creation_19__class = NULL;
    PyObject *tmp_class_creation_19__class_dict = NULL;
    PyObject *tmp_class_creation_19__metaclass = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_20__class = NULL;
    PyObject *tmp_class_creation_20__class_dict = NULL;
    PyObject *tmp_class_creation_20__metaclass = NULL;
    PyObject *tmp_class_creation_21__class = NULL;
    PyObject *tmp_class_creation_21__class_dict = NULL;
    PyObject *tmp_class_creation_21__metaclass = NULL;
    PyObject *tmp_class_creation_22__class = NULL;
    PyObject *tmp_class_creation_22__class_dict = NULL;
    PyObject *tmp_class_creation_22__metaclass = NULL;
    PyObject *tmp_class_creation_23__class = NULL;
    PyObject *tmp_class_creation_23__class_dict = NULL;
    PyObject *tmp_class_creation_23__metaclass = NULL;
    PyObject *tmp_class_creation_24__class = NULL;
    PyObject *tmp_class_creation_24__class_dict = NULL;
    PyObject *tmp_class_creation_24__metaclass = NULL;
    PyObject *tmp_class_creation_25__class = NULL;
    PyObject *tmp_class_creation_25__class_dict = NULL;
    PyObject *tmp_class_creation_25__metaclass = NULL;
    PyObject *tmp_class_creation_26__class = NULL;
    PyObject *tmp_class_creation_26__class_dict = NULL;
    PyObject *tmp_class_creation_26__metaclass = NULL;
    PyObject *tmp_class_creation_27__class = NULL;
    PyObject *tmp_class_creation_27__class_dict = NULL;
    PyObject *tmp_class_creation_27__metaclass = NULL;
    PyObject *tmp_class_creation_28__class = NULL;
    PyObject *tmp_class_creation_28__class_dict = NULL;
    PyObject *tmp_class_creation_28__metaclass = NULL;
    PyObject *tmp_class_creation_29__class = NULL;
    PyObject *tmp_class_creation_29__class_dict = NULL;
    PyObject *tmp_class_creation_29__metaclass = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_3__class = NULL;
    PyObject *tmp_class_creation_3__class_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_4__class = NULL;
    PyObject *tmp_class_creation_4__class_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
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
    PyObject *tmp_select_metaclass_5__base = NULL;
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
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
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
    PyObject *tmp_args_element_name_121;
    PyObject *tmp_args_element_name_122;
    PyObject *tmp_args_element_name_123;
    PyObject *tmp_args_element_name_124;
    PyObject *tmp_args_element_name_125;
    PyObject *tmp_args_element_name_126;
    PyObject *tmp_args_element_name_127;
    PyObject *tmp_args_element_name_128;
    PyObject *tmp_args_element_name_129;
    PyObject *tmp_args_element_name_130;
    PyObject *tmp_args_element_name_131;
    PyObject *tmp_args_element_name_132;
    PyObject *tmp_args_element_name_133;
    PyObject *tmp_args_element_name_134;
    PyObject *tmp_args_element_name_135;
    PyObject *tmp_args_element_name_136;
    PyObject *tmp_args_element_name_137;
    PyObject *tmp_args_element_name_138;
    PyObject *tmp_args_element_name_139;
    PyObject *tmp_args_element_name_140;
    PyObject *tmp_args_element_name_141;
    PyObject *tmp_args_element_name_142;
    PyObject *tmp_args_element_name_143;
    PyObject *tmp_args_element_name_144;
    PyObject *tmp_args_element_name_145;
    PyObject *tmp_args_element_name_146;
    PyObject *tmp_args_element_name_147;
    PyObject *tmp_args_element_name_148;
    PyObject *tmp_args_element_name_149;
    PyObject *tmp_args_element_name_150;
    PyObject *tmp_args_element_name_151;
    PyObject *tmp_args_element_name_152;
    PyObject *tmp_args_element_name_153;
    PyObject *tmp_args_element_name_154;
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
    PyObject *tmp_assign_source_86;
    PyObject *tmp_assign_source_87;
    PyObject *tmp_assign_source_88;
    PyObject *tmp_assign_source_89;
    PyObject *tmp_assign_source_90;
    PyObject *tmp_assign_source_91;
    PyObject *tmp_assign_source_92;
    PyObject *tmp_assign_source_93;
    PyObject *tmp_assign_source_94;
    PyObject *tmp_assign_source_95;
    PyObject *tmp_assign_source_96;
    PyObject *tmp_assign_source_97;
    PyObject *tmp_assign_source_98;
    PyObject *tmp_assign_source_99;
    PyObject *tmp_assign_source_100;
    PyObject *tmp_assign_source_101;
    PyObject *tmp_assign_source_102;
    PyObject *tmp_assign_source_103;
    PyObject *tmp_assign_source_104;
    PyObject *tmp_assign_source_105;
    PyObject *tmp_assign_source_106;
    PyObject *tmp_assign_source_107;
    PyObject *tmp_assign_source_108;
    PyObject *tmp_assign_source_109;
    PyObject *tmp_assign_source_110;
    PyObject *tmp_assign_source_111;
    PyObject *tmp_assign_source_112;
    PyObject *tmp_assign_source_113;
    PyObject *tmp_assign_source_114;
    PyObject *tmp_assign_source_115;
    PyObject *tmp_assign_source_116;
    PyObject *tmp_assign_source_117;
    PyObject *tmp_assign_source_118;
    PyObject *tmp_assign_source_119;
    PyObject *tmp_assign_source_120;
    PyObject *tmp_assign_source_121;
    PyObject *tmp_assign_source_122;
    PyObject *tmp_assign_source_123;
    PyObject *tmp_assign_source_124;
    PyObject *tmp_assign_source_125;
    PyObject *tmp_assign_source_126;
    PyObject *tmp_assign_source_127;
    PyObject *tmp_assign_source_128;
    PyObject *tmp_assign_source_129;
    PyObject *tmp_assign_source_130;
    PyObject *tmp_assign_source_131;
    PyObject *tmp_assign_source_132;
    PyObject *tmp_assign_source_133;
    PyObject *tmp_assign_source_134;
    PyObject *tmp_assign_source_135;
    PyObject *tmp_assign_source_136;
    PyObject *tmp_assign_source_137;
    PyObject *tmp_assign_source_138;
    PyObject *tmp_assign_source_139;
    PyObject *tmp_assign_source_140;
    PyObject *tmp_assign_source_141;
    PyObject *tmp_assign_source_142;
    PyObject *tmp_assign_source_143;
    PyObject *tmp_assign_source_144;
    PyObject *tmp_assign_source_145;
    PyObject *tmp_assign_source_146;
    PyObject *tmp_assign_source_147;
    PyObject *tmp_assign_source_148;
    PyObject *tmp_assign_source_149;
    PyObject *tmp_assign_source_150;
    PyObject *tmp_assign_source_151;
    PyObject *tmp_assign_source_152;
    PyObject *tmp_assign_source_153;
    PyObject *tmp_assign_source_154;
    PyObject *tmp_assign_source_155;
    PyObject *tmp_assign_source_156;
    PyObject *tmp_assign_source_157;
    PyObject *tmp_assign_source_158;
    PyObject *tmp_assign_source_159;
    PyObject *tmp_assign_source_160;
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
    PyObject *tmp_called_name_56;
    PyObject *tmp_called_name_57;
    PyObject *tmp_called_name_58;
    PyObject *tmp_called_name_59;
    PyObject *tmp_called_name_60;
    PyObject *tmp_called_name_61;
    PyObject *tmp_called_name_62;
    PyObject *tmp_called_name_63;
    PyObject *tmp_called_name_64;
    PyObject *tmp_called_name_65;
    PyObject *tmp_called_name_66;
    PyObject *tmp_called_name_67;
    PyObject *tmp_called_name_68;
    PyObject *tmp_called_name_69;
    PyObject *tmp_called_name_70;
    PyObject *tmp_called_name_71;
    PyObject *tmp_called_name_72;
    PyObject *tmp_called_name_73;
    PyObject *tmp_called_name_74;
    PyObject *tmp_called_name_75;
    PyObject *tmp_called_name_76;
    PyObject *tmp_called_name_77;
    PyObject *tmp_called_name_78;
    PyObject *tmp_called_name_79;
    PyObject *tmp_called_name_80;
    PyObject *tmp_called_name_81;
    PyObject *tmp_called_name_82;
    PyObject *tmp_called_name_83;
    PyObject *tmp_called_name_84;
    PyObject *tmp_called_name_85;
    PyObject *tmp_called_name_86;
    PyObject *tmp_called_name_87;
    PyObject *tmp_called_name_88;
    PyObject *tmp_called_name_89;
    PyObject *tmp_called_name_90;
    PyObject *tmp_called_name_91;
    PyObject *tmp_called_name_92;
    PyObject *tmp_called_name_93;
    PyObject *tmp_called_name_94;
    PyObject *tmp_called_name_95;
    PyObject *tmp_called_name_96;
    PyObject *tmp_called_name_97;
    PyObject *tmp_called_name_98;
    PyObject *tmp_classmethod_arg_1;
    PyObject *tmp_classmethod_arg_2;
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
    int tmp_cmp_In_14;
    int tmp_cmp_In_15;
    int tmp_cmp_In_16;
    int tmp_cmp_In_17;
    int tmp_cmp_In_18;
    int tmp_cmp_In_19;
    int tmp_cmp_In_20;
    int tmp_cmp_In_21;
    int tmp_cmp_In_22;
    int tmp_cmp_In_23;
    int tmp_cmp_In_24;
    int tmp_cmp_In_25;
    int tmp_cmp_In_26;
    int tmp_cmp_In_27;
    int tmp_cmp_In_28;
    int tmp_cmp_In_29;
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
    PyObject *tmp_compare_left_14;
    PyObject *tmp_compare_left_15;
    PyObject *tmp_compare_left_16;
    PyObject *tmp_compare_left_17;
    PyObject *tmp_compare_left_18;
    PyObject *tmp_compare_left_19;
    PyObject *tmp_compare_left_20;
    PyObject *tmp_compare_left_21;
    PyObject *tmp_compare_left_22;
    PyObject *tmp_compare_left_23;
    PyObject *tmp_compare_left_24;
    PyObject *tmp_compare_left_25;
    PyObject *tmp_compare_left_26;
    PyObject *tmp_compare_left_27;
    PyObject *tmp_compare_left_28;
    PyObject *tmp_compare_left_29;
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
    PyObject *tmp_compare_right_14;
    PyObject *tmp_compare_right_15;
    PyObject *tmp_compare_right_16;
    PyObject *tmp_compare_right_17;
    PyObject *tmp_compare_right_18;
    PyObject *tmp_compare_right_19;
    PyObject *tmp_compare_right_20;
    PyObject *tmp_compare_right_21;
    PyObject *tmp_compare_right_22;
    PyObject *tmp_compare_right_23;
    PyObject *tmp_compare_right_24;
    PyObject *tmp_compare_right_25;
    PyObject *tmp_compare_right_26;
    PyObject *tmp_compare_right_27;
    PyObject *tmp_compare_right_28;
    PyObject *tmp_compare_right_29;
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
    PyObject *tmp_dict_name_14;
    PyObject *tmp_dict_name_15;
    PyObject *tmp_dict_name_16;
    PyObject *tmp_dict_name_17;
    PyObject *tmp_dict_name_18;
    PyObject *tmp_dict_name_19;
    PyObject *tmp_dict_name_20;
    PyObject *tmp_dict_name_21;
    PyObject *tmp_dict_name_22;
    PyObject *tmp_dict_name_23;
    PyObject *tmp_dict_name_24;
    PyObject *tmp_dict_name_25;
    PyObject *tmp_dict_name_26;
    PyObject *tmp_dict_name_27;
    PyObject *tmp_dict_name_28;
    PyObject *tmp_dict_name_29;
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
    PyObject *tmp_dictset_value;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
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
    PyObject *tmp_key_name_14;
    PyObject *tmp_key_name_15;
    PyObject *tmp_key_name_16;
    PyObject *tmp_key_name_17;
    PyObject *tmp_key_name_18;
    PyObject *tmp_key_name_19;
    PyObject *tmp_key_name_20;
    PyObject *tmp_key_name_21;
    PyObject *tmp_key_name_22;
    PyObject *tmp_key_name_23;
    PyObject *tmp_key_name_24;
    PyObject *tmp_key_name_25;
    PyObject *tmp_key_name_26;
    PyObject *tmp_key_name_27;
    PyObject *tmp_key_name_28;
    PyObject *tmp_key_name_29;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
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
    PyObject *tmp_outline_return_value_14;
    PyObject *tmp_outline_return_value_15;
    PyObject *tmp_outline_return_value_16;
    PyObject *tmp_outline_return_value_17;
    PyObject *tmp_outline_return_value_18;
    PyObject *tmp_outline_return_value_19;
    PyObject *tmp_outline_return_value_20;
    PyObject *tmp_outline_return_value_21;
    PyObject *tmp_outline_return_value_22;
    PyObject *tmp_outline_return_value_23;
    PyObject *tmp_outline_return_value_24;
    PyObject *tmp_outline_return_value_25;
    PyObject *tmp_outline_return_value_26;
    PyObject *tmp_outline_return_value_27;
    PyObject *tmp_outline_return_value_28;
    PyObject *tmp_outline_return_value_29;
    PyObject *tmp_outline_return_value_30;
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
    PyObject *tmp_source_name_50;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    static struct Nuitka_FrameObject *cache_frame_035f23bd6fb1c44577d68aa9c7f5692a_2 = NULL;

    struct Nuitka_FrameObject *frame_035f23bd6fb1c44577d68aa9c7f5692a_2;

    static struct Nuitka_FrameObject *cache_frame_cc397b59a6ac7c20e5bb9707430aa4d6_3 = NULL;

    struct Nuitka_FrameObject *frame_cc397b59a6ac7c20e5bb9707430aa4d6_3;

    static struct Nuitka_FrameObject *cache_frame_6eb5dd285be8dfa611911792699ffbb0_4 = NULL;

    struct Nuitka_FrameObject *frame_6eb5dd285be8dfa611911792699ffbb0_4;

    static struct Nuitka_FrameObject *cache_frame_1a159964efa70eb57a461347405834b5_5 = NULL;

    struct Nuitka_FrameObject *frame_1a159964efa70eb57a461347405834b5_5;

    static struct Nuitka_FrameObject *cache_frame_6d6a3047393374d1a1724a05a2d8f966_6 = NULL;

    struct Nuitka_FrameObject *frame_6d6a3047393374d1a1724a05a2d8f966_6;

    static struct Nuitka_FrameObject *cache_frame_0ed21e32ea6fb2f78de16033f39d4689_7 = NULL;

    struct Nuitka_FrameObject *frame_0ed21e32ea6fb2f78de16033f39d4689_7;

    static struct Nuitka_FrameObject *cache_frame_cc4e888cc94df5c1328d0569bb35c9a6_8 = NULL;

    struct Nuitka_FrameObject *frame_cc4e888cc94df5c1328d0569bb35c9a6_8;

    static struct Nuitka_FrameObject *cache_frame_72cdff8c1865c1ed080e88abf19128d5_9 = NULL;

    struct Nuitka_FrameObject *frame_72cdff8c1865c1ed080e88abf19128d5_9;

    static struct Nuitka_FrameObject *cache_frame_66b4421857cfa70618deb61e7277fbc2_10 = NULL;

    struct Nuitka_FrameObject *frame_66b4421857cfa70618deb61e7277fbc2_10;

    struct Nuitka_FrameObject *frame_546b65168cc038495051af0d76cca4f6;

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
    tmp_outline_return_value_10 = NULL;
    tmp_outline_return_value_11 = NULL;
    tmp_outline_return_value_12 = NULL;
    tmp_outline_return_value_13 = NULL;
    tmp_outline_return_value_14 = NULL;
    tmp_outline_return_value_15 = NULL;
    tmp_outline_return_value_16 = NULL;
    tmp_outline_return_value_17 = NULL;
    tmp_outline_return_value_18 = NULL;
    tmp_outline_return_value_19 = NULL;
    tmp_outline_return_value_20 = NULL;
    tmp_outline_return_value_21 = NULL;
    tmp_outline_return_value_22 = NULL;
    tmp_outline_return_value_23 = NULL;
    tmp_outline_return_value_24 = NULL;
    tmp_outline_return_value_25 = NULL;
    tmp_outline_return_value_26 = NULL;
    tmp_outline_return_value_27 = NULL;
    tmp_outline_return_value_28 = NULL;
    tmp_outline_return_value_29 = NULL;
    tmp_outline_return_value_30 = NULL;
    PyObject *locals_EllipticCurvePrivateKey_63 = NULL;
    PyObject *locals_SECT409K1_212 = NULL;
    PyObject *locals_BrainpoolP512R1_284 = NULL;
    PyObject *locals_SECT233K1_224 = NULL;
    PyObject *locals_EllipticCurveSignatureAlgorithm_54 = NULL;
    PyObject *locals_SECT233R1_194 = NULL;
    PyObject *locals_EllipticCurvePrivateKeyWithSerialization_103 = NULL;
    PyObject *locals_SECP224R1_260 = NULL;
    PyObject *locals_BrainpoolP256R1_272 = NULL;
    PyObject *locals_ECDH_466 = NULL;
    PyObject *locals_SECP384R1_242 = NULL;
    PyObject *locals_SECT283R1_188 = NULL;
    PyObject *locals_SECT571K1_206 = NULL;
    PyObject *locals_SECP256R1_248 = NULL;
    PyObject *locals_SECP521R1_236 = NULL;
    PyObject *locals_SECT163K1_230 = NULL;
    PyObject *locals_SECT163R2_200 = NULL;
    PyObject *locals_SECP192R1_266 = NULL;
    PyObject *locals_SECT571R1_176 = NULL;
    PyObject *locals_SECT409R1_182 = NULL;
    PyObject *locals_EllipticCurvePublicKey_118 = NULL;
    PyObject *locals_SECP256K1_254 = NULL;
    PyObject *locals_EllipticCurvePrivateNumbers_430 = NULL;
    PyObject *locals_EllipticCurvePublicNumbers_343 = NULL;
    PyObject *locals_BrainpoolP384R1_278 = NULL;
    PyObject *locals_EllipticCurveOID_16 = NULL;
    PyObject *locals_ECDSA_319 = NULL;
    PyObject *locals_EllipticCurve_39 = NULL;
    PyObject *locals_SECT283K1_218 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyImport_ImportModule("__future__");
    assert( tmp_assign_source_3 != NULL );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_3 );
    tmp_import_from_1__module = tmp_assign_source_3;

    // Frame without reuse.
    frame_546b65168cc038495051af0d76cca4f6 = MAKE_MODULE_FRAME( codeobj_546b65168cc038495051af0d76cca4f6, module_cryptography$hazmat$primitives$asymmetric$ec );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_546b65168cc038495051af0d76cca4f6 );
    assert( Py_REFCNT( frame_546b65168cc038495051af0d76cca4f6 ) == 2 );

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
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
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
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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
    tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ec;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 7;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_abc, tmp_assign_source_7 );
    tmp_name_name_2 = const_str_plain_warnings;
    tmp_globals_name_2 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ec;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 8;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_8 );
    tmp_name_name_3 = const_str_plain_six;
    tmp_globals_name_3 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ec;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    tmp_level_name_3 = const_int_0;
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 10;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_9 );
    tmp_name_name_4 = const_str_plain_cryptography;
    tmp_globals_name_4 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ec;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_utils_tuple;
    tmp_level_name_4 = const_int_0;
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 12;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_utils );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils, tmp_assign_source_10 );
    tmp_name_name_5 = const_str_digest_1ad2cf3b84b8bacd26104238bca76891;
    tmp_globals_name_5 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ec;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_ObjectIdentifier_tuple;
    tmp_level_name_5 = const_int_0;
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 13;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_ObjectIdentifier );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier, tmp_assign_source_11 );
    // Tried code:
    tmp_set_locals = PyDict_New();
    locals_EllipticCurveOID_16 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
    tmp_res = PyDict_SetItem( locals_EllipticCurveOID_16, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_035f23bd6fb1c44577d68aa9c7f5692a_2, codeobj_035f23bd6fb1c44577d68aa9c7f5692a, module_cryptography$hazmat$primitives$asymmetric$ec, 0 );
    frame_035f23bd6fb1c44577d68aa9c7f5692a_2 = cache_frame_035f23bd6fb1c44577d68aa9c7f5692a_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_035f23bd6fb1c44577d68aa9c7f5692a_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_035f23bd6fb1c44577d68aa9c7f5692a_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
    }

    CHECK_OBJECT( tmp_called_name_1 );
    frame_035f23bd6fb1c44577d68aa9c7f5692a_2->m_frame.f_lineno = 17;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_5d9f5c68057f6bda68db87834d8c8486_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurveOID_16, const_str_plain_SECP192R1, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_2;
    }
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
        exception_tb = NULL;

        exception_lineno = 18;

        goto frame_exception_exit_2;
    }

    frame_035f23bd6fb1c44577d68aa9c7f5692a_2->m_frame.f_lineno = 18;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_digest_5f8986471195a2c6620c662ae960224d_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurveOID_16, const_str_plain_SECP224R1, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_2;
    }
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
        exception_tb = NULL;

        exception_lineno = 19;

        goto frame_exception_exit_2;
    }

    frame_035f23bd6fb1c44577d68aa9c7f5692a_2->m_frame.f_lineno = 19;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_digest_71604db97cd557151e77dc7b6e330582_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurveOID_16, const_str_plain_SECP256K1, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_2;
    }
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
        exception_tb = NULL;

        exception_lineno = 20;

        goto frame_exception_exit_2;
    }

    frame_035f23bd6fb1c44577d68aa9c7f5692a_2->m_frame.f_lineno = 20;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_str_digest_6dce02eea2e5fbd78aa8484eb41bc7c6_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurveOID_16, const_str_plain_SECP256R1, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_2;
    }
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
        exception_tb = NULL;

        exception_lineno = 21;

        goto frame_exception_exit_2;
    }

    frame_035f23bd6fb1c44577d68aa9c7f5692a_2->m_frame.f_lineno = 21;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_str_digest_a39d4e9786867a0ed9cd6eb4b7286db4_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurveOID_16, const_str_plain_SECP384R1, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_2;
    }
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
        exception_tb = NULL;

        exception_lineno = 22;

        goto frame_exception_exit_2;
    }

    frame_035f23bd6fb1c44577d68aa9c7f5692a_2->m_frame.f_lineno = 22;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_str_digest_abebb11f759e62172f50a69356b78032_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurveOID_16, const_str_plain_SECP521R1, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_2;
    }
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
        exception_tb = NULL;

        exception_lineno = 23;

        goto frame_exception_exit_2;
    }

    frame_035f23bd6fb1c44577d68aa9c7f5692a_2->m_frame.f_lineno = 23;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, &PyTuple_GET_ITEM( const_tuple_str_digest_c5663714080ad9d26f42b5707c55d604_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurveOID_16, const_str_plain_BRAINPOOLP256R1, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_2;
    }
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
        exception_tb = NULL;

        exception_lineno = 24;

        goto frame_exception_exit_2;
    }

    frame_035f23bd6fb1c44577d68aa9c7f5692a_2->m_frame.f_lineno = 24;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, &PyTuple_GET_ITEM( const_tuple_str_digest_05c2a42c3e111fb4b7cbbcbc29aaf4bc_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurveOID_16, const_str_plain_BRAINPOOLP384R1, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_2;
    }
    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
    }

    if ( tmp_called_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
        exception_tb = NULL;

        exception_lineno = 25;

        goto frame_exception_exit_2;
    }

    frame_035f23bd6fb1c44577d68aa9c7f5692a_2->m_frame.f_lineno = 25;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, &PyTuple_GET_ITEM( const_tuple_str_digest_814981df5369fce8ded82ee3dce783a1_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurveOID_16, const_str_plain_BRAINPOOLP512R1, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto frame_exception_exit_2;
    }
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
        exception_tb = NULL;

        exception_lineno = 26;

        goto frame_exception_exit_2;
    }

    frame_035f23bd6fb1c44577d68aa9c7f5692a_2->m_frame.f_lineno = 26;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, &PyTuple_GET_ITEM( const_tuple_str_digest_5b16067d701c39d436831860552eefd8_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurveOID_16, const_str_plain_SECT163K1, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_2;
    }
    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
    }

    if ( tmp_called_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
        exception_tb = NULL;

        exception_lineno = 27;

        goto frame_exception_exit_2;
    }

    frame_035f23bd6fb1c44577d68aa9c7f5692a_2->m_frame.f_lineno = 27;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, &PyTuple_GET_ITEM( const_tuple_str_digest_cdd70fc541188a5f76f08641296b35f6_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurveOID_16, const_str_plain_SECT163R2, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_2;
    }
    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
    }

    if ( tmp_called_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
        exception_tb = NULL;

        exception_lineno = 28;

        goto frame_exception_exit_2;
    }

    frame_035f23bd6fb1c44577d68aa9c7f5692a_2->m_frame.f_lineno = 28;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, &PyTuple_GET_ITEM( const_tuple_str_digest_78ab400544644b8c62c9d5b48f3728fe_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurveOID_16, const_str_plain_SECT233K1, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_2;
    }
    tmp_called_name_13 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

    if (unlikely( tmp_called_name_13 == NULL ))
    {
        tmp_called_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
    }

    if ( tmp_called_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
        exception_tb = NULL;

        exception_lineno = 29;

        goto frame_exception_exit_2;
    }

    frame_035f23bd6fb1c44577d68aa9c7f5692a_2->m_frame.f_lineno = 29;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, &PyTuple_GET_ITEM( const_tuple_str_digest_b93015b1083ca77765479f2883c39099_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurveOID_16, const_str_plain_SECT233R1, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_2;
    }
    tmp_called_name_14 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

    if (unlikely( tmp_called_name_14 == NULL ))
    {
        tmp_called_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
    }

    if ( tmp_called_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
        exception_tb = NULL;

        exception_lineno = 30;

        goto frame_exception_exit_2;
    }

    frame_035f23bd6fb1c44577d68aa9c7f5692a_2->m_frame.f_lineno = 30;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, &PyTuple_GET_ITEM( const_tuple_str_digest_603eaff03e191a700a2b1914671df0da_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurveOID_16, const_str_plain_SECT283K1, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_2;
    }
    tmp_called_name_15 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

    if (unlikely( tmp_called_name_15 == NULL ))
    {
        tmp_called_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
    }

    if ( tmp_called_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
        exception_tb = NULL;

        exception_lineno = 31;

        goto frame_exception_exit_2;
    }

    frame_035f23bd6fb1c44577d68aa9c7f5692a_2->m_frame.f_lineno = 31;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, &PyTuple_GET_ITEM( const_tuple_str_digest_dbf6d039f8f60c267f16f0e2d57f3c97_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurveOID_16, const_str_plain_SECT283R1, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto frame_exception_exit_2;
    }
    tmp_called_name_16 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

    if (unlikely( tmp_called_name_16 == NULL ))
    {
        tmp_called_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
    }

    if ( tmp_called_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
        exception_tb = NULL;

        exception_lineno = 32;

        goto frame_exception_exit_2;
    }

    frame_035f23bd6fb1c44577d68aa9c7f5692a_2->m_frame.f_lineno = 32;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, &PyTuple_GET_ITEM( const_tuple_str_digest_b208da37988e2096e7fa65ac4c84795a_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurveOID_16, const_str_plain_SECT409K1, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto frame_exception_exit_2;
    }
    tmp_called_name_17 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

    if (unlikely( tmp_called_name_17 == NULL ))
    {
        tmp_called_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
    }

    if ( tmp_called_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
        exception_tb = NULL;

        exception_lineno = 33;

        goto frame_exception_exit_2;
    }

    frame_035f23bd6fb1c44577d68aa9c7f5692a_2->m_frame.f_lineno = 33;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, &PyTuple_GET_ITEM( const_tuple_str_digest_55edae73ac71eac674f1a79882f11e93_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurveOID_16, const_str_plain_SECT409R1, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto frame_exception_exit_2;
    }
    tmp_called_name_18 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

    if (unlikely( tmp_called_name_18 == NULL ))
    {
        tmp_called_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
    }

    if ( tmp_called_name_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
        exception_tb = NULL;

        exception_lineno = 34;

        goto frame_exception_exit_2;
    }

    frame_035f23bd6fb1c44577d68aa9c7f5692a_2->m_frame.f_lineno = 34;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, &PyTuple_GET_ITEM( const_tuple_str_digest_c6b43e2c56a86af0a4c780cb9abfec2c_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurveOID_16, const_str_plain_SECT571K1, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto frame_exception_exit_2;
    }
    tmp_called_name_19 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

    if (unlikely( tmp_called_name_19 == NULL ))
    {
        tmp_called_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
    }

    if ( tmp_called_name_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
        exception_tb = NULL;

        exception_lineno = 35;

        goto frame_exception_exit_2;
    }

    frame_035f23bd6fb1c44577d68aa9c7f5692a_2->m_frame.f_lineno = 35;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, &PyTuple_GET_ITEM( const_tuple_str_digest_7beb17962c98b506f4aed6151df29ace_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurveOID_16, const_str_plain_SECT571R1, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_035f23bd6fb1c44577d68aa9c7f5692a_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_035f23bd6fb1c44577d68aa9c7f5692a_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_035f23bd6fb1c44577d68aa9c7f5692a_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_035f23bd6fb1c44577d68aa9c7f5692a_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_035f23bd6fb1c44577d68aa9c7f5692a_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_035f23bd6fb1c44577d68aa9c7f5692a_2,
        type_description_2
    );


    // Release cached frame.
    if ( frame_035f23bd6fb1c44577d68aa9c7f5692a_2 == cache_frame_035f23bd6fb1c44577d68aa9c7f5692a_2 )
    {
        Py_DECREF( frame_035f23bd6fb1c44577d68aa9c7f5692a_2 );
    }
    cache_frame_035f23bd6fb1c44577d68aa9c7f5692a_2 = NULL;

    assertFrameObject( frame_035f23bd6fb1c44577d68aa9c7f5692a_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_3;
    skip_nested_handling_1:;
    tmp_outline_return_value_1 = locals_EllipticCurveOID_16;
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    Py_DECREF( locals_EllipticCurveOID_16 );
    locals_EllipticCurveOID_16 = NULL;
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

    Py_DECREF( locals_EllipticCurveOID_16 );
    locals_EllipticCurveOID_16 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 16;
    goto try_except_handler_2;
    outline_result_1:;
    tmp_assign_source_12 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_12;

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
    tmp_assign_source_13 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_2;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_13 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_13 );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_13;

    tmp_called_name_20 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_20 );
    tmp_args_element_name_1 = const_str_plain_EllipticCurveOID;
    tmp_args_element_name_2 = const_tuple_type_object_tuple;
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 16;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_20, call_args );
    }

    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_14;

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
    tmp_assign_source_15 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_15 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID, tmp_assign_source_15 );
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
    locals_EllipticCurve_39 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
    tmp_res = PyDict_SetItem( locals_EllipticCurve_39, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cc397b59a6ac7c20e5bb9707430aa4d6_3, codeobj_cc397b59a6ac7c20e5bb9707430aa4d6, module_cryptography$hazmat$primitives$asymmetric$ec, 0 );
    frame_cc397b59a6ac7c20e5bb9707430aa4d6_3 = cache_frame_cc397b59a6ac7c20e5bb9707430aa4d6_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cc397b59a6ac7c20e5bb9707430aa4d6_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cc397b59a6ac7c20e5bb9707430aa4d6_3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 40;

        goto frame_exception_exit_3;
    }

    tmp_args_element_name_4 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_1_name(  );
    frame_cc397b59a6ac7c20e5bb9707430aa4d6_3->m_frame.f_lineno = 40;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto frame_exception_exit_3;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurve_39, const_str_plain_name, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto frame_exception_exit_3;
    }
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 46;

        goto frame_exception_exit_3;
    }

    tmp_args_element_name_5 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_2_key_size(  );
    frame_cc397b59a6ac7c20e5bb9707430aa4d6_3->m_frame.f_lineno = 46;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto frame_exception_exit_3;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurve_39, const_str_plain_key_size, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto frame_exception_exit_3;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cc397b59a6ac7c20e5bb9707430aa4d6_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cc397b59a6ac7c20e5bb9707430aa4d6_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cc397b59a6ac7c20e5bb9707430aa4d6_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cc397b59a6ac7c20e5bb9707430aa4d6_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cc397b59a6ac7c20e5bb9707430aa4d6_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cc397b59a6ac7c20e5bb9707430aa4d6_3,
        type_description_2
    );


    // Release cached frame.
    if ( frame_cc397b59a6ac7c20e5bb9707430aa4d6_3 == cache_frame_cc397b59a6ac7c20e5bb9707430aa4d6_3 )
    {
        Py_DECREF( frame_cc397b59a6ac7c20e5bb9707430aa4d6_3 );
    }
    cache_frame_cc397b59a6ac7c20e5bb9707430aa4d6_3 = NULL;

    assertFrameObject( frame_cc397b59a6ac7c20e5bb9707430aa4d6_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_5;
    skip_nested_handling_2:;
    tmp_outline_return_value_2 = locals_EllipticCurve_39;
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_5:;
    Py_DECREF( locals_EllipticCurve_39 );
    locals_EllipticCurve_39 = NULL;
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

    Py_DECREF( locals_EllipticCurve_39 );
    locals_EllipticCurve_39 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 39;
    goto try_except_handler_4;
    outline_result_2:;
    tmp_assign_source_16 = tmp_outline_return_value_2;
    assert( tmp_class_creation_2__class_dict == NULL );
    tmp_class_creation_2__class_dict = tmp_assign_source_16;

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
    tmp_assign_source_17 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;

        goto try_except_handler_4;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_17 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_17 );
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_17;

    tmp_called_name_21 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_21 );
    tmp_args_element_name_6 = const_str_plain_EllipticCurve;
    tmp_args_element_name_7 = const_tuple_type_object_tuple;
    tmp_args_element_name_8 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_args_element_name_8 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 39;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_21, call_args );
    }

    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;

        goto try_except_handler_4;
    }
    assert( tmp_class_creation_2__class == NULL );
    tmp_class_creation_2__class = tmp_assign_source_18;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_six );

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

        exception_lineno = 38;

        goto try_except_handler_4;
    }

    tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add_metaclass );
    if ( tmp_called_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_4;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_23 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 38;

        goto try_except_handler_4;
    }

    tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_23 );

        exception_lineno = 38;

        goto try_except_handler_4;
    }
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 38;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_called_name_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
    }

    Py_DECREF( tmp_called_name_23 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_called_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_4;
    }
    tmp_args_element_name_10 = tmp_class_creation_2__class;

    CHECK_OBJECT( tmp_args_element_name_10 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 38;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
    }

    Py_DECREF( tmp_called_name_22 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_class_creation_2__class;
        assert( old != NULL );
        tmp_class_creation_2__class = tmp_assign_source_19;
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
    tmp_assign_source_20 = tmp_class_creation_2__class;

    CHECK_OBJECT( tmp_assign_source_20 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurve, tmp_assign_source_20 );
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
    locals_EllipticCurveSignatureAlgorithm_54 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
    tmp_res = PyDict_SetItem( locals_EllipticCurveSignatureAlgorithm_54, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6eb5dd285be8dfa611911792699ffbb0_4, codeobj_6eb5dd285be8dfa611911792699ffbb0, module_cryptography$hazmat$primitives$asymmetric$ec, 0 );
    frame_6eb5dd285be8dfa611911792699ffbb0_4 = cache_frame_6eb5dd285be8dfa611911792699ffbb0_4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6eb5dd285be8dfa611911792699ffbb0_4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6eb5dd285be8dfa611911792699ffbb0_4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 55;

        goto frame_exception_exit_4;
    }

    tmp_args_element_name_11 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_3_algorithm(  );
    frame_6eb5dd285be8dfa611911792699ffbb0_4->m_frame.f_lineno = 55;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto frame_exception_exit_4;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurveSignatureAlgorithm_54, const_str_plain_algorithm, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto frame_exception_exit_4;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6eb5dd285be8dfa611911792699ffbb0_4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_exception_exit_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6eb5dd285be8dfa611911792699ffbb0_4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6eb5dd285be8dfa611911792699ffbb0_4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6eb5dd285be8dfa611911792699ffbb0_4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6eb5dd285be8dfa611911792699ffbb0_4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6eb5dd285be8dfa611911792699ffbb0_4,
        type_description_2
    );


    // Release cached frame.
    if ( frame_6eb5dd285be8dfa611911792699ffbb0_4 == cache_frame_6eb5dd285be8dfa611911792699ffbb0_4 )
    {
        Py_DECREF( frame_6eb5dd285be8dfa611911792699ffbb0_4 );
    }
    cache_frame_6eb5dd285be8dfa611911792699ffbb0_4 = NULL;

    assertFrameObject( frame_6eb5dd285be8dfa611911792699ffbb0_4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_3;

    frame_no_exception_3:;

    goto skip_nested_handling_3;
    nested_frame_exit_3:;

    goto try_except_handler_7;
    skip_nested_handling_3:;
    tmp_outline_return_value_3 = locals_EllipticCurveSignatureAlgorithm_54;
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_7;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_7:;
    Py_DECREF( locals_EllipticCurveSignatureAlgorithm_54 );
    locals_EllipticCurveSignatureAlgorithm_54 = NULL;
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

    Py_DECREF( locals_EllipticCurveSignatureAlgorithm_54 );
    locals_EllipticCurveSignatureAlgorithm_54 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto outline_exception_3;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 54;
    goto try_except_handler_6;
    outline_result_3:;
    tmp_assign_source_21 = tmp_outline_return_value_3;
    assert( tmp_class_creation_3__class_dict == NULL );
    tmp_class_creation_3__class_dict = tmp_assign_source_21;

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
    tmp_assign_source_22 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_6;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_22 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_22 );
    condexpr_end_3:;
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_22;

    tmp_called_name_24 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_24 );
    tmp_args_element_name_12 = const_str_plain_EllipticCurveSignatureAlgorithm;
    tmp_args_element_name_13 = const_tuple_type_object_tuple;
    tmp_args_element_name_14 = tmp_class_creation_3__class_dict;

    CHECK_OBJECT( tmp_args_element_name_14 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 54;
    {
        PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14 };
        tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_24, call_args );
    }

    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_6;
    }
    assert( tmp_class_creation_3__class == NULL );
    tmp_class_creation_3__class = tmp_assign_source_23;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_six );

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

        exception_lineno = 53;

        goto try_except_handler_6;
    }

    tmp_called_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_add_metaclass );
    if ( tmp_called_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_6;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_26 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 53;

        goto try_except_handler_6;
    }

    tmp_args_element_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_26 );

        exception_lineno = 53;

        goto try_except_handler_6;
    }
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 53;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_called_name_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, call_args );
    }

    Py_DECREF( tmp_called_name_26 );
    Py_DECREF( tmp_args_element_name_15 );
    if ( tmp_called_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_6;
    }
    tmp_args_element_name_16 = tmp_class_creation_3__class;

    CHECK_OBJECT( tmp_args_element_name_16 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 53;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, call_args );
    }

    Py_DECREF( tmp_called_name_25 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_class_creation_3__class;
        assert( old != NULL );
        tmp_class_creation_3__class = tmp_assign_source_24;
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
    tmp_assign_source_25 = tmp_class_creation_3__class;

    CHECK_OBJECT( tmp_assign_source_25 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurveSignatureAlgorithm, tmp_assign_source_25 );
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
    locals_EllipticCurvePrivateKey_63 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
    tmp_res = PyDict_SetItem( locals_EllipticCurvePrivateKey_63, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1a159964efa70eb57a461347405834b5_5, codeobj_1a159964efa70eb57a461347405834b5, module_cryptography$hazmat$primitives$asymmetric$ec, 0 );
    frame_1a159964efa70eb57a461347405834b5_5 = cache_frame_1a159964efa70eb57a461347405834b5_5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1a159964efa70eb57a461347405834b5_5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1a159964efa70eb57a461347405834b5_5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 64;

        goto frame_exception_exit_5;
    }

    tmp_args_element_name_17 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_4_signer(  );
    frame_1a159964efa70eb57a461347405834b5_5->m_frame.f_lineno = 64;
    {
        PyObject *call_args[] = { tmp_args_element_name_17 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_17 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto frame_exception_exit_5;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurvePrivateKey_63, const_str_plain_signer, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto frame_exception_exit_5;
    }
    tmp_called_instance_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 70;

        goto frame_exception_exit_5;
    }

    tmp_args_element_name_18 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_5_exchange(  );
    frame_1a159964efa70eb57a461347405834b5_5->m_frame.f_lineno = 70;
    {
        PyObject *call_args[] = { tmp_args_element_name_18 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_18 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;

        goto frame_exception_exit_5;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurvePrivateKey_63, const_str_plain_exchange, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;

        goto frame_exception_exit_5;
    }
    tmp_called_instance_6 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 77;

        goto frame_exception_exit_5;
    }

    tmp_args_element_name_19 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_6_public_key(  );
    frame_1a159964efa70eb57a461347405834b5_5->m_frame.f_lineno = 77;
    {
        PyObject *call_args[] = { tmp_args_element_name_19 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_19 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;

        goto frame_exception_exit_5;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurvePrivateKey_63, const_str_plain_public_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;

        goto frame_exception_exit_5;
    }
    tmp_called_instance_7 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 83;

        goto frame_exception_exit_5;
    }

    tmp_args_element_name_20 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_7_curve(  );
    frame_1a159964efa70eb57a461347405834b5_5->m_frame.f_lineno = 83;
    {
        PyObject *call_args[] = { tmp_args_element_name_20 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_20 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;

        goto frame_exception_exit_5;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurvePrivateKey_63, const_str_plain_curve, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;

        goto frame_exception_exit_5;
    }
    tmp_called_instance_8 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 89;

        goto frame_exception_exit_5;
    }

    tmp_args_element_name_21 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_8_key_size(  );
    frame_1a159964efa70eb57a461347405834b5_5->m_frame.f_lineno = 89;
    {
        PyObject *call_args[] = { tmp_args_element_name_21 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_21 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;

        goto frame_exception_exit_5;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurvePrivateKey_63, const_str_plain_key_size, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;

        goto frame_exception_exit_5;
    }
    tmp_called_instance_9 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 95;

        goto frame_exception_exit_5;
    }

    tmp_args_element_name_22 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_9_sign(  );
    frame_1a159964efa70eb57a461347405834b5_5->m_frame.f_lineno = 95;
    {
        PyObject *call_args[] = { tmp_args_element_name_22 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_22 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;

        goto frame_exception_exit_5;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurvePrivateKey_63, const_str_plain_sign, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;

        goto frame_exception_exit_5;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1a159964efa70eb57a461347405834b5_5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;

    frame_exception_exit_5:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1a159964efa70eb57a461347405834b5_5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1a159964efa70eb57a461347405834b5_5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1a159964efa70eb57a461347405834b5_5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1a159964efa70eb57a461347405834b5_5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1a159964efa70eb57a461347405834b5_5,
        type_description_2
    );


    // Release cached frame.
    if ( frame_1a159964efa70eb57a461347405834b5_5 == cache_frame_1a159964efa70eb57a461347405834b5_5 )
    {
        Py_DECREF( frame_1a159964efa70eb57a461347405834b5_5 );
    }
    cache_frame_1a159964efa70eb57a461347405834b5_5 = NULL;

    assertFrameObject( frame_1a159964efa70eb57a461347405834b5_5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_4;

    frame_no_exception_4:;

    goto skip_nested_handling_4;
    nested_frame_exit_4:;

    goto try_except_handler_9;
    skip_nested_handling_4:;
    tmp_outline_return_value_4 = locals_EllipticCurvePrivateKey_63;
    Py_INCREF( tmp_outline_return_value_4 );
    goto try_return_handler_9;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_9:;
    Py_DECREF( locals_EllipticCurvePrivateKey_63 );
    locals_EllipticCurvePrivateKey_63 = NULL;
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

    Py_DECREF( locals_EllipticCurvePrivateKey_63 );
    locals_EllipticCurvePrivateKey_63 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto outline_exception_4;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_4:;
    exception_lineno = 63;
    goto try_except_handler_8;
    outline_result_4:;
    tmp_assign_source_26 = tmp_outline_return_value_4;
    assert( tmp_class_creation_4__class_dict == NULL );
    tmp_class_creation_4__class_dict = tmp_assign_source_26;

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
    tmp_assign_source_27 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;

        goto try_except_handler_8;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_assign_source_27 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_27 );
    condexpr_end_4:;
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_27;

    tmp_called_name_27 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_called_name_27 );
    tmp_args_element_name_23 = const_str_plain_EllipticCurvePrivateKey;
    tmp_args_element_name_24 = const_tuple_type_object_tuple;
    tmp_args_element_name_25 = tmp_class_creation_4__class_dict;

    CHECK_OBJECT( tmp_args_element_name_25 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 63;
    {
        PyObject *call_args[] = { tmp_args_element_name_23, tmp_args_element_name_24, tmp_args_element_name_25 };
        tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_27, call_args );
    }

    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;

        goto try_except_handler_8;
    }
    assert( tmp_class_creation_4__class == NULL );
    tmp_class_creation_4__class = tmp_assign_source_28;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_six );

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

        exception_lineno = 62;

        goto try_except_handler_8;
    }

    tmp_called_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_add_metaclass );
    if ( tmp_called_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_8;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 62;

        goto try_except_handler_8;
    }

    tmp_args_element_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_29 );

        exception_lineno = 62;

        goto try_except_handler_8;
    }
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 62;
    {
        PyObject *call_args[] = { tmp_args_element_name_26 };
        tmp_called_name_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_29, call_args );
    }

    Py_DECREF( tmp_called_name_29 );
    Py_DECREF( tmp_args_element_name_26 );
    if ( tmp_called_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_8;
    }
    tmp_args_element_name_27 = tmp_class_creation_4__class;

    CHECK_OBJECT( tmp_args_element_name_27 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 62;
    {
        PyObject *call_args[] = { tmp_args_element_name_27 };
        tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_28, call_args );
    }

    Py_DECREF( tmp_called_name_28 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_8;
    }
    {
        PyObject *old = tmp_class_creation_4__class;
        assert( old != NULL );
        tmp_class_creation_4__class = tmp_assign_source_29;
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
    tmp_assign_source_30 = tmp_class_creation_4__class;

    CHECK_OBJECT( tmp_assign_source_30 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurvePrivateKey, tmp_assign_source_30 );
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
    tmp_assign_source_31 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurvePrivateKey );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurvePrivateKey );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_31 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurvePrivateKey" );
        exception_tb = NULL;

        exception_lineno = 103;

        goto try_except_handler_10;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_31, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_5__bases == NULL );
    tmp_class_creation_5__bases = tmp_assign_source_31;

    tmp_set_locals = PyDict_New();
    locals_EllipticCurvePrivateKeyWithSerialization_103 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
    tmp_res = PyDict_SetItem( locals_EllipticCurvePrivateKeyWithSerialization_103, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6d6a3047393374d1a1724a05a2d8f966_6, codeobj_6d6a3047393374d1a1724a05a2d8f966, module_cryptography$hazmat$primitives$asymmetric$ec, 0 );
    frame_6d6a3047393374d1a1724a05a2d8f966_6 = cache_frame_6d6a3047393374d1a1724a05a2d8f966_6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6d6a3047393374d1a1724a05a2d8f966_6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6d6a3047393374d1a1724a05a2d8f966_6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_10 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 104;

        goto frame_exception_exit_6;
    }

    tmp_args_element_name_28 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_10_private_numbers(  );
    frame_6d6a3047393374d1a1724a05a2d8f966_6->m_frame.f_lineno = 104;
    {
        PyObject *call_args[] = { tmp_args_element_name_28 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_28 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto frame_exception_exit_6;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurvePrivateKeyWithSerialization_103, const_str_plain_private_numbers, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto frame_exception_exit_6;
    }
    tmp_called_instance_11 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 110;

        goto frame_exception_exit_6;
    }

    tmp_args_element_name_29 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_11_private_bytes(  );
    frame_6d6a3047393374d1a1724a05a2d8f966_6->m_frame.f_lineno = 110;
    {
        PyObject *call_args[] = { tmp_args_element_name_29 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_29 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;

        goto frame_exception_exit_6;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurvePrivateKeyWithSerialization_103, const_str_plain_private_bytes, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;

        goto frame_exception_exit_6;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6d6a3047393374d1a1724a05a2d8f966_6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_5;

    frame_exception_exit_6:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6d6a3047393374d1a1724a05a2d8f966_6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6d6a3047393374d1a1724a05a2d8f966_6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6d6a3047393374d1a1724a05a2d8f966_6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6d6a3047393374d1a1724a05a2d8f966_6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6d6a3047393374d1a1724a05a2d8f966_6,
        type_description_2
    );


    // Release cached frame.
    if ( frame_6d6a3047393374d1a1724a05a2d8f966_6 == cache_frame_6d6a3047393374d1a1724a05a2d8f966_6 )
    {
        Py_DECREF( frame_6d6a3047393374d1a1724a05a2d8f966_6 );
    }
    cache_frame_6d6a3047393374d1a1724a05a2d8f966_6 = NULL;

    assertFrameObject( frame_6d6a3047393374d1a1724a05a2d8f966_6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_5;

    frame_no_exception_5:;

    goto skip_nested_handling_5;
    nested_frame_exit_5:;

    goto try_except_handler_11;
    skip_nested_handling_5:;
    tmp_outline_return_value_5 = locals_EllipticCurvePrivateKeyWithSerialization_103;
    Py_INCREF( tmp_outline_return_value_5 );
    goto try_return_handler_11;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_11:;
    Py_DECREF( locals_EllipticCurvePrivateKeyWithSerialization_103 );
    locals_EllipticCurvePrivateKeyWithSerialization_103 = NULL;
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

    Py_DECREF( locals_EllipticCurvePrivateKeyWithSerialization_103 );
    locals_EllipticCurvePrivateKeyWithSerialization_103 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto outline_exception_5;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_5:;
    exception_lineno = 103;
    goto try_except_handler_10;
    outline_result_5:;
    tmp_assign_source_32 = tmp_outline_return_value_5;
    assert( tmp_class_creation_5__class_dict == NULL );
    tmp_class_creation_5__class_dict = tmp_assign_source_32;

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
    tmp_assign_source_33 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;

        goto try_except_handler_10;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_subscribed_name_1 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_34 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;

        goto try_except_handler_10;
    }
    assert( tmp_select_metaclass_5__base == NULL );
    tmp_select_metaclass_5__base = tmp_assign_source_34;

    // Tried code:
    // Tried code:
    tmp_source_name_7 = tmp_select_metaclass_5__base;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_outline_return_value_6 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_7 );
    if ( tmp_outline_return_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;

        goto try_except_handler_13;
    }
    goto try_return_handler_12;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_11 );
    Py_XDECREF( exception_keeper_value_11 );
    Py_XDECREF( exception_keeper_tb_11 );
    tmp_type_arg_1 = tmp_select_metaclass_5__base;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_outline_return_value_6 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_outline_return_value_6 != NULL );
    goto try_return_handler_12;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_12:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_5__base );
    Py_DECREF( tmp_select_metaclass_5__base );
    tmp_select_metaclass_5__base = NULL;

    goto outline_result_6;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_5__base );
    Py_DECREF( tmp_select_metaclass_5__base );
    tmp_select_metaclass_5__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    outline_result_6:;
    tmp_assign_source_33 = tmp_outline_return_value_6;
    condexpr_end_5:;
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_33;

    tmp_called_name_30 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_called_name_30 );
    tmp_args_element_name_30 = const_str_plain_EllipticCurvePrivateKeyWithSerialization;
    tmp_args_element_name_31 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_args_element_name_31 );
    tmp_args_element_name_32 = tmp_class_creation_5__class_dict;

    CHECK_OBJECT( tmp_args_element_name_32 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 103;
    {
        PyObject *call_args[] = { tmp_args_element_name_30, tmp_args_element_name_31, tmp_args_element_name_32 };
        tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_30, call_args );
    }

    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;

        goto try_except_handler_10;
    }
    assert( tmp_class_creation_5__class == NULL );
    tmp_class_creation_5__class = tmp_assign_source_35;

    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_six );

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

        exception_lineno = 102;

        goto try_except_handler_10;
    }

    tmp_called_name_32 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_add_metaclass );
    if ( tmp_called_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;

        goto try_except_handler_10;
    }
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_32 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 102;

        goto try_except_handler_10;
    }

    tmp_args_element_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_32 );

        exception_lineno = 102;

        goto try_except_handler_10;
    }
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 102;
    {
        PyObject *call_args[] = { tmp_args_element_name_33 };
        tmp_called_name_31 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_32, call_args );
    }

    Py_DECREF( tmp_called_name_32 );
    Py_DECREF( tmp_args_element_name_33 );
    if ( tmp_called_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;

        goto try_except_handler_10;
    }
    tmp_args_element_name_34 = tmp_class_creation_5__class;

    CHECK_OBJECT( tmp_args_element_name_34 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 102;
    {
        PyObject *call_args[] = { tmp_args_element_name_34 };
        tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_31, call_args );
    }

    Py_DECREF( tmp_called_name_31 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;

        goto try_except_handler_10;
    }
    {
        PyObject *old = tmp_class_creation_5__class;
        assert( old != NULL );
        tmp_class_creation_5__class = tmp_assign_source_36;
        Py_DECREF( old );
    }

    goto try_end_6;
    // Exception handler code:
    try_except_handler_10:;
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

    Py_XDECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

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
    try_end_6:;
    tmp_assign_source_37 = tmp_class_creation_5__class;

    CHECK_OBJECT( tmp_assign_source_37 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurvePrivateKeyWithSerialization, tmp_assign_source_37 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class );
    Py_DECREF( tmp_class_creation_5__class );
    tmp_class_creation_5__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__bases );
    Py_DECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_dict );
    Py_DECREF( tmp_class_creation_5__class_dict );
    tmp_class_creation_5__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__metaclass );
    Py_DECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    // Tried code:
    tmp_set_locals = PyDict_New();
    locals_EllipticCurvePublicKey_118 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
    tmp_res = PyDict_SetItem( locals_EllipticCurvePublicKey_118, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0ed21e32ea6fb2f78de16033f39d4689_7, codeobj_0ed21e32ea6fb2f78de16033f39d4689, module_cryptography$hazmat$primitives$asymmetric$ec, 0 );
    frame_0ed21e32ea6fb2f78de16033f39d4689_7 = cache_frame_0ed21e32ea6fb2f78de16033f39d4689_7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0ed21e32ea6fb2f78de16033f39d4689_7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0ed21e32ea6fb2f78de16033f39d4689_7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_12 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 119;

        goto frame_exception_exit_7;
    }

    tmp_args_element_name_35 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_12_verifier(  );
    frame_0ed21e32ea6fb2f78de16033f39d4689_7->m_frame.f_lineno = 119;
    {
        PyObject *call_args[] = { tmp_args_element_name_35 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_12, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_35 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;

        goto frame_exception_exit_7;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurvePublicKey_118, const_str_plain_verifier, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;

        goto frame_exception_exit_7;
    }
    tmp_called_instance_13 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 125;

        goto frame_exception_exit_7;
    }

    tmp_args_element_name_36 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_13_curve(  );
    frame_0ed21e32ea6fb2f78de16033f39d4689_7->m_frame.f_lineno = 125;
    {
        PyObject *call_args[] = { tmp_args_element_name_36 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_13, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_36 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;

        goto frame_exception_exit_7;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurvePublicKey_118, const_str_plain_curve, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;

        goto frame_exception_exit_7;
    }
    tmp_called_instance_14 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 131;

        goto frame_exception_exit_7;
    }

    tmp_args_element_name_37 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_14_key_size(  );
    frame_0ed21e32ea6fb2f78de16033f39d4689_7->m_frame.f_lineno = 131;
    {
        PyObject *call_args[] = { tmp_args_element_name_37 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_14, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_37 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto frame_exception_exit_7;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurvePublicKey_118, const_str_plain_key_size, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto frame_exception_exit_7;
    }
    tmp_called_instance_15 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 137;

        goto frame_exception_exit_7;
    }

    tmp_args_element_name_38 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_15_public_numbers(  );
    frame_0ed21e32ea6fb2f78de16033f39d4689_7->m_frame.f_lineno = 137;
    {
        PyObject *call_args[] = { tmp_args_element_name_38 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_15, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_38 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto frame_exception_exit_7;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurvePublicKey_118, const_str_plain_public_numbers, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto frame_exception_exit_7;
    }
    tmp_called_instance_16 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 143;

        goto frame_exception_exit_7;
    }

    tmp_args_element_name_39 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_16_public_bytes(  );
    frame_0ed21e32ea6fb2f78de16033f39d4689_7->m_frame.f_lineno = 143;
    {
        PyObject *call_args[] = { tmp_args_element_name_39 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_16, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_39 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;

        goto frame_exception_exit_7;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurvePublicKey_118, const_str_plain_public_bytes, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;

        goto frame_exception_exit_7;
    }
    tmp_called_instance_17 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 149;

        goto frame_exception_exit_7;
    }

    tmp_args_element_name_40 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_17_verify(  );
    frame_0ed21e32ea6fb2f78de16033f39d4689_7->m_frame.f_lineno = 149;
    {
        PyObject *call_args[] = { tmp_args_element_name_40 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_17, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_40 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;

        goto frame_exception_exit_7;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurvePublicKey_118, const_str_plain_verify, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;

        goto frame_exception_exit_7;
    }
    tmp_classmethod_arg_1 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_18_from_encoded_point(  );
    tmp_dictset_value = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_1 );
    Py_DECREF( tmp_classmethod_arg_1 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;

        goto frame_exception_exit_7;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurvePublicKey_118, const_str_plain_from_encoded_point, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;

        goto frame_exception_exit_7;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0ed21e32ea6fb2f78de16033f39d4689_7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_6;

    frame_exception_exit_7:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0ed21e32ea6fb2f78de16033f39d4689_7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0ed21e32ea6fb2f78de16033f39d4689_7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0ed21e32ea6fb2f78de16033f39d4689_7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0ed21e32ea6fb2f78de16033f39d4689_7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0ed21e32ea6fb2f78de16033f39d4689_7,
        type_description_2
    );


    // Release cached frame.
    if ( frame_0ed21e32ea6fb2f78de16033f39d4689_7 == cache_frame_0ed21e32ea6fb2f78de16033f39d4689_7 )
    {
        Py_DECREF( frame_0ed21e32ea6fb2f78de16033f39d4689_7 );
    }
    cache_frame_0ed21e32ea6fb2f78de16033f39d4689_7 = NULL;

    assertFrameObject( frame_0ed21e32ea6fb2f78de16033f39d4689_7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_6;

    frame_no_exception_6:;

    goto skip_nested_handling_6;
    nested_frame_exit_6:;

    goto try_except_handler_15;
    skip_nested_handling_6:;
    tmp_outline_return_value_7 = locals_EllipticCurvePublicKey_118;
    Py_INCREF( tmp_outline_return_value_7 );
    goto try_return_handler_15;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_15:;
    Py_DECREF( locals_EllipticCurvePublicKey_118 );
    locals_EllipticCurvePublicKey_118 = NULL;
    goto outline_result_7;
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

    Py_DECREF( locals_EllipticCurvePublicKey_118 );
    locals_EllipticCurvePublicKey_118 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto outline_exception_6;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_6:;
    exception_lineno = 118;
    goto try_except_handler_14;
    outline_result_7:;
    tmp_assign_source_38 = tmp_outline_return_value_7;
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


        exception_lineno = 118;

        goto try_except_handler_14;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_39 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_39 );
    condexpr_end_6:;
    assert( tmp_class_creation_6__metaclass == NULL );
    tmp_class_creation_6__metaclass = tmp_assign_source_39;

    tmp_called_name_33 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_called_name_33 );
    tmp_args_element_name_41 = const_str_plain_EllipticCurvePublicKey;
    tmp_args_element_name_42 = const_tuple_type_object_tuple;
    tmp_args_element_name_43 = tmp_class_creation_6__class_dict;

    CHECK_OBJECT( tmp_args_element_name_43 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 118;
    {
        PyObject *call_args[] = { tmp_args_element_name_41, tmp_args_element_name_42, tmp_args_element_name_43 };
        tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_33, call_args );
    }

    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;

        goto try_except_handler_14;
    }
    assert( tmp_class_creation_6__class == NULL );
    tmp_class_creation_6__class = tmp_assign_source_40;

    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;

        exception_lineno = 117;

        goto try_except_handler_14;
    }

    tmp_called_name_35 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_add_metaclass );
    if ( tmp_called_name_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;

        goto try_except_handler_14;
    }
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_35 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 117;

        goto try_except_handler_14;
    }

    tmp_args_element_name_44 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_35 );

        exception_lineno = 117;

        goto try_except_handler_14;
    }
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 117;
    {
        PyObject *call_args[] = { tmp_args_element_name_44 };
        tmp_called_name_34 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_35, call_args );
    }

    Py_DECREF( tmp_called_name_35 );
    Py_DECREF( tmp_args_element_name_44 );
    if ( tmp_called_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;

        goto try_except_handler_14;
    }
    tmp_args_element_name_45 = tmp_class_creation_6__class;

    CHECK_OBJECT( tmp_args_element_name_45 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 117;
    {
        PyObject *call_args[] = { tmp_args_element_name_45 };
        tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_34, call_args );
    }

    Py_DECREF( tmp_called_name_34 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;

        goto try_except_handler_14;
    }
    {
        PyObject *old = tmp_class_creation_6__class;
        assert( old != NULL );
        tmp_class_creation_6__class = tmp_assign_source_41;
        Py_DECREF( old );
    }

    goto try_end_7;
    // Exception handler code:
    try_except_handler_14:;
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
    try_end_7:;
    tmp_assign_source_42 = tmp_class_creation_6__class;

    CHECK_OBJECT( tmp_assign_source_42 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurvePublicKey, tmp_assign_source_42 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class );
    Py_DECREF( tmp_class_creation_6__class );
    tmp_class_creation_6__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class_dict );
    Py_DECREF( tmp_class_creation_6__class_dict );
    tmp_class_creation_6__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__metaclass );
    Py_DECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    tmp_assign_source_43 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurvePublicKey );

    if (unlikely( tmp_assign_source_43 == NULL ))
    {
        tmp_assign_source_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurvePublicKey );
    }

    if ( tmp_assign_source_43 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurvePublicKey" );
        exception_tb = NULL;

        exception_lineno = 172;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurvePublicKeyWithSerialization, tmp_assign_source_43 );
    tmp_set_locals = PyDict_New();
    locals_SECT571R1_176 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
    tmp_res = PyDict_SetItem( locals_SECT571R1_176, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_sect571r1;
    tmp_res = PyDict_SetItem( locals_SECT571R1_176, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_570;
    tmp_res = PyDict_SetItem( locals_SECT571R1_176, const_str_plain_key_size, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_8 = locals_SECT571R1_176;
    Py_INCREF( tmp_outline_return_value_8 );
    goto try_return_handler_16;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_16:;
    Py_DECREF( locals_SECT571R1_176 );
    locals_SECT571R1_176 = NULL;
    goto outline_result_8;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    outline_result_8:;
    tmp_assign_source_44 = tmp_outline_return_value_8;
    assert( tmp_class_creation_7__class_dict == NULL );
    tmp_class_creation_7__class_dict = tmp_assign_source_44;

    // Tried code:
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


        exception_lineno = 176;

        goto try_except_handler_17;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_assign_source_45 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_45 );
    condexpr_end_7:;
    assert( tmp_class_creation_7__metaclass == NULL );
    tmp_class_creation_7__metaclass = tmp_assign_source_45;

    tmp_called_name_36 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_called_name_36 );
    tmp_args_element_name_46 = const_str_plain_SECT571R1;
    tmp_args_element_name_47 = const_tuple_type_object_tuple;
    tmp_args_element_name_48 = tmp_class_creation_7__class_dict;

    CHECK_OBJECT( tmp_args_element_name_48 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 176;
    {
        PyObject *call_args[] = { tmp_args_element_name_46, tmp_args_element_name_47, tmp_args_element_name_48 };
        tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_36, call_args );
    }

    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;

        goto try_except_handler_17;
    }
    assert( tmp_class_creation_7__class == NULL );
    tmp_class_creation_7__class = tmp_assign_source_46;

    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

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

        exception_lineno = 175;

        goto try_except_handler_17;
    }

    tmp_called_name_38 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_register_interface );
    if ( tmp_called_name_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;

        goto try_except_handler_17;
    }
    tmp_args_element_name_49 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurve );

    if (unlikely( tmp_args_element_name_49 == NULL ))
    {
        tmp_args_element_name_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurve );
    }

    if ( tmp_args_element_name_49 == NULL )
    {
        Py_DECREF( tmp_called_name_38 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurve" );
        exception_tb = NULL;

        exception_lineno = 175;

        goto try_except_handler_17;
    }

    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 175;
    {
        PyObject *call_args[] = { tmp_args_element_name_49 };
        tmp_called_name_37 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_38, call_args );
    }

    Py_DECREF( tmp_called_name_38 );
    if ( tmp_called_name_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;

        goto try_except_handler_17;
    }
    tmp_args_element_name_50 = tmp_class_creation_7__class;

    CHECK_OBJECT( tmp_args_element_name_50 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 175;
    {
        PyObject *call_args[] = { tmp_args_element_name_50 };
        tmp_assign_source_47 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_37, call_args );
    }

    Py_DECREF( tmp_called_name_37 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;

        goto try_except_handler_17;
    }
    {
        PyObject *old = tmp_class_creation_7__class;
        assert( old != NULL );
        tmp_class_creation_7__class = tmp_assign_source_47;
        Py_DECREF( old );
    }

    goto try_end_8;
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

    Py_XDECREF( tmp_class_creation_7__class );
    tmp_class_creation_7__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class_dict );
    Py_DECREF( tmp_class_creation_7__class_dict );
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
    tmp_assign_source_48 = tmp_class_creation_7__class;

    CHECK_OBJECT( tmp_assign_source_48 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECT571R1, tmp_assign_source_48 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class );
    Py_DECREF( tmp_class_creation_7__class );
    tmp_class_creation_7__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class_dict );
    Py_DECREF( tmp_class_creation_7__class_dict );
    tmp_class_creation_7__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__metaclass );
    Py_DECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    tmp_set_locals = PyDict_New();
    locals_SECT409R1_182 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
    tmp_res = PyDict_SetItem( locals_SECT409R1_182, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_sect409r1;
    tmp_res = PyDict_SetItem( locals_SECT409R1_182, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_409;
    tmp_res = PyDict_SetItem( locals_SECT409R1_182, const_str_plain_key_size, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_9 = locals_SECT409R1_182;
    Py_INCREF( tmp_outline_return_value_9 );
    goto try_return_handler_18;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_18:;
    Py_DECREF( locals_SECT409R1_182 );
    locals_SECT409R1_182 = NULL;
    goto outline_result_9;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    outline_result_9:;
    tmp_assign_source_49 = tmp_outline_return_value_9;
    assert( tmp_class_creation_8__class_dict == NULL );
    tmp_class_creation_8__class_dict = tmp_assign_source_49;

    // Tried code:
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
    tmp_assign_source_50 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;

        goto try_except_handler_19;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_assign_source_50 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_50 );
    condexpr_end_8:;
    assert( tmp_class_creation_8__metaclass == NULL );
    tmp_class_creation_8__metaclass = tmp_assign_source_50;

    tmp_called_name_39 = tmp_class_creation_8__metaclass;

    CHECK_OBJECT( tmp_called_name_39 );
    tmp_args_element_name_51 = const_str_plain_SECT409R1;
    tmp_args_element_name_52 = const_tuple_type_object_tuple;
    tmp_args_element_name_53 = tmp_class_creation_8__class_dict;

    CHECK_OBJECT( tmp_args_element_name_53 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 182;
    {
        PyObject *call_args[] = { tmp_args_element_name_51, tmp_args_element_name_52, tmp_args_element_name_53 };
        tmp_assign_source_51 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_39, call_args );
    }

    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;

        goto try_except_handler_19;
    }
    assert( tmp_class_creation_8__class == NULL );
    tmp_class_creation_8__class = tmp_assign_source_51;

    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

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

        exception_lineno = 181;

        goto try_except_handler_19;
    }

    tmp_called_name_41 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_register_interface );
    if ( tmp_called_name_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;

        goto try_except_handler_19;
    }
    tmp_args_element_name_54 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurve );

    if (unlikely( tmp_args_element_name_54 == NULL ))
    {
        tmp_args_element_name_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurve );
    }

    if ( tmp_args_element_name_54 == NULL )
    {
        Py_DECREF( tmp_called_name_41 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurve" );
        exception_tb = NULL;

        exception_lineno = 181;

        goto try_except_handler_19;
    }

    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 181;
    {
        PyObject *call_args[] = { tmp_args_element_name_54 };
        tmp_called_name_40 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_41, call_args );
    }

    Py_DECREF( tmp_called_name_41 );
    if ( tmp_called_name_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;

        goto try_except_handler_19;
    }
    tmp_args_element_name_55 = tmp_class_creation_8__class;

    CHECK_OBJECT( tmp_args_element_name_55 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 181;
    {
        PyObject *call_args[] = { tmp_args_element_name_55 };
        tmp_assign_source_52 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_40, call_args );
    }

    Py_DECREF( tmp_called_name_40 );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;

        goto try_except_handler_19;
    }
    {
        PyObject *old = tmp_class_creation_8__class;
        assert( old != NULL );
        tmp_class_creation_8__class = tmp_assign_source_52;
        Py_DECREF( old );
    }

    goto try_end_9;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_8__class );
    tmp_class_creation_8__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__class_dict );
    Py_DECREF( tmp_class_creation_8__class_dict );
    tmp_class_creation_8__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    tmp_assign_source_53 = tmp_class_creation_8__class;

    CHECK_OBJECT( tmp_assign_source_53 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECT409R1, tmp_assign_source_53 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__class );
    Py_DECREF( tmp_class_creation_8__class );
    tmp_class_creation_8__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__class_dict );
    Py_DECREF( tmp_class_creation_8__class_dict );
    tmp_class_creation_8__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__metaclass );
    Py_DECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    tmp_set_locals = PyDict_New();
    locals_SECT283R1_188 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
    tmp_res = PyDict_SetItem( locals_SECT283R1_188, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_sect283r1;
    tmp_res = PyDict_SetItem( locals_SECT283R1_188, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_283;
    tmp_res = PyDict_SetItem( locals_SECT283R1_188, const_str_plain_key_size, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_10 = locals_SECT283R1_188;
    Py_INCREF( tmp_outline_return_value_10 );
    goto try_return_handler_20;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_20:;
    Py_DECREF( locals_SECT283R1_188 );
    locals_SECT283R1_188 = NULL;
    goto outline_result_10;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    outline_result_10:;
    tmp_assign_source_54 = tmp_outline_return_value_10;
    assert( tmp_class_creation_9__class_dict == NULL );
    tmp_class_creation_9__class_dict = tmp_assign_source_54;

    // Tried code:
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
    tmp_assign_source_55 = DICT_GET_ITEM( tmp_dict_name_9, tmp_key_name_9 );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;

        goto try_except_handler_21;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_assign_source_55 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_55 );
    condexpr_end_9:;
    assert( tmp_class_creation_9__metaclass == NULL );
    tmp_class_creation_9__metaclass = tmp_assign_source_55;

    tmp_called_name_42 = tmp_class_creation_9__metaclass;

    CHECK_OBJECT( tmp_called_name_42 );
    tmp_args_element_name_56 = const_str_plain_SECT283R1;
    tmp_args_element_name_57 = const_tuple_type_object_tuple;
    tmp_args_element_name_58 = tmp_class_creation_9__class_dict;

    CHECK_OBJECT( tmp_args_element_name_58 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 188;
    {
        PyObject *call_args[] = { tmp_args_element_name_56, tmp_args_element_name_57, tmp_args_element_name_58 };
        tmp_assign_source_56 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_42, call_args );
    }

    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;

        goto try_except_handler_21;
    }
    assert( tmp_class_creation_9__class == NULL );
    tmp_class_creation_9__class = tmp_assign_source_56;

    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

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

        exception_lineno = 187;

        goto try_except_handler_21;
    }

    tmp_called_name_44 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_register_interface );
    if ( tmp_called_name_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;

        goto try_except_handler_21;
    }
    tmp_args_element_name_59 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurve );

    if (unlikely( tmp_args_element_name_59 == NULL ))
    {
        tmp_args_element_name_59 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurve );
    }

    if ( tmp_args_element_name_59 == NULL )
    {
        Py_DECREF( tmp_called_name_44 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurve" );
        exception_tb = NULL;

        exception_lineno = 187;

        goto try_except_handler_21;
    }

    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 187;
    {
        PyObject *call_args[] = { tmp_args_element_name_59 };
        tmp_called_name_43 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_44, call_args );
    }

    Py_DECREF( tmp_called_name_44 );
    if ( tmp_called_name_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;

        goto try_except_handler_21;
    }
    tmp_args_element_name_60 = tmp_class_creation_9__class;

    CHECK_OBJECT( tmp_args_element_name_60 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 187;
    {
        PyObject *call_args[] = { tmp_args_element_name_60 };
        tmp_assign_source_57 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_43, call_args );
    }

    Py_DECREF( tmp_called_name_43 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;

        goto try_except_handler_21;
    }
    {
        PyObject *old = tmp_class_creation_9__class;
        assert( old != NULL );
        tmp_class_creation_9__class = tmp_assign_source_57;
        Py_DECREF( old );
    }

    goto try_end_10;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_9__class );
    tmp_class_creation_9__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__class_dict );
    Py_DECREF( tmp_class_creation_9__class_dict );
    tmp_class_creation_9__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    tmp_assign_source_58 = tmp_class_creation_9__class;

    CHECK_OBJECT( tmp_assign_source_58 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECT283R1, tmp_assign_source_58 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__class );
    Py_DECREF( tmp_class_creation_9__class );
    tmp_class_creation_9__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__class_dict );
    Py_DECREF( tmp_class_creation_9__class_dict );
    tmp_class_creation_9__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__metaclass );
    Py_DECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    tmp_set_locals = PyDict_New();
    locals_SECT233R1_194 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
    tmp_res = PyDict_SetItem( locals_SECT233R1_194, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_sect233r1;
    tmp_res = PyDict_SetItem( locals_SECT233R1_194, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_233;
    tmp_res = PyDict_SetItem( locals_SECT233R1_194, const_str_plain_key_size, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_11 = locals_SECT233R1_194;
    Py_INCREF( tmp_outline_return_value_11 );
    goto try_return_handler_22;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_22:;
    Py_DECREF( locals_SECT233R1_194 );
    locals_SECT233R1_194 = NULL;
    goto outline_result_11;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    outline_result_11:;
    tmp_assign_source_59 = tmp_outline_return_value_11;
    assert( tmp_class_creation_10__class_dict == NULL );
    tmp_class_creation_10__class_dict = tmp_assign_source_59;

    // Tried code:
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
    tmp_assign_source_60 = DICT_GET_ITEM( tmp_dict_name_10, tmp_key_name_10 );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;

        goto try_except_handler_23;
    }
    goto condexpr_end_10;
    condexpr_false_10:;
    tmp_assign_source_60 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_60 );
    condexpr_end_10:;
    assert( tmp_class_creation_10__metaclass == NULL );
    tmp_class_creation_10__metaclass = tmp_assign_source_60;

    tmp_called_name_45 = tmp_class_creation_10__metaclass;

    CHECK_OBJECT( tmp_called_name_45 );
    tmp_args_element_name_61 = const_str_plain_SECT233R1;
    tmp_args_element_name_62 = const_tuple_type_object_tuple;
    tmp_args_element_name_63 = tmp_class_creation_10__class_dict;

    CHECK_OBJECT( tmp_args_element_name_63 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 194;
    {
        PyObject *call_args[] = { tmp_args_element_name_61, tmp_args_element_name_62, tmp_args_element_name_63 };
        tmp_assign_source_61 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_45, call_args );
    }

    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;

        goto try_except_handler_23;
    }
    assert( tmp_class_creation_10__class == NULL );
    tmp_class_creation_10__class = tmp_assign_source_61;

    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

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

        exception_lineno = 193;

        goto try_except_handler_23;
    }

    tmp_called_name_47 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_register_interface );
    if ( tmp_called_name_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;

        goto try_except_handler_23;
    }
    tmp_args_element_name_64 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurve );

    if (unlikely( tmp_args_element_name_64 == NULL ))
    {
        tmp_args_element_name_64 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurve );
    }

    if ( tmp_args_element_name_64 == NULL )
    {
        Py_DECREF( tmp_called_name_47 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurve" );
        exception_tb = NULL;

        exception_lineno = 193;

        goto try_except_handler_23;
    }

    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 193;
    {
        PyObject *call_args[] = { tmp_args_element_name_64 };
        tmp_called_name_46 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_47, call_args );
    }

    Py_DECREF( tmp_called_name_47 );
    if ( tmp_called_name_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;

        goto try_except_handler_23;
    }
    tmp_args_element_name_65 = tmp_class_creation_10__class;

    CHECK_OBJECT( tmp_args_element_name_65 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 193;
    {
        PyObject *call_args[] = { tmp_args_element_name_65 };
        tmp_assign_source_62 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_46, call_args );
    }

    Py_DECREF( tmp_called_name_46 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;

        goto try_except_handler_23;
    }
    {
        PyObject *old = tmp_class_creation_10__class;
        assert( old != NULL );
        tmp_class_creation_10__class = tmp_assign_source_62;
        Py_DECREF( old );
    }

    goto try_end_11;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_10__class );
    tmp_class_creation_10__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__class_dict );
    Py_DECREF( tmp_class_creation_10__class_dict );
    tmp_class_creation_10__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_10__metaclass );
    tmp_class_creation_10__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    tmp_assign_source_63 = tmp_class_creation_10__class;

    CHECK_OBJECT( tmp_assign_source_63 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECT233R1, tmp_assign_source_63 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__class );
    Py_DECREF( tmp_class_creation_10__class );
    tmp_class_creation_10__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__class_dict );
    Py_DECREF( tmp_class_creation_10__class_dict );
    tmp_class_creation_10__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__metaclass );
    Py_DECREF( tmp_class_creation_10__metaclass );
    tmp_class_creation_10__metaclass = NULL;

    tmp_set_locals = PyDict_New();
    locals_SECT163R2_200 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
    tmp_res = PyDict_SetItem( locals_SECT163R2_200, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_sect163r2;
    tmp_res = PyDict_SetItem( locals_SECT163R2_200, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_163;
    tmp_res = PyDict_SetItem( locals_SECT163R2_200, const_str_plain_key_size, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_12 = locals_SECT163R2_200;
    Py_INCREF( tmp_outline_return_value_12 );
    goto try_return_handler_24;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_24:;
    Py_DECREF( locals_SECT163R2_200 );
    locals_SECT163R2_200 = NULL;
    goto outline_result_12;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    outline_result_12:;
    tmp_assign_source_64 = tmp_outline_return_value_12;
    assert( tmp_class_creation_11__class_dict == NULL );
    tmp_class_creation_11__class_dict = tmp_assign_source_64;

    // Tried code:
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
    tmp_assign_source_65 = DICT_GET_ITEM( tmp_dict_name_11, tmp_key_name_11 );
    if ( tmp_assign_source_65 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;

        goto try_except_handler_25;
    }
    goto condexpr_end_11;
    condexpr_false_11:;
    tmp_assign_source_65 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_65 );
    condexpr_end_11:;
    assert( tmp_class_creation_11__metaclass == NULL );
    tmp_class_creation_11__metaclass = tmp_assign_source_65;

    tmp_called_name_48 = tmp_class_creation_11__metaclass;

    CHECK_OBJECT( tmp_called_name_48 );
    tmp_args_element_name_66 = const_str_plain_SECT163R2;
    tmp_args_element_name_67 = const_tuple_type_object_tuple;
    tmp_args_element_name_68 = tmp_class_creation_11__class_dict;

    CHECK_OBJECT( tmp_args_element_name_68 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 200;
    {
        PyObject *call_args[] = { tmp_args_element_name_66, tmp_args_element_name_67, tmp_args_element_name_68 };
        tmp_assign_source_66 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_48, call_args );
    }

    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;

        goto try_except_handler_25;
    }
    assert( tmp_class_creation_11__class == NULL );
    tmp_class_creation_11__class = tmp_assign_source_66;

    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

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

        exception_lineno = 199;

        goto try_except_handler_25;
    }

    tmp_called_name_50 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_register_interface );
    if ( tmp_called_name_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;

        goto try_except_handler_25;
    }
    tmp_args_element_name_69 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurve );

    if (unlikely( tmp_args_element_name_69 == NULL ))
    {
        tmp_args_element_name_69 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurve );
    }

    if ( tmp_args_element_name_69 == NULL )
    {
        Py_DECREF( tmp_called_name_50 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurve" );
        exception_tb = NULL;

        exception_lineno = 199;

        goto try_except_handler_25;
    }

    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 199;
    {
        PyObject *call_args[] = { tmp_args_element_name_69 };
        tmp_called_name_49 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_50, call_args );
    }

    Py_DECREF( tmp_called_name_50 );
    if ( tmp_called_name_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;

        goto try_except_handler_25;
    }
    tmp_args_element_name_70 = tmp_class_creation_11__class;

    CHECK_OBJECT( tmp_args_element_name_70 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 199;
    {
        PyObject *call_args[] = { tmp_args_element_name_70 };
        tmp_assign_source_67 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_49, call_args );
    }

    Py_DECREF( tmp_called_name_49 );
    if ( tmp_assign_source_67 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;

        goto try_except_handler_25;
    }
    {
        PyObject *old = tmp_class_creation_11__class;
        assert( old != NULL );
        tmp_class_creation_11__class = tmp_assign_source_67;
        Py_DECREF( old );
    }

    goto try_end_12;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_11__class );
    tmp_class_creation_11__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__class_dict );
    Py_DECREF( tmp_class_creation_11__class_dict );
    tmp_class_creation_11__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_11__metaclass );
    tmp_class_creation_11__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    tmp_assign_source_68 = tmp_class_creation_11__class;

    CHECK_OBJECT( tmp_assign_source_68 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECT163R2, tmp_assign_source_68 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__class );
    Py_DECREF( tmp_class_creation_11__class );
    tmp_class_creation_11__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__class_dict );
    Py_DECREF( tmp_class_creation_11__class_dict );
    tmp_class_creation_11__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__metaclass );
    Py_DECREF( tmp_class_creation_11__metaclass );
    tmp_class_creation_11__metaclass = NULL;

    tmp_set_locals = PyDict_New();
    locals_SECT571K1_206 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
    tmp_res = PyDict_SetItem( locals_SECT571K1_206, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_sect571k1;
    tmp_res = PyDict_SetItem( locals_SECT571K1_206, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_571;
    tmp_res = PyDict_SetItem( locals_SECT571K1_206, const_str_plain_key_size, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_13 = locals_SECT571K1_206;
    Py_INCREF( tmp_outline_return_value_13 );
    goto try_return_handler_26;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_26:;
    Py_DECREF( locals_SECT571K1_206 );
    locals_SECT571K1_206 = NULL;
    goto outline_result_13;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    outline_result_13:;
    tmp_assign_source_69 = tmp_outline_return_value_13;
    assert( tmp_class_creation_12__class_dict == NULL );
    tmp_class_creation_12__class_dict = tmp_assign_source_69;

    // Tried code:
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
    tmp_assign_source_70 = DICT_GET_ITEM( tmp_dict_name_12, tmp_key_name_12 );
    if ( tmp_assign_source_70 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;

        goto try_except_handler_27;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_assign_source_70 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_70 );
    condexpr_end_12:;
    assert( tmp_class_creation_12__metaclass == NULL );
    tmp_class_creation_12__metaclass = tmp_assign_source_70;

    tmp_called_name_51 = tmp_class_creation_12__metaclass;

    CHECK_OBJECT( tmp_called_name_51 );
    tmp_args_element_name_71 = const_str_plain_SECT571K1;
    tmp_args_element_name_72 = const_tuple_type_object_tuple;
    tmp_args_element_name_73 = tmp_class_creation_12__class_dict;

    CHECK_OBJECT( tmp_args_element_name_73 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 206;
    {
        PyObject *call_args[] = { tmp_args_element_name_71, tmp_args_element_name_72, tmp_args_element_name_73 };
        tmp_assign_source_71 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_51, call_args );
    }

    if ( tmp_assign_source_71 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;

        goto try_except_handler_27;
    }
    assert( tmp_class_creation_12__class == NULL );
    tmp_class_creation_12__class = tmp_assign_source_71;

    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

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

        exception_lineno = 205;

        goto try_except_handler_27;
    }

    tmp_called_name_53 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_register_interface );
    if ( tmp_called_name_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;

        goto try_except_handler_27;
    }
    tmp_args_element_name_74 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurve );

    if (unlikely( tmp_args_element_name_74 == NULL ))
    {
        tmp_args_element_name_74 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurve );
    }

    if ( tmp_args_element_name_74 == NULL )
    {
        Py_DECREF( tmp_called_name_53 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurve" );
        exception_tb = NULL;

        exception_lineno = 205;

        goto try_except_handler_27;
    }

    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 205;
    {
        PyObject *call_args[] = { tmp_args_element_name_74 };
        tmp_called_name_52 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_53, call_args );
    }

    Py_DECREF( tmp_called_name_53 );
    if ( tmp_called_name_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;

        goto try_except_handler_27;
    }
    tmp_args_element_name_75 = tmp_class_creation_12__class;

    CHECK_OBJECT( tmp_args_element_name_75 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 205;
    {
        PyObject *call_args[] = { tmp_args_element_name_75 };
        tmp_assign_source_72 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_52, call_args );
    }

    Py_DECREF( tmp_called_name_52 );
    if ( tmp_assign_source_72 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;

        goto try_except_handler_27;
    }
    {
        PyObject *old = tmp_class_creation_12__class;
        assert( old != NULL );
        tmp_class_creation_12__class = tmp_assign_source_72;
        Py_DECREF( old );
    }

    goto try_end_13;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_12__class );
    tmp_class_creation_12__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__class_dict );
    Py_DECREF( tmp_class_creation_12__class_dict );
    tmp_class_creation_12__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_12__metaclass );
    tmp_class_creation_12__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    tmp_assign_source_73 = tmp_class_creation_12__class;

    CHECK_OBJECT( tmp_assign_source_73 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECT571K1, tmp_assign_source_73 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__class );
    Py_DECREF( tmp_class_creation_12__class );
    tmp_class_creation_12__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__class_dict );
    Py_DECREF( tmp_class_creation_12__class_dict );
    tmp_class_creation_12__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__metaclass );
    Py_DECREF( tmp_class_creation_12__metaclass );
    tmp_class_creation_12__metaclass = NULL;

    tmp_set_locals = PyDict_New();
    locals_SECT409K1_212 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
    tmp_res = PyDict_SetItem( locals_SECT409K1_212, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_sect409k1;
    tmp_res = PyDict_SetItem( locals_SECT409K1_212, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_409;
    tmp_res = PyDict_SetItem( locals_SECT409K1_212, const_str_plain_key_size, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_14 = locals_SECT409K1_212;
    Py_INCREF( tmp_outline_return_value_14 );
    goto try_return_handler_28;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_28:;
    Py_DECREF( locals_SECT409K1_212 );
    locals_SECT409K1_212 = NULL;
    goto outline_result_14;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    outline_result_14:;
    tmp_assign_source_74 = tmp_outline_return_value_14;
    assert( tmp_class_creation_13__class_dict == NULL );
    tmp_class_creation_13__class_dict = tmp_assign_source_74;

    // Tried code:
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
    tmp_assign_source_75 = DICT_GET_ITEM( tmp_dict_name_13, tmp_key_name_13 );
    if ( tmp_assign_source_75 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;

        goto try_except_handler_29;
    }
    goto condexpr_end_13;
    condexpr_false_13:;
    tmp_assign_source_75 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_75 );
    condexpr_end_13:;
    assert( tmp_class_creation_13__metaclass == NULL );
    tmp_class_creation_13__metaclass = tmp_assign_source_75;

    tmp_called_name_54 = tmp_class_creation_13__metaclass;

    CHECK_OBJECT( tmp_called_name_54 );
    tmp_args_element_name_76 = const_str_plain_SECT409K1;
    tmp_args_element_name_77 = const_tuple_type_object_tuple;
    tmp_args_element_name_78 = tmp_class_creation_13__class_dict;

    CHECK_OBJECT( tmp_args_element_name_78 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 212;
    {
        PyObject *call_args[] = { tmp_args_element_name_76, tmp_args_element_name_77, tmp_args_element_name_78 };
        tmp_assign_source_76 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_54, call_args );
    }

    if ( tmp_assign_source_76 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;

        goto try_except_handler_29;
    }
    assert( tmp_class_creation_13__class == NULL );
    tmp_class_creation_13__class = tmp_assign_source_76;

    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

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

        exception_lineno = 211;

        goto try_except_handler_29;
    }

    tmp_called_name_56 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_register_interface );
    if ( tmp_called_name_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;

        goto try_except_handler_29;
    }
    tmp_args_element_name_79 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurve );

    if (unlikely( tmp_args_element_name_79 == NULL ))
    {
        tmp_args_element_name_79 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurve );
    }

    if ( tmp_args_element_name_79 == NULL )
    {
        Py_DECREF( tmp_called_name_56 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurve" );
        exception_tb = NULL;

        exception_lineno = 211;

        goto try_except_handler_29;
    }

    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 211;
    {
        PyObject *call_args[] = { tmp_args_element_name_79 };
        tmp_called_name_55 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_56, call_args );
    }

    Py_DECREF( tmp_called_name_56 );
    if ( tmp_called_name_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;

        goto try_except_handler_29;
    }
    tmp_args_element_name_80 = tmp_class_creation_13__class;

    CHECK_OBJECT( tmp_args_element_name_80 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 211;
    {
        PyObject *call_args[] = { tmp_args_element_name_80 };
        tmp_assign_source_77 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_55, call_args );
    }

    Py_DECREF( tmp_called_name_55 );
    if ( tmp_assign_source_77 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;

        goto try_except_handler_29;
    }
    {
        PyObject *old = tmp_class_creation_13__class;
        assert( old != NULL );
        tmp_class_creation_13__class = tmp_assign_source_77;
        Py_DECREF( old );
    }

    goto try_end_14;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_13__class );
    tmp_class_creation_13__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__class_dict );
    Py_DECREF( tmp_class_creation_13__class_dict );
    tmp_class_creation_13__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_13__metaclass );
    tmp_class_creation_13__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    tmp_assign_source_78 = tmp_class_creation_13__class;

    CHECK_OBJECT( tmp_assign_source_78 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECT409K1, tmp_assign_source_78 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__class );
    Py_DECREF( tmp_class_creation_13__class );
    tmp_class_creation_13__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__class_dict );
    Py_DECREF( tmp_class_creation_13__class_dict );
    tmp_class_creation_13__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__metaclass );
    Py_DECREF( tmp_class_creation_13__metaclass );
    tmp_class_creation_13__metaclass = NULL;

    tmp_set_locals = PyDict_New();
    locals_SECT283K1_218 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
    tmp_res = PyDict_SetItem( locals_SECT283K1_218, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_sect283k1;
    tmp_res = PyDict_SetItem( locals_SECT283K1_218, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_283;
    tmp_res = PyDict_SetItem( locals_SECT283K1_218, const_str_plain_key_size, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_15 = locals_SECT283K1_218;
    Py_INCREF( tmp_outline_return_value_15 );
    goto try_return_handler_30;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_30:;
    Py_DECREF( locals_SECT283K1_218 );
    locals_SECT283K1_218 = NULL;
    goto outline_result_15;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    outline_result_15:;
    tmp_assign_source_79 = tmp_outline_return_value_15;
    assert( tmp_class_creation_14__class_dict == NULL );
    tmp_class_creation_14__class_dict = tmp_assign_source_79;

    // Tried code:
    tmp_compare_left_14 = const_str_plain___metaclass__;
    tmp_compare_right_14 = tmp_class_creation_14__class_dict;

    CHECK_OBJECT( tmp_compare_right_14 );
    tmp_cmp_In_14 = PySequence_Contains( tmp_compare_right_14, tmp_compare_left_14 );
    assert( !(tmp_cmp_In_14 == -1) );
    if ( tmp_cmp_In_14 == 1 )
    {
        goto condexpr_true_14;
    }
    else
    {
        goto condexpr_false_14;
    }
    condexpr_true_14:;
    tmp_dict_name_14 = tmp_class_creation_14__class_dict;

    CHECK_OBJECT( tmp_dict_name_14 );
    tmp_key_name_14 = const_str_plain___metaclass__;
    tmp_assign_source_80 = DICT_GET_ITEM( tmp_dict_name_14, tmp_key_name_14 );
    if ( tmp_assign_source_80 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;

        goto try_except_handler_31;
    }
    goto condexpr_end_14;
    condexpr_false_14:;
    tmp_assign_source_80 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_80 );
    condexpr_end_14:;
    assert( tmp_class_creation_14__metaclass == NULL );
    tmp_class_creation_14__metaclass = tmp_assign_source_80;

    tmp_called_name_57 = tmp_class_creation_14__metaclass;

    CHECK_OBJECT( tmp_called_name_57 );
    tmp_args_element_name_81 = const_str_plain_SECT283K1;
    tmp_args_element_name_82 = const_tuple_type_object_tuple;
    tmp_args_element_name_83 = tmp_class_creation_14__class_dict;

    CHECK_OBJECT( tmp_args_element_name_83 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 218;
    {
        PyObject *call_args[] = { tmp_args_element_name_81, tmp_args_element_name_82, tmp_args_element_name_83 };
        tmp_assign_source_81 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_57, call_args );
    }

    if ( tmp_assign_source_81 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;

        goto try_except_handler_31;
    }
    assert( tmp_class_creation_14__class == NULL );
    tmp_class_creation_14__class = tmp_assign_source_81;

    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

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

        exception_lineno = 217;

        goto try_except_handler_31;
    }

    tmp_called_name_59 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_register_interface );
    if ( tmp_called_name_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;

        goto try_except_handler_31;
    }
    tmp_args_element_name_84 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurve );

    if (unlikely( tmp_args_element_name_84 == NULL ))
    {
        tmp_args_element_name_84 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurve );
    }

    if ( tmp_args_element_name_84 == NULL )
    {
        Py_DECREF( tmp_called_name_59 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurve" );
        exception_tb = NULL;

        exception_lineno = 217;

        goto try_except_handler_31;
    }

    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 217;
    {
        PyObject *call_args[] = { tmp_args_element_name_84 };
        tmp_called_name_58 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_59, call_args );
    }

    Py_DECREF( tmp_called_name_59 );
    if ( tmp_called_name_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;

        goto try_except_handler_31;
    }
    tmp_args_element_name_85 = tmp_class_creation_14__class;

    CHECK_OBJECT( tmp_args_element_name_85 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 217;
    {
        PyObject *call_args[] = { tmp_args_element_name_85 };
        tmp_assign_source_82 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_58, call_args );
    }

    Py_DECREF( tmp_called_name_58 );
    if ( tmp_assign_source_82 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;

        goto try_except_handler_31;
    }
    {
        PyObject *old = tmp_class_creation_14__class;
        assert( old != NULL );
        tmp_class_creation_14__class = tmp_assign_source_82;
        Py_DECREF( old );
    }

    goto try_end_15;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_14__class );
    tmp_class_creation_14__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__class_dict );
    Py_DECREF( tmp_class_creation_14__class_dict );
    tmp_class_creation_14__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_14__metaclass );
    tmp_class_creation_14__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    tmp_assign_source_83 = tmp_class_creation_14__class;

    CHECK_OBJECT( tmp_assign_source_83 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECT283K1, tmp_assign_source_83 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__class );
    Py_DECREF( tmp_class_creation_14__class );
    tmp_class_creation_14__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__class_dict );
    Py_DECREF( tmp_class_creation_14__class_dict );
    tmp_class_creation_14__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__metaclass );
    Py_DECREF( tmp_class_creation_14__metaclass );
    tmp_class_creation_14__metaclass = NULL;

    tmp_set_locals = PyDict_New();
    locals_SECT233K1_224 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
    tmp_res = PyDict_SetItem( locals_SECT233K1_224, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_sect233k1;
    tmp_res = PyDict_SetItem( locals_SECT233K1_224, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_233;
    tmp_res = PyDict_SetItem( locals_SECT233K1_224, const_str_plain_key_size, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_16 = locals_SECT233K1_224;
    Py_INCREF( tmp_outline_return_value_16 );
    goto try_return_handler_32;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_32:;
    Py_DECREF( locals_SECT233K1_224 );
    locals_SECT233K1_224 = NULL;
    goto outline_result_16;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    outline_result_16:;
    tmp_assign_source_84 = tmp_outline_return_value_16;
    assert( tmp_class_creation_15__class_dict == NULL );
    tmp_class_creation_15__class_dict = tmp_assign_source_84;

    // Tried code:
    tmp_compare_left_15 = const_str_plain___metaclass__;
    tmp_compare_right_15 = tmp_class_creation_15__class_dict;

    CHECK_OBJECT( tmp_compare_right_15 );
    tmp_cmp_In_15 = PySequence_Contains( tmp_compare_right_15, tmp_compare_left_15 );
    assert( !(tmp_cmp_In_15 == -1) );
    if ( tmp_cmp_In_15 == 1 )
    {
        goto condexpr_true_15;
    }
    else
    {
        goto condexpr_false_15;
    }
    condexpr_true_15:;
    tmp_dict_name_15 = tmp_class_creation_15__class_dict;

    CHECK_OBJECT( tmp_dict_name_15 );
    tmp_key_name_15 = const_str_plain___metaclass__;
    tmp_assign_source_85 = DICT_GET_ITEM( tmp_dict_name_15, tmp_key_name_15 );
    if ( tmp_assign_source_85 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;

        goto try_except_handler_33;
    }
    goto condexpr_end_15;
    condexpr_false_15:;
    tmp_assign_source_85 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_85 );
    condexpr_end_15:;
    assert( tmp_class_creation_15__metaclass == NULL );
    tmp_class_creation_15__metaclass = tmp_assign_source_85;

    tmp_called_name_60 = tmp_class_creation_15__metaclass;

    CHECK_OBJECT( tmp_called_name_60 );
    tmp_args_element_name_86 = const_str_plain_SECT233K1;
    tmp_args_element_name_87 = const_tuple_type_object_tuple;
    tmp_args_element_name_88 = tmp_class_creation_15__class_dict;

    CHECK_OBJECT( tmp_args_element_name_88 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 224;
    {
        PyObject *call_args[] = { tmp_args_element_name_86, tmp_args_element_name_87, tmp_args_element_name_88 };
        tmp_assign_source_86 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_60, call_args );
    }

    if ( tmp_assign_source_86 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;

        goto try_except_handler_33;
    }
    assert( tmp_class_creation_15__class == NULL );
    tmp_class_creation_15__class = tmp_assign_source_86;

    tmp_source_name_20 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

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

        exception_lineno = 223;

        goto try_except_handler_33;
    }

    tmp_called_name_62 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_register_interface );
    if ( tmp_called_name_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;

        goto try_except_handler_33;
    }
    tmp_args_element_name_89 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurve );

    if (unlikely( tmp_args_element_name_89 == NULL ))
    {
        tmp_args_element_name_89 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurve );
    }

    if ( tmp_args_element_name_89 == NULL )
    {
        Py_DECREF( tmp_called_name_62 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurve" );
        exception_tb = NULL;

        exception_lineno = 223;

        goto try_except_handler_33;
    }

    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 223;
    {
        PyObject *call_args[] = { tmp_args_element_name_89 };
        tmp_called_name_61 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_62, call_args );
    }

    Py_DECREF( tmp_called_name_62 );
    if ( tmp_called_name_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;

        goto try_except_handler_33;
    }
    tmp_args_element_name_90 = tmp_class_creation_15__class;

    CHECK_OBJECT( tmp_args_element_name_90 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 223;
    {
        PyObject *call_args[] = { tmp_args_element_name_90 };
        tmp_assign_source_87 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_61, call_args );
    }

    Py_DECREF( tmp_called_name_61 );
    if ( tmp_assign_source_87 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;

        goto try_except_handler_33;
    }
    {
        PyObject *old = tmp_class_creation_15__class;
        assert( old != NULL );
        tmp_class_creation_15__class = tmp_assign_source_87;
        Py_DECREF( old );
    }

    goto try_end_16;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_15__class );
    tmp_class_creation_15__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_15__class_dict );
    Py_DECREF( tmp_class_creation_15__class_dict );
    tmp_class_creation_15__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_15__metaclass );
    tmp_class_creation_15__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    tmp_assign_source_88 = tmp_class_creation_15__class;

    CHECK_OBJECT( tmp_assign_source_88 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECT233K1, tmp_assign_source_88 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_15__class );
    Py_DECREF( tmp_class_creation_15__class );
    tmp_class_creation_15__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_15__class_dict );
    Py_DECREF( tmp_class_creation_15__class_dict );
    tmp_class_creation_15__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_15__metaclass );
    Py_DECREF( tmp_class_creation_15__metaclass );
    tmp_class_creation_15__metaclass = NULL;

    tmp_set_locals = PyDict_New();
    locals_SECT163K1_230 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
    tmp_res = PyDict_SetItem( locals_SECT163K1_230, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_sect163k1;
    tmp_res = PyDict_SetItem( locals_SECT163K1_230, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_163;
    tmp_res = PyDict_SetItem( locals_SECT163K1_230, const_str_plain_key_size, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_17 = locals_SECT163K1_230;
    Py_INCREF( tmp_outline_return_value_17 );
    goto try_return_handler_34;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_34:;
    Py_DECREF( locals_SECT163K1_230 );
    locals_SECT163K1_230 = NULL;
    goto outline_result_17;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    outline_result_17:;
    tmp_assign_source_89 = tmp_outline_return_value_17;
    assert( tmp_class_creation_16__class_dict == NULL );
    tmp_class_creation_16__class_dict = tmp_assign_source_89;

    // Tried code:
    tmp_compare_left_16 = const_str_plain___metaclass__;
    tmp_compare_right_16 = tmp_class_creation_16__class_dict;

    CHECK_OBJECT( tmp_compare_right_16 );
    tmp_cmp_In_16 = PySequence_Contains( tmp_compare_right_16, tmp_compare_left_16 );
    assert( !(tmp_cmp_In_16 == -1) );
    if ( tmp_cmp_In_16 == 1 )
    {
        goto condexpr_true_16;
    }
    else
    {
        goto condexpr_false_16;
    }
    condexpr_true_16:;
    tmp_dict_name_16 = tmp_class_creation_16__class_dict;

    CHECK_OBJECT( tmp_dict_name_16 );
    tmp_key_name_16 = const_str_plain___metaclass__;
    tmp_assign_source_90 = DICT_GET_ITEM( tmp_dict_name_16, tmp_key_name_16 );
    if ( tmp_assign_source_90 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;

        goto try_except_handler_35;
    }
    goto condexpr_end_16;
    condexpr_false_16:;
    tmp_assign_source_90 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_90 );
    condexpr_end_16:;
    assert( tmp_class_creation_16__metaclass == NULL );
    tmp_class_creation_16__metaclass = tmp_assign_source_90;

    tmp_called_name_63 = tmp_class_creation_16__metaclass;

    CHECK_OBJECT( tmp_called_name_63 );
    tmp_args_element_name_91 = const_str_plain_SECT163K1;
    tmp_args_element_name_92 = const_tuple_type_object_tuple;
    tmp_args_element_name_93 = tmp_class_creation_16__class_dict;

    CHECK_OBJECT( tmp_args_element_name_93 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 230;
    {
        PyObject *call_args[] = { tmp_args_element_name_91, tmp_args_element_name_92, tmp_args_element_name_93 };
        tmp_assign_source_91 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_63, call_args );
    }

    if ( tmp_assign_source_91 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;

        goto try_except_handler_35;
    }
    assert( tmp_class_creation_16__class == NULL );
    tmp_class_creation_16__class = tmp_assign_source_91;

    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

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

        exception_lineno = 229;

        goto try_except_handler_35;
    }

    tmp_called_name_65 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_register_interface );
    if ( tmp_called_name_65 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 229;

        goto try_except_handler_35;
    }
    tmp_args_element_name_94 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurve );

    if (unlikely( tmp_args_element_name_94 == NULL ))
    {
        tmp_args_element_name_94 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurve );
    }

    if ( tmp_args_element_name_94 == NULL )
    {
        Py_DECREF( tmp_called_name_65 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurve" );
        exception_tb = NULL;

        exception_lineno = 229;

        goto try_except_handler_35;
    }

    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 229;
    {
        PyObject *call_args[] = { tmp_args_element_name_94 };
        tmp_called_name_64 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_65, call_args );
    }

    Py_DECREF( tmp_called_name_65 );
    if ( tmp_called_name_64 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 229;

        goto try_except_handler_35;
    }
    tmp_args_element_name_95 = tmp_class_creation_16__class;

    CHECK_OBJECT( tmp_args_element_name_95 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 229;
    {
        PyObject *call_args[] = { tmp_args_element_name_95 };
        tmp_assign_source_92 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_64, call_args );
    }

    Py_DECREF( tmp_called_name_64 );
    if ( tmp_assign_source_92 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 229;

        goto try_except_handler_35;
    }
    {
        PyObject *old = tmp_class_creation_16__class;
        assert( old != NULL );
        tmp_class_creation_16__class = tmp_assign_source_92;
        Py_DECREF( old );
    }

    goto try_end_17;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_16__class );
    tmp_class_creation_16__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_16__class_dict );
    Py_DECREF( tmp_class_creation_16__class_dict );
    tmp_class_creation_16__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_16__metaclass );
    tmp_class_creation_16__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    tmp_assign_source_93 = tmp_class_creation_16__class;

    CHECK_OBJECT( tmp_assign_source_93 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECT163K1, tmp_assign_source_93 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_16__class );
    Py_DECREF( tmp_class_creation_16__class );
    tmp_class_creation_16__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_16__class_dict );
    Py_DECREF( tmp_class_creation_16__class_dict );
    tmp_class_creation_16__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_16__metaclass );
    Py_DECREF( tmp_class_creation_16__metaclass );
    tmp_class_creation_16__metaclass = NULL;

    tmp_set_locals = PyDict_New();
    locals_SECP521R1_236 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
    tmp_res = PyDict_SetItem( locals_SECP521R1_236, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_secp521r1;
    tmp_res = PyDict_SetItem( locals_SECP521R1_236, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_521;
    tmp_res = PyDict_SetItem( locals_SECP521R1_236, const_str_plain_key_size, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_18 = locals_SECP521R1_236;
    Py_INCREF( tmp_outline_return_value_18 );
    goto try_return_handler_36;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_36:;
    Py_DECREF( locals_SECP521R1_236 );
    locals_SECP521R1_236 = NULL;
    goto outline_result_18;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    outline_result_18:;
    tmp_assign_source_94 = tmp_outline_return_value_18;
    assert( tmp_class_creation_17__class_dict == NULL );
    tmp_class_creation_17__class_dict = tmp_assign_source_94;

    // Tried code:
    tmp_compare_left_17 = const_str_plain___metaclass__;
    tmp_compare_right_17 = tmp_class_creation_17__class_dict;

    CHECK_OBJECT( tmp_compare_right_17 );
    tmp_cmp_In_17 = PySequence_Contains( tmp_compare_right_17, tmp_compare_left_17 );
    assert( !(tmp_cmp_In_17 == -1) );
    if ( tmp_cmp_In_17 == 1 )
    {
        goto condexpr_true_17;
    }
    else
    {
        goto condexpr_false_17;
    }
    condexpr_true_17:;
    tmp_dict_name_17 = tmp_class_creation_17__class_dict;

    CHECK_OBJECT( tmp_dict_name_17 );
    tmp_key_name_17 = const_str_plain___metaclass__;
    tmp_assign_source_95 = DICT_GET_ITEM( tmp_dict_name_17, tmp_key_name_17 );
    if ( tmp_assign_source_95 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;

        goto try_except_handler_37;
    }
    goto condexpr_end_17;
    condexpr_false_17:;
    tmp_assign_source_95 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_95 );
    condexpr_end_17:;
    assert( tmp_class_creation_17__metaclass == NULL );
    tmp_class_creation_17__metaclass = tmp_assign_source_95;

    tmp_called_name_66 = tmp_class_creation_17__metaclass;

    CHECK_OBJECT( tmp_called_name_66 );
    tmp_args_element_name_96 = const_str_plain_SECP521R1;
    tmp_args_element_name_97 = const_tuple_type_object_tuple;
    tmp_args_element_name_98 = tmp_class_creation_17__class_dict;

    CHECK_OBJECT( tmp_args_element_name_98 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 236;
    {
        PyObject *call_args[] = { tmp_args_element_name_96, tmp_args_element_name_97, tmp_args_element_name_98 };
        tmp_assign_source_96 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_66, call_args );
    }

    if ( tmp_assign_source_96 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;

        goto try_except_handler_37;
    }
    assert( tmp_class_creation_17__class == NULL );
    tmp_class_creation_17__class = tmp_assign_source_96;

    tmp_source_name_22 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

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

        exception_lineno = 235;

        goto try_except_handler_37;
    }

    tmp_called_name_68 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_register_interface );
    if ( tmp_called_name_68 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;

        goto try_except_handler_37;
    }
    tmp_args_element_name_99 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurve );

    if (unlikely( tmp_args_element_name_99 == NULL ))
    {
        tmp_args_element_name_99 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurve );
    }

    if ( tmp_args_element_name_99 == NULL )
    {
        Py_DECREF( tmp_called_name_68 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurve" );
        exception_tb = NULL;

        exception_lineno = 235;

        goto try_except_handler_37;
    }

    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 235;
    {
        PyObject *call_args[] = { tmp_args_element_name_99 };
        tmp_called_name_67 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_68, call_args );
    }

    Py_DECREF( tmp_called_name_68 );
    if ( tmp_called_name_67 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;

        goto try_except_handler_37;
    }
    tmp_args_element_name_100 = tmp_class_creation_17__class;

    CHECK_OBJECT( tmp_args_element_name_100 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 235;
    {
        PyObject *call_args[] = { tmp_args_element_name_100 };
        tmp_assign_source_97 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_67, call_args );
    }

    Py_DECREF( tmp_called_name_67 );
    if ( tmp_assign_source_97 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;

        goto try_except_handler_37;
    }
    {
        PyObject *old = tmp_class_creation_17__class;
        assert( old != NULL );
        tmp_class_creation_17__class = tmp_assign_source_97;
        Py_DECREF( old );
    }

    goto try_end_18;
    // Exception handler code:
    try_except_handler_37:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_17__class );
    tmp_class_creation_17__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_17__class_dict );
    Py_DECREF( tmp_class_creation_17__class_dict );
    tmp_class_creation_17__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_17__metaclass );
    tmp_class_creation_17__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    tmp_assign_source_98 = tmp_class_creation_17__class;

    CHECK_OBJECT( tmp_assign_source_98 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECP521R1, tmp_assign_source_98 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_17__class );
    Py_DECREF( tmp_class_creation_17__class );
    tmp_class_creation_17__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_17__class_dict );
    Py_DECREF( tmp_class_creation_17__class_dict );
    tmp_class_creation_17__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_17__metaclass );
    Py_DECREF( tmp_class_creation_17__metaclass );
    tmp_class_creation_17__metaclass = NULL;

    tmp_set_locals = PyDict_New();
    locals_SECP384R1_242 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
    tmp_res = PyDict_SetItem( locals_SECP384R1_242, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_secp384r1;
    tmp_res = PyDict_SetItem( locals_SECP384R1_242, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_384;
    tmp_res = PyDict_SetItem( locals_SECP384R1_242, const_str_plain_key_size, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_19 = locals_SECP384R1_242;
    Py_INCREF( tmp_outline_return_value_19 );
    goto try_return_handler_38;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_38:;
    Py_DECREF( locals_SECP384R1_242 );
    locals_SECP384R1_242 = NULL;
    goto outline_result_19;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    outline_result_19:;
    tmp_assign_source_99 = tmp_outline_return_value_19;
    assert( tmp_class_creation_18__class_dict == NULL );
    tmp_class_creation_18__class_dict = tmp_assign_source_99;

    // Tried code:
    tmp_compare_left_18 = const_str_plain___metaclass__;
    tmp_compare_right_18 = tmp_class_creation_18__class_dict;

    CHECK_OBJECT( tmp_compare_right_18 );
    tmp_cmp_In_18 = PySequence_Contains( tmp_compare_right_18, tmp_compare_left_18 );
    assert( !(tmp_cmp_In_18 == -1) );
    if ( tmp_cmp_In_18 == 1 )
    {
        goto condexpr_true_18;
    }
    else
    {
        goto condexpr_false_18;
    }
    condexpr_true_18:;
    tmp_dict_name_18 = tmp_class_creation_18__class_dict;

    CHECK_OBJECT( tmp_dict_name_18 );
    tmp_key_name_18 = const_str_plain___metaclass__;
    tmp_assign_source_100 = DICT_GET_ITEM( tmp_dict_name_18, tmp_key_name_18 );
    if ( tmp_assign_source_100 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;

        goto try_except_handler_39;
    }
    goto condexpr_end_18;
    condexpr_false_18:;
    tmp_assign_source_100 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_100 );
    condexpr_end_18:;
    assert( tmp_class_creation_18__metaclass == NULL );
    tmp_class_creation_18__metaclass = tmp_assign_source_100;

    tmp_called_name_69 = tmp_class_creation_18__metaclass;

    CHECK_OBJECT( tmp_called_name_69 );
    tmp_args_element_name_101 = const_str_plain_SECP384R1;
    tmp_args_element_name_102 = const_tuple_type_object_tuple;
    tmp_args_element_name_103 = tmp_class_creation_18__class_dict;

    CHECK_OBJECT( tmp_args_element_name_103 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 242;
    {
        PyObject *call_args[] = { tmp_args_element_name_101, tmp_args_element_name_102, tmp_args_element_name_103 };
        tmp_assign_source_101 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_69, call_args );
    }

    if ( tmp_assign_source_101 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;

        goto try_except_handler_39;
    }
    assert( tmp_class_creation_18__class == NULL );
    tmp_class_creation_18__class = tmp_assign_source_101;

    tmp_source_name_23 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

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

        exception_lineno = 241;

        goto try_except_handler_39;
    }

    tmp_called_name_71 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_register_interface );
    if ( tmp_called_name_71 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;

        goto try_except_handler_39;
    }
    tmp_args_element_name_104 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurve );

    if (unlikely( tmp_args_element_name_104 == NULL ))
    {
        tmp_args_element_name_104 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurve );
    }

    if ( tmp_args_element_name_104 == NULL )
    {
        Py_DECREF( tmp_called_name_71 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurve" );
        exception_tb = NULL;

        exception_lineno = 241;

        goto try_except_handler_39;
    }

    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 241;
    {
        PyObject *call_args[] = { tmp_args_element_name_104 };
        tmp_called_name_70 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_71, call_args );
    }

    Py_DECREF( tmp_called_name_71 );
    if ( tmp_called_name_70 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;

        goto try_except_handler_39;
    }
    tmp_args_element_name_105 = tmp_class_creation_18__class;

    CHECK_OBJECT( tmp_args_element_name_105 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 241;
    {
        PyObject *call_args[] = { tmp_args_element_name_105 };
        tmp_assign_source_102 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_70, call_args );
    }

    Py_DECREF( tmp_called_name_70 );
    if ( tmp_assign_source_102 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;

        goto try_except_handler_39;
    }
    {
        PyObject *old = tmp_class_creation_18__class;
        assert( old != NULL );
        tmp_class_creation_18__class = tmp_assign_source_102;
        Py_DECREF( old );
    }

    goto try_end_19;
    // Exception handler code:
    try_except_handler_39:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_18__class );
    tmp_class_creation_18__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_18__class_dict );
    Py_DECREF( tmp_class_creation_18__class_dict );
    tmp_class_creation_18__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_18__metaclass );
    tmp_class_creation_18__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    tmp_assign_source_103 = tmp_class_creation_18__class;

    CHECK_OBJECT( tmp_assign_source_103 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECP384R1, tmp_assign_source_103 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_18__class );
    Py_DECREF( tmp_class_creation_18__class );
    tmp_class_creation_18__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_18__class_dict );
    Py_DECREF( tmp_class_creation_18__class_dict );
    tmp_class_creation_18__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_18__metaclass );
    Py_DECREF( tmp_class_creation_18__metaclass );
    tmp_class_creation_18__metaclass = NULL;

    tmp_set_locals = PyDict_New();
    locals_SECP256R1_248 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
    tmp_res = PyDict_SetItem( locals_SECP256R1_248, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_secp256r1;
    tmp_res = PyDict_SetItem( locals_SECP256R1_248, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_256;
    tmp_res = PyDict_SetItem( locals_SECP256R1_248, const_str_plain_key_size, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_20 = locals_SECP256R1_248;
    Py_INCREF( tmp_outline_return_value_20 );
    goto try_return_handler_40;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_40:;
    Py_DECREF( locals_SECP256R1_248 );
    locals_SECP256R1_248 = NULL;
    goto outline_result_20;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    outline_result_20:;
    tmp_assign_source_104 = tmp_outline_return_value_20;
    assert( tmp_class_creation_19__class_dict == NULL );
    tmp_class_creation_19__class_dict = tmp_assign_source_104;

    // Tried code:
    tmp_compare_left_19 = const_str_plain___metaclass__;
    tmp_compare_right_19 = tmp_class_creation_19__class_dict;

    CHECK_OBJECT( tmp_compare_right_19 );
    tmp_cmp_In_19 = PySequence_Contains( tmp_compare_right_19, tmp_compare_left_19 );
    assert( !(tmp_cmp_In_19 == -1) );
    if ( tmp_cmp_In_19 == 1 )
    {
        goto condexpr_true_19;
    }
    else
    {
        goto condexpr_false_19;
    }
    condexpr_true_19:;
    tmp_dict_name_19 = tmp_class_creation_19__class_dict;

    CHECK_OBJECT( tmp_dict_name_19 );
    tmp_key_name_19 = const_str_plain___metaclass__;
    tmp_assign_source_105 = DICT_GET_ITEM( tmp_dict_name_19, tmp_key_name_19 );
    if ( tmp_assign_source_105 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 248;

        goto try_except_handler_41;
    }
    goto condexpr_end_19;
    condexpr_false_19:;
    tmp_assign_source_105 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_105 );
    condexpr_end_19:;
    assert( tmp_class_creation_19__metaclass == NULL );
    tmp_class_creation_19__metaclass = tmp_assign_source_105;

    tmp_called_name_72 = tmp_class_creation_19__metaclass;

    CHECK_OBJECT( tmp_called_name_72 );
    tmp_args_element_name_106 = const_str_plain_SECP256R1;
    tmp_args_element_name_107 = const_tuple_type_object_tuple;
    tmp_args_element_name_108 = tmp_class_creation_19__class_dict;

    CHECK_OBJECT( tmp_args_element_name_108 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 248;
    {
        PyObject *call_args[] = { tmp_args_element_name_106, tmp_args_element_name_107, tmp_args_element_name_108 };
        tmp_assign_source_106 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_72, call_args );
    }

    if ( tmp_assign_source_106 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 248;

        goto try_except_handler_41;
    }
    assert( tmp_class_creation_19__class == NULL );
    tmp_class_creation_19__class = tmp_assign_source_106;

    tmp_source_name_24 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

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

        exception_lineno = 247;

        goto try_except_handler_41;
    }

    tmp_called_name_74 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_register_interface );
    if ( tmp_called_name_74 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;

        goto try_except_handler_41;
    }
    tmp_args_element_name_109 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurve );

    if (unlikely( tmp_args_element_name_109 == NULL ))
    {
        tmp_args_element_name_109 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurve );
    }

    if ( tmp_args_element_name_109 == NULL )
    {
        Py_DECREF( tmp_called_name_74 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurve" );
        exception_tb = NULL;

        exception_lineno = 247;

        goto try_except_handler_41;
    }

    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 247;
    {
        PyObject *call_args[] = { tmp_args_element_name_109 };
        tmp_called_name_73 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_74, call_args );
    }

    Py_DECREF( tmp_called_name_74 );
    if ( tmp_called_name_73 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;

        goto try_except_handler_41;
    }
    tmp_args_element_name_110 = tmp_class_creation_19__class;

    CHECK_OBJECT( tmp_args_element_name_110 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 247;
    {
        PyObject *call_args[] = { tmp_args_element_name_110 };
        tmp_assign_source_107 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_73, call_args );
    }

    Py_DECREF( tmp_called_name_73 );
    if ( tmp_assign_source_107 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;

        goto try_except_handler_41;
    }
    {
        PyObject *old = tmp_class_creation_19__class;
        assert( old != NULL );
        tmp_class_creation_19__class = tmp_assign_source_107;
        Py_DECREF( old );
    }

    goto try_end_20;
    // Exception handler code:
    try_except_handler_41:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_19__class );
    tmp_class_creation_19__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_19__class_dict );
    Py_DECREF( tmp_class_creation_19__class_dict );
    tmp_class_creation_19__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_19__metaclass );
    tmp_class_creation_19__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    tmp_assign_source_108 = tmp_class_creation_19__class;

    CHECK_OBJECT( tmp_assign_source_108 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECP256R1, tmp_assign_source_108 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_19__class );
    Py_DECREF( tmp_class_creation_19__class );
    tmp_class_creation_19__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_19__class_dict );
    Py_DECREF( tmp_class_creation_19__class_dict );
    tmp_class_creation_19__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_19__metaclass );
    Py_DECREF( tmp_class_creation_19__metaclass );
    tmp_class_creation_19__metaclass = NULL;

    tmp_set_locals = PyDict_New();
    locals_SECP256K1_254 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
    tmp_res = PyDict_SetItem( locals_SECP256K1_254, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_secp256k1;
    tmp_res = PyDict_SetItem( locals_SECP256K1_254, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_256;
    tmp_res = PyDict_SetItem( locals_SECP256K1_254, const_str_plain_key_size, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_21 = locals_SECP256K1_254;
    Py_INCREF( tmp_outline_return_value_21 );
    goto try_return_handler_42;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_42:;
    Py_DECREF( locals_SECP256K1_254 );
    locals_SECP256K1_254 = NULL;
    goto outline_result_21;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    outline_result_21:;
    tmp_assign_source_109 = tmp_outline_return_value_21;
    assert( tmp_class_creation_20__class_dict == NULL );
    tmp_class_creation_20__class_dict = tmp_assign_source_109;

    // Tried code:
    tmp_compare_left_20 = const_str_plain___metaclass__;
    tmp_compare_right_20 = tmp_class_creation_20__class_dict;

    CHECK_OBJECT( tmp_compare_right_20 );
    tmp_cmp_In_20 = PySequence_Contains( tmp_compare_right_20, tmp_compare_left_20 );
    assert( !(tmp_cmp_In_20 == -1) );
    if ( tmp_cmp_In_20 == 1 )
    {
        goto condexpr_true_20;
    }
    else
    {
        goto condexpr_false_20;
    }
    condexpr_true_20:;
    tmp_dict_name_20 = tmp_class_creation_20__class_dict;

    CHECK_OBJECT( tmp_dict_name_20 );
    tmp_key_name_20 = const_str_plain___metaclass__;
    tmp_assign_source_110 = DICT_GET_ITEM( tmp_dict_name_20, tmp_key_name_20 );
    if ( tmp_assign_source_110 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;

        goto try_except_handler_43;
    }
    goto condexpr_end_20;
    condexpr_false_20:;
    tmp_assign_source_110 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_110 );
    condexpr_end_20:;
    assert( tmp_class_creation_20__metaclass == NULL );
    tmp_class_creation_20__metaclass = tmp_assign_source_110;

    tmp_called_name_75 = tmp_class_creation_20__metaclass;

    CHECK_OBJECT( tmp_called_name_75 );
    tmp_args_element_name_111 = const_str_plain_SECP256K1;
    tmp_args_element_name_112 = const_tuple_type_object_tuple;
    tmp_args_element_name_113 = tmp_class_creation_20__class_dict;

    CHECK_OBJECT( tmp_args_element_name_113 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 254;
    {
        PyObject *call_args[] = { tmp_args_element_name_111, tmp_args_element_name_112, tmp_args_element_name_113 };
        tmp_assign_source_111 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_75, call_args );
    }

    if ( tmp_assign_source_111 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;

        goto try_except_handler_43;
    }
    assert( tmp_class_creation_20__class == NULL );
    tmp_class_creation_20__class = tmp_assign_source_111;

    tmp_source_name_25 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

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

        exception_lineno = 253;

        goto try_except_handler_43;
    }

    tmp_called_name_77 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_register_interface );
    if ( tmp_called_name_77 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;

        goto try_except_handler_43;
    }
    tmp_args_element_name_114 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurve );

    if (unlikely( tmp_args_element_name_114 == NULL ))
    {
        tmp_args_element_name_114 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurve );
    }

    if ( tmp_args_element_name_114 == NULL )
    {
        Py_DECREF( tmp_called_name_77 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurve" );
        exception_tb = NULL;

        exception_lineno = 253;

        goto try_except_handler_43;
    }

    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 253;
    {
        PyObject *call_args[] = { tmp_args_element_name_114 };
        tmp_called_name_76 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_77, call_args );
    }

    Py_DECREF( tmp_called_name_77 );
    if ( tmp_called_name_76 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;

        goto try_except_handler_43;
    }
    tmp_args_element_name_115 = tmp_class_creation_20__class;

    CHECK_OBJECT( tmp_args_element_name_115 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 253;
    {
        PyObject *call_args[] = { tmp_args_element_name_115 };
        tmp_assign_source_112 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_76, call_args );
    }

    Py_DECREF( tmp_called_name_76 );
    if ( tmp_assign_source_112 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;

        goto try_except_handler_43;
    }
    {
        PyObject *old = tmp_class_creation_20__class;
        assert( old != NULL );
        tmp_class_creation_20__class = tmp_assign_source_112;
        Py_DECREF( old );
    }

    goto try_end_21;
    // Exception handler code:
    try_except_handler_43:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_20__class );
    tmp_class_creation_20__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_20__class_dict );
    Py_DECREF( tmp_class_creation_20__class_dict );
    tmp_class_creation_20__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_20__metaclass );
    tmp_class_creation_20__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    tmp_assign_source_113 = tmp_class_creation_20__class;

    CHECK_OBJECT( tmp_assign_source_113 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECP256K1, tmp_assign_source_113 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_20__class );
    Py_DECREF( tmp_class_creation_20__class );
    tmp_class_creation_20__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_20__class_dict );
    Py_DECREF( tmp_class_creation_20__class_dict );
    tmp_class_creation_20__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_20__metaclass );
    Py_DECREF( tmp_class_creation_20__metaclass );
    tmp_class_creation_20__metaclass = NULL;

    tmp_set_locals = PyDict_New();
    locals_SECP224R1_260 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
    tmp_res = PyDict_SetItem( locals_SECP224R1_260, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_secp224r1;
    tmp_res = PyDict_SetItem( locals_SECP224R1_260, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_224;
    tmp_res = PyDict_SetItem( locals_SECP224R1_260, const_str_plain_key_size, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_22 = locals_SECP224R1_260;
    Py_INCREF( tmp_outline_return_value_22 );
    goto try_return_handler_44;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_44:;
    Py_DECREF( locals_SECP224R1_260 );
    locals_SECP224R1_260 = NULL;
    goto outline_result_22;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    outline_result_22:;
    tmp_assign_source_114 = tmp_outline_return_value_22;
    assert( tmp_class_creation_21__class_dict == NULL );
    tmp_class_creation_21__class_dict = tmp_assign_source_114;

    // Tried code:
    tmp_compare_left_21 = const_str_plain___metaclass__;
    tmp_compare_right_21 = tmp_class_creation_21__class_dict;

    CHECK_OBJECT( tmp_compare_right_21 );
    tmp_cmp_In_21 = PySequence_Contains( tmp_compare_right_21, tmp_compare_left_21 );
    assert( !(tmp_cmp_In_21 == -1) );
    if ( tmp_cmp_In_21 == 1 )
    {
        goto condexpr_true_21;
    }
    else
    {
        goto condexpr_false_21;
    }
    condexpr_true_21:;
    tmp_dict_name_21 = tmp_class_creation_21__class_dict;

    CHECK_OBJECT( tmp_dict_name_21 );
    tmp_key_name_21 = const_str_plain___metaclass__;
    tmp_assign_source_115 = DICT_GET_ITEM( tmp_dict_name_21, tmp_key_name_21 );
    if ( tmp_assign_source_115 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;

        goto try_except_handler_45;
    }
    goto condexpr_end_21;
    condexpr_false_21:;
    tmp_assign_source_115 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_115 );
    condexpr_end_21:;
    assert( tmp_class_creation_21__metaclass == NULL );
    tmp_class_creation_21__metaclass = tmp_assign_source_115;

    tmp_called_name_78 = tmp_class_creation_21__metaclass;

    CHECK_OBJECT( tmp_called_name_78 );
    tmp_args_element_name_116 = const_str_plain_SECP224R1;
    tmp_args_element_name_117 = const_tuple_type_object_tuple;
    tmp_args_element_name_118 = tmp_class_creation_21__class_dict;

    CHECK_OBJECT( tmp_args_element_name_118 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 260;
    {
        PyObject *call_args[] = { tmp_args_element_name_116, tmp_args_element_name_117, tmp_args_element_name_118 };
        tmp_assign_source_116 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_78, call_args );
    }

    if ( tmp_assign_source_116 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;

        goto try_except_handler_45;
    }
    assert( tmp_class_creation_21__class == NULL );
    tmp_class_creation_21__class = tmp_assign_source_116;

    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

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

        exception_lineno = 259;

        goto try_except_handler_45;
    }

    tmp_called_name_80 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_register_interface );
    if ( tmp_called_name_80 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 259;

        goto try_except_handler_45;
    }
    tmp_args_element_name_119 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurve );

    if (unlikely( tmp_args_element_name_119 == NULL ))
    {
        tmp_args_element_name_119 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurve );
    }

    if ( tmp_args_element_name_119 == NULL )
    {
        Py_DECREF( tmp_called_name_80 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurve" );
        exception_tb = NULL;

        exception_lineno = 259;

        goto try_except_handler_45;
    }

    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 259;
    {
        PyObject *call_args[] = { tmp_args_element_name_119 };
        tmp_called_name_79 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_80, call_args );
    }

    Py_DECREF( tmp_called_name_80 );
    if ( tmp_called_name_79 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 259;

        goto try_except_handler_45;
    }
    tmp_args_element_name_120 = tmp_class_creation_21__class;

    CHECK_OBJECT( tmp_args_element_name_120 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 259;
    {
        PyObject *call_args[] = { tmp_args_element_name_120 };
        tmp_assign_source_117 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_79, call_args );
    }

    Py_DECREF( tmp_called_name_79 );
    if ( tmp_assign_source_117 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 259;

        goto try_except_handler_45;
    }
    {
        PyObject *old = tmp_class_creation_21__class;
        assert( old != NULL );
        tmp_class_creation_21__class = tmp_assign_source_117;
        Py_DECREF( old );
    }

    goto try_end_22;
    // Exception handler code:
    try_except_handler_45:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_21__class );
    tmp_class_creation_21__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_21__class_dict );
    Py_DECREF( tmp_class_creation_21__class_dict );
    tmp_class_creation_21__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_21__metaclass );
    tmp_class_creation_21__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;
    tmp_assign_source_118 = tmp_class_creation_21__class;

    CHECK_OBJECT( tmp_assign_source_118 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECP224R1, tmp_assign_source_118 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_21__class );
    Py_DECREF( tmp_class_creation_21__class );
    tmp_class_creation_21__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_21__class_dict );
    Py_DECREF( tmp_class_creation_21__class_dict );
    tmp_class_creation_21__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_21__metaclass );
    Py_DECREF( tmp_class_creation_21__metaclass );
    tmp_class_creation_21__metaclass = NULL;

    tmp_set_locals = PyDict_New();
    locals_SECP192R1_266 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
    tmp_res = PyDict_SetItem( locals_SECP192R1_266, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_secp192r1;
    tmp_res = PyDict_SetItem( locals_SECP192R1_266, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_192;
    tmp_res = PyDict_SetItem( locals_SECP192R1_266, const_str_plain_key_size, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_23 = locals_SECP192R1_266;
    Py_INCREF( tmp_outline_return_value_23 );
    goto try_return_handler_46;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_46:;
    Py_DECREF( locals_SECP192R1_266 );
    locals_SECP192R1_266 = NULL;
    goto outline_result_23;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    outline_result_23:;
    tmp_assign_source_119 = tmp_outline_return_value_23;
    assert( tmp_class_creation_22__class_dict == NULL );
    tmp_class_creation_22__class_dict = tmp_assign_source_119;

    // Tried code:
    tmp_compare_left_22 = const_str_plain___metaclass__;
    tmp_compare_right_22 = tmp_class_creation_22__class_dict;

    CHECK_OBJECT( tmp_compare_right_22 );
    tmp_cmp_In_22 = PySequence_Contains( tmp_compare_right_22, tmp_compare_left_22 );
    assert( !(tmp_cmp_In_22 == -1) );
    if ( tmp_cmp_In_22 == 1 )
    {
        goto condexpr_true_22;
    }
    else
    {
        goto condexpr_false_22;
    }
    condexpr_true_22:;
    tmp_dict_name_22 = tmp_class_creation_22__class_dict;

    CHECK_OBJECT( tmp_dict_name_22 );
    tmp_key_name_22 = const_str_plain___metaclass__;
    tmp_assign_source_120 = DICT_GET_ITEM( tmp_dict_name_22, tmp_key_name_22 );
    if ( tmp_assign_source_120 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;

        goto try_except_handler_47;
    }
    goto condexpr_end_22;
    condexpr_false_22:;
    tmp_assign_source_120 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_120 );
    condexpr_end_22:;
    assert( tmp_class_creation_22__metaclass == NULL );
    tmp_class_creation_22__metaclass = tmp_assign_source_120;

    tmp_called_name_81 = tmp_class_creation_22__metaclass;

    CHECK_OBJECT( tmp_called_name_81 );
    tmp_args_element_name_121 = const_str_plain_SECP192R1;
    tmp_args_element_name_122 = const_tuple_type_object_tuple;
    tmp_args_element_name_123 = tmp_class_creation_22__class_dict;

    CHECK_OBJECT( tmp_args_element_name_123 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 266;
    {
        PyObject *call_args[] = { tmp_args_element_name_121, tmp_args_element_name_122, tmp_args_element_name_123 };
        tmp_assign_source_121 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_81, call_args );
    }

    if ( tmp_assign_source_121 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;

        goto try_except_handler_47;
    }
    assert( tmp_class_creation_22__class == NULL );
    tmp_class_creation_22__class = tmp_assign_source_121;

    tmp_source_name_27 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_27 == NULL ))
    {
        tmp_source_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_27 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 265;

        goto try_except_handler_47;
    }

    tmp_called_name_83 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_register_interface );
    if ( tmp_called_name_83 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 265;

        goto try_except_handler_47;
    }
    tmp_args_element_name_124 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurve );

    if (unlikely( tmp_args_element_name_124 == NULL ))
    {
        tmp_args_element_name_124 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurve );
    }

    if ( tmp_args_element_name_124 == NULL )
    {
        Py_DECREF( tmp_called_name_83 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurve" );
        exception_tb = NULL;

        exception_lineno = 265;

        goto try_except_handler_47;
    }

    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 265;
    {
        PyObject *call_args[] = { tmp_args_element_name_124 };
        tmp_called_name_82 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_83, call_args );
    }

    Py_DECREF( tmp_called_name_83 );
    if ( tmp_called_name_82 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 265;

        goto try_except_handler_47;
    }
    tmp_args_element_name_125 = tmp_class_creation_22__class;

    CHECK_OBJECT( tmp_args_element_name_125 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 265;
    {
        PyObject *call_args[] = { tmp_args_element_name_125 };
        tmp_assign_source_122 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_82, call_args );
    }

    Py_DECREF( tmp_called_name_82 );
    if ( tmp_assign_source_122 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 265;

        goto try_except_handler_47;
    }
    {
        PyObject *old = tmp_class_creation_22__class;
        assert( old != NULL );
        tmp_class_creation_22__class = tmp_assign_source_122;
        Py_DECREF( old );
    }

    goto try_end_23;
    // Exception handler code:
    try_except_handler_47:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_22__class );
    tmp_class_creation_22__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_22__class_dict );
    Py_DECREF( tmp_class_creation_22__class_dict );
    tmp_class_creation_22__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_22__metaclass );
    tmp_class_creation_22__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto frame_exception_exit_1;
    // End of try:
    try_end_23:;
    tmp_assign_source_123 = tmp_class_creation_22__class;

    CHECK_OBJECT( tmp_assign_source_123 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECP192R1, tmp_assign_source_123 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_22__class );
    Py_DECREF( tmp_class_creation_22__class );
    tmp_class_creation_22__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_22__class_dict );
    Py_DECREF( tmp_class_creation_22__class_dict );
    tmp_class_creation_22__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_22__metaclass );
    Py_DECREF( tmp_class_creation_22__metaclass );
    tmp_class_creation_22__metaclass = NULL;

    tmp_set_locals = PyDict_New();
    locals_BrainpoolP256R1_272 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
    tmp_res = PyDict_SetItem( locals_BrainpoolP256R1_272, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_brainpoolP256r1;
    tmp_res = PyDict_SetItem( locals_BrainpoolP256R1_272, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_256;
    tmp_res = PyDict_SetItem( locals_BrainpoolP256R1_272, const_str_plain_key_size, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_24 = locals_BrainpoolP256R1_272;
    Py_INCREF( tmp_outline_return_value_24 );
    goto try_return_handler_48;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_48:;
    Py_DECREF( locals_BrainpoolP256R1_272 );
    locals_BrainpoolP256R1_272 = NULL;
    goto outline_result_24;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    outline_result_24:;
    tmp_assign_source_124 = tmp_outline_return_value_24;
    assert( tmp_class_creation_23__class_dict == NULL );
    tmp_class_creation_23__class_dict = tmp_assign_source_124;

    // Tried code:
    tmp_compare_left_23 = const_str_plain___metaclass__;
    tmp_compare_right_23 = tmp_class_creation_23__class_dict;

    CHECK_OBJECT( tmp_compare_right_23 );
    tmp_cmp_In_23 = PySequence_Contains( tmp_compare_right_23, tmp_compare_left_23 );
    assert( !(tmp_cmp_In_23 == -1) );
    if ( tmp_cmp_In_23 == 1 )
    {
        goto condexpr_true_23;
    }
    else
    {
        goto condexpr_false_23;
    }
    condexpr_true_23:;
    tmp_dict_name_23 = tmp_class_creation_23__class_dict;

    CHECK_OBJECT( tmp_dict_name_23 );
    tmp_key_name_23 = const_str_plain___metaclass__;
    tmp_assign_source_125 = DICT_GET_ITEM( tmp_dict_name_23, tmp_key_name_23 );
    if ( tmp_assign_source_125 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;

        goto try_except_handler_49;
    }
    goto condexpr_end_23;
    condexpr_false_23:;
    tmp_assign_source_125 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_125 );
    condexpr_end_23:;
    assert( tmp_class_creation_23__metaclass == NULL );
    tmp_class_creation_23__metaclass = tmp_assign_source_125;

    tmp_called_name_84 = tmp_class_creation_23__metaclass;

    CHECK_OBJECT( tmp_called_name_84 );
    tmp_args_element_name_126 = const_str_plain_BrainpoolP256R1;
    tmp_args_element_name_127 = const_tuple_type_object_tuple;
    tmp_args_element_name_128 = tmp_class_creation_23__class_dict;

    CHECK_OBJECT( tmp_args_element_name_128 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 272;
    {
        PyObject *call_args[] = { tmp_args_element_name_126, tmp_args_element_name_127, tmp_args_element_name_128 };
        tmp_assign_source_126 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_84, call_args );
    }

    if ( tmp_assign_source_126 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;

        goto try_except_handler_49;
    }
    assert( tmp_class_creation_23__class == NULL );
    tmp_class_creation_23__class = tmp_assign_source_126;

    tmp_source_name_28 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_28 == NULL ))
    {
        tmp_source_name_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_28 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 271;

        goto try_except_handler_49;
    }

    tmp_called_name_86 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_register_interface );
    if ( tmp_called_name_86 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;

        goto try_except_handler_49;
    }
    tmp_args_element_name_129 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurve );

    if (unlikely( tmp_args_element_name_129 == NULL ))
    {
        tmp_args_element_name_129 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurve );
    }

    if ( tmp_args_element_name_129 == NULL )
    {
        Py_DECREF( tmp_called_name_86 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurve" );
        exception_tb = NULL;

        exception_lineno = 271;

        goto try_except_handler_49;
    }

    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 271;
    {
        PyObject *call_args[] = { tmp_args_element_name_129 };
        tmp_called_name_85 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_86, call_args );
    }

    Py_DECREF( tmp_called_name_86 );
    if ( tmp_called_name_85 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;

        goto try_except_handler_49;
    }
    tmp_args_element_name_130 = tmp_class_creation_23__class;

    CHECK_OBJECT( tmp_args_element_name_130 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 271;
    {
        PyObject *call_args[] = { tmp_args_element_name_130 };
        tmp_assign_source_127 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_85, call_args );
    }

    Py_DECREF( tmp_called_name_85 );
    if ( tmp_assign_source_127 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;

        goto try_except_handler_49;
    }
    {
        PyObject *old = tmp_class_creation_23__class;
        assert( old != NULL );
        tmp_class_creation_23__class = tmp_assign_source_127;
        Py_DECREF( old );
    }

    goto try_end_24;
    // Exception handler code:
    try_except_handler_49:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_23__class );
    tmp_class_creation_23__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_23__class_dict );
    Py_DECREF( tmp_class_creation_23__class_dict );
    tmp_class_creation_23__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_23__metaclass );
    tmp_class_creation_23__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto frame_exception_exit_1;
    // End of try:
    try_end_24:;
    tmp_assign_source_128 = tmp_class_creation_23__class;

    CHECK_OBJECT( tmp_assign_source_128 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_BrainpoolP256R1, tmp_assign_source_128 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_23__class );
    Py_DECREF( tmp_class_creation_23__class );
    tmp_class_creation_23__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_23__class_dict );
    Py_DECREF( tmp_class_creation_23__class_dict );
    tmp_class_creation_23__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_23__metaclass );
    Py_DECREF( tmp_class_creation_23__metaclass );
    tmp_class_creation_23__metaclass = NULL;

    tmp_set_locals = PyDict_New();
    locals_BrainpoolP384R1_278 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
    tmp_res = PyDict_SetItem( locals_BrainpoolP384R1_278, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_brainpoolP384r1;
    tmp_res = PyDict_SetItem( locals_BrainpoolP384R1_278, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_384;
    tmp_res = PyDict_SetItem( locals_BrainpoolP384R1_278, const_str_plain_key_size, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_25 = locals_BrainpoolP384R1_278;
    Py_INCREF( tmp_outline_return_value_25 );
    goto try_return_handler_50;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_50:;
    Py_DECREF( locals_BrainpoolP384R1_278 );
    locals_BrainpoolP384R1_278 = NULL;
    goto outline_result_25;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    outline_result_25:;
    tmp_assign_source_129 = tmp_outline_return_value_25;
    assert( tmp_class_creation_24__class_dict == NULL );
    tmp_class_creation_24__class_dict = tmp_assign_source_129;

    // Tried code:
    tmp_compare_left_24 = const_str_plain___metaclass__;
    tmp_compare_right_24 = tmp_class_creation_24__class_dict;

    CHECK_OBJECT( tmp_compare_right_24 );
    tmp_cmp_In_24 = PySequence_Contains( tmp_compare_right_24, tmp_compare_left_24 );
    assert( !(tmp_cmp_In_24 == -1) );
    if ( tmp_cmp_In_24 == 1 )
    {
        goto condexpr_true_24;
    }
    else
    {
        goto condexpr_false_24;
    }
    condexpr_true_24:;
    tmp_dict_name_24 = tmp_class_creation_24__class_dict;

    CHECK_OBJECT( tmp_dict_name_24 );
    tmp_key_name_24 = const_str_plain___metaclass__;
    tmp_assign_source_130 = DICT_GET_ITEM( tmp_dict_name_24, tmp_key_name_24 );
    if ( tmp_assign_source_130 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;

        goto try_except_handler_51;
    }
    goto condexpr_end_24;
    condexpr_false_24:;
    tmp_assign_source_130 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_130 );
    condexpr_end_24:;
    assert( tmp_class_creation_24__metaclass == NULL );
    tmp_class_creation_24__metaclass = tmp_assign_source_130;

    tmp_called_name_87 = tmp_class_creation_24__metaclass;

    CHECK_OBJECT( tmp_called_name_87 );
    tmp_args_element_name_131 = const_str_plain_BrainpoolP384R1;
    tmp_args_element_name_132 = const_tuple_type_object_tuple;
    tmp_args_element_name_133 = tmp_class_creation_24__class_dict;

    CHECK_OBJECT( tmp_args_element_name_133 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 278;
    {
        PyObject *call_args[] = { tmp_args_element_name_131, tmp_args_element_name_132, tmp_args_element_name_133 };
        tmp_assign_source_131 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_87, call_args );
    }

    if ( tmp_assign_source_131 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;

        goto try_except_handler_51;
    }
    assert( tmp_class_creation_24__class == NULL );
    tmp_class_creation_24__class = tmp_assign_source_131;

    tmp_source_name_29 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_29 == NULL ))
    {
        tmp_source_name_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_29 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 277;

        goto try_except_handler_51;
    }

    tmp_called_name_89 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_register_interface );
    if ( tmp_called_name_89 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;

        goto try_except_handler_51;
    }
    tmp_args_element_name_134 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurve );

    if (unlikely( tmp_args_element_name_134 == NULL ))
    {
        tmp_args_element_name_134 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurve );
    }

    if ( tmp_args_element_name_134 == NULL )
    {
        Py_DECREF( tmp_called_name_89 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurve" );
        exception_tb = NULL;

        exception_lineno = 277;

        goto try_except_handler_51;
    }

    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 277;
    {
        PyObject *call_args[] = { tmp_args_element_name_134 };
        tmp_called_name_88 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_89, call_args );
    }

    Py_DECREF( tmp_called_name_89 );
    if ( tmp_called_name_88 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;

        goto try_except_handler_51;
    }
    tmp_args_element_name_135 = tmp_class_creation_24__class;

    CHECK_OBJECT( tmp_args_element_name_135 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 277;
    {
        PyObject *call_args[] = { tmp_args_element_name_135 };
        tmp_assign_source_132 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_88, call_args );
    }

    Py_DECREF( tmp_called_name_88 );
    if ( tmp_assign_source_132 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;

        goto try_except_handler_51;
    }
    {
        PyObject *old = tmp_class_creation_24__class;
        assert( old != NULL );
        tmp_class_creation_24__class = tmp_assign_source_132;
        Py_DECREF( old );
    }

    goto try_end_25;
    // Exception handler code:
    try_except_handler_51:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_24__class );
    tmp_class_creation_24__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_24__class_dict );
    Py_DECREF( tmp_class_creation_24__class_dict );
    tmp_class_creation_24__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_24__metaclass );
    tmp_class_creation_24__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto frame_exception_exit_1;
    // End of try:
    try_end_25:;
    tmp_assign_source_133 = tmp_class_creation_24__class;

    CHECK_OBJECT( tmp_assign_source_133 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_BrainpoolP384R1, tmp_assign_source_133 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_24__class );
    Py_DECREF( tmp_class_creation_24__class );
    tmp_class_creation_24__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_24__class_dict );
    Py_DECREF( tmp_class_creation_24__class_dict );
    tmp_class_creation_24__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_24__metaclass );
    Py_DECREF( tmp_class_creation_24__metaclass );
    tmp_class_creation_24__metaclass = NULL;

    tmp_set_locals = PyDict_New();
    locals_BrainpoolP512R1_284 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
    tmp_res = PyDict_SetItem( locals_BrainpoolP512R1_284, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_plain_brainpoolP512r1;
    tmp_res = PyDict_SetItem( locals_BrainpoolP512R1_284, const_str_plain_name, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_512;
    tmp_res = PyDict_SetItem( locals_BrainpoolP512R1_284, const_str_plain_key_size, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_26 = locals_BrainpoolP512R1_284;
    Py_INCREF( tmp_outline_return_value_26 );
    goto try_return_handler_52;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_52:;
    Py_DECREF( locals_BrainpoolP512R1_284 );
    locals_BrainpoolP512R1_284 = NULL;
    goto outline_result_26;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    outline_result_26:;
    tmp_assign_source_134 = tmp_outline_return_value_26;
    assert( tmp_class_creation_25__class_dict == NULL );
    tmp_class_creation_25__class_dict = tmp_assign_source_134;

    // Tried code:
    tmp_compare_left_25 = const_str_plain___metaclass__;
    tmp_compare_right_25 = tmp_class_creation_25__class_dict;

    CHECK_OBJECT( tmp_compare_right_25 );
    tmp_cmp_In_25 = PySequence_Contains( tmp_compare_right_25, tmp_compare_left_25 );
    assert( !(tmp_cmp_In_25 == -1) );
    if ( tmp_cmp_In_25 == 1 )
    {
        goto condexpr_true_25;
    }
    else
    {
        goto condexpr_false_25;
    }
    condexpr_true_25:;
    tmp_dict_name_25 = tmp_class_creation_25__class_dict;

    CHECK_OBJECT( tmp_dict_name_25 );
    tmp_key_name_25 = const_str_plain___metaclass__;
    tmp_assign_source_135 = DICT_GET_ITEM( tmp_dict_name_25, tmp_key_name_25 );
    if ( tmp_assign_source_135 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;

        goto try_except_handler_53;
    }
    goto condexpr_end_25;
    condexpr_false_25:;
    tmp_assign_source_135 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_135 );
    condexpr_end_25:;
    assert( tmp_class_creation_25__metaclass == NULL );
    tmp_class_creation_25__metaclass = tmp_assign_source_135;

    tmp_called_name_90 = tmp_class_creation_25__metaclass;

    CHECK_OBJECT( tmp_called_name_90 );
    tmp_args_element_name_136 = const_str_plain_BrainpoolP512R1;
    tmp_args_element_name_137 = const_tuple_type_object_tuple;
    tmp_args_element_name_138 = tmp_class_creation_25__class_dict;

    CHECK_OBJECT( tmp_args_element_name_138 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 284;
    {
        PyObject *call_args[] = { tmp_args_element_name_136, tmp_args_element_name_137, tmp_args_element_name_138 };
        tmp_assign_source_136 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_90, call_args );
    }

    if ( tmp_assign_source_136 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;

        goto try_except_handler_53;
    }
    assert( tmp_class_creation_25__class == NULL );
    tmp_class_creation_25__class = tmp_assign_source_136;

    tmp_source_name_30 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_30 == NULL ))
    {
        tmp_source_name_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_30 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 283;

        goto try_except_handler_53;
    }

    tmp_called_name_92 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_register_interface );
    if ( tmp_called_name_92 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 283;

        goto try_except_handler_53;
    }
    tmp_args_element_name_139 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurve );

    if (unlikely( tmp_args_element_name_139 == NULL ))
    {
        tmp_args_element_name_139 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurve );
    }

    if ( tmp_args_element_name_139 == NULL )
    {
        Py_DECREF( tmp_called_name_92 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurve" );
        exception_tb = NULL;

        exception_lineno = 283;

        goto try_except_handler_53;
    }

    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 283;
    {
        PyObject *call_args[] = { tmp_args_element_name_139 };
        tmp_called_name_91 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_92, call_args );
    }

    Py_DECREF( tmp_called_name_92 );
    if ( tmp_called_name_91 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 283;

        goto try_except_handler_53;
    }
    tmp_args_element_name_140 = tmp_class_creation_25__class;

    CHECK_OBJECT( tmp_args_element_name_140 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 283;
    {
        PyObject *call_args[] = { tmp_args_element_name_140 };
        tmp_assign_source_137 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_91, call_args );
    }

    Py_DECREF( tmp_called_name_91 );
    if ( tmp_assign_source_137 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 283;

        goto try_except_handler_53;
    }
    {
        PyObject *old = tmp_class_creation_25__class;
        assert( old != NULL );
        tmp_class_creation_25__class = tmp_assign_source_137;
        Py_DECREF( old );
    }

    goto try_end_26;
    // Exception handler code:
    try_except_handler_53:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_25__class );
    tmp_class_creation_25__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_25__class_dict );
    Py_DECREF( tmp_class_creation_25__class_dict );
    tmp_class_creation_25__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_25__metaclass );
    tmp_class_creation_25__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto frame_exception_exit_1;
    // End of try:
    try_end_26:;
    tmp_assign_source_138 = tmp_class_creation_25__class;

    CHECK_OBJECT( tmp_assign_source_138 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_BrainpoolP512R1, tmp_assign_source_138 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_25__class );
    Py_DECREF( tmp_class_creation_25__class );
    tmp_class_creation_25__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_25__class_dict );
    Py_DECREF( tmp_class_creation_25__class_dict );
    tmp_class_creation_25__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_25__metaclass );
    Py_DECREF( tmp_class_creation_25__metaclass );
    tmp_class_creation_25__metaclass = NULL;

    tmp_assign_source_139 = _PyDict_NewPresized( 21 );
    tmp_dict_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECP192R1 );

    if (unlikely( tmp_dict_value_1 == NULL ))
    {
        tmp_dict_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECP192R1 );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_139 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECP192R1" );
        exception_tb = NULL;

        exception_lineno = 290;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_prime192v1;
    tmp_res = PyDict_SetItem( tmp_assign_source_139, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECP256R1 );

    if (unlikely( tmp_dict_value_2 == NULL ))
    {
        tmp_dict_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECP256R1 );
    }

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_139 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECP256R1" );
        exception_tb = NULL;

        exception_lineno = 291;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_str_plain_prime256v1;
    tmp_res = PyDict_SetItem( tmp_assign_source_139, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECP192R1 );

    if (unlikely( tmp_dict_value_3 == NULL ))
    {
        tmp_dict_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECP192R1 );
    }

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_139 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECP192R1" );
        exception_tb = NULL;

        exception_lineno = 293;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = const_str_plain_secp192r1;
    tmp_res = PyDict_SetItem( tmp_assign_source_139, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECP224R1 );

    if (unlikely( tmp_dict_value_4 == NULL ))
    {
        tmp_dict_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECP224R1 );
    }

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_139 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECP224R1" );
        exception_tb = NULL;

        exception_lineno = 294;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = const_str_plain_secp224r1;
    tmp_res = PyDict_SetItem( tmp_assign_source_139, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECP256R1 );

    if (unlikely( tmp_dict_value_5 == NULL ))
    {
        tmp_dict_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECP256R1 );
    }

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_139 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECP256R1" );
        exception_tb = NULL;

        exception_lineno = 295;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_5 = const_str_plain_secp256r1;
    tmp_res = PyDict_SetItem( tmp_assign_source_139, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECP384R1 );

    if (unlikely( tmp_dict_value_6 == NULL ))
    {
        tmp_dict_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECP384R1 );
    }

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_139 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECP384R1" );
        exception_tb = NULL;

        exception_lineno = 296;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_6 = const_str_plain_secp384r1;
    tmp_res = PyDict_SetItem( tmp_assign_source_139, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_7 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECP521R1 );

    if (unlikely( tmp_dict_value_7 == NULL ))
    {
        tmp_dict_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECP521R1 );
    }

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_139 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECP521R1" );
        exception_tb = NULL;

        exception_lineno = 297;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_7 = const_str_plain_secp521r1;
    tmp_res = PyDict_SetItem( tmp_assign_source_139, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_8 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECP256K1 );

    if (unlikely( tmp_dict_value_8 == NULL ))
    {
        tmp_dict_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECP256K1 );
    }

    if ( tmp_dict_value_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_139 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECP256K1" );
        exception_tb = NULL;

        exception_lineno = 298;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_8 = const_str_plain_secp256k1;
    tmp_res = PyDict_SetItem( tmp_assign_source_139, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_9 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECT163K1 );

    if (unlikely( tmp_dict_value_9 == NULL ))
    {
        tmp_dict_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECT163K1 );
    }

    if ( tmp_dict_value_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_139 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECT163K1" );
        exception_tb = NULL;

        exception_lineno = 300;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_9 = const_str_plain_sect163k1;
    tmp_res = PyDict_SetItem( tmp_assign_source_139, tmp_dict_key_9, tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_10 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECT233K1 );

    if (unlikely( tmp_dict_value_10 == NULL ))
    {
        tmp_dict_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECT233K1 );
    }

    if ( tmp_dict_value_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_139 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECT233K1" );
        exception_tb = NULL;

        exception_lineno = 301;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_10 = const_str_plain_sect233k1;
    tmp_res = PyDict_SetItem( tmp_assign_source_139, tmp_dict_key_10, tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_11 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECT283K1 );

    if (unlikely( tmp_dict_value_11 == NULL ))
    {
        tmp_dict_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECT283K1 );
    }

    if ( tmp_dict_value_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_139 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECT283K1" );
        exception_tb = NULL;

        exception_lineno = 302;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_11 = const_str_plain_sect283k1;
    tmp_res = PyDict_SetItem( tmp_assign_source_139, tmp_dict_key_11, tmp_dict_value_11 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_12 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECT409K1 );

    if (unlikely( tmp_dict_value_12 == NULL ))
    {
        tmp_dict_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECT409K1 );
    }

    if ( tmp_dict_value_12 == NULL )
    {
        Py_DECREF( tmp_assign_source_139 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECT409K1" );
        exception_tb = NULL;

        exception_lineno = 303;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_12 = const_str_plain_sect409k1;
    tmp_res = PyDict_SetItem( tmp_assign_source_139, tmp_dict_key_12, tmp_dict_value_12 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_13 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECT571K1 );

    if (unlikely( tmp_dict_value_13 == NULL ))
    {
        tmp_dict_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECT571K1 );
    }

    if ( tmp_dict_value_13 == NULL )
    {
        Py_DECREF( tmp_assign_source_139 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECT571K1" );
        exception_tb = NULL;

        exception_lineno = 304;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_13 = const_str_plain_sect571k1;
    tmp_res = PyDict_SetItem( tmp_assign_source_139, tmp_dict_key_13, tmp_dict_value_13 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_14 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECT163R2 );

    if (unlikely( tmp_dict_value_14 == NULL ))
    {
        tmp_dict_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECT163R2 );
    }

    if ( tmp_dict_value_14 == NULL )
    {
        Py_DECREF( tmp_assign_source_139 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECT163R2" );
        exception_tb = NULL;

        exception_lineno = 306;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_14 = const_str_plain_sect163r2;
    tmp_res = PyDict_SetItem( tmp_assign_source_139, tmp_dict_key_14, tmp_dict_value_14 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_15 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECT233R1 );

    if (unlikely( tmp_dict_value_15 == NULL ))
    {
        tmp_dict_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECT233R1 );
    }

    if ( tmp_dict_value_15 == NULL )
    {
        Py_DECREF( tmp_assign_source_139 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECT233R1" );
        exception_tb = NULL;

        exception_lineno = 307;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_15 = const_str_plain_sect233r1;
    tmp_res = PyDict_SetItem( tmp_assign_source_139, tmp_dict_key_15, tmp_dict_value_15 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_16 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECT283R1 );

    if (unlikely( tmp_dict_value_16 == NULL ))
    {
        tmp_dict_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECT283R1 );
    }

    if ( tmp_dict_value_16 == NULL )
    {
        Py_DECREF( tmp_assign_source_139 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECT283R1" );
        exception_tb = NULL;

        exception_lineno = 308;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_16 = const_str_plain_sect283r1;
    tmp_res = PyDict_SetItem( tmp_assign_source_139, tmp_dict_key_16, tmp_dict_value_16 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_17 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECT409R1 );

    if (unlikely( tmp_dict_value_17 == NULL ))
    {
        tmp_dict_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECT409R1 );
    }

    if ( tmp_dict_value_17 == NULL )
    {
        Py_DECREF( tmp_assign_source_139 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECT409R1" );
        exception_tb = NULL;

        exception_lineno = 309;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_17 = const_str_plain_sect409r1;
    tmp_res = PyDict_SetItem( tmp_assign_source_139, tmp_dict_key_17, tmp_dict_value_17 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_18 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECT571R1 );

    if (unlikely( tmp_dict_value_18 == NULL ))
    {
        tmp_dict_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECT571R1 );
    }

    if ( tmp_dict_value_18 == NULL )
    {
        Py_DECREF( tmp_assign_source_139 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECT571R1" );
        exception_tb = NULL;

        exception_lineno = 310;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_18 = const_str_plain_sect571r1;
    tmp_res = PyDict_SetItem( tmp_assign_source_139, tmp_dict_key_18, tmp_dict_value_18 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_19 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_BrainpoolP256R1 );

    if (unlikely( tmp_dict_value_19 == NULL ))
    {
        tmp_dict_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BrainpoolP256R1 );
    }

    if ( tmp_dict_value_19 == NULL )
    {
        Py_DECREF( tmp_assign_source_139 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "BrainpoolP256R1" );
        exception_tb = NULL;

        exception_lineno = 312;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_19 = const_str_plain_brainpoolP256r1;
    tmp_res = PyDict_SetItem( tmp_assign_source_139, tmp_dict_key_19, tmp_dict_value_19 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_20 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_BrainpoolP384R1 );

    if (unlikely( tmp_dict_value_20 == NULL ))
    {
        tmp_dict_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BrainpoolP384R1 );
    }

    if ( tmp_dict_value_20 == NULL )
    {
        Py_DECREF( tmp_assign_source_139 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "BrainpoolP384R1" );
        exception_tb = NULL;

        exception_lineno = 313;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_20 = const_str_plain_brainpoolP384r1;
    tmp_res = PyDict_SetItem( tmp_assign_source_139, tmp_dict_key_20, tmp_dict_value_20 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_21 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_BrainpoolP512R1 );

    if (unlikely( tmp_dict_value_21 == NULL ))
    {
        tmp_dict_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BrainpoolP512R1 );
    }

    if ( tmp_dict_value_21 == NULL )
    {
        Py_DECREF( tmp_assign_source_139 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "BrainpoolP512R1" );
        exception_tb = NULL;

        exception_lineno = 314;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_21 = const_str_plain_brainpoolP512r1;
    tmp_res = PyDict_SetItem( tmp_assign_source_139, tmp_dict_key_21, tmp_dict_value_21 );
    assert( !(tmp_res != 0) );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain__CURVE_TYPES, tmp_assign_source_139 );
    // Tried code:
    tmp_set_locals = PyDict_New();
    locals_ECDSA_319 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
    tmp_res = PyDict_SetItem( locals_ECDSA_319, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_19___init__(  );
    tmp_res = PyDict_SetItem( locals_ECDSA_319, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cc4e888cc94df5c1328d0569bb35c9a6_8, codeobj_cc4e888cc94df5c1328d0569bb35c9a6, module_cryptography$hazmat$primitives$asymmetric$ec, 0 );
    frame_cc4e888cc94df5c1328d0569bb35c9a6_8 = cache_frame_cc4e888cc94df5c1328d0569bb35c9a6_8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cc4e888cc94df5c1328d0569bb35c9a6_8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cc4e888cc94df5c1328d0569bb35c9a6_8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_18 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_called_instance_18 == NULL ))
    {
        tmp_called_instance_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_called_instance_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 323;

        goto frame_exception_exit_8;
    }

    frame_cc4e888cc94df5c1328d0569bb35c9a6_8->m_frame.f_lineno = 323;
    tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_18, const_str_plain_read_only_property, &PyTuple_GET_ITEM( const_tuple_str_plain__algorithm_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 323;

        goto frame_exception_exit_8;
    }
    tmp_res = PyDict_SetItem( locals_ECDSA_319, const_str_plain_algorithm, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 323;

        goto frame_exception_exit_8;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cc4e888cc94df5c1328d0569bb35c9a6_8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_7;

    frame_exception_exit_8:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cc4e888cc94df5c1328d0569bb35c9a6_8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cc4e888cc94df5c1328d0569bb35c9a6_8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cc4e888cc94df5c1328d0569bb35c9a6_8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cc4e888cc94df5c1328d0569bb35c9a6_8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cc4e888cc94df5c1328d0569bb35c9a6_8,
        type_description_2
    );


    // Release cached frame.
    if ( frame_cc4e888cc94df5c1328d0569bb35c9a6_8 == cache_frame_cc4e888cc94df5c1328d0569bb35c9a6_8 )
    {
        Py_DECREF( frame_cc4e888cc94df5c1328d0569bb35c9a6_8 );
    }
    cache_frame_cc4e888cc94df5c1328d0569bb35c9a6_8 = NULL;

    assertFrameObject( frame_cc4e888cc94df5c1328d0569bb35c9a6_8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_7;

    frame_no_exception_7:;

    goto skip_nested_handling_7;
    nested_frame_exit_7:;

    goto try_except_handler_55;
    skip_nested_handling_7:;
    tmp_outline_return_value_27 = locals_ECDSA_319;
    Py_INCREF( tmp_outline_return_value_27 );
    goto try_return_handler_55;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_55:;
    Py_DECREF( locals_ECDSA_319 );
    locals_ECDSA_319 = NULL;
    goto outline_result_27;
    // Exception handler code:
    try_except_handler_55:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_ECDSA_319 );
    locals_ECDSA_319 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_34;
    exception_value = exception_keeper_value_34;
    exception_tb = exception_keeper_tb_34;
    exception_lineno = exception_keeper_lineno_34;

    goto outline_exception_7;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_7:;
    exception_lineno = 319;
    goto try_except_handler_54;
    outline_result_27:;
    tmp_assign_source_140 = tmp_outline_return_value_27;
    assert( tmp_class_creation_26__class_dict == NULL );
    tmp_class_creation_26__class_dict = tmp_assign_source_140;

    tmp_compare_left_26 = const_str_plain___metaclass__;
    tmp_compare_right_26 = tmp_class_creation_26__class_dict;

    CHECK_OBJECT( tmp_compare_right_26 );
    tmp_cmp_In_26 = PySequence_Contains( tmp_compare_right_26, tmp_compare_left_26 );
    assert( !(tmp_cmp_In_26 == -1) );
    if ( tmp_cmp_In_26 == 1 )
    {
        goto condexpr_true_26;
    }
    else
    {
        goto condexpr_false_26;
    }
    condexpr_true_26:;
    tmp_dict_name_26 = tmp_class_creation_26__class_dict;

    CHECK_OBJECT( tmp_dict_name_26 );
    tmp_key_name_26 = const_str_plain___metaclass__;
    tmp_assign_source_141 = DICT_GET_ITEM( tmp_dict_name_26, tmp_key_name_26 );
    if ( tmp_assign_source_141 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 319;

        goto try_except_handler_54;
    }
    goto condexpr_end_26;
    condexpr_false_26:;
    tmp_assign_source_141 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_141 );
    condexpr_end_26:;
    assert( tmp_class_creation_26__metaclass == NULL );
    tmp_class_creation_26__metaclass = tmp_assign_source_141;

    tmp_called_name_93 = tmp_class_creation_26__metaclass;

    CHECK_OBJECT( tmp_called_name_93 );
    tmp_args_element_name_141 = const_str_plain_ECDSA;
    tmp_args_element_name_142 = const_tuple_type_object_tuple;
    tmp_args_element_name_143 = tmp_class_creation_26__class_dict;

    CHECK_OBJECT( tmp_args_element_name_143 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 319;
    {
        PyObject *call_args[] = { tmp_args_element_name_141, tmp_args_element_name_142, tmp_args_element_name_143 };
        tmp_assign_source_142 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_93, call_args );
    }

    if ( tmp_assign_source_142 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 319;

        goto try_except_handler_54;
    }
    assert( tmp_class_creation_26__class == NULL );
    tmp_class_creation_26__class = tmp_assign_source_142;

    tmp_source_name_31 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_31 == NULL ))
    {
        tmp_source_name_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_31 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 318;

        goto try_except_handler_54;
    }

    tmp_called_name_95 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_register_interface );
    if ( tmp_called_name_95 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;

        goto try_except_handler_54;
    }
    tmp_args_element_name_144 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurveSignatureAlgorithm );

    if (unlikely( tmp_args_element_name_144 == NULL ))
    {
        tmp_args_element_name_144 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurveSignatureAlgorithm );
    }

    if ( tmp_args_element_name_144 == NULL )
    {
        Py_DECREF( tmp_called_name_95 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurveSignatureAlgorithm" );
        exception_tb = NULL;

        exception_lineno = 318;

        goto try_except_handler_54;
    }

    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 318;
    {
        PyObject *call_args[] = { tmp_args_element_name_144 };
        tmp_called_name_94 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_95, call_args );
    }

    Py_DECREF( tmp_called_name_95 );
    if ( tmp_called_name_94 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;

        goto try_except_handler_54;
    }
    tmp_args_element_name_145 = tmp_class_creation_26__class;

    CHECK_OBJECT( tmp_args_element_name_145 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 318;
    {
        PyObject *call_args[] = { tmp_args_element_name_145 };
        tmp_assign_source_143 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_94, call_args );
    }

    Py_DECREF( tmp_called_name_94 );
    if ( tmp_assign_source_143 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;

        goto try_except_handler_54;
    }
    {
        PyObject *old = tmp_class_creation_26__class;
        assert( old != NULL );
        tmp_class_creation_26__class = tmp_assign_source_143;
        Py_DECREF( old );
    }

    goto try_end_27;
    // Exception handler code:
    try_except_handler_54:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_26__class );
    tmp_class_creation_26__class = NULL;

    Py_XDECREF( tmp_class_creation_26__class_dict );
    tmp_class_creation_26__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_26__metaclass );
    tmp_class_creation_26__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto frame_exception_exit_1;
    // End of try:
    try_end_27:;
    tmp_assign_source_144 = tmp_class_creation_26__class;

    CHECK_OBJECT( tmp_assign_source_144 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_ECDSA, tmp_assign_source_144 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_26__class );
    Py_DECREF( tmp_class_creation_26__class );
    tmp_class_creation_26__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_26__class_dict );
    Py_DECREF( tmp_class_creation_26__class_dict );
    tmp_class_creation_26__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_26__metaclass );
    Py_DECREF( tmp_class_creation_26__metaclass );
    tmp_class_creation_26__metaclass = NULL;

    tmp_assign_source_145 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_20_generate_private_key(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_generate_private_key, tmp_assign_source_145 );
    tmp_assign_source_146 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_21_derive_private_key(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_derive_private_key, tmp_assign_source_146 );
    // Tried code:
    tmp_set_locals = PyDict_New();
    locals_EllipticCurvePublicNumbers_343 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
    tmp_res = PyDict_SetItem( locals_EllipticCurvePublicNumbers_343, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_22___init__(  );
    tmp_res = PyDict_SetItem( locals_EllipticCurvePublicNumbers_343, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_23_public_key(  );
    tmp_res = PyDict_SetItem( locals_EllipticCurvePublicNumbers_343, const_str_plain_public_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_24_encode_point(  );
    tmp_res = PyDict_SetItem( locals_EllipticCurvePublicNumbers_343, const_str_plain_encode_point, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_72cdff8c1865c1ed080e88abf19128d5_9, codeobj_72cdff8c1865c1ed080e88abf19128d5, module_cryptography$hazmat$primitives$asymmetric$ec, 0 );
    frame_72cdff8c1865c1ed080e88abf19128d5_9 = cache_frame_72cdff8c1865c1ed080e88abf19128d5_9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_72cdff8c1865c1ed080e88abf19128d5_9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_72cdff8c1865c1ed080e88abf19128d5_9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_classmethod_arg_2 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_25_from_encoded_point(  );
    tmp_dictset_value = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_2 );
    Py_DECREF( tmp_classmethod_arg_2 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 377;

        goto frame_exception_exit_9;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurvePublicNumbers_343, const_str_plain_from_encoded_point, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 377;

        goto frame_exception_exit_9;
    }
    tmp_called_instance_19 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_called_instance_19 == NULL ))
    {
        tmp_called_instance_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_called_instance_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 402;

        goto frame_exception_exit_9;
    }

    frame_72cdff8c1865c1ed080e88abf19128d5_9->m_frame.f_lineno = 402;
    tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_19, const_str_plain_read_only_property, &PyTuple_GET_ITEM( const_tuple_str_plain__curve_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 402;

        goto frame_exception_exit_9;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurvePublicNumbers_343, const_str_plain_curve, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 402;

        goto frame_exception_exit_9;
    }
    tmp_called_instance_20 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_called_instance_20 == NULL ))
    {
        tmp_called_instance_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_called_instance_20 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 403;

        goto frame_exception_exit_9;
    }

    frame_72cdff8c1865c1ed080e88abf19128d5_9->m_frame.f_lineno = 403;
    tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_20, const_str_plain_read_only_property, &PyTuple_GET_ITEM( const_tuple_str_plain__x_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 403;

        goto frame_exception_exit_9;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurvePublicNumbers_343, const_str_plain_x, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 403;

        goto frame_exception_exit_9;
    }
    tmp_called_instance_21 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_called_instance_21 == NULL ))
    {
        tmp_called_instance_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_called_instance_21 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 404;

        goto frame_exception_exit_9;
    }

    frame_72cdff8c1865c1ed080e88abf19128d5_9->m_frame.f_lineno = 404;
    tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_21, const_str_plain_read_only_property, &PyTuple_GET_ITEM( const_tuple_str_plain__y_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 404;

        goto frame_exception_exit_9;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurvePublicNumbers_343, const_str_plain_y, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 404;

        goto frame_exception_exit_9;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_72cdff8c1865c1ed080e88abf19128d5_9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_8;

    frame_exception_exit_9:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_72cdff8c1865c1ed080e88abf19128d5_9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_72cdff8c1865c1ed080e88abf19128d5_9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_72cdff8c1865c1ed080e88abf19128d5_9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_72cdff8c1865c1ed080e88abf19128d5_9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_72cdff8c1865c1ed080e88abf19128d5_9,
        type_description_2
    );


    // Release cached frame.
    if ( frame_72cdff8c1865c1ed080e88abf19128d5_9 == cache_frame_72cdff8c1865c1ed080e88abf19128d5_9 )
    {
        Py_DECREF( frame_72cdff8c1865c1ed080e88abf19128d5_9 );
    }
    cache_frame_72cdff8c1865c1ed080e88abf19128d5_9 = NULL;

    assertFrameObject( frame_72cdff8c1865c1ed080e88abf19128d5_9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_8;

    frame_no_exception_8:;

    goto skip_nested_handling_8;
    nested_frame_exit_8:;

    goto try_except_handler_57;
    skip_nested_handling_8:;
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_26___eq__(  );
    tmp_res = PyDict_SetItem( locals_EllipticCurvePublicNumbers_343, const_str_plain___eq__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_27___ne__(  );
    tmp_res = PyDict_SetItem( locals_EllipticCurvePublicNumbers_343, const_str_plain___ne__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_28___hash__(  );
    tmp_res = PyDict_SetItem( locals_EllipticCurvePublicNumbers_343, const_str_plain___hash__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_29___repr__(  );
    tmp_res = PyDict_SetItem( locals_EllipticCurvePublicNumbers_343, const_str_plain___repr__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_outline_return_value_28 = locals_EllipticCurvePublicNumbers_343;
    Py_INCREF( tmp_outline_return_value_28 );
    goto try_return_handler_57;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_57:;
    Py_DECREF( locals_EllipticCurvePublicNumbers_343 );
    locals_EllipticCurvePublicNumbers_343 = NULL;
    goto outline_result_28;
    // Exception handler code:
    try_except_handler_57:;
    exception_keeper_type_36 = exception_type;
    exception_keeper_value_36 = exception_value;
    exception_keeper_tb_36 = exception_tb;
    exception_keeper_lineno_36 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_EllipticCurvePublicNumbers_343 );
    locals_EllipticCurvePublicNumbers_343 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_36;
    exception_value = exception_keeper_value_36;
    exception_tb = exception_keeper_tb_36;
    exception_lineno = exception_keeper_lineno_36;

    goto outline_exception_8;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_8:;
    exception_lineno = 343;
    goto try_except_handler_56;
    outline_result_28:;
    tmp_assign_source_147 = tmp_outline_return_value_28;
    assert( tmp_class_creation_27__class_dict == NULL );
    tmp_class_creation_27__class_dict = tmp_assign_source_147;

    tmp_compare_left_27 = const_str_plain___metaclass__;
    tmp_compare_right_27 = tmp_class_creation_27__class_dict;

    CHECK_OBJECT( tmp_compare_right_27 );
    tmp_cmp_In_27 = PySequence_Contains( tmp_compare_right_27, tmp_compare_left_27 );
    assert( !(tmp_cmp_In_27 == -1) );
    if ( tmp_cmp_In_27 == 1 )
    {
        goto condexpr_true_27;
    }
    else
    {
        goto condexpr_false_27;
    }
    condexpr_true_27:;
    tmp_dict_name_27 = tmp_class_creation_27__class_dict;

    CHECK_OBJECT( tmp_dict_name_27 );
    tmp_key_name_27 = const_str_plain___metaclass__;
    tmp_assign_source_148 = DICT_GET_ITEM( tmp_dict_name_27, tmp_key_name_27 );
    if ( tmp_assign_source_148 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;

        goto try_except_handler_56;
    }
    goto condexpr_end_27;
    condexpr_false_27:;
    tmp_assign_source_148 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_148 );
    condexpr_end_27:;
    assert( tmp_class_creation_27__metaclass == NULL );
    tmp_class_creation_27__metaclass = tmp_assign_source_148;

    tmp_called_name_96 = tmp_class_creation_27__metaclass;

    CHECK_OBJECT( tmp_called_name_96 );
    tmp_args_element_name_146 = const_str_plain_EllipticCurvePublicNumbers;
    tmp_args_element_name_147 = const_tuple_type_object_tuple;
    tmp_args_element_name_148 = tmp_class_creation_27__class_dict;

    CHECK_OBJECT( tmp_args_element_name_148 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 343;
    {
        PyObject *call_args[] = { tmp_args_element_name_146, tmp_args_element_name_147, tmp_args_element_name_148 };
        tmp_assign_source_149 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_96, call_args );
    }

    if ( tmp_assign_source_149 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;

        goto try_except_handler_56;
    }
    assert( tmp_class_creation_27__class == NULL );
    tmp_class_creation_27__class = tmp_assign_source_149;

    goto try_end_28;
    // Exception handler code:
    try_except_handler_56:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_keeper_lineno_37 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_27__class_dict );
    tmp_class_creation_27__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_27__metaclass );
    tmp_class_creation_27__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_37;
    exception_value = exception_keeper_value_37;
    exception_tb = exception_keeper_tb_37;
    exception_lineno = exception_keeper_lineno_37;

    goto frame_exception_exit_1;
    // End of try:
    try_end_28:;
    tmp_assign_source_150 = tmp_class_creation_27__class;

    CHECK_OBJECT( tmp_assign_source_150 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurvePublicNumbers, tmp_assign_source_150 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_27__class );
    Py_DECREF( tmp_class_creation_27__class );
    tmp_class_creation_27__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_27__class_dict );
    Py_DECREF( tmp_class_creation_27__class_dict );
    tmp_class_creation_27__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_27__metaclass );
    Py_DECREF( tmp_class_creation_27__metaclass );
    tmp_class_creation_27__metaclass = NULL;

    // Tried code:
    tmp_set_locals = PyDict_New();
    locals_EllipticCurvePrivateNumbers_430 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
    tmp_res = PyDict_SetItem( locals_EllipticCurvePrivateNumbers_430, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_30___init__(  );
    tmp_res = PyDict_SetItem( locals_EllipticCurvePrivateNumbers_430, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_31_private_key(  );
    tmp_res = PyDict_SetItem( locals_EllipticCurvePrivateNumbers_430, const_str_plain_private_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_66b4421857cfa70618deb61e7277fbc2_10, codeobj_66b4421857cfa70618deb61e7277fbc2, module_cryptography$hazmat$primitives$asymmetric$ec, 0 );
    frame_66b4421857cfa70618deb61e7277fbc2_10 = cache_frame_66b4421857cfa70618deb61e7277fbc2_10;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_66b4421857cfa70618deb61e7277fbc2_10 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_66b4421857cfa70618deb61e7277fbc2_10 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_22 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_called_instance_22 == NULL ))
    {
        tmp_called_instance_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_called_instance_22 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 447;

        goto frame_exception_exit_10;
    }

    frame_66b4421857cfa70618deb61e7277fbc2_10->m_frame.f_lineno = 447;
    tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_22, const_str_plain_read_only_property, &PyTuple_GET_ITEM( const_tuple_str_plain__private_value_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 447;

        goto frame_exception_exit_10;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurvePrivateNumbers_430, const_str_plain_private_value, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 447;

        goto frame_exception_exit_10;
    }
    tmp_called_instance_23 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_called_instance_23 == NULL ))
    {
        tmp_called_instance_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_called_instance_23 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 448;

        goto frame_exception_exit_10;
    }

    frame_66b4421857cfa70618deb61e7277fbc2_10->m_frame.f_lineno = 448;
    tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_23, const_str_plain_read_only_property, &PyTuple_GET_ITEM( const_tuple_str_plain__public_numbers_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 448;

        goto frame_exception_exit_10;
    }
    tmp_res = PyDict_SetItem( locals_EllipticCurvePrivateNumbers_430, const_str_plain_public_numbers, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 448;

        goto frame_exception_exit_10;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_66b4421857cfa70618deb61e7277fbc2_10 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_9;

    frame_exception_exit_10:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_66b4421857cfa70618deb61e7277fbc2_10 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_66b4421857cfa70618deb61e7277fbc2_10, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_66b4421857cfa70618deb61e7277fbc2_10->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_66b4421857cfa70618deb61e7277fbc2_10, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_66b4421857cfa70618deb61e7277fbc2_10,
        type_description_2
    );


    // Release cached frame.
    if ( frame_66b4421857cfa70618deb61e7277fbc2_10 == cache_frame_66b4421857cfa70618deb61e7277fbc2_10 )
    {
        Py_DECREF( frame_66b4421857cfa70618deb61e7277fbc2_10 );
    }
    cache_frame_66b4421857cfa70618deb61e7277fbc2_10 = NULL;

    assertFrameObject( frame_66b4421857cfa70618deb61e7277fbc2_10 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_9;

    frame_no_exception_9:;

    goto skip_nested_handling_9;
    nested_frame_exit_9:;

    goto try_except_handler_59;
    skip_nested_handling_9:;
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_32___eq__(  );
    tmp_res = PyDict_SetItem( locals_EllipticCurvePrivateNumbers_430, const_str_plain___eq__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_33___ne__(  );
    tmp_res = PyDict_SetItem( locals_EllipticCurvePrivateNumbers_430, const_str_plain___ne__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_34___hash__(  );
    tmp_res = PyDict_SetItem( locals_EllipticCurvePrivateNumbers_430, const_str_plain___hash__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_outline_return_value_29 = locals_EllipticCurvePrivateNumbers_430;
    Py_INCREF( tmp_outline_return_value_29 );
    goto try_return_handler_59;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_59:;
    Py_DECREF( locals_EllipticCurvePrivateNumbers_430 );
    locals_EllipticCurvePrivateNumbers_430 = NULL;
    goto outline_result_29;
    // Exception handler code:
    try_except_handler_59:;
    exception_keeper_type_38 = exception_type;
    exception_keeper_value_38 = exception_value;
    exception_keeper_tb_38 = exception_tb;
    exception_keeper_lineno_38 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_EllipticCurvePrivateNumbers_430 );
    locals_EllipticCurvePrivateNumbers_430 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_38;
    exception_value = exception_keeper_value_38;
    exception_tb = exception_keeper_tb_38;
    exception_lineno = exception_keeper_lineno_38;

    goto outline_exception_9;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_9:;
    exception_lineno = 430;
    goto try_except_handler_58;
    outline_result_29:;
    tmp_assign_source_151 = tmp_outline_return_value_29;
    assert( tmp_class_creation_28__class_dict == NULL );
    tmp_class_creation_28__class_dict = tmp_assign_source_151;

    tmp_compare_left_28 = const_str_plain___metaclass__;
    tmp_compare_right_28 = tmp_class_creation_28__class_dict;

    CHECK_OBJECT( tmp_compare_right_28 );
    tmp_cmp_In_28 = PySequence_Contains( tmp_compare_right_28, tmp_compare_left_28 );
    assert( !(tmp_cmp_In_28 == -1) );
    if ( tmp_cmp_In_28 == 1 )
    {
        goto condexpr_true_28;
    }
    else
    {
        goto condexpr_false_28;
    }
    condexpr_true_28:;
    tmp_dict_name_28 = tmp_class_creation_28__class_dict;

    CHECK_OBJECT( tmp_dict_name_28 );
    tmp_key_name_28 = const_str_plain___metaclass__;
    tmp_assign_source_152 = DICT_GET_ITEM( tmp_dict_name_28, tmp_key_name_28 );
    if ( tmp_assign_source_152 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 430;

        goto try_except_handler_58;
    }
    goto condexpr_end_28;
    condexpr_false_28:;
    tmp_assign_source_152 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_152 );
    condexpr_end_28:;
    assert( tmp_class_creation_28__metaclass == NULL );
    tmp_class_creation_28__metaclass = tmp_assign_source_152;

    tmp_called_name_97 = tmp_class_creation_28__metaclass;

    CHECK_OBJECT( tmp_called_name_97 );
    tmp_args_element_name_149 = const_str_plain_EllipticCurvePrivateNumbers;
    tmp_args_element_name_150 = const_tuple_type_object_tuple;
    tmp_args_element_name_151 = tmp_class_creation_28__class_dict;

    CHECK_OBJECT( tmp_args_element_name_151 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 430;
    {
        PyObject *call_args[] = { tmp_args_element_name_149, tmp_args_element_name_150, tmp_args_element_name_151 };
        tmp_assign_source_153 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_97, call_args );
    }

    if ( tmp_assign_source_153 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 430;

        goto try_except_handler_58;
    }
    assert( tmp_class_creation_28__class == NULL );
    tmp_class_creation_28__class = tmp_assign_source_153;

    goto try_end_29;
    // Exception handler code:
    try_except_handler_58:;
    exception_keeper_type_39 = exception_type;
    exception_keeper_value_39 = exception_value;
    exception_keeper_tb_39 = exception_tb;
    exception_keeper_lineno_39 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_28__class_dict );
    tmp_class_creation_28__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_28__metaclass );
    tmp_class_creation_28__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_39;
    exception_value = exception_keeper_value_39;
    exception_tb = exception_keeper_tb_39;
    exception_lineno = exception_keeper_lineno_39;

    goto frame_exception_exit_1;
    // End of try:
    try_end_29:;
    tmp_assign_source_154 = tmp_class_creation_28__class;

    CHECK_OBJECT( tmp_assign_source_154 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurvePrivateNumbers, tmp_assign_source_154 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_28__class );
    Py_DECREF( tmp_class_creation_28__class );
    tmp_class_creation_28__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_28__class_dict );
    Py_DECREF( tmp_class_creation_28__class_dict );
    tmp_class_creation_28__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_28__metaclass );
    Py_DECREF( tmp_class_creation_28__metaclass );
    tmp_class_creation_28__metaclass = NULL;

    tmp_set_locals = PyDict_New();
    locals_ECDH_466 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
    tmp_res = PyDict_SetItem( locals_ECDH_466, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_30 = locals_ECDH_466;
    Py_INCREF( tmp_outline_return_value_30 );
    goto try_return_handler_60;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_60:;
    Py_DECREF( locals_ECDH_466 );
    locals_ECDH_466 = NULL;
    goto outline_result_30;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ec );
    return MOD_RETURN_VALUE( NULL );
    outline_result_30:;
    tmp_assign_source_155 = tmp_outline_return_value_30;
    assert( tmp_class_creation_29__class_dict == NULL );
    tmp_class_creation_29__class_dict = tmp_assign_source_155;

    // Tried code:
    tmp_compare_left_29 = const_str_plain___metaclass__;
    tmp_compare_right_29 = tmp_class_creation_29__class_dict;

    CHECK_OBJECT( tmp_compare_right_29 );
    tmp_cmp_In_29 = PySequence_Contains( tmp_compare_right_29, tmp_compare_left_29 );
    assert( !(tmp_cmp_In_29 == -1) );
    if ( tmp_cmp_In_29 == 1 )
    {
        goto condexpr_true_29;
    }
    else
    {
        goto condexpr_false_29;
    }
    condexpr_true_29:;
    tmp_dict_name_29 = tmp_class_creation_29__class_dict;

    CHECK_OBJECT( tmp_dict_name_29 );
    tmp_key_name_29 = const_str_plain___metaclass__;
    tmp_assign_source_156 = DICT_GET_ITEM( tmp_dict_name_29, tmp_key_name_29 );
    if ( tmp_assign_source_156 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 466;

        goto try_except_handler_61;
    }
    goto condexpr_end_29;
    condexpr_false_29:;
    tmp_assign_source_156 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_156 );
    condexpr_end_29:;
    assert( tmp_class_creation_29__metaclass == NULL );
    tmp_class_creation_29__metaclass = tmp_assign_source_156;

    tmp_called_name_98 = tmp_class_creation_29__metaclass;

    CHECK_OBJECT( tmp_called_name_98 );
    tmp_args_element_name_152 = const_str_plain_ECDH;
    tmp_args_element_name_153 = const_tuple_type_object_tuple;
    tmp_args_element_name_154 = tmp_class_creation_29__class_dict;

    CHECK_OBJECT( tmp_args_element_name_154 );
    frame_546b65168cc038495051af0d76cca4f6->m_frame.f_lineno = 466;
    {
        PyObject *call_args[] = { tmp_args_element_name_152, tmp_args_element_name_153, tmp_args_element_name_154 };
        tmp_assign_source_157 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_98, call_args );
    }

    if ( tmp_assign_source_157 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 466;

        goto try_except_handler_61;
    }
    assert( tmp_class_creation_29__class == NULL );
    tmp_class_creation_29__class = tmp_assign_source_157;

    goto try_end_30;
    // Exception handler code:
    try_except_handler_61:;
    exception_keeper_type_40 = exception_type;
    exception_keeper_value_40 = exception_value;
    exception_keeper_tb_40 = exception_tb;
    exception_keeper_lineno_40 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_29__class_dict );
    Py_DECREF( tmp_class_creation_29__class_dict );
    tmp_class_creation_29__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_29__metaclass );
    tmp_class_creation_29__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_40;
    exception_value = exception_keeper_value_40;
    exception_tb = exception_keeper_tb_40;
    exception_lineno = exception_keeper_lineno_40;

    goto frame_exception_exit_1;
    // End of try:
    try_end_30:;
    tmp_assign_source_158 = tmp_class_creation_29__class;

    CHECK_OBJECT( tmp_assign_source_158 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_ECDH, tmp_assign_source_158 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_29__class );
    Py_DECREF( tmp_class_creation_29__class );
    tmp_class_creation_29__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_29__class_dict );
    Py_DECREF( tmp_class_creation_29__class_dict );
    tmp_class_creation_29__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_29__metaclass );
    Py_DECREF( tmp_class_creation_29__metaclass );
    tmp_class_creation_29__metaclass = NULL;

    tmp_assign_source_159 = _PyDict_NewPresized( 19 );
    tmp_dict_value_22 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECP192R1 );

    if (unlikely( tmp_dict_value_22 == NULL ))
    {
        tmp_dict_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECP192R1 );
    }

    if ( tmp_dict_value_22 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECP192R1" );
        exception_tb = NULL;

        exception_lineno = 471;

        goto frame_exception_exit_1;
    }

    tmp_source_name_32 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );

    if (unlikely( tmp_source_name_32 == NULL ))
    {
        tmp_source_name_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );
    }

    if ( tmp_source_name_32 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurveOID" );
        exception_tb = NULL;

        exception_lineno = 471;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_22 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_SECP192R1 );
    if ( tmp_dict_key_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 471;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_159, tmp_dict_key_22, tmp_dict_value_22 );
    Py_DECREF( tmp_dict_key_22 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 470;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_23 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECP224R1 );

    if (unlikely( tmp_dict_value_23 == NULL ))
    {
        tmp_dict_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECP224R1 );
    }

    if ( tmp_dict_value_23 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECP224R1" );
        exception_tb = NULL;

        exception_lineno = 472;

        goto frame_exception_exit_1;
    }

    tmp_source_name_33 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );

    if (unlikely( tmp_source_name_33 == NULL ))
    {
        tmp_source_name_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );
    }

    if ( tmp_source_name_33 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurveOID" );
        exception_tb = NULL;

        exception_lineno = 472;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_23 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_SECP224R1 );
    if ( tmp_dict_key_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 472;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_159, tmp_dict_key_23, tmp_dict_value_23 );
    Py_DECREF( tmp_dict_key_23 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 470;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_24 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECP256K1 );

    if (unlikely( tmp_dict_value_24 == NULL ))
    {
        tmp_dict_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECP256K1 );
    }

    if ( tmp_dict_value_24 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECP256K1" );
        exception_tb = NULL;

        exception_lineno = 473;

        goto frame_exception_exit_1;
    }

    tmp_source_name_34 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );

    if (unlikely( tmp_source_name_34 == NULL ))
    {
        tmp_source_name_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );
    }

    if ( tmp_source_name_34 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurveOID" );
        exception_tb = NULL;

        exception_lineno = 473;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_24 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_SECP256K1 );
    if ( tmp_dict_key_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 473;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_159, tmp_dict_key_24, tmp_dict_value_24 );
    Py_DECREF( tmp_dict_key_24 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 470;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_25 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECP256R1 );

    if (unlikely( tmp_dict_value_25 == NULL ))
    {
        tmp_dict_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECP256R1 );
    }

    if ( tmp_dict_value_25 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECP256R1" );
        exception_tb = NULL;

        exception_lineno = 474;

        goto frame_exception_exit_1;
    }

    tmp_source_name_35 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );

    if (unlikely( tmp_source_name_35 == NULL ))
    {
        tmp_source_name_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );
    }

    if ( tmp_source_name_35 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurveOID" );
        exception_tb = NULL;

        exception_lineno = 474;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_25 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_SECP256R1 );
    if ( tmp_dict_key_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 474;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_159, tmp_dict_key_25, tmp_dict_value_25 );
    Py_DECREF( tmp_dict_key_25 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 470;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_26 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECP384R1 );

    if (unlikely( tmp_dict_value_26 == NULL ))
    {
        tmp_dict_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECP384R1 );
    }

    if ( tmp_dict_value_26 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECP384R1" );
        exception_tb = NULL;

        exception_lineno = 475;

        goto frame_exception_exit_1;
    }

    tmp_source_name_36 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );

    if (unlikely( tmp_source_name_36 == NULL ))
    {
        tmp_source_name_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );
    }

    if ( tmp_source_name_36 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurveOID" );
        exception_tb = NULL;

        exception_lineno = 475;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_26 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_SECP384R1 );
    if ( tmp_dict_key_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 475;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_159, tmp_dict_key_26, tmp_dict_value_26 );
    Py_DECREF( tmp_dict_key_26 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 470;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_27 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECP521R1 );

    if (unlikely( tmp_dict_value_27 == NULL ))
    {
        tmp_dict_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECP521R1 );
    }

    if ( tmp_dict_value_27 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECP521R1" );
        exception_tb = NULL;

        exception_lineno = 476;

        goto frame_exception_exit_1;
    }

    tmp_source_name_37 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );

    if (unlikely( tmp_source_name_37 == NULL ))
    {
        tmp_source_name_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );
    }

    if ( tmp_source_name_37 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurveOID" );
        exception_tb = NULL;

        exception_lineno = 476;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_27 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_SECP521R1 );
    if ( tmp_dict_key_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 476;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_159, tmp_dict_key_27, tmp_dict_value_27 );
    Py_DECREF( tmp_dict_key_27 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 470;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_28 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_BrainpoolP256R1 );

    if (unlikely( tmp_dict_value_28 == NULL ))
    {
        tmp_dict_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BrainpoolP256R1 );
    }

    if ( tmp_dict_value_28 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "BrainpoolP256R1" );
        exception_tb = NULL;

        exception_lineno = 477;

        goto frame_exception_exit_1;
    }

    tmp_source_name_38 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );

    if (unlikely( tmp_source_name_38 == NULL ))
    {
        tmp_source_name_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );
    }

    if ( tmp_source_name_38 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurveOID" );
        exception_tb = NULL;

        exception_lineno = 477;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_28 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_BRAINPOOLP256R1 );
    if ( tmp_dict_key_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 477;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_159, tmp_dict_key_28, tmp_dict_value_28 );
    Py_DECREF( tmp_dict_key_28 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 470;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_29 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_BrainpoolP384R1 );

    if (unlikely( tmp_dict_value_29 == NULL ))
    {
        tmp_dict_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BrainpoolP384R1 );
    }

    if ( tmp_dict_value_29 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "BrainpoolP384R1" );
        exception_tb = NULL;

        exception_lineno = 478;

        goto frame_exception_exit_1;
    }

    tmp_source_name_39 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );

    if (unlikely( tmp_source_name_39 == NULL ))
    {
        tmp_source_name_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );
    }

    if ( tmp_source_name_39 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurveOID" );
        exception_tb = NULL;

        exception_lineno = 478;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_29 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_BRAINPOOLP384R1 );
    if ( tmp_dict_key_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 478;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_159, tmp_dict_key_29, tmp_dict_value_29 );
    Py_DECREF( tmp_dict_key_29 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 470;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_30 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_BrainpoolP512R1 );

    if (unlikely( tmp_dict_value_30 == NULL ))
    {
        tmp_dict_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BrainpoolP512R1 );
    }

    if ( tmp_dict_value_30 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "BrainpoolP512R1" );
        exception_tb = NULL;

        exception_lineno = 479;

        goto frame_exception_exit_1;
    }

    tmp_source_name_40 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );

    if (unlikely( tmp_source_name_40 == NULL ))
    {
        tmp_source_name_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );
    }

    if ( tmp_source_name_40 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurveOID" );
        exception_tb = NULL;

        exception_lineno = 479;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_30 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_BRAINPOOLP512R1 );
    if ( tmp_dict_key_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 479;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_159, tmp_dict_key_30, tmp_dict_value_30 );
    Py_DECREF( tmp_dict_key_30 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 470;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_31 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECT163K1 );

    if (unlikely( tmp_dict_value_31 == NULL ))
    {
        tmp_dict_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECT163K1 );
    }

    if ( tmp_dict_value_31 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECT163K1" );
        exception_tb = NULL;

        exception_lineno = 480;

        goto frame_exception_exit_1;
    }

    tmp_source_name_41 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );

    if (unlikely( tmp_source_name_41 == NULL ))
    {
        tmp_source_name_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );
    }

    if ( tmp_source_name_41 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurveOID" );
        exception_tb = NULL;

        exception_lineno = 480;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_31 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_SECT163K1 );
    if ( tmp_dict_key_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 480;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_159, tmp_dict_key_31, tmp_dict_value_31 );
    Py_DECREF( tmp_dict_key_31 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 470;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_32 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECT163R2 );

    if (unlikely( tmp_dict_value_32 == NULL ))
    {
        tmp_dict_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECT163R2 );
    }

    if ( tmp_dict_value_32 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECT163R2" );
        exception_tb = NULL;

        exception_lineno = 481;

        goto frame_exception_exit_1;
    }

    tmp_source_name_42 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );

    if (unlikely( tmp_source_name_42 == NULL ))
    {
        tmp_source_name_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );
    }

    if ( tmp_source_name_42 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurveOID" );
        exception_tb = NULL;

        exception_lineno = 481;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_32 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_SECT163R2 );
    if ( tmp_dict_key_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 481;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_159, tmp_dict_key_32, tmp_dict_value_32 );
    Py_DECREF( tmp_dict_key_32 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 470;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_33 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECT233K1 );

    if (unlikely( tmp_dict_value_33 == NULL ))
    {
        tmp_dict_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECT233K1 );
    }

    if ( tmp_dict_value_33 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECT233K1" );
        exception_tb = NULL;

        exception_lineno = 482;

        goto frame_exception_exit_1;
    }

    tmp_source_name_43 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );

    if (unlikely( tmp_source_name_43 == NULL ))
    {
        tmp_source_name_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );
    }

    if ( tmp_source_name_43 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurveOID" );
        exception_tb = NULL;

        exception_lineno = 482;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_33 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_SECT233K1 );
    if ( tmp_dict_key_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 482;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_159, tmp_dict_key_33, tmp_dict_value_33 );
    Py_DECREF( tmp_dict_key_33 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 470;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_34 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECT233R1 );

    if (unlikely( tmp_dict_value_34 == NULL ))
    {
        tmp_dict_value_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECT233R1 );
    }

    if ( tmp_dict_value_34 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECT233R1" );
        exception_tb = NULL;

        exception_lineno = 483;

        goto frame_exception_exit_1;
    }

    tmp_source_name_44 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );

    if (unlikely( tmp_source_name_44 == NULL ))
    {
        tmp_source_name_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );
    }

    if ( tmp_source_name_44 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurveOID" );
        exception_tb = NULL;

        exception_lineno = 483;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_34 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_SECT233R1 );
    if ( tmp_dict_key_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 483;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_159, tmp_dict_key_34, tmp_dict_value_34 );
    Py_DECREF( tmp_dict_key_34 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 470;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_35 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECT283K1 );

    if (unlikely( tmp_dict_value_35 == NULL ))
    {
        tmp_dict_value_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECT283K1 );
    }

    if ( tmp_dict_value_35 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECT283K1" );
        exception_tb = NULL;

        exception_lineno = 484;

        goto frame_exception_exit_1;
    }

    tmp_source_name_45 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );

    if (unlikely( tmp_source_name_45 == NULL ))
    {
        tmp_source_name_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );
    }

    if ( tmp_source_name_45 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurveOID" );
        exception_tb = NULL;

        exception_lineno = 484;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_35 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_SECT283K1 );
    if ( tmp_dict_key_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 484;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_159, tmp_dict_key_35, tmp_dict_value_35 );
    Py_DECREF( tmp_dict_key_35 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 470;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_36 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECT283R1 );

    if (unlikely( tmp_dict_value_36 == NULL ))
    {
        tmp_dict_value_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECT283R1 );
    }

    if ( tmp_dict_value_36 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECT283R1" );
        exception_tb = NULL;

        exception_lineno = 485;

        goto frame_exception_exit_1;
    }

    tmp_source_name_46 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );

    if (unlikely( tmp_source_name_46 == NULL ))
    {
        tmp_source_name_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );
    }

    if ( tmp_source_name_46 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurveOID" );
        exception_tb = NULL;

        exception_lineno = 485;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_36 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain_SECT283R1 );
    if ( tmp_dict_key_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 485;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_159, tmp_dict_key_36, tmp_dict_value_36 );
    Py_DECREF( tmp_dict_key_36 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 470;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_37 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECT409K1 );

    if (unlikely( tmp_dict_value_37 == NULL ))
    {
        tmp_dict_value_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECT409K1 );
    }

    if ( tmp_dict_value_37 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECT409K1" );
        exception_tb = NULL;

        exception_lineno = 486;

        goto frame_exception_exit_1;
    }

    tmp_source_name_47 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );

    if (unlikely( tmp_source_name_47 == NULL ))
    {
        tmp_source_name_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );
    }

    if ( tmp_source_name_47 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurveOID" );
        exception_tb = NULL;

        exception_lineno = 486;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_37 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain_SECT409K1 );
    if ( tmp_dict_key_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 486;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_159, tmp_dict_key_37, tmp_dict_value_37 );
    Py_DECREF( tmp_dict_key_37 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 470;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_38 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECT409R1 );

    if (unlikely( tmp_dict_value_38 == NULL ))
    {
        tmp_dict_value_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECT409R1 );
    }

    if ( tmp_dict_value_38 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECT409R1" );
        exception_tb = NULL;

        exception_lineno = 487;

        goto frame_exception_exit_1;
    }

    tmp_source_name_48 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );

    if (unlikely( tmp_source_name_48 == NULL ))
    {
        tmp_source_name_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );
    }

    if ( tmp_source_name_48 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurveOID" );
        exception_tb = NULL;

        exception_lineno = 487;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_38 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain_SECT409R1 );
    if ( tmp_dict_key_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 487;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_159, tmp_dict_key_38, tmp_dict_value_38 );
    Py_DECREF( tmp_dict_key_38 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 470;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_39 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECT571K1 );

    if (unlikely( tmp_dict_value_39 == NULL ))
    {
        tmp_dict_value_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECT571K1 );
    }

    if ( tmp_dict_value_39 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECT571K1" );
        exception_tb = NULL;

        exception_lineno = 488;

        goto frame_exception_exit_1;
    }

    tmp_source_name_49 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );

    if (unlikely( tmp_source_name_49 == NULL ))
    {
        tmp_source_name_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );
    }

    if ( tmp_source_name_49 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurveOID" );
        exception_tb = NULL;

        exception_lineno = 488;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_39 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain_SECT571K1 );
    if ( tmp_dict_key_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 488;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_159, tmp_dict_key_39, tmp_dict_value_39 );
    Py_DECREF( tmp_dict_key_39 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 470;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_40 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_SECT571R1 );

    if (unlikely( tmp_dict_value_40 == NULL ))
    {
        tmp_dict_value_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECT571R1 );
    }

    if ( tmp_dict_value_40 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SECT571R1" );
        exception_tb = NULL;

        exception_lineno = 489;

        goto frame_exception_exit_1;
    }

    tmp_source_name_50 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );

    if (unlikely( tmp_source_name_50 == NULL ))
    {
        tmp_source_name_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EllipticCurveOID );
    }

    if ( tmp_source_name_50 == NULL )
    {
        Py_DECREF( tmp_assign_source_159 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EllipticCurveOID" );
        exception_tb = NULL;

        exception_lineno = 489;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_40 = LOOKUP_ATTRIBUTE( tmp_source_name_50, const_str_plain_SECT571R1 );
    if ( tmp_dict_key_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 489;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_159, tmp_dict_key_40, tmp_dict_value_40 );
    Py_DECREF( tmp_dict_key_40 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_159 );

        exception_lineno = 470;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain__OID_TO_CURVE, tmp_assign_source_159 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_546b65168cc038495051af0d76cca4f6 );
#endif
    popFrameStack();

    assertFrameObject( frame_546b65168cc038495051af0d76cca4f6 );

    goto frame_no_exception_10;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_546b65168cc038495051af0d76cca4f6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_546b65168cc038495051af0d76cca4f6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_546b65168cc038495051af0d76cca4f6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_546b65168cc038495051af0d76cca4f6, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_10:;
    tmp_assign_source_160 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_35_get_curve_for_oid(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain_get_curve_for_oid, tmp_assign_source_160 );

    return MOD_RETURN_VALUE( module_cryptography$hazmat$primitives$asymmetric$ec );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
