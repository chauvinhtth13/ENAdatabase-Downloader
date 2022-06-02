/* Generated code for Python source for module 'cryptography.x509.ocsp'
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

/* The _module_cryptography$x509$ocsp is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$x509$ocsp;
PyDictObject *moduledict_cryptography$x509$ocsp;

/* The module constants used, if any. */
extern PyObject *const_str_plain_SHA256;
static PyObject *const_str_digest_d320c4f96061871a2ea480cb45f84c6e;
extern PyObject *const_str_plain__revocation_time;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_digest_7b04aff9d25a2baa76a35cbb646b9d21;
extern PyObject *const_tuple_str_plain_data_str_plain_backend_tuple;
extern PyObject *const_str_plain_build;
static PyObject *const_str_plain_OCSPResponseBuilder;
static PyObject *const_str_digest_7cdebb5f9ad33f02224a085838631714;
static PyObject *const_str_digest_135d19079028306a4c20e62f7315aed3;
static PyObject *const_str_digest_6bc610284c59e8c6c9f83e77f6a7a1fb;
static PyObject *const_tuple_str_plain_ed25519_str_plain_ed448_tuple;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_ed448;
extern PyObject *const_str_plain_cls;
extern PyObject *const_str_plain_produced_at;
extern PyObject *const_tuple_f166ade4e70e6d21279bc1fa68e30a26_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_extension_str_plain_critical_tuple;
extern PyObject *const_str_plain_hash_algorithm;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_str_plain_next_update;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_backend;
extern PyObject *const_str_digest_99d507f2ac89b982963447ed05345806;
extern PyObject *const_str_digest_426349c7e201b358f2086eb3f7fb6f47;
extern PyObject *const_str_plain_extensions;
extern PyObject *const_str_plain__reject_duplicate_extension;
static PyObject *const_str_plain_MALFORMED_REQUEST;
extern PyObject *const_str_plain_REVOKED;
extern PyObject *const_str_plain_OCSPRequest;
extern PyObject *const_str_plain_responder_cert;
extern PyObject *const_str_plain_issuer_name_hash;
extern PyObject *const_str_plain_abstractmethod;
extern PyObject *const_str_plain__cert_status;
static PyObject *const_str_digest_64523dea7d1e99bb72e8a8784eaf7d34;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_signature;
static PyObject *const_str_digest_8a186eaf06e64a30f8176e9f9e79210d;
extern PyObject *const_str_digest_6e11655eaabcf2b7e9ae4622616bde0a;
static PyObject *const_str_plain_OCSPRequestBuilder;
extern PyObject *const_str_plain__cert;
static PyObject *const_str_digest_d229c9eed643eee60d1ab52111e943a6;
extern PyObject *const_str_plain_Enum;
extern PyObject *const_str_plain_algorithm;
static PyObject *const_str_digest_6bee51ce80640157396f88c651564342;
extern PyObject *const_tuple_str_plain_Enum_tuple;
static PyObject *const_str_plain_add_certificate;
extern PyObject *const_str_plain_create_ocsp_request;
static PyObject *const_str_digest_173e1f5936576e525a4ec0c436e18865;
extern PyObject *const_str_plain_this_update;
static PyObject *const_str_digest_0803e6568131d3ace6a97c0848babbec;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_signature_hash_algorithm;
static PyObject *const_str_digest_db0053b51be31b73175e4b706eeb071d;
static PyObject *const_str_digest_089f90728c4b730f63c7d992ccdcebde;
extern PyObject *const_str_plain_issuer_key_hash;
extern PyObject *const_str_plain_HashAlgorithm;
static PyObject *const_tuple_a5a3994aa13b09e25b566d2fa604ce58_tuple;
extern PyObject *const_str_plain_SHA1;
extern PyObject *const_str_digest_9abb9f40508debfa3aae6d9135753f7e;
extern PyObject *const_tuple_str_plain_self_str_plain_encoding_tuple;
static PyObject *const_str_digest_c834f18bb73a01711dd784328a5feb72;
static PyObject *const_str_digest_f1a3a125e3ba714b022de01f55589c5a;
extern PyObject *const_str_plain_OCSPCertStatus;
extern PyObject *const_str_plain__OIDS_TO_HASH;
extern PyObject *const_str_plain_response_status;
extern PyObject *const_str_plain_private_key;
extern PyObject *const_str_plain__EARLIEST_UTC_TIME;
static PyObject *const_str_plain_UNAUTHORIZED;
extern PyObject *const_str_plain_abstractproperty;
extern PyObject *const_str_plain__extensions;
extern PyObject *const_str_plain__issuer;
extern PyObject *const_str_digest_9db3cdd3cd765463b4eec6754eb8e087;
extern PyObject *const_str_plain_SUCCESSFUL;
extern PyObject *const_str_digest_f0b1544196c3e6daaf368b98ad3c6594;
static PyObject *const_str_digest_d5501c4718b7c887f0d053e467278836;
extern PyObject *const_str_plain_abc;
static PyObject *const_str_digest_a1d03a0afb523717a753a213904cc192;
extern PyObject *const_tuple_str_plain_self_str_plain_backend_tuple;
extern PyObject *const_str_plain__RESPONSE_STATUS_TO_ENUM;
static PyObject *const_str_digest_91d1cdc36c68313cdd0a89259cd9d216;
static PyObject *const_tuple_str_plain_self_str_plain_request_str_plain_extensions_tuple;
extern PyObject *const_str_plain_OCSPResponseStatus;
extern PyObject *const_str_plain_datetime;
extern PyObject *const_str_plain__next_update;
static PyObject *const_str_digest_65b530f15541aaeee94ab7b7dbde259c;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_ef265d53a3abbd80162dfeeff2b1b653;
static PyObject *const_tuple_bd38329603d033d1de4004f843766dc2_tuple;
extern PyObject *const_int_pos_6;
static PyObject *const_str_digest_1c9a992c5af933927b6653bf116d68fc;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_request;
extern PyObject *const_str_plain_Extension;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_add_extension;
static PyObject *const_str_digest_79c50ec227b35df8e19f6bd36cdc474a;
extern PyObject *const_str_plain_Ed25519PrivateKey;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_tuple_str_plain_algorithm_tuple;
extern PyObject *const_str_plain_ed25519;
static PyObject *const_str_digest_5c750b487d5010e7466a2d1eaa26f22c;
extern PyObject *const_str_plain_Certificate;
static PyObject *const_str_plain__SingleResponse;
extern PyObject *const_tuple_str_plain_hashes_tuple;
extern PyObject *const_str_plain_critical;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain__algorithm;
static PyObject *const_str_digest_b7c4a76d8d2eee68808f67039932e4c7;
static PyObject *const_str_plain__ALLOWED_HASHES;
extern PyObject *const_str_plain__request;
static PyObject *const_str_digest_65e7a1b514a856378ca7ddbf66ed88d7;
extern PyObject *const_str_plain_SHA224;
extern PyObject *const_str_plain_enum;
extern PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple;
static PyObject *const_str_digest_97841e0407a21a46fa17b8ec8f246b28;
static PyObject *const_str_digest_0d6c085154d81c4fc564ab07d3f6dd63;
extern PyObject *const_str_digest_2086ceef6289883db9f020fcaa2ebe44;
static PyObject *const_str_digest_6eec9db0a9e799e06ad4618b1a2d6bde;
extern PyObject *const_str_plain_data;
static PyObject *const_str_digest_e2f0f4177ab1ab3498fd8acfbbb86275;
static PyObject *const_str_plain_singleresp;
extern PyObject *const_str_plain_responder_key_hash;
static PyObject *const_str_plain_INTERNAL_ERROR;
extern PyObject *const_str_angle_genexpr;
extern PyObject *const_str_plain_load_der_ocsp_request;
static PyObject *const_str_digest_60329b99acc2facf1fb40d9cbc14ffa4;
static PyObject *const_str_digest_41405f026fd915aaca466f4e1b3ea1d9;
static PyObject *const_str_digest_217f7df2bea3402123131c30ec62609c;
static PyObject *const_str_digest_def803b62a8438702e7fa6e95ce69665;
static PyObject *const_str_plain_GOOD;
extern PyObject *const_tuple_str_plain_x509_tuple;
extern PyObject *const_str_plain_all;
static PyObject *const_str_digest_b748c93313cc612300dbdce6bc0417b9;
static PyObject *const_str_plain_TRY_LATER;
extern PyObject *const_str_plain_responder_name;
extern PyObject *const_str_plain__certs;
static PyObject *const_str_digest_e6024771248f11d8a1f2216c5ac092ae;
static PyObject *const_str_digest_693ac668d00156b83095e145c5bd4cde;
static PyObject *const_str_digest_94557de83454f1dc2ecf5e90de6f06e3;
extern PyObject *const_str_plain_revocation_time;
static PyObject *const_str_digest_6f2673571deef5894c0114a72c423238;
static PyObject *const_str_plain_cert_status;
extern PyObject *const_str_plain_UNKNOWN;
extern PyObject *const_str_plain_certs;
extern PyObject *const_str_plain_serial_number;
extern PyObject *const_str_plain_ReasonFlags;
static PyObject *const_str_digest_09946f148ee0372feb9a08e6dda8281c;
static PyObject *const_str_digest_eaeff09629549f9f70f7ef52807e664d;
static PyObject *const_tuple_d39f9e716cdbb1c02d01256267218513_tuple;
static PyObject *const_str_digest_e600056fa813ee20b834db2400ca93c0;
extern PyObject *const_str_plain_sign;
extern PyObject *const_str_plain_HASH;
static PyObject *const_str_digest_ecc40804a91b6e6178935f28a7360431;
extern PyObject *const_str_plain__this_update;
static PyObject *const_str_digest_6cf5b98336437d37c50bc673c82ea14f;
extern PyObject *const_str_plain_certificates;
extern PyObject *const_str_plain_x;
static PyObject *const_str_digest_417bc1351879048743830a24c91ef13e;
extern PyObject *const_str_plain_SHA512;
extern PyObject *const_str_plain__response;
static PyObject *const_str_plain_NAME;
extern PyObject *const_str_plain_OCSPResponse;
static PyObject *const_tuple_str_plain_cls_str_plain_response_status_str_plain_backend_tuple;
extern PyObject *const_str_plain_revocation_reason;
extern PyObject *const_tuple_str_plain_backend_tuple;
static PyObject *const_str_digest_c7ef7d093c77366587d3ae719b523a52;
static PyObject *const_tuple_str_plain_self_str_plain_encoding_str_plain_responder_cert_tuple;
extern PyObject *const_str_plain_oid;
extern PyObject *const_str_plain__revocation_reason;
static PyObject *const_tuple_afe2946a12a3f0cb528f1a93782e25e1_tuple;
static PyObject *const_str_digest_f6672a4031538be2131c35c3a4d7b9d9;
static PyObject *const_str_plain_SIG_REQUIRED;
static PyObject *const_str_plain_build_unsuccessful;
extern PyObject *const_str_plain__convert_to_naive_utc_time;
extern PyObject *const_str_plain_x509;
extern PyObject *const_str_plain_cryptography;
extern PyObject *const_str_plain_extension;
static PyObject *const_tuple_827d29e762c30a31f08e46c699d821b0_tuple;
extern PyObject *const_str_plain_issuer;
static PyObject *const_tuple_str_plain_self_str_plain_certs_tuple;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_digest_70df9fead972d9ab43c8b20fadce06ec;
extern PyObject *const_str_plain_cert;
static PyObject *const_str_plain__verify_algorithm;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_OCSPResponderEncoding;
static PyObject *const_str_digest_fac64a568c98dcf01e5a6aeb3d4dae70;
extern PyObject *const_int_0;
static PyObject *const_str_digest_ececf41bfab5efb57e44fd8dac31fad8;
extern PyObject *const_str_plain__responder_id;
extern PyObject *const_str_plain_six;
static PyObject *const_str_digest_f0a38bfa5d6912ff8ce8e3d120aced3d;
static PyObject *const_str_digest_4fcf11bc6d439713857131f8070264ba;
extern PyObject *const_str_plain_hashes;
extern PyObject *const_str_plain_division;
static PyObject *const_str_digest_8835d56aac8a3d020679344bdd06ae7a;
extern PyObject *const_str_plain_load_der_ocsp_response;
extern PyObject *const_str_plain_SHA384;
extern PyObject *const_str_plain__CERT_STATUS_TO_ENUM;
extern PyObject *const_str_plain_public_bytes;
static PyObject *const_str_digest_25293882a45b97196127daf10b677333;
extern PyObject *const_str_plain_signature_algorithm_oid;
extern PyObject *const_str_plain_Ed448PrivateKey;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_add_metaclass;
extern PyObject *const_str_plain_response;
extern PyObject *const_str_plain_certificate_status;
extern PyObject *const_str_plain_create_ocsp_response;
static PyObject *const_str_digest_ebd4760caa2584dc3ed207ac08ddd807;
extern PyObject *const_str_plain_tbs_response_bytes;
extern PyObject *const_str_plain_encoding;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_plain_responder_id;
static PyObject *const_str_plain_add_response;
extern PyObject *const_str_plain_ExtensionType;
extern PyObject *const_str_plain_ABCMeta;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_d320c4f96061871a2ea480cb45f84c6e = UNSTREAM_STRING( &constant_bin[ 707015 ], 36, 0 );
    const_str_plain_OCSPResponseBuilder = UNSTREAM_STRING( &constant_bin[ 707051 ], 19, 1 );
    const_str_digest_7cdebb5f9ad33f02224a085838631714 = UNSTREAM_STRING( &constant_bin[ 707070 ], 36, 0 );
    const_str_digest_135d19079028306a4c20e62f7315aed3 = UNSTREAM_STRING( &constant_bin[ 707106 ], 36, 0 );
    const_str_digest_6bc610284c59e8c6c9f83e77f6a7a1fb = UNSTREAM_STRING( &constant_bin[ 707142 ], 52, 0 );
    const_tuple_str_plain_ed25519_str_plain_ed448_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ed25519_str_plain_ed448_tuple, 0, const_str_plain_ed25519 ); Py_INCREF( const_str_plain_ed25519 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ed25519_str_plain_ed448_tuple, 1, const_str_plain_ed448 ); Py_INCREF( const_str_plain_ed448 );
    const_str_plain_MALFORMED_REQUEST = UNSTREAM_STRING( &constant_bin[ 707194 ], 17, 1 );
    const_str_digest_64523dea7d1e99bb72e8a8784eaf7d34 = UNSTREAM_STRING( &constant_bin[ 707211 ], 38, 0 );
    const_str_digest_8a186eaf06e64a30f8176e9f9e79210d = UNSTREAM_STRING( &constant_bin[ 707249 ], 94, 0 );
    const_str_plain_OCSPRequestBuilder = UNSTREAM_STRING( &constant_bin[ 707343 ], 18, 1 );
    const_str_digest_d229c9eed643eee60d1ab52111e943a6 = UNSTREAM_STRING( &constant_bin[ 707361 ], 55, 0 );
    const_str_digest_6bee51ce80640157396f88c651564342 = UNSTREAM_STRING( &constant_bin[ 707416 ], 41, 0 );
    const_str_plain_add_certificate = UNSTREAM_STRING( &constant_bin[ 707457 ], 15, 1 );
    const_str_digest_173e1f5936576e525a4ec0c436e18865 = UNSTREAM_STRING( &constant_bin[ 707472 ], 22, 0 );
    const_str_digest_0803e6568131d3ace6a97c0848babbec = UNSTREAM_STRING( &constant_bin[ 707494 ], 22, 0 );
    const_str_digest_db0053b51be31b73175e4b706eeb071d = UNSTREAM_STRING( &constant_bin[ 707516 ], 42, 0 );
    const_str_digest_089f90728c4b730f63c7d992ccdcebde = UNSTREAM_STRING( &constant_bin[ 707558 ], 33, 0 );
    const_tuple_a5a3994aa13b09e25b566d2fa604ce58_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_a5a3994aa13b09e25b566d2fa604ce58_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_a5a3994aa13b09e25b566d2fa604ce58_tuple, 1, const_str_plain_cert ); Py_INCREF( const_str_plain_cert );
    PyTuple_SET_ITEM( const_tuple_a5a3994aa13b09e25b566d2fa604ce58_tuple, 2, const_str_plain_issuer ); Py_INCREF( const_str_plain_issuer );
    PyTuple_SET_ITEM( const_tuple_a5a3994aa13b09e25b566d2fa604ce58_tuple, 3, const_str_plain_algorithm ); Py_INCREF( const_str_plain_algorithm );
    const_str_digest_c834f18bb73a01711dd784328a5feb72 = UNSTREAM_STRING( &constant_bin[ 707591 ], 75, 0 );
    const_str_digest_f1a3a125e3ba714b022de01f55589c5a = UNSTREAM_STRING( &constant_bin[ 707666 ], 51, 0 );
    const_str_plain_UNAUTHORIZED = UNSTREAM_STRING( &constant_bin[ 707717 ], 12, 1 );
    const_str_digest_d5501c4718b7c887f0d053e467278836 = UNSTREAM_STRING( &constant_bin[ 707729 ], 22, 0 );
    const_str_digest_a1d03a0afb523717a753a213904cc192 = UNSTREAM_STRING( &constant_bin[ 707751 ], 46, 0 );
    const_str_digest_91d1cdc36c68313cdd0a89259cd9d216 = UNSTREAM_STRING( &constant_bin[ 707797 ], 7, 0 );
    const_tuple_str_plain_self_str_plain_request_str_plain_extensions_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_request_str_plain_extensions_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_request_str_plain_extensions_tuple, 1, const_str_plain_request ); Py_INCREF( const_str_plain_request );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_request_str_plain_extensions_tuple, 2, const_str_plain_extensions ); Py_INCREF( const_str_plain_extensions );
    const_str_digest_65b530f15541aaeee94ab7b7dbde259c = UNSTREAM_STRING( &constant_bin[ 707804 ], 77, 0 );
    const_str_digest_ef265d53a3abbd80162dfeeff2b1b653 = UNSTREAM_STRING( &constant_bin[ 707881 ], 89, 0 );
    const_tuple_bd38329603d033d1de4004f843766dc2_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_bd38329603d033d1de4004f843766dc2_tuple, 0, const_str_plain__EARLIEST_UTC_TIME ); Py_INCREF( const_str_plain__EARLIEST_UTC_TIME );
    PyTuple_SET_ITEM( const_tuple_bd38329603d033d1de4004f843766dc2_tuple, 1, const_str_plain__convert_to_naive_utc_time ); Py_INCREF( const_str_plain__convert_to_naive_utc_time );
    PyTuple_SET_ITEM( const_tuple_bd38329603d033d1de4004f843766dc2_tuple, 2, const_str_plain__reject_duplicate_extension ); Py_INCREF( const_str_plain__reject_duplicate_extension );
    const_str_digest_1c9a992c5af933927b6653bf116d68fc = UNSTREAM_STRING( &constant_bin[ 707970 ], 37, 0 );
    const_str_digest_79c50ec227b35df8e19f6bd36cdc474a = UNSTREAM_STRING( &constant_bin[ 708007 ], 31, 0 );
    const_str_digest_5c750b487d5010e7466a2d1eaa26f22c = UNSTREAM_STRING( &constant_bin[ 708038 ], 25, 0 );
    const_str_plain__SingleResponse = UNSTREAM_STRING( &constant_bin[ 708063 ], 15, 1 );
    const_str_digest_b7c4a76d8d2eee68808f67039932e4c7 = UNSTREAM_STRING( &constant_bin[ 708078 ], 31, 0 );
    const_str_plain__ALLOWED_HASHES = UNSTREAM_STRING( &constant_bin[ 708109 ], 15, 1 );
    const_str_digest_65e7a1b514a856378ca7ddbf66ed88d7 = UNSTREAM_STRING( &constant_bin[ 708124 ], 33, 0 );
    const_str_digest_97841e0407a21a46fa17b8ec8f246b28 = UNSTREAM_STRING( &constant_bin[ 708157 ], 13, 0 );
    const_str_digest_0d6c085154d81c4fc564ab07d3f6dd63 = UNSTREAM_STRING( &constant_bin[ 708170 ], 187, 0 );
    const_str_digest_6eec9db0a9e799e06ad4618b1a2d6bde = UNSTREAM_STRING( &constant_bin[ 708357 ], 37, 0 );
    const_str_digest_e2f0f4177ab1ab3498fd8acfbbb86275 = UNSTREAM_STRING( &constant_bin[ 708394 ], 45, 0 );
    const_str_plain_singleresp = UNSTREAM_STRING( &constant_bin[ 708439 ], 10, 1 );
    const_str_plain_INTERNAL_ERROR = UNSTREAM_STRING( &constant_bin[ 708449 ], 14, 1 );
    const_str_digest_60329b99acc2facf1fb40d9cbc14ffa4 = UNSTREAM_STRING( &constant_bin[ 708463 ], 42, 0 );
    const_str_digest_41405f026fd915aaca466f4e1b3ea1d9 = UNSTREAM_STRING( &constant_bin[ 708505 ], 67, 0 );
    const_str_digest_217f7df2bea3402123131c30ec62609c = UNSTREAM_STRING( &constant_bin[ 708572 ], 66, 0 );
    const_str_digest_def803b62a8438702e7fa6e95ce69665 = UNSTREAM_STRING( &constant_bin[ 708638 ], 43, 0 );
    const_str_plain_GOOD = UNSTREAM_STRING( &constant_bin[ 708681 ], 4, 1 );
    const_str_digest_b748c93313cc612300dbdce6bc0417b9 = UNSTREAM_STRING( &constant_bin[ 708685 ], 22, 0 );
    const_str_plain_TRY_LATER = UNSTREAM_STRING( &constant_bin[ 708707 ], 9, 1 );
    const_str_digest_e6024771248f11d8a1f2216c5ac092ae = UNSTREAM_STRING( &constant_bin[ 708716 ], 67, 0 );
    const_str_digest_693ac668d00156b83095e145c5bd4cde = UNSTREAM_STRING( &constant_bin[ 708783 ], 7, 0 );
    const_str_digest_94557de83454f1dc2ecf5e90de6f06e3 = UNSTREAM_STRING( &constant_bin[ 708790 ], 129, 0 );
    const_str_digest_6f2673571deef5894c0114a72c423238 = UNSTREAM_STRING( &constant_bin[ 708919 ], 50, 0 );
    const_str_plain_cert_status = UNSTREAM_STRING( &constant_bin[ 708969 ], 11, 1 );
    const_str_digest_09946f148ee0372feb9a08e6dda8281c = UNSTREAM_STRING( &constant_bin[ 708980 ], 55, 0 );
    const_str_digest_eaeff09629549f9f70f7ef52807e664d = UNSTREAM_STRING( &constant_bin[ 709035 ], 47, 0 );
    const_tuple_d39f9e716cdbb1c02d01256267218513_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_d39f9e716cdbb1c02d01256267218513_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_d39f9e716cdbb1c02d01256267218513_tuple, 1, const_str_plain_cert ); Py_INCREF( const_str_plain_cert );
    PyTuple_SET_ITEM( const_tuple_d39f9e716cdbb1c02d01256267218513_tuple, 2, const_str_plain_issuer ); Py_INCREF( const_str_plain_issuer );
    PyTuple_SET_ITEM( const_tuple_d39f9e716cdbb1c02d01256267218513_tuple, 3, const_str_plain_algorithm ); Py_INCREF( const_str_plain_algorithm );
    PyTuple_SET_ITEM( const_tuple_d39f9e716cdbb1c02d01256267218513_tuple, 4, const_str_plain_cert_status ); Py_INCREF( const_str_plain_cert_status );
    PyTuple_SET_ITEM( const_tuple_d39f9e716cdbb1c02d01256267218513_tuple, 5, const_str_plain_this_update ); Py_INCREF( const_str_plain_this_update );
    PyTuple_SET_ITEM( const_tuple_d39f9e716cdbb1c02d01256267218513_tuple, 6, const_str_plain_next_update ); Py_INCREF( const_str_plain_next_update );
    PyTuple_SET_ITEM( const_tuple_d39f9e716cdbb1c02d01256267218513_tuple, 7, const_str_plain_revocation_time ); Py_INCREF( const_str_plain_revocation_time );
    PyTuple_SET_ITEM( const_tuple_d39f9e716cdbb1c02d01256267218513_tuple, 8, const_str_plain_revocation_reason ); Py_INCREF( const_str_plain_revocation_reason );
    PyTuple_SET_ITEM( const_tuple_d39f9e716cdbb1c02d01256267218513_tuple, 9, const_str_plain_singleresp ); Py_INCREF( const_str_plain_singleresp );
    const_str_digest_e600056fa813ee20b834db2400ca93c0 = UNSTREAM_STRING( &constant_bin[ 709082 ], 109, 0 );
    const_str_digest_ecc40804a91b6e6178935f28a7360431 = UNSTREAM_STRING( &constant_bin[ 709191 ], 56, 0 );
    const_str_digest_6cf5b98336437d37c50bc673c82ea14f = UNSTREAM_STRING( &constant_bin[ 709247 ], 37, 0 );
    const_str_digest_417bc1351879048743830a24c91ef13e = UNSTREAM_STRING( &constant_bin[ 709284 ], 35, 0 );
    const_str_plain_NAME = UNSTREAM_STRING( &constant_bin[ 5333 ], 4, 1 );
    const_tuple_str_plain_cls_str_plain_response_status_str_plain_backend_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_response_status_str_plain_backend_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_response_status_str_plain_backend_tuple, 1, const_str_plain_response_status ); Py_INCREF( const_str_plain_response_status );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_response_status_str_plain_backend_tuple, 2, const_str_plain_backend ); Py_INCREF( const_str_plain_backend );
    const_str_digest_c7ef7d093c77366587d3ae719b523a52 = UNSTREAM_STRING( &constant_bin[ 709319 ], 54, 0 );
    const_tuple_str_plain_self_str_plain_encoding_str_plain_responder_cert_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_encoding_str_plain_responder_cert_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_encoding_str_plain_responder_cert_tuple, 1, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_encoding_str_plain_responder_cert_tuple, 2, const_str_plain_responder_cert ); Py_INCREF( const_str_plain_responder_cert );
    const_tuple_afe2946a12a3f0cb528f1a93782e25e1_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_afe2946a12a3f0cb528f1a93782e25e1_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_afe2946a12a3f0cb528f1a93782e25e1_tuple, 1, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    const_str_plain_responder_id = UNSTREAM_STRING( &constant_bin[ 707558 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_afe2946a12a3f0cb528f1a93782e25e1_tuple, 2, const_str_plain_responder_id ); Py_INCREF( const_str_plain_responder_id );
    PyTuple_SET_ITEM( const_tuple_afe2946a12a3f0cb528f1a93782e25e1_tuple, 3, const_str_plain_certs ); Py_INCREF( const_str_plain_certs );
    PyTuple_SET_ITEM( const_tuple_afe2946a12a3f0cb528f1a93782e25e1_tuple, 4, const_str_plain_extensions ); Py_INCREF( const_str_plain_extensions );
    const_str_digest_f6672a4031538be2131c35c3a4d7b9d9 = UNSTREAM_STRING( &constant_bin[ 709373 ], 45, 0 );
    const_str_plain_SIG_REQUIRED = UNSTREAM_STRING( &constant_bin[ 709418 ], 12, 1 );
    const_str_plain_build_unsuccessful = UNSTREAM_STRING( &constant_bin[ 709430 ], 18, 1 );
    const_tuple_827d29e762c30a31f08e46c699d821b0_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_827d29e762c30a31f08e46c699d821b0_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_827d29e762c30a31f08e46c699d821b0_tuple, 1, const_str_plain_cert ); Py_INCREF( const_str_plain_cert );
    PyTuple_SET_ITEM( const_tuple_827d29e762c30a31f08e46c699d821b0_tuple, 2, const_str_plain_issuer ); Py_INCREF( const_str_plain_issuer );
    PyTuple_SET_ITEM( const_tuple_827d29e762c30a31f08e46c699d821b0_tuple, 3, const_str_plain_algorithm ); Py_INCREF( const_str_plain_algorithm );
    PyTuple_SET_ITEM( const_tuple_827d29e762c30a31f08e46c699d821b0_tuple, 4, const_str_plain_cert_status ); Py_INCREF( const_str_plain_cert_status );
    PyTuple_SET_ITEM( const_tuple_827d29e762c30a31f08e46c699d821b0_tuple, 5, const_str_plain_this_update ); Py_INCREF( const_str_plain_this_update );
    PyTuple_SET_ITEM( const_tuple_827d29e762c30a31f08e46c699d821b0_tuple, 6, const_str_plain_next_update ); Py_INCREF( const_str_plain_next_update );
    PyTuple_SET_ITEM( const_tuple_827d29e762c30a31f08e46c699d821b0_tuple, 7, const_str_plain_revocation_time ); Py_INCREF( const_str_plain_revocation_time );
    PyTuple_SET_ITEM( const_tuple_827d29e762c30a31f08e46c699d821b0_tuple, 8, const_str_plain_revocation_reason ); Py_INCREF( const_str_plain_revocation_reason );
    const_tuple_str_plain_self_str_plain_certs_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_certs_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_certs_tuple, 1, const_str_plain_certs ); Py_INCREF( const_str_plain_certs );
    const_str_digest_70df9fead972d9ab43c8b20fadce06ec = UNSTREAM_STRING( &constant_bin[ 709448 ], 82, 0 );
    const_str_plain__verify_algorithm = UNSTREAM_STRING( &constant_bin[ 709530 ], 17, 1 );
    const_str_digest_fac64a568c98dcf01e5a6aeb3d4dae70 = UNSTREAM_STRING( &constant_bin[ 709547 ], 57, 0 );
    const_str_digest_ececf41bfab5efb57e44fd8dac31fad8 = UNSTREAM_STRING( &constant_bin[ 693680 ], 88, 0 );
    const_str_digest_f0a38bfa5d6912ff8ce8e3d120aced3d = UNSTREAM_STRING( &constant_bin[ 709604 ], 46, 0 );
    const_str_digest_4fcf11bc6d439713857131f8070264ba = UNSTREAM_STRING( &constant_bin[ 709650 ], 105, 0 );
    const_str_digest_8835d56aac8a3d020679344bdd06ae7a = UNSTREAM_STRING( &constant_bin[ 709755 ], 65, 0 );
    const_str_digest_25293882a45b97196127daf10b677333 = UNSTREAM_STRING( &constant_bin[ 709820 ], 68, 0 );
    const_str_digest_ebd4760caa2584dc3ed207ac08ddd807 = UNSTREAM_STRING( &constant_bin[ 709888 ], 80, 0 );
    const_str_plain_add_response = UNSTREAM_STRING( &constant_bin[ 709968 ], 12, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$x509$ocsp( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_ebf0737295b5fe9a6fdb491ea43fded6;
static PyCodeObject *codeobj_8463c9ed5668fa1af74f2529e7a57cb3;
static PyCodeObject *codeobj_d8abbcc1c590aa9bca0841d3f3f51148;
static PyCodeObject *codeobj_a025b8a972fd89a77deece0b5fab4441;
static PyCodeObject *codeobj_9920709313efd618c10bf8642417c0ae;
static PyCodeObject *codeobj_e5229b9e8a56e15a95d405dff847473d;
static PyCodeObject *codeobj_1a337f373c3631e3fabe5962d0ecabf1;
static PyCodeObject *codeobj_9581897c23964f1f7658fc0883a98f6a;
static PyCodeObject *codeobj_3b5cecfe08894161b4748375c5f5bb44;
static PyCodeObject *codeobj_c6bf55708d92134d5d97d9403f013ceb;
static PyCodeObject *codeobj_f6d9b29b163c8026fb84d515b307505c;
static PyCodeObject *codeobj_fed120ae117cf147d5482ca21ff5cfa0;
static PyCodeObject *codeobj_a7436f6e0ba93b1c32d92e79a4e2fee7;
static PyCodeObject *codeobj_f87eeabacd9b8d4cb98cc1f488c9386b;
static PyCodeObject *codeobj_4d13a29968c79504215680258d6c7f94;
static PyCodeObject *codeobj_9d454552b6a177fbc5c259de6bde39aa;
static PyCodeObject *codeobj_2c832f873f4ed51090ad848d1659148a;
static PyCodeObject *codeobj_b3297a4811549f06e4b72e5865c4cf3a;
static PyCodeObject *codeobj_31d339f4f915621e9d5c7e9a303e3068;
static PyCodeObject *codeobj_aff67a95478aabac29902f520a315aad;
static PyCodeObject *codeobj_197fbc2c98a32aec4e04c2beadc0759a;
static PyCodeObject *codeobj_1f0125239e98ab3f2013a65ddb7abddd;
static PyCodeObject *codeobj_2bb8c4e5fa4244b488d96ff166274870;
static PyCodeObject *codeobj_1563555fbceab8f282b180d808ac07d2;
static PyCodeObject *codeobj_5bbc64533165f3e42eabeae32870ba6d;
static PyCodeObject *codeobj_0a803dc93460dcee9fb10d8902baeb24;
static PyCodeObject *codeobj_20be0aa789fc70f8107b4bf8df131b0c;
static PyCodeObject *codeobj_cce748951e406e4a02ba5d1d95138745;
static PyCodeObject *codeobj_4667b528fc2cae552bae49e6c7025bf4;
static PyCodeObject *codeobj_e06a4cc7ae6cb976daca73669b51ee17;
static PyCodeObject *codeobj_16ce57eeba1b8bf148fcf0cff7a79252;
static PyCodeObject *codeobj_4914ae20fbf0f09f19d35f99737c025b;
static PyCodeObject *codeobj_0af0246fca7da59f682a3333700f1733;
static PyCodeObject *codeobj_0378db3d07c92996c6d0447d61622e6c;
static PyCodeObject *codeobj_d77a220e5520d72b3ad3bcf17f95dd83;
static PyCodeObject *codeobj_7071113c45a1f571c1a56936e374eb10;
static PyCodeObject *codeobj_775dadb1232c3972970e8f93810278ce;
static PyCodeObject *codeobj_44c2bcfe69d486094a39cd3f78d57a79;
static PyCodeObject *codeobj_7a85f105c43a6fdb16c182595b6d7d2e;
static PyCodeObject *codeobj_8a96d8ff84d0ba5e61c51644c016fa06;
static PyCodeObject *codeobj_a587371f6046110309dd2c6bc01dae39;
static PyCodeObject *codeobj_105c479a6dfe474c02d9cbc52c18c8ce;
static PyCodeObject *codeobj_4e8e4823637471227451b2e3ddc61b4e;
static PyCodeObject *codeobj_4c494f5cb464b72bd0fea57bafdee3aa;
static PyCodeObject *codeobj_c070e62cefe5bc6b37871120e5aa2892;
static PyCodeObject *codeobj_0f8723b29c8ca8bed79cc25128f83fb6;
static PyCodeObject *codeobj_fa99ff21fe3117312d5c16beffebe02e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_5c750b487d5010e7466a2d1eaa26f22c );
    codeobj_ebf0737295b5fe9a6fdb491ea43fded6 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 44, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8463c9ed5668fa1af74f2529e7a57cb3 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 64, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d8abbcc1c590aa9bca0841d3f3f51148 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 219, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a025b8a972fd89a77deece0b5fab4441 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_b7c4a76d8d2eee68808f67039932e4c7, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9920709313efd618c10bf8642417c0ae = MAKE_CODEOBJ( module_filename_obj, const_str_plain_OCSPRequest, 272, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e5229b9e8a56e15a95d405dff847473d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_OCSPResponse, 310, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1a337f373c3631e3fabe5962d0ecabf1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_OCSPResponseBuilder, 176, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9581897c23964f1f7658fc0883a98f6a = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 78, const_tuple_str_plain_self_str_plain_request_str_plain_extensions_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3b5cecfe08894161b4748375c5f5bb44 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 115, const_tuple_827d29e762c30a31f08e46c699d821b0_tuple, 9, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c6bf55708d92134d5d97d9403f013ceb = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 177, const_tuple_afe2946a12a3f0cb528f1a93782e25e1_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f6d9b29b163c8026fb84d515b307505c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__verify_algorithm, 51, const_tuple_str_plain_algorithm_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fed120ae117cf147d5482ca21ff5cfa0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_certificate, 82, const_tuple_a5a3994aa13b09e25b566d2fa604ce58_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a7436f6e0ba93b1c32d92e79a4e2fee7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_extension, 95, const_tuple_str_plain_self_str_plain_extension_str_plain_critical_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f87eeabacd9b8d4cb98cc1f488c9386b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_extension, 226, const_tuple_str_plain_self_str_plain_extension_str_plain_critical_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4d13a29968c79504215680258d6c7f94 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_response, 184, const_tuple_d39f9e716cdbb1c02d01256267218513_tuple, 9, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9d454552b6a177fbc5c259de6bde39aa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_build, 106, const_tuple_str_plain_self_str_plain_backend_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2c832f873f4ed51090ad848d1659148a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_build_unsuccessful, 258, const_tuple_str_plain_cls_str_plain_response_status_str_plain_backend_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b3297a4811549f06e4b72e5865c4cf3a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_certificate_status, 368, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_31d339f4f915621e9d5c7e9a303e3068 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_certificates, 213, const_tuple_str_plain_self_str_plain_certs_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_aff67a95478aabac29902f520a315aad = MAKE_CODEOBJ( module_filename_obj, const_str_plain_certificates, 342, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_197fbc2c98a32aec4e04c2beadc0759a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_extensions, 302, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1f0125239e98ab3f2013a65ddb7abddd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_extensions, 425, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2bb8c4e5fa4244b488d96ff166274870 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hash_algorithm, 285, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1563555fbceab8f282b180d808ac07d2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hash_algorithm, 413, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5bbc64533165f3e42eabeae32870ba6d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_issuer_key_hash, 273, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0a803dc93460dcee9fb10d8902baeb24 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_issuer_key_hash, 401, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_20be0aa789fc70f8107b4bf8df131b0c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_issuer_name_hash, 279, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_cce748951e406e4a02ba5d1d95138745 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_issuer_name_hash, 407, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4667b528fc2cae552bae49e6c7025bf4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_der_ocsp_request, 67, const_tuple_str_plain_data_str_plain_backend_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e06a4cc7ae6cb976daca73669b51ee17 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_der_ocsp_response, 72, const_tuple_str_plain_data_str_plain_backend_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_16ce57eeba1b8bf148fcf0cff7a79252 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_next_update, 395, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4914ae20fbf0f09f19d35f99737c025b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_produced_at, 362, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0af0246fca7da59f682a3333700f1733 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_public_bytes, 296, const_tuple_str_plain_self_str_plain_encoding_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0378db3d07c92996c6d0447d61622e6c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_responder_id, 198, const_tuple_str_plain_self_str_plain_encoding_str_plain_responder_cert_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d77a220e5520d72b3ad3bcf17f95dd83 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_responder_key_hash, 350, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7071113c45a1f571c1a56936e374eb10 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_responder_name, 356, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_775dadb1232c3972970e8f93810278ce = MAKE_CODEOBJ( module_filename_obj, const_str_plain_response_status, 311, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_44c2bcfe69d486094a39cd3f78d57a79 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_revocation_reason, 381, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7a85f105c43a6fdb16c182595b6d7d2e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_revocation_time, 374, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8a96d8ff84d0ba5e61c51644c016fa06 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_serial_number, 291, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a587371f6046110309dd2c6bc01dae39 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_serial_number, 419, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_105c479a6dfe474c02d9cbc52c18c8ce = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sign, 238, const_tuple_f166ade4e70e6d21279bc1fa68e30a26_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4e8e4823637471227451b2e3ddc61b4e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_signature, 330, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4c494f5cb464b72bd0fea57bafdee3aa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_signature_algorithm_oid, 318, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c070e62cefe5bc6b37871120e5aa2892 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_signature_hash_algorithm, 324, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0f8723b29c8ca8bed79cc25128f83fb6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tbs_response_bytes, 336, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fa99ff21fe3117312d5c16beffebe02e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_this_update, 388, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *cryptography$x509$ocsp$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void cryptography$x509$ocsp$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator );
#endif


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *cryptography$x509$ocsp$$$genexpr_2_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void cryptography$x509$ocsp$$$genexpr_2_genexpr_context( struct Nuitka_GeneratorObject *generator );
#endif


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *cryptography$x509$ocsp$$$function_12_certificates$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void cryptography$x509$ocsp$$$function_12_certificates$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator );
#endif


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_10_add_response(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_11_responder_id(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_12_certificates(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_13_add_extension(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_14_sign(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_15_build_unsuccessful(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_16_issuer_key_hash(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_17_issuer_name_hash(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_18_hash_algorithm(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_19_serial_number(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_1__verify_algorithm(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_20_public_bytes(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_21_extensions(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_22_response_status(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_23_signature_algorithm_oid(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_24_signature_hash_algorithm(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_25_signature(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_26_tbs_response_bytes(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_27_certificates(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_28_responder_key_hash(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_29_responder_name(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_2_load_der_ocsp_request(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_30_produced_at(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_31_certificate_status(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_32_revocation_time(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_33_revocation_reason(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_34_this_update(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_35_next_update(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_36_issuer_key_hash(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_37_issuer_name_hash(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_38_hash_algorithm(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_39_serial_number(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_3_load_der_ocsp_response(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_40_extensions(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_4___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_5_add_certificate(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_6_add_extension(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_7_build(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_8___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_9___init__( PyObject *defaults );


// The module function definitions.

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
struct cryptography$x509$ocsp$$$genexpr_1_genexpr_locals {
    PyObject *var_x
    PyObject *tmp_iter_value_0
    PyObject *exception_type
    PyObject *exception_value
    PyTracebackObject *exception_tb
    int exception_lineno
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_value_name_1;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *cryptography$x509$ocsp$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void cryptography$x509$ocsp$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_x = NULL;
    PyObject *tmp_iter_value_0 = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_ebf0737295b5fe9a6fdb491ea43fded6, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_frame_generator;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.

    PyThreadState *thread_state = PyThreadState_GET();

    generator->m_frame->m_frame.f_exc_type = thread_state->exc_type;
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = thread_state->exc_value;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = thread_state->exc_traceback;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    // Tried code:
    if ( generator->m_closure[0] == NULL )
    {
        tmp_value_name_1 = NULL;
    }
    else
    {
        tmp_value_name_1 = PyCell_GET( generator->m_closure[0] );
    }

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_1 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "No";
        exception_lineno = 44;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_iter_value_0;
        tmp_iter_value_0 = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_1 = exception_keeper_type_1;
    tmp_compare_right_1 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 44;
        type_description_1 = "No";
        goto try_except_handler_2;
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
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_1;
    branch_no_1:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    branch_end_1:;
    // End of try:
    try_end_1:;
    tmp_assign_source_2 = tmp_iter_value_0;

    CHECK_OBJECT( tmp_assign_source_2 );
    {
        PyObject *old = var_x;
        var_x = tmp_assign_source_2;
        Py_INCREF( var_x );
        Py_XDECREF( old );
    }

    tmp_expression_name_1 = PyTuple_New( 2 );
    tmp_source_name_1 = var_x;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_value );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_expression_name_1 );

        exception_lineno = 44;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_expression_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_x;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_expression_name_1, 1, tmp_tuple_element_1 );
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( exception_type ) )
    {
        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, generator->m_frame, exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            type_description_1,
            NULL,
            var_x
        );


        // Release cached frame.
        if ( generator->m_frame == cache_frame_generator )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_frame_generator = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    goto try_end_3;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_x );
    var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
    return NULL;
#else
    generator->m_yielded = NULL;
    return;
#endif

    function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
    return NULL;
#else
    generator->m_yielded = NULL;
    return;
#endif

}


static PyObject *impl_cryptography$x509$ocsp$$$function_1__verify_algorithm( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_algorithm = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_f6d9b29b163c8026fb84d515b307505c = NULL;

    struct Nuitka_FrameObject *frame_f6d9b29b163c8026fb84d515b307505c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f6d9b29b163c8026fb84d515b307505c, codeobj_f6d9b29b163c8026fb84d515b307505c, module_cryptography$x509$ocsp, sizeof(void *) );
    frame_f6d9b29b163c8026fb84d515b307505c = cache_frame_f6d9b29b163c8026fb84d515b307505c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f6d9b29b163c8026fb84d515b307505c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f6d9b29b163c8026fb84d515b307505c ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_algorithm;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__ALLOWED_HASHES );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ALLOWED_HASHES );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_ALLOWED_HASHES" );
        exception_tb = NULL;

        exception_lineno = 52;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "o";
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
    tmp_make_exception_arg_1 = const_str_digest_fac64a568c98dcf01e5a6aeb3d4dae70;
    frame_f6d9b29b163c8026fb84d515b307505c->m_frame.f_lineno = 53;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 53;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "o";
    goto frame_exception_exit_1;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f6d9b29b163c8026fb84d515b307505c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f6d9b29b163c8026fb84d515b307505c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f6d9b29b163c8026fb84d515b307505c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f6d9b29b163c8026fb84d515b307505c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f6d9b29b163c8026fb84d515b307505c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f6d9b29b163c8026fb84d515b307505c,
        type_description_1,
        par_algorithm
    );


    // Release cached frame.
    if ( frame_f6d9b29b163c8026fb84d515b307505c == cache_frame_f6d9b29b163c8026fb84d515b307505c )
    {
        Py_DECREF( frame_f6d9b29b163c8026fb84d515b307505c );
    }
    cache_frame_f6d9b29b163c8026fb84d515b307505c = NULL;

    assertFrameObject( frame_f6d9b29b163c8026fb84d515b307505c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_1__verify_algorithm );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_1__verify_algorithm );
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



#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
struct cryptography$x509$ocsp$$$genexpr_2_genexpr_locals {
    PyObject *var_x
    PyObject *tmp_iter_value_0
    PyObject *exception_type
    PyObject *exception_value
    PyTracebackObject *exception_tb
    int exception_lineno
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_value_name_1;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *cryptography$x509$ocsp$$$genexpr_2_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void cryptography$x509$ocsp$$$genexpr_2_genexpr_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_x = NULL;
    PyObject *tmp_iter_value_0 = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_8463c9ed5668fa1af74f2529e7a57cb3, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_frame_generator;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.

    PyThreadState *thread_state = PyThreadState_GET();

    generator->m_frame->m_frame.f_exc_type = thread_state->exc_type;
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = thread_state->exc_value;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = thread_state->exc_traceback;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    // Tried code:
    if ( generator->m_closure[0] == NULL )
    {
        tmp_value_name_1 = NULL;
    }
    else
    {
        tmp_value_name_1 = PyCell_GET( generator->m_closure[0] );
    }

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_1 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "No";
        exception_lineno = 64;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_iter_value_0;
        tmp_iter_value_0 = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_1 = exception_keeper_type_1;
    tmp_compare_right_1 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 64;
        type_description_1 = "No";
        goto try_except_handler_2;
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
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_1;
    branch_no_1:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    branch_end_1:;
    // End of try:
    try_end_1:;
    tmp_assign_source_2 = tmp_iter_value_0;

    CHECK_OBJECT( tmp_assign_source_2 );
    {
        PyObject *old = var_x;
        var_x = tmp_assign_source_2;
        Py_INCREF( var_x );
        Py_XDECREF( old );
    }

    tmp_expression_name_1 = PyTuple_New( 2 );
    tmp_source_name_1 = var_x;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_value );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_expression_name_1 );

        exception_lineno = 64;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_expression_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_x;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_expression_name_1, 1, tmp_tuple_element_1 );
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( exception_type ) )
    {
        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, generator->m_frame, exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            type_description_1,
            NULL,
            var_x
        );


        // Release cached frame.
        if ( generator->m_frame == cache_frame_generator )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_frame_generator = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    goto try_end_3;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_x );
    var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
    return NULL;
#else
    generator->m_yielded = NULL;
    return;
#endif

    function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
    return NULL;
#else
    generator->m_yielded = NULL;
    return;
#endif

}


static PyObject *impl_cryptography$x509$ocsp$$$function_2_load_der_ocsp_request( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[ 0 ];
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_4667b528fc2cae552bae49e6c7025bf4 = NULL;

    struct Nuitka_FrameObject *frame_4667b528fc2cae552bae49e6c7025bf4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4667b528fc2cae552bae49e6c7025bf4, codeobj_4667b528fc2cae552bae49e6c7025bf4, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *) );
    frame_4667b528fc2cae552bae49e6c7025bf4 = cache_frame_4667b528fc2cae552bae49e6c7025bf4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4667b528fc2cae552bae49e6c7025bf4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4667b528fc2cae552bae49e6c7025bf4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_digest_9abb9f40508debfa3aae6d9135753f7e;
    tmp_globals_name_1 = (PyObject *)moduledict_cryptography$x509$ocsp;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_backend_tuple;
    tmp_level_name_1 = const_int_0;
    frame_4667b528fc2cae552bae49e6c7025bf4->m_frame.f_lineno = 68;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_backend );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_backend == NULL );
    var_backend = tmp_assign_source_1;

    tmp_called_instance_1 = var_backend;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_data;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_4667b528fc2cae552bae49e6c7025bf4->m_frame.f_lineno = 69;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_load_der_ocsp_request, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4667b528fc2cae552bae49e6c7025bf4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4667b528fc2cae552bae49e6c7025bf4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4667b528fc2cae552bae49e6c7025bf4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4667b528fc2cae552bae49e6c7025bf4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4667b528fc2cae552bae49e6c7025bf4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4667b528fc2cae552bae49e6c7025bf4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4667b528fc2cae552bae49e6c7025bf4,
        type_description_1,
        par_data,
        var_backend
    );


    // Release cached frame.
    if ( frame_4667b528fc2cae552bae49e6c7025bf4 == cache_frame_4667b528fc2cae552bae49e6c7025bf4 )
    {
        Py_DECREF( frame_4667b528fc2cae552bae49e6c7025bf4 );
    }
    cache_frame_4667b528fc2cae552bae49e6c7025bf4 = NULL;

    assertFrameObject( frame_4667b528fc2cae552bae49e6c7025bf4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_2_load_der_ocsp_request );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)var_backend );
    Py_DECREF( var_backend );
    var_backend = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_2_load_der_ocsp_request );
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


static PyObject *impl_cryptography$x509$ocsp$$$function_3_load_der_ocsp_response( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[ 0 ];
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_e06a4cc7ae6cb976daca73669b51ee17 = NULL;

    struct Nuitka_FrameObject *frame_e06a4cc7ae6cb976daca73669b51ee17;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e06a4cc7ae6cb976daca73669b51ee17, codeobj_e06a4cc7ae6cb976daca73669b51ee17, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *) );
    frame_e06a4cc7ae6cb976daca73669b51ee17 = cache_frame_e06a4cc7ae6cb976daca73669b51ee17;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e06a4cc7ae6cb976daca73669b51ee17 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e06a4cc7ae6cb976daca73669b51ee17 ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_digest_9abb9f40508debfa3aae6d9135753f7e;
    tmp_globals_name_1 = (PyObject *)moduledict_cryptography$x509$ocsp;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_backend_tuple;
    tmp_level_name_1 = const_int_0;
    frame_e06a4cc7ae6cb976daca73669b51ee17->m_frame.f_lineno = 73;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_backend );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_backend == NULL );
    var_backend = tmp_assign_source_1;

    tmp_called_instance_1 = var_backend;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_data;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_e06a4cc7ae6cb976daca73669b51ee17->m_frame.f_lineno = 74;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_load_der_ocsp_response, call_args );
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
    RESTORE_FRAME_EXCEPTION( frame_e06a4cc7ae6cb976daca73669b51ee17 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e06a4cc7ae6cb976daca73669b51ee17 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e06a4cc7ae6cb976daca73669b51ee17 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e06a4cc7ae6cb976daca73669b51ee17, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e06a4cc7ae6cb976daca73669b51ee17->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e06a4cc7ae6cb976daca73669b51ee17, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e06a4cc7ae6cb976daca73669b51ee17,
        type_description_1,
        par_data,
        var_backend
    );


    // Release cached frame.
    if ( frame_e06a4cc7ae6cb976daca73669b51ee17 == cache_frame_e06a4cc7ae6cb976daca73669b51ee17 )
    {
        Py_DECREF( frame_e06a4cc7ae6cb976daca73669b51ee17 );
    }
    cache_frame_e06a4cc7ae6cb976daca73669b51ee17 = NULL;

    assertFrameObject( frame_e06a4cc7ae6cb976daca73669b51ee17 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_3_load_der_ocsp_response );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)var_backend );
    Py_DECREF( var_backend );
    var_backend = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_3_load_der_ocsp_response );
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


static PyObject *impl_cryptography$x509$ocsp$$$function_4___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_request = python_pars[ 1 ];
    PyObject *par_extensions = python_pars[ 2 ];
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
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_9581897c23964f1f7658fc0883a98f6a = NULL;

    struct Nuitka_FrameObject *frame_9581897c23964f1f7658fc0883a98f6a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9581897c23964f1f7658fc0883a98f6a, codeobj_9581897c23964f1f7658fc0883a98f6a, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9581897c23964f1f7658fc0883a98f6a = cache_frame_9581897c23964f1f7658fc0883a98f6a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9581897c23964f1f7658fc0883a98f6a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9581897c23964f1f7658fc0883a98f6a ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_request;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__request, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_extensions;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__extensions, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9581897c23964f1f7658fc0883a98f6a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9581897c23964f1f7658fc0883a98f6a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9581897c23964f1f7658fc0883a98f6a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9581897c23964f1f7658fc0883a98f6a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9581897c23964f1f7658fc0883a98f6a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9581897c23964f1f7658fc0883a98f6a,
        type_description_1,
        par_self,
        par_request,
        par_extensions
    );


    // Release cached frame.
    if ( frame_9581897c23964f1f7658fc0883a98f6a == cache_frame_9581897c23964f1f7658fc0883a98f6a )
    {
        Py_DECREF( frame_9581897c23964f1f7658fc0883a98f6a );
    }
    cache_frame_9581897c23964f1f7658fc0883a98f6a = NULL;

    assertFrameObject( frame_9581897c23964f1f7658fc0883a98f6a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_4___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_extensions );
    Py_DECREF( par_extensions );
    par_extensions = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_request );
    Py_DECREF( par_request );
    par_request = NULL;

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

    CHECK_OBJECT( (PyObject *)par_extensions );
    Py_DECREF( par_extensions );
    par_extensions = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_request );
    Py_DECREF( par_request );
    par_request = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_4___init__ );
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


static PyObject *impl_cryptography$x509$ocsp$$$function_5_add_certificate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_cert = python_pars[ 1 ];
    PyObject *par_issuer = python_pars[ 2 ];
    PyObject *par_algorithm = python_pars[ 3 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    bool tmp_isnot_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_fed120ae117cf147d5482ca21ff5cfa0 = NULL;

    struct Nuitka_FrameObject *frame_fed120ae117cf147d5482ca21ff5cfa0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fed120ae117cf147d5482ca21ff5cfa0, codeobj_fed120ae117cf147d5482ca21ff5cfa0, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fed120ae117cf147d5482ca21ff5cfa0 = cache_frame_fed120ae117cf147d5482ca21ff5cfa0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fed120ae117cf147d5482ca21ff5cfa0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fed120ae117cf147d5482ca21ff5cfa0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__request );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_a1d03a0afb523717a753a213904cc192;
    frame_fed120ae117cf147d5482ca21ff5cfa0->m_frame.f_lineno = 84;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 84;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__verify_algorithm );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__verify_algorithm );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_verify_algorithm" );
        exception_tb = NULL;

        exception_lineno = 86;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_algorithm;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_fed120ae117cf147d5482ca21ff5cfa0->m_frame.f_lineno = 86;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_isinstance_inst_1 = par_cert;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_x509 );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_x509 );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "x509" );
        exception_tb = NULL;

        exception_lineno = 88;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Certificate );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_operand_name_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
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
    tmp_isinstance_inst_2 = par_issuer;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_x509 );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_x509 );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "x509" );
        exception_tb = NULL;

        exception_lineno = 89;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Certificate );
    if ( tmp_isinstance_cls_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_operand_name_2 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    Py_DECREF( tmp_isinstance_cls_2 );
    if ( tmp_operand_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_or_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
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


        exception_lineno = 89;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_2 = const_str_digest_6cf5b98336437d37c50bc673c82ea14f;
    frame_fed120ae117cf147d5482ca21ff5cfa0->m_frame.f_lineno = 91;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 91;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPRequestBuilder );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OCSPRequestBuilder );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "OCSPRequestBuilder" );
        exception_tb = NULL;

        exception_lineno = 93;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = PyTuple_New( 3 );
    tmp_tuple_element_1 = par_cert;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_issuer;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_algorithm;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_2, 2, tmp_tuple_element_1 );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__extensions );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 93;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_fed120ae117cf147d5482ca21ff5cfa0->m_frame.f_lineno = 93;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fed120ae117cf147d5482ca21ff5cfa0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fed120ae117cf147d5482ca21ff5cfa0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fed120ae117cf147d5482ca21ff5cfa0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fed120ae117cf147d5482ca21ff5cfa0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fed120ae117cf147d5482ca21ff5cfa0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fed120ae117cf147d5482ca21ff5cfa0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fed120ae117cf147d5482ca21ff5cfa0,
        type_description_1,
        par_self,
        par_cert,
        par_issuer,
        par_algorithm
    );


    // Release cached frame.
    if ( frame_fed120ae117cf147d5482ca21ff5cfa0 == cache_frame_fed120ae117cf147d5482ca21ff5cfa0 )
    {
        Py_DECREF( frame_fed120ae117cf147d5482ca21ff5cfa0 );
    }
    cache_frame_fed120ae117cf147d5482ca21ff5cfa0 = NULL;

    assertFrameObject( frame_fed120ae117cf147d5482ca21ff5cfa0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_5_add_certificate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_issuer );
    Py_DECREF( par_issuer );
    par_issuer = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_issuer );
    Py_DECREF( par_issuer );
    par_issuer = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_5_add_certificate );
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


static PyObject *impl_cryptography$x509$ocsp$$$function_6_add_extension( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_extension = python_pars[ 1 ];
    PyObject *par_critical = python_pars[ 2 ];
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_a7436f6e0ba93b1c32d92e79a4e2fee7 = NULL;

    struct Nuitka_FrameObject *frame_a7436f6e0ba93b1c32d92e79a4e2fee7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a7436f6e0ba93b1c32d92e79a4e2fee7, codeobj_a7436f6e0ba93b1c32d92e79a4e2fee7, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a7436f6e0ba93b1c32d92e79a4e2fee7 = cache_frame_a7436f6e0ba93b1c32d92e79a4e2fee7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a7436f6e0ba93b1c32d92e79a4e2fee7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a7436f6e0ba93b1c32d92e79a4e2fee7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_extension;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_x509 );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_x509 );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "x509" );
        exception_tb = NULL;

        exception_lineno = 96;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ExtensionType );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
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
    tmp_make_exception_arg_1 = const_str_digest_f0b1544196c3e6daaf368b98ad3c6594;
    frame_a7436f6e0ba93b1c32d92e79a4e2fee7->m_frame.f_lineno = 97;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 97;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_x509 );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_x509 );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "x509" );
        exception_tb = NULL;

        exception_lineno = 99;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Extension );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_extension;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_oid );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 99;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_critical;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_extension;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_a7436f6e0ba93b1c32d92e79a4e2fee7->m_frame.f_lineno = 99;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_extension;
        assert( old != NULL );
        par_extension = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__reject_duplicate_extension );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__reject_duplicate_extension );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_reject_duplicate_extension" );
        exception_tb = NULL;

        exception_lineno = 100;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_extension;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__extensions );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_a7436f6e0ba93b1c32d92e79a4e2fee7->m_frame.f_lineno = 100;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPRequestBuilder );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OCSPRequestBuilder );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "OCSPRequestBuilder" );
        exception_tb = NULL;

        exception_lineno = 102;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__request );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__extensions );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_6 );

        exception_lineno = 103;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = PyList_New( 1 );
    tmp_list_element_1 = par_extension;

    CHECK_OBJECT( tmp_list_element_1 );
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_right_name_1, 0, tmp_list_element_1 );
    tmp_args_element_name_7 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_6 );

        exception_lineno = 103;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_a7436f6e0ba93b1c32d92e79a4e2fee7->m_frame.f_lineno = 102;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a7436f6e0ba93b1c32d92e79a4e2fee7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a7436f6e0ba93b1c32d92e79a4e2fee7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a7436f6e0ba93b1c32d92e79a4e2fee7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a7436f6e0ba93b1c32d92e79a4e2fee7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a7436f6e0ba93b1c32d92e79a4e2fee7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a7436f6e0ba93b1c32d92e79a4e2fee7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a7436f6e0ba93b1c32d92e79a4e2fee7,
        type_description_1,
        par_self,
        par_extension,
        par_critical
    );


    // Release cached frame.
    if ( frame_a7436f6e0ba93b1c32d92e79a4e2fee7 == cache_frame_a7436f6e0ba93b1c32d92e79a4e2fee7 )
    {
        Py_DECREF( frame_a7436f6e0ba93b1c32d92e79a4e2fee7 );
    }
    cache_frame_a7436f6e0ba93b1c32d92e79a4e2fee7 = NULL;

    assertFrameObject( frame_a7436f6e0ba93b1c32d92e79a4e2fee7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_6_add_extension );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_critical );
    Py_DECREF( par_critical );
    par_critical = NULL;

    CHECK_OBJECT( (PyObject *)par_extension );
    Py_DECREF( par_extension );
    par_extension = NULL;

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

    CHECK_OBJECT( (PyObject *)par_critical );
    Py_DECREF( par_critical );
    par_critical = NULL;

    CHECK_OBJECT( (PyObject *)par_extension );
    Py_DECREF( par_extension );
    par_extension = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_6_add_extension );
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


static PyObject *impl_cryptography$x509$ocsp$$$function_7_build( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    bool tmp_is_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_9d454552b6a177fbc5c259de6bde39aa = NULL;

    struct Nuitka_FrameObject *frame_9d454552b6a177fbc5c259de6bde39aa;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9d454552b6a177fbc5c259de6bde39aa, codeobj_9d454552b6a177fbc5c259de6bde39aa, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *) );
    frame_9d454552b6a177fbc5c259de6bde39aa = cache_frame_9d454552b6a177fbc5c259de6bde39aa;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9d454552b6a177fbc5c259de6bde39aa );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9d454552b6a177fbc5c259de6bde39aa ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_digest_9abb9f40508debfa3aae6d9135753f7e;
    tmp_globals_name_1 = (PyObject *)moduledict_cryptography$x509$ocsp;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_backend_tuple;
    tmp_level_name_1 = const_int_0;
    frame_9d454552b6a177fbc5c259de6bde39aa->m_frame.f_lineno = 107;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_backend );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_backend == NULL );
    var_backend = tmp_assign_source_1;

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__request );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_db0053b51be31b73175e4b706eeb071d;
    frame_9d454552b6a177fbc5c259de6bde39aa->m_frame.f_lineno = 109;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 109;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_instance_1 = var_backend;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_9d454552b6a177fbc5c259de6bde39aa->m_frame.f_lineno = 111;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_create_ocsp_request, call_args );
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
    RESTORE_FRAME_EXCEPTION( frame_9d454552b6a177fbc5c259de6bde39aa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d454552b6a177fbc5c259de6bde39aa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d454552b6a177fbc5c259de6bde39aa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9d454552b6a177fbc5c259de6bde39aa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9d454552b6a177fbc5c259de6bde39aa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9d454552b6a177fbc5c259de6bde39aa, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9d454552b6a177fbc5c259de6bde39aa,
        type_description_1,
        par_self,
        var_backend
    );


    // Release cached frame.
    if ( frame_9d454552b6a177fbc5c259de6bde39aa == cache_frame_9d454552b6a177fbc5c259de6bde39aa )
    {
        Py_DECREF( frame_9d454552b6a177fbc5c259de6bde39aa );
    }
    cache_frame_9d454552b6a177fbc5c259de6bde39aa = NULL;

    assertFrameObject( frame_9d454552b6a177fbc5c259de6bde39aa );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_7_build );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_backend );
    Py_DECREF( var_backend );
    var_backend = NULL;

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

    Py_XDECREF( var_backend );
    var_backend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_7_build );
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


static PyObject *impl_cryptography$x509$ocsp$$$function_8___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_cert = python_pars[ 1 ];
    PyObject *par_issuer = python_pars[ 2 ];
    PyObject *par_algorithm = python_pars[ 3 ];
    PyObject *par_cert_status = python_pars[ 4 ];
    PyObject *par_this_update = python_pars[ 5 ];
    PyObject *par_next_update = python_pars[ 6 ];
    PyObject *par_revocation_time = python_pars[ 7 ];
    PyObject *par_revocation_reason = python_pars[ 8 ];
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_cls_3;
    PyObject *tmp_isinstance_cls_4;
    PyObject *tmp_isinstance_cls_5;
    PyObject *tmp_isinstance_cls_6;
    PyObject *tmp_isinstance_cls_7;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_isinstance_inst_3;
    PyObject *tmp_isinstance_inst_4;
    PyObject *tmp_isinstance_inst_5;
    PyObject *tmp_isinstance_inst_6;
    PyObject *tmp_isinstance_inst_7;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_isnot_3;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_make_exception_arg_4;
    PyObject *tmp_make_exception_arg_5;
    PyObject *tmp_make_exception_arg_6;
    PyObject *tmp_make_exception_arg_7;
    PyObject *tmp_make_exception_arg_8;
    PyObject *tmp_make_exception_arg_9;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    PyObject *tmp_operand_name_3;
    PyObject *tmp_operand_name_4;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    PyObject *tmp_raise_type_5;
    PyObject *tmp_raise_type_6;
    PyObject *tmp_raise_type_7;
    PyObject *tmp_raise_type_8;
    PyObject *tmp_raise_type_9;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_3b5cecfe08894161b4748375c5f5bb44 = NULL;

    struct Nuitka_FrameObject *frame_3b5cecfe08894161b4748375c5f5bb44;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3b5cecfe08894161b4748375c5f5bb44, codeobj_3b5cecfe08894161b4748375c5f5bb44, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3b5cecfe08894161b4748375c5f5bb44 = cache_frame_3b5cecfe08894161b4748375c5f5bb44;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3b5cecfe08894161b4748375c5f5bb44 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3b5cecfe08894161b4748375c5f5bb44 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_cert;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_x509 );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_x509 );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "x509" );
        exception_tb = NULL;

        exception_lineno = 118;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Certificate );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_operand_name_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "ooooooooo";
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
    tmp_isinstance_inst_2 = par_issuer;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_x509 );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_x509 );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "x509" );
        exception_tb = NULL;

        exception_lineno = 119;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Certificate );
    if ( tmp_isinstance_cls_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_operand_name_2 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    Py_DECREF( tmp_isinstance_cls_2 );
    if ( tmp_operand_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "ooooooooo";
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


        exception_lineno = 119;
        type_description_1 = "ooooooooo";
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
    tmp_make_exception_arg_1 = const_str_digest_6cf5b98336437d37c50bc673c82ea14f;
    frame_3b5cecfe08894161b4748375c5f5bb44->m_frame.f_lineno = 121;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 121;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__verify_algorithm );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__verify_algorithm );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_verify_algorithm" );
        exception_tb = NULL;

        exception_lineno = 123;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_algorithm;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_3b5cecfe08894161b4748375c5f5bb44->m_frame.f_lineno = 123;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_isinstance_inst_3 = par_this_update;

    CHECK_OBJECT( tmp_isinstance_inst_3 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_datetime );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "datetime" );
        exception_tb = NULL;

        exception_lineno = 124;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_datetime );
    if ( tmp_isinstance_cls_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
    Py_DECREF( tmp_isinstance_cls_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description_1 = "ooooooooo";
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
    tmp_make_exception_arg_2 = const_str_digest_1c9a992c5af933927b6653bf116d68fc;
    frame_3b5cecfe08894161b4748375c5f5bb44->m_frame.f_lineno = 125;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 125;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_compexpr_left_1 = par_next_update;

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
    tmp_isinstance_inst_4 = par_next_update;

    CHECK_OBJECT( tmp_isinstance_inst_4 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_datetime );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "datetime" );
        exception_tb = NULL;

        exception_lineno = 128;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_datetime );
    if ( tmp_isinstance_cls_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_operand_name_3 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_4, tmp_isinstance_cls_4 );
    Py_DECREF( tmp_isinstance_cls_4 );
    if ( tmp_operand_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_3 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        type_description_1 = "ooooooooo";
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


        exception_lineno = 128;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_make_exception_arg_3 = const_str_digest_f6672a4031538be2131c35c3a4d7b9d9;
    frame_3b5cecfe08894161b4748375c5f5bb44->m_frame.f_lineno = 130;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 130;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_assattr_name_1 = par_cert;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__cert, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_issuer;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__issuer, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_algorithm;

    CHECK_OBJECT( tmp_assattr_name_3 );
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__algorithm, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = par_this_update;

    CHECK_OBJECT( tmp_assattr_name_4 );
    tmp_assattr_target_4 = par_self;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__this_update, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_5 = par_next_update;

    CHECK_OBJECT( tmp_assattr_name_5 );
    tmp_assattr_target_5 = par_self;

    CHECK_OBJECT( tmp_assattr_target_5 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain__next_update, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_isinstance_inst_5 = par_cert_status;

    CHECK_OBJECT( tmp_isinstance_inst_5 );
    tmp_isinstance_cls_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPCertStatus );

    if (unlikely( tmp_isinstance_cls_5 == NULL ))
    {
        tmp_isinstance_cls_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OCSPCertStatus );
    }

    if ( tmp_isinstance_cls_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "OCSPCertStatus" );
        exception_tb = NULL;

        exception_lineno = 138;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_5, tmp_isinstance_cls_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_make_exception_arg_4 = const_str_digest_ecc40804a91b6e6178935f28a7360431;
    frame_3b5cecfe08894161b4748375c5f5bb44->m_frame.f_lineno = 139;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_4 };
        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_4 != NULL );
    exception_type = tmp_raise_type_4;
    exception_lineno = 139;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_compare_left_1 = par_cert_status;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPCertStatus );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OCSPCertStatus );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "OCSPCertStatus" );
        exception_tb = NULL;

        exception_lineno = 142;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_REVOKED );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_compare_left_2 = par_revocation_time;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_make_exception_arg_5 = const_str_digest_217f7df2bea3402123131c30ec62609c;
    frame_3b5cecfe08894161b4748375c5f5bb44->m_frame.f_lineno = 144;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_5 };
        tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_5 != NULL );
    exception_type = tmp_raise_type_5;
    exception_lineno = 144;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
    branch_no_6:;
    tmp_compare_left_3 = par_revocation_reason;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = Py_None;
    tmp_isnot_3 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if ( tmp_isnot_3 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_make_exception_arg_6 = const_str_digest_25293882a45b97196127daf10b677333;
    frame_3b5cecfe08894161b4748375c5f5bb44->m_frame.f_lineno = 149;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_6 };
        tmp_raise_type_6 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_6 != NULL );
    exception_type = tmp_raise_type_6;
    exception_lineno = 149;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
    branch_no_7:;
    goto branch_end_5;
    branch_no_5:;
    tmp_isinstance_inst_6 = par_revocation_time;

    CHECK_OBJECT( tmp_isinstance_inst_6 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_datetime );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "datetime" );
        exception_tb = NULL;

        exception_lineno = 154;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_datetime );
    if ( tmp_isinstance_cls_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_6, tmp_isinstance_cls_6 );
    Py_DECREF( tmp_isinstance_cls_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_8;
    }
    else
    {
        goto branch_yes_8;
    }
    branch_yes_8:;
    tmp_make_exception_arg_7 = const_str_digest_6bee51ce80640157396f88c651564342;
    frame_3b5cecfe08894161b4748375c5f5bb44->m_frame.f_lineno = 155;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_7 };
        tmp_raise_type_7 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_7 != NULL );
    exception_type = tmp_raise_type_7;
    exception_lineno = 155;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
    branch_no_8:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__convert_to_naive_utc_time );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__convert_to_naive_utc_time );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_convert_to_naive_utc_time" );
        exception_tb = NULL;

        exception_lineno = 157;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_revocation_time;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_3b5cecfe08894161b4748375c5f5bb44->m_frame.f_lineno = 157;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_revocation_time;
        assert( old != NULL );
        par_revocation_time = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_compare_left_4 = par_revocation_time;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__EARLIEST_UTC_TIME );

    if (unlikely( tmp_compare_right_4 == NULL ))
    {
        tmp_compare_right_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__EARLIEST_UTC_TIME );
    }

    if ( tmp_compare_right_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_EARLIEST_UTC_TIME" );
        exception_tb = NULL;

        exception_lineno = 158;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_make_exception_arg_8 = const_str_digest_d229c9eed643eee60d1ab52111e943a6;
    frame_3b5cecfe08894161b4748375c5f5bb44->m_frame.f_lineno = 159;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_8 };
        tmp_raise_type_8 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_8 != NULL );
    exception_type = tmp_raise_type_8;
    exception_lineno = 159;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
    branch_no_9:;
    tmp_compexpr_left_2 = par_revocation_reason;

    CHECK_OBJECT( tmp_compexpr_left_2 );
    tmp_compexpr_right_2 = Py_None;
    tmp_and_left_value_2 = BOOL_FROM( tmp_compexpr_left_2 != tmp_compexpr_right_2 );
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    assert( !(tmp_and_left_truth_2 == -1) );
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    tmp_isinstance_inst_7 = par_revocation_reason;

    CHECK_OBJECT( tmp_isinstance_inst_7 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_x509 );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_x509 );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "x509" );
        exception_tb = NULL;

        exception_lineno = 164;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ReasonFlags );
    if ( tmp_isinstance_cls_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_operand_name_4 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_7, tmp_isinstance_cls_7 );
    Py_DECREF( tmp_isinstance_cls_7 );
    if ( tmp_operand_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_2 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_4 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_3 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_cond_value_3 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_make_exception_arg_9 = const_str_digest_e6024771248f11d8a1f2216c5ac092ae;
    frame_3b5cecfe08894161b4748375c5f5bb44->m_frame.f_lineno = 166;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_9 };
        tmp_raise_type_9 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_9 != NULL );
    exception_type = tmp_raise_type_9;
    exception_lineno = 166;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
    branch_no_10:;
    branch_end_5:;
    tmp_assattr_name_6 = par_cert_status;

    CHECK_OBJECT( tmp_assattr_name_6 );
    tmp_assattr_target_6 = par_self;

    CHECK_OBJECT( tmp_assattr_target_6 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain__cert_status, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_7 = par_revocation_time;

    CHECK_OBJECT( tmp_assattr_name_7 );
    tmp_assattr_target_7 = par_self;

    CHECK_OBJECT( tmp_assattr_target_7 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain__revocation_time, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_8 = par_revocation_reason;

    CHECK_OBJECT( tmp_assattr_name_8 );
    tmp_assattr_target_8 = par_self;

    CHECK_OBJECT( tmp_assattr_target_8 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain__revocation_reason, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b5cecfe08894161b4748375c5f5bb44 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b5cecfe08894161b4748375c5f5bb44 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3b5cecfe08894161b4748375c5f5bb44, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3b5cecfe08894161b4748375c5f5bb44->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3b5cecfe08894161b4748375c5f5bb44, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3b5cecfe08894161b4748375c5f5bb44,
        type_description_1,
        par_self,
        par_cert,
        par_issuer,
        par_algorithm,
        par_cert_status,
        par_this_update,
        par_next_update,
        par_revocation_time,
        par_revocation_reason
    );


    // Release cached frame.
    if ( frame_3b5cecfe08894161b4748375c5f5bb44 == cache_frame_3b5cecfe08894161b4748375c5f5bb44 )
    {
        Py_DECREF( frame_3b5cecfe08894161b4748375c5f5bb44 );
    }
    cache_frame_3b5cecfe08894161b4748375c5f5bb44 = NULL;

    assertFrameObject( frame_3b5cecfe08894161b4748375c5f5bb44 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_8___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_revocation_reason );
    Py_DECREF( par_revocation_reason );
    par_revocation_reason = NULL;

    CHECK_OBJECT( (PyObject *)par_cert_status );
    Py_DECREF( par_cert_status );
    par_cert_status = NULL;

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    CHECK_OBJECT( (PyObject *)par_revocation_time );
    Py_DECREF( par_revocation_time );
    par_revocation_time = NULL;

    CHECK_OBJECT( (PyObject *)par_next_update );
    Py_DECREF( par_next_update );
    par_next_update = NULL;

    CHECK_OBJECT( (PyObject *)par_this_update );
    Py_DECREF( par_this_update );
    par_this_update = NULL;

    CHECK_OBJECT( (PyObject *)par_issuer );
    Py_DECREF( par_issuer );
    par_issuer = NULL;

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

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_revocation_reason );
    Py_DECREF( par_revocation_reason );
    par_revocation_reason = NULL;

    CHECK_OBJECT( (PyObject *)par_cert_status );
    Py_DECREF( par_cert_status );
    par_cert_status = NULL;

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    Py_XDECREF( par_revocation_time );
    par_revocation_time = NULL;

    CHECK_OBJECT( (PyObject *)par_next_update );
    Py_DECREF( par_next_update );
    par_next_update = NULL;

    CHECK_OBJECT( (PyObject *)par_this_update );
    Py_DECREF( par_this_update );
    par_this_update = NULL;

    CHECK_OBJECT( (PyObject *)par_issuer );
    Py_DECREF( par_issuer );
    par_issuer = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_8___init__ );
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


static PyObject *impl_cryptography$x509$ocsp$$$function_9___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_response = python_pars[ 1 ];
    PyObject *par_responder_id = python_pars[ 2 ];
    PyObject *par_certs = python_pars[ 3 ];
    PyObject *par_extensions = python_pars[ 4 ];
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
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_c6bf55708d92134d5d97d9403f013ceb = NULL;

    struct Nuitka_FrameObject *frame_c6bf55708d92134d5d97d9403f013ceb;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c6bf55708d92134d5d97d9403f013ceb, codeobj_c6bf55708d92134d5d97d9403f013ceb, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c6bf55708d92134d5d97d9403f013ceb = cache_frame_c6bf55708d92134d5d97d9403f013ceb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c6bf55708d92134d5d97d9403f013ceb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c6bf55708d92134d5d97d9403f013ceb ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_response;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__response, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_responder_id;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__responder_id, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_certs;

    CHECK_OBJECT( tmp_assattr_name_3 );
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__certs, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = par_extensions;

    CHECK_OBJECT( tmp_assattr_name_4 );
    tmp_assattr_target_4 = par_self;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__extensions, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c6bf55708d92134d5d97d9403f013ceb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c6bf55708d92134d5d97d9403f013ceb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c6bf55708d92134d5d97d9403f013ceb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c6bf55708d92134d5d97d9403f013ceb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c6bf55708d92134d5d97d9403f013ceb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c6bf55708d92134d5d97d9403f013ceb,
        type_description_1,
        par_self,
        par_response,
        par_responder_id,
        par_certs,
        par_extensions
    );


    // Release cached frame.
    if ( frame_c6bf55708d92134d5d97d9403f013ceb == cache_frame_c6bf55708d92134d5d97d9403f013ceb )
    {
        Py_DECREF( frame_c6bf55708d92134d5d97d9403f013ceb );
    }
    cache_frame_c6bf55708d92134d5d97d9403f013ceb = NULL;

    assertFrameObject( frame_c6bf55708d92134d5d97d9403f013ceb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_9___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_extensions );
    Py_DECREF( par_extensions );
    par_extensions = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_certs );
    Py_DECREF( par_certs );
    par_certs = NULL;

    CHECK_OBJECT( (PyObject *)par_response );
    Py_DECREF( par_response );
    par_response = NULL;

    CHECK_OBJECT( (PyObject *)par_responder_id );
    Py_DECREF( par_responder_id );
    par_responder_id = NULL;

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

    CHECK_OBJECT( (PyObject *)par_extensions );
    Py_DECREF( par_extensions );
    par_extensions = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_certs );
    Py_DECREF( par_certs );
    par_certs = NULL;

    CHECK_OBJECT( (PyObject *)par_response );
    Py_DECREF( par_response );
    par_response = NULL;

    CHECK_OBJECT( (PyObject *)par_responder_id );
    Py_DECREF( par_responder_id );
    par_responder_id = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_9___init__ );
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


static PyObject *impl_cryptography$x509$ocsp$$$function_10_add_response( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_cert = python_pars[ 1 ];
    PyObject *par_issuer = python_pars[ 2 ];
    PyObject *par_algorithm = python_pars[ 3 ];
    PyObject *par_cert_status = python_pars[ 4 ];
    PyObject *par_this_update = python_pars[ 5 ];
    PyObject *par_next_update = python_pars[ 6 ];
    PyObject *par_revocation_time = python_pars[ 7 ];
    PyObject *par_revocation_reason = python_pars[ 8 ];
    PyObject *var_singleresp = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_isnot_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    static struct Nuitka_FrameObject *cache_frame_4d13a29968c79504215680258d6c7f94 = NULL;

    struct Nuitka_FrameObject *frame_4d13a29968c79504215680258d6c7f94;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4d13a29968c79504215680258d6c7f94, codeobj_4d13a29968c79504215680258d6c7f94, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4d13a29968c79504215680258d6c7f94 = cache_frame_4d13a29968c79504215680258d6c7f94;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4d13a29968c79504215680258d6c7f94 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4d13a29968c79504215680258d6c7f94 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__response );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_417bc1351879048743830a24c91ef13e;
    frame_4d13a29968c79504215680258d6c7f94->m_frame.f_lineno = 187;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 187;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__SingleResponse );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__SingleResponse );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_SingleResponse" );
        exception_tb = NULL;

        exception_lineno = 189;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_cert;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_issuer;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_algorithm;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = par_cert_status;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_args_element_name_5 = par_this_update;

    CHECK_OBJECT( tmp_args_element_name_5 );
    tmp_args_element_name_6 = par_next_update;

    CHECK_OBJECT( tmp_args_element_name_6 );
    tmp_args_element_name_7 = par_revocation_time;

    CHECK_OBJECT( tmp_args_element_name_7 );
    tmp_args_element_name_8 = par_revocation_reason;

    CHECK_OBJECT( tmp_args_element_name_8 );
    frame_4d13a29968c79504215680258d6c7f94->m_frame.f_lineno = 189;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS8( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_singleresp == NULL );
    var_singleresp = tmp_assign_source_1;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPResponseBuilder );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OCSPResponseBuilder );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "OCSPResponseBuilder" );
        exception_tb = NULL;

        exception_lineno = 193;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = var_singleresp;

    CHECK_OBJECT( tmp_args_element_name_9 );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__responder_id );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__certs );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_10 );

        exception_lineno = 195;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__extensions );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_10 );
        Py_DECREF( tmp_args_element_name_11 );

        exception_lineno = 195;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_4d13a29968c79504215680258d6c7f94->m_frame.f_lineno = 193;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    Py_DECREF( tmp_args_element_name_11 );
    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d13a29968c79504215680258d6c7f94 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d13a29968c79504215680258d6c7f94 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d13a29968c79504215680258d6c7f94 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4d13a29968c79504215680258d6c7f94, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4d13a29968c79504215680258d6c7f94->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4d13a29968c79504215680258d6c7f94, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4d13a29968c79504215680258d6c7f94,
        type_description_1,
        par_self,
        par_cert,
        par_issuer,
        par_algorithm,
        par_cert_status,
        par_this_update,
        par_next_update,
        par_revocation_time,
        par_revocation_reason,
        var_singleresp
    );


    // Release cached frame.
    if ( frame_4d13a29968c79504215680258d6c7f94 == cache_frame_4d13a29968c79504215680258d6c7f94 )
    {
        Py_DECREF( frame_4d13a29968c79504215680258d6c7f94 );
    }
    cache_frame_4d13a29968c79504215680258d6c7f94 = NULL;

    assertFrameObject( frame_4d13a29968c79504215680258d6c7f94 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_10_add_response );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_singleresp );
    Py_DECREF( var_singleresp );
    var_singleresp = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_revocation_reason );
    Py_DECREF( par_revocation_reason );
    par_revocation_reason = NULL;

    CHECK_OBJECT( (PyObject *)par_cert_status );
    Py_DECREF( par_cert_status );
    par_cert_status = NULL;

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    CHECK_OBJECT( (PyObject *)par_revocation_time );
    Py_DECREF( par_revocation_time );
    par_revocation_time = NULL;

    CHECK_OBJECT( (PyObject *)par_next_update );
    Py_DECREF( par_next_update );
    par_next_update = NULL;

    CHECK_OBJECT( (PyObject *)par_this_update );
    Py_DECREF( par_this_update );
    par_this_update = NULL;

    CHECK_OBJECT( (PyObject *)par_issuer );
    Py_DECREF( par_issuer );
    par_issuer = NULL;

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

    Py_XDECREF( var_singleresp );
    var_singleresp = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_revocation_reason );
    Py_DECREF( par_revocation_reason );
    par_revocation_reason = NULL;

    CHECK_OBJECT( (PyObject *)par_cert_status );
    Py_DECREF( par_cert_status );
    par_cert_status = NULL;

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    CHECK_OBJECT( (PyObject *)par_revocation_time );
    Py_DECREF( par_revocation_time );
    par_revocation_time = NULL;

    CHECK_OBJECT( (PyObject *)par_next_update );
    Py_DECREF( par_next_update );
    par_next_update = NULL;

    CHECK_OBJECT( (PyObject *)par_this_update );
    Py_DECREF( par_this_update );
    par_this_update = NULL;

    CHECK_OBJECT( (PyObject *)par_issuer );
    Py_DECREF( par_issuer );
    par_issuer = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_10_add_response );
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


static PyObject *impl_cryptography$x509$ocsp$$$function_11_responder_id( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_encoding = python_pars[ 1 ];
    PyObject *par_responder_cert = python_pars[ 2 ];
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    bool tmp_isnot_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_0378db3d07c92996c6d0447d61622e6c = NULL;

    struct Nuitka_FrameObject *frame_0378db3d07c92996c6d0447d61622e6c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0378db3d07c92996c6d0447d61622e6c, codeobj_0378db3d07c92996c6d0447d61622e6c, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0378db3d07c92996c6d0447d61622e6c = cache_frame_0378db3d07c92996c6d0447d61622e6c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0378db3d07c92996c6d0447d61622e6c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0378db3d07c92996c6d0447d61622e6c ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__responder_id );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_089f90728c4b730f63c7d992ccdcebde;
    frame_0378db3d07c92996c6d0447d61622e6c->m_frame.f_lineno = 200;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 200;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_isinstance_inst_1 = par_responder_cert;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_x509 );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_x509 );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "x509" );
        exception_tb = NULL;

        exception_lineno = 201;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Certificate );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
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
    tmp_make_exception_arg_2 = const_str_digest_7cdebb5f9ad33f02224a085838631714;
    frame_0378db3d07c92996c6d0447d61622e6c->m_frame.f_lineno = 202;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 202;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_isinstance_inst_2 = par_encoding;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPResponderEncoding );

    if (unlikely( tmp_isinstance_cls_2 == NULL ))
    {
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OCSPResponderEncoding );
    }

    if ( tmp_isinstance_cls_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "OCSPResponderEncoding" );
        exception_tb = NULL;

        exception_lineno = 203;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
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
    tmp_make_exception_arg_3 = const_str_digest_c7ef7d093c77366587d3ae719b523a52;
    frame_0378db3d07c92996c6d0447d61622e6c->m_frame.f_lineno = 204;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 204;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPResponseBuilder );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OCSPResponseBuilder );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "OCSPResponseBuilder" );
        exception_tb = NULL;

        exception_lineno = 208;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__response );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_responder_cert;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_encoding;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_1 );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__certs );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 210;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__extensions );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 210;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_0378db3d07c92996c6d0447d61622e6c->m_frame.f_lineno = 208;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0378db3d07c92996c6d0447d61622e6c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0378db3d07c92996c6d0447d61622e6c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0378db3d07c92996c6d0447d61622e6c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0378db3d07c92996c6d0447d61622e6c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0378db3d07c92996c6d0447d61622e6c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0378db3d07c92996c6d0447d61622e6c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0378db3d07c92996c6d0447d61622e6c,
        type_description_1,
        par_self,
        par_encoding,
        par_responder_cert
    );


    // Release cached frame.
    if ( frame_0378db3d07c92996c6d0447d61622e6c == cache_frame_0378db3d07c92996c6d0447d61622e6c )
    {
        Py_DECREF( frame_0378db3d07c92996c6d0447d61622e6c );
    }
    cache_frame_0378db3d07c92996c6d0447d61622e6c = NULL;

    assertFrameObject( frame_0378db3d07c92996c6d0447d61622e6c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_11_responder_id );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_responder_cert );
    Py_DECREF( par_responder_cert );
    par_responder_cert = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

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

    CHECK_OBJECT( (PyObject *)par_responder_cert );
    Py_DECREF( par_responder_cert );
    par_responder_cert = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_11_responder_id );
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


static PyObject *impl_cryptography$x509$ocsp$$$function_12_certificates( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_certs = python_pars[ 1 ];
    PyObject *tmp_genexpr_1__$0 = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    static struct Nuitka_FrameObject *cache_frame_31d339f4f915621e9d5c7e9a303e3068 = NULL;

    struct Nuitka_FrameObject *frame_31d339f4f915621e9d5c7e9a303e3068;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_31d339f4f915621e9d5c7e9a303e3068, codeobj_31d339f4f915621e9d5c7e9a303e3068, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *) );
    frame_31d339f4f915621e9d5c7e9a303e3068 = cache_frame_31d339f4f915621e9d5c7e9a303e3068;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_31d339f4f915621e9d5c7e9a303e3068 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_31d339f4f915621e9d5c7e9a303e3068 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__certs );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_65e7a1b514a856378ca7ddbf66ed88d7;
    frame_31d339f4f915621e9d5c7e9a303e3068->m_frame.f_lineno = 215;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 215;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_list_arg_1 = par_certs;

    CHECK_OBJECT( tmp_list_arg_1 );
    tmp_assign_source_1 = PySequence_List( tmp_list_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_certs;
        assert( old != NULL );
        par_certs = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_len_arg_1 = par_certs;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 217;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_2 = const_str_digest_79c50ec227b35df8e19f6bd36cdc474a;
    frame_31d339f4f915621e9d5c7e9a303e3068->m_frame.f_lineno = 218;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 218;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_all );
    assert( tmp_called_name_1 != NULL );
    tmp_iter_arg_1 = par_certs;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( tmp_genexpr_1__$0 == NULL );
    tmp_genexpr_1__$0 = tmp_assign_source_2;

    // Tried code:
    tmp_outline_return_value_1 = Nuitka_Generator_New(
        cryptography$x509$ocsp$$$function_12_certificates$$$genexpr_1_genexpr_context,
        module_cryptography$x509$ocsp,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_d8abbcc1c590aa9bca0841d3f3f51148,
        1
    );

    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );
    assert( Py_SIZE( tmp_outline_return_value_1 ) >= 1 ); 


    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_12_certificates );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
    Py_DECREF( tmp_genexpr_1__$0 );
    tmp_genexpr_1__$0 = NULL;

    goto outline_result_1;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
    Py_DECREF( tmp_genexpr_1__$0 );
    tmp_genexpr_1__$0 = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_12_certificates );
    return NULL;
    outline_result_1:;
    tmp_args_element_name_1 = tmp_outline_return_value_1;
    frame_31d339f4f915621e9d5c7e9a303e3068->m_frame.f_lineno = 219;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 219;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_make_exception_arg_3 = const_str_digest_135d19079028306a4c20e62f7315aed3;
    frame_31d339f4f915621e9d5c7e9a303e3068->m_frame.f_lineno = 220;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 220;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPResponseBuilder );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OCSPResponseBuilder );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "OCSPResponseBuilder" );
        exception_tb = NULL;

        exception_lineno = 221;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__response );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__responder_id );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 222;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_certs;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__extensions );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 223;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_31d339f4f915621e9d5c7e9a303e3068->m_frame.f_lineno = 221;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_31d339f4f915621e9d5c7e9a303e3068 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_31d339f4f915621e9d5c7e9a303e3068 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_31d339f4f915621e9d5c7e9a303e3068 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_31d339f4f915621e9d5c7e9a303e3068, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_31d339f4f915621e9d5c7e9a303e3068->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_31d339f4f915621e9d5c7e9a303e3068, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_31d339f4f915621e9d5c7e9a303e3068,
        type_description_1,
        par_self,
        par_certs
    );


    // Release cached frame.
    if ( frame_31d339f4f915621e9d5c7e9a303e3068 == cache_frame_31d339f4f915621e9d5c7e9a303e3068 )
    {
        Py_DECREF( frame_31d339f4f915621e9d5c7e9a303e3068 );
    }
    cache_frame_31d339f4f915621e9d5c7e9a303e3068 = NULL;

    assertFrameObject( frame_31d339f4f915621e9d5c7e9a303e3068 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_12_certificates );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_certs );
    Py_DECREF( par_certs );
    par_certs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_certs );
    Py_DECREF( par_certs );
    par_certs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_12_certificates );
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



#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
struct cryptography$x509$ocsp$$$function_12_certificates$$$genexpr_1_genexpr_locals {
    PyObject *var_x
    PyObject *tmp_iter_value_0
    PyObject *exception_type
    PyObject *exception_value
    PyTracebackObject *exception_tb
    int exception_lineno
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_value_name_1;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *cryptography$x509$ocsp$$$function_12_certificates$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void cryptography$x509$ocsp$$$function_12_certificates$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_x = NULL;
    PyObject *tmp_iter_value_0 = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_d8abbcc1c590aa9bca0841d3f3f51148, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_frame_generator;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.

    PyThreadState *thread_state = PyThreadState_GET();

    generator->m_frame->m_frame.f_exc_type = thread_state->exc_type;
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = thread_state->exc_value;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = thread_state->exc_traceback;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    // Tried code:
    if ( generator->m_closure[0] == NULL )
    {
        tmp_value_name_1 = NULL;
    }
    else
    {
        tmp_value_name_1 = PyCell_GET( generator->m_closure[0] );
    }

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_1 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "No";
        exception_lineno = 219;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_iter_value_0;
        tmp_iter_value_0 = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_1 = exception_keeper_type_1;
    tmp_compare_right_1 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 219;
        type_description_1 = "No";
        goto try_except_handler_2;
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
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_1;
    branch_no_1:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    branch_end_1:;
    // End of try:
    try_end_1:;
    tmp_assign_source_2 = tmp_iter_value_0;

    CHECK_OBJECT( tmp_assign_source_2 );
    {
        PyObject *old = var_x;
        var_x = tmp_assign_source_2;
        Py_INCREF( var_x );
        Py_XDECREF( old );
    }

    tmp_isinstance_inst_1 = var_x;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_x509 );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_x509 );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "x509" );
        exception_tb = NULL;

        exception_lineno = 219;
        type_description_1 = "No";
        goto try_except_handler_2;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Certificate );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    tmp_expression_name_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    Py_INCREF( tmp_expression_name_1 );
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( exception_type ) )
    {
        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, generator->m_frame, exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            type_description_1,
            NULL,
            var_x
        );


        // Release cached frame.
        if ( generator->m_frame == cache_frame_generator )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_frame_generator = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    goto try_end_3;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_x );
    var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
    return NULL;
#else
    generator->m_yielded = NULL;
    return;
#endif

    function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
    return NULL;
#else
    generator->m_yielded = NULL;
    return;
#endif

}


static PyObject *impl_cryptography$x509$ocsp$$$function_13_add_extension( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_extension = python_pars[ 1 ];
    PyObject *par_critical = python_pars[ 2 ];
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f87eeabacd9b8d4cb98cc1f488c9386b = NULL;

    struct Nuitka_FrameObject *frame_f87eeabacd9b8d4cb98cc1f488c9386b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f87eeabacd9b8d4cb98cc1f488c9386b, codeobj_f87eeabacd9b8d4cb98cc1f488c9386b, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f87eeabacd9b8d4cb98cc1f488c9386b = cache_frame_f87eeabacd9b8d4cb98cc1f488c9386b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f87eeabacd9b8d4cb98cc1f488c9386b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f87eeabacd9b8d4cb98cc1f488c9386b ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_extension;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_x509 );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_x509 );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "x509" );
        exception_tb = NULL;

        exception_lineno = 227;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ExtensionType );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
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
    tmp_make_exception_arg_1 = const_str_digest_f0b1544196c3e6daaf368b98ad3c6594;
    frame_f87eeabacd9b8d4cb98cc1f488c9386b->m_frame.f_lineno = 228;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 228;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_x509 );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_x509 );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "x509" );
        exception_tb = NULL;

        exception_lineno = 230;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Extension );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_extension;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_oid );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 230;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_critical;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_extension;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_f87eeabacd9b8d4cb98cc1f488c9386b->m_frame.f_lineno = 230;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_extension;
        assert( old != NULL );
        par_extension = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__reject_duplicate_extension );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__reject_duplicate_extension );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_reject_duplicate_extension" );
        exception_tb = NULL;

        exception_lineno = 231;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_extension;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__extensions );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_f87eeabacd9b8d4cb98cc1f488c9386b->m_frame.f_lineno = 231;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPResponseBuilder );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OCSPResponseBuilder );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "OCSPResponseBuilder" );
        exception_tb = NULL;

        exception_lineno = 233;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__response );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__responder_id );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_6 );

        exception_lineno = 234;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = par_self;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__certs );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_6 );
        Py_DECREF( tmp_args_element_name_7 );

        exception_lineno = 235;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = par_self;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__extensions );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_6 );
        Py_DECREF( tmp_args_element_name_7 );
        Py_DECREF( tmp_args_element_name_8 );

        exception_lineno = 235;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = PyList_New( 1 );
    tmp_list_element_1 = par_extension;

    CHECK_OBJECT( tmp_list_element_1 );
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_right_name_1, 0, tmp_list_element_1 );
    tmp_args_element_name_9 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_6 );
        Py_DECREF( tmp_args_element_name_7 );
        Py_DECREF( tmp_args_element_name_8 );

        exception_lineno = 235;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_f87eeabacd9b8d4cb98cc1f488c9386b->m_frame.f_lineno = 233;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    Py_DECREF( tmp_args_element_name_7 );
    Py_DECREF( tmp_args_element_name_8 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f87eeabacd9b8d4cb98cc1f488c9386b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f87eeabacd9b8d4cb98cc1f488c9386b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f87eeabacd9b8d4cb98cc1f488c9386b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f87eeabacd9b8d4cb98cc1f488c9386b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f87eeabacd9b8d4cb98cc1f488c9386b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f87eeabacd9b8d4cb98cc1f488c9386b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f87eeabacd9b8d4cb98cc1f488c9386b,
        type_description_1,
        par_self,
        par_extension,
        par_critical
    );


    // Release cached frame.
    if ( frame_f87eeabacd9b8d4cb98cc1f488c9386b == cache_frame_f87eeabacd9b8d4cb98cc1f488c9386b )
    {
        Py_DECREF( frame_f87eeabacd9b8d4cb98cc1f488c9386b );
    }
    cache_frame_f87eeabacd9b8d4cb98cc1f488c9386b = NULL;

    assertFrameObject( frame_f87eeabacd9b8d4cb98cc1f488c9386b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_13_add_extension );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_critical );
    Py_DECREF( par_critical );
    par_critical = NULL;

    CHECK_OBJECT( (PyObject *)par_extension );
    Py_DECREF( par_extension );
    par_extension = NULL;

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

    CHECK_OBJECT( (PyObject *)par_critical );
    Py_DECREF( par_critical );
    par_critical = NULL;

    CHECK_OBJECT( (PyObject *)par_extension );
    Py_DECREF( par_extension );
    par_extension = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_13_add_extension );
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


static PyObject *impl_cryptography$x509$ocsp$$$function_14_sign( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_private_key = python_pars[ 1 ];
    PyObject *par_algorithm = python_pars[ 2 ];
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    bool tmp_isnot_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_make_exception_arg_4;
    PyObject *tmp_name_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_105c479a6dfe474c02d9cbc52c18c8ce = NULL;

    struct Nuitka_FrameObject *frame_105c479a6dfe474c02d9cbc52c18c8ce;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_105c479a6dfe474c02d9cbc52c18c8ce, codeobj_105c479a6dfe474c02d9cbc52c18c8ce, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_105c479a6dfe474c02d9cbc52c18c8ce = cache_frame_105c479a6dfe474c02d9cbc52c18c8ce;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_105c479a6dfe474c02d9cbc52c18c8ce );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_105c479a6dfe474c02d9cbc52c18c8ce ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_digest_9abb9f40508debfa3aae6d9135753f7e;
    tmp_globals_name_1 = (PyObject *)moduledict_cryptography$x509$ocsp;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_backend_tuple;
    tmp_level_name_1 = const_int_0;
    frame_105c479a6dfe474c02d9cbc52c18c8ce->m_frame.f_lineno = 239;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_backend );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_backend == NULL );
    var_backend = tmp_assign_source_1;

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__response );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_64523dea7d1e99bb72e8a8784eaf7d34;
    frame_105c479a6dfe474c02d9cbc52c18c8ce->m_frame.f_lineno = 241;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 241;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__responder_id );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_2 = const_str_digest_60329b99acc2facf1fb40d9cbc14ffa4;
    frame_105c479a6dfe474c02d9cbc52c18c8ce->m_frame.f_lineno = 243;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 243;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_isinstance_inst_1 = par_private_key;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = PyTuple_New( 2 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_ed25519 );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ed25519 );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_isinstance_cls_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ed25519" );
        exception_tb = NULL;

        exception_lineno = 246;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Ed25519PrivateKey );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_isinstance_cls_1 );

        exception_lineno = 246;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 0, tmp_tuple_element_1 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_ed448 );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ed448 );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_isinstance_cls_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ed448" );
        exception_tb = NULL;

        exception_lineno = 246;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_Ed448PrivateKey );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_isinstance_cls_1 );

        exception_lineno = 246;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 1, tmp_tuple_element_1 );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        type_description_1 = "oooo";
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
    tmp_compare_left_3 = par_algorithm;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_make_exception_arg_3 = const_str_digest_6e11655eaabcf2b7e9ae4622616bde0a;
    frame_105c479a6dfe474c02d9cbc52c18c8ce->m_frame.f_lineno = 248;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 248;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_4:;
    goto branch_end_3;
    branch_no_3:;
    tmp_isinstance_inst_2 = par_algorithm;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_hashes );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "hashes" );
        exception_tb = NULL;

        exception_lineno = 251;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_HashAlgorithm );
    if ( tmp_isinstance_cls_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    Py_DECREF( tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_5;
    }
    else
    {
        goto branch_yes_5;
    }
    branch_yes_5:;
    tmp_make_exception_arg_4 = const_str_digest_7b04aff9d25a2baa76a35cbb646b9d21;
    frame_105c479a6dfe474c02d9cbc52c18c8ce->m_frame.f_lineno = 252;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_4 };
        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_4 != NULL );
    exception_type = tmp_raise_type_4;
    exception_lineno = 252;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_5:;
    branch_end_3:;
    tmp_source_name_6 = var_backend;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_create_ocsp_response );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPResponseStatus );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OCSPResponseStatus );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "OCSPResponseStatus" );
        exception_tb = NULL;

        exception_lineno = 255;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_SUCCESSFUL );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 255;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_self;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_private_key;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = par_algorithm;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_105c479a6dfe474c02d9cbc52c18c8ce->m_frame.f_lineno = 254;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_105c479a6dfe474c02d9cbc52c18c8ce );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_105c479a6dfe474c02d9cbc52c18c8ce );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_105c479a6dfe474c02d9cbc52c18c8ce );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_105c479a6dfe474c02d9cbc52c18c8ce, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_105c479a6dfe474c02d9cbc52c18c8ce->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_105c479a6dfe474c02d9cbc52c18c8ce, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_105c479a6dfe474c02d9cbc52c18c8ce,
        type_description_1,
        par_self,
        par_private_key,
        par_algorithm,
        var_backend
    );


    // Release cached frame.
    if ( frame_105c479a6dfe474c02d9cbc52c18c8ce == cache_frame_105c479a6dfe474c02d9cbc52c18c8ce )
    {
        Py_DECREF( frame_105c479a6dfe474c02d9cbc52c18c8ce );
    }
    cache_frame_105c479a6dfe474c02d9cbc52c18c8ce = NULL;

    assertFrameObject( frame_105c479a6dfe474c02d9cbc52c18c8ce );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_14_sign );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_private_key );
    Py_DECREF( par_private_key );
    par_private_key = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)var_backend );
    Py_DECREF( var_backend );
    var_backend = NULL;

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

    CHECK_OBJECT( (PyObject *)par_private_key );
    Py_DECREF( par_private_key );
    par_private_key = NULL;

    CHECK_OBJECT( (PyObject *)par_algorithm );
    Py_DECREF( par_algorithm );
    par_algorithm = NULL;

    Py_XDECREF( var_backend );
    var_backend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_14_sign );
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


static PyObject *impl_cryptography$x509$ocsp$$$function_15_build_unsuccessful( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_response_status = python_pars[ 1 ];
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_2c832f873f4ed51090ad848d1659148a = NULL;

    struct Nuitka_FrameObject *frame_2c832f873f4ed51090ad848d1659148a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2c832f873f4ed51090ad848d1659148a, codeobj_2c832f873f4ed51090ad848d1659148a, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2c832f873f4ed51090ad848d1659148a = cache_frame_2c832f873f4ed51090ad848d1659148a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2c832f873f4ed51090ad848d1659148a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2c832f873f4ed51090ad848d1659148a ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_digest_9abb9f40508debfa3aae6d9135753f7e;
    tmp_globals_name_1 = (PyObject *)moduledict_cryptography$x509$ocsp;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_backend_tuple;
    tmp_level_name_1 = const_int_0;
    frame_2c832f873f4ed51090ad848d1659148a->m_frame.f_lineno = 260;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_backend );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_backend == NULL );
    var_backend = tmp_assign_source_1;

    tmp_isinstance_inst_1 = par_response_status;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPResponseStatus );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OCSPResponseStatus );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "OCSPResponseStatus" );
        exception_tb = NULL;

        exception_lineno = 261;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 261;
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
    tmp_make_exception_arg_1 = const_str_digest_09946f148ee0372feb9a08e6dda8281c;
    frame_2c832f873f4ed51090ad848d1659148a->m_frame.f_lineno = 262;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 262;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_compare_left_1 = par_response_status;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPResponseStatus );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OCSPResponseStatus );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "OCSPResponseStatus" );
        exception_tb = NULL;

        exception_lineno = 265;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_SUCCESSFUL );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 265;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_2 = const_str_digest_d320c4f96061871a2ea480cb45f84c6e;
    frame_2c832f873f4ed51090ad848d1659148a->m_frame.f_lineno = 266;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 266;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_called_instance_1 = var_backend;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_response_status;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = Py_None;
    tmp_args_element_name_3 = Py_None;
    tmp_args_element_name_4 = Py_None;
    frame_2c832f873f4ed51090ad848d1659148a->m_frame.f_lineno = 268;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_return_value = CALL_METHOD_WITH_ARGS4( tmp_called_instance_1, const_str_plain_create_ocsp_response, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2c832f873f4ed51090ad848d1659148a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2c832f873f4ed51090ad848d1659148a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2c832f873f4ed51090ad848d1659148a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2c832f873f4ed51090ad848d1659148a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2c832f873f4ed51090ad848d1659148a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2c832f873f4ed51090ad848d1659148a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2c832f873f4ed51090ad848d1659148a,
        type_description_1,
        par_cls,
        par_response_status,
        var_backend
    );


    // Release cached frame.
    if ( frame_2c832f873f4ed51090ad848d1659148a == cache_frame_2c832f873f4ed51090ad848d1659148a )
    {
        Py_DECREF( frame_2c832f873f4ed51090ad848d1659148a );
    }
    cache_frame_2c832f873f4ed51090ad848d1659148a = NULL;

    assertFrameObject( frame_2c832f873f4ed51090ad848d1659148a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_15_build_unsuccessful );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_response_status );
    Py_DECREF( par_response_status );
    par_response_status = NULL;

    CHECK_OBJECT( (PyObject *)var_backend );
    Py_DECREF( var_backend );
    var_backend = NULL;

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

    CHECK_OBJECT( (PyObject *)par_response_status );
    Py_DECREF( par_response_status );
    par_response_status = NULL;

    Py_XDECREF( var_backend );
    var_backend = NULL;

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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_15_build_unsuccessful );
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


static PyObject *impl_cryptography$x509$ocsp$$$function_16_issuer_key_hash( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_16_issuer_key_hash );
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_16_issuer_key_hash );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$x509$ocsp$$$function_17_issuer_name_hash( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_17_issuer_name_hash );
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_17_issuer_name_hash );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$x509$ocsp$$$function_18_hash_algorithm( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_18_hash_algorithm );
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_18_hash_algorithm );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$x509$ocsp$$$function_19_serial_number( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_19_serial_number );
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_19_serial_number );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$x509$ocsp$$$function_20_public_bytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_encoding = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_20_public_bytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_20_public_bytes );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$x509$ocsp$$$function_21_extensions( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_21_extensions );
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_21_extensions );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$x509$ocsp$$$function_22_response_status( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_22_response_status );
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_22_response_status );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$x509$ocsp$$$function_23_signature_algorithm_oid( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_23_signature_algorithm_oid );
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_23_signature_algorithm_oid );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$x509$ocsp$$$function_24_signature_hash_algorithm( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_24_signature_hash_algorithm );
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_24_signature_hash_algorithm );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$x509$ocsp$$$function_25_signature( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_25_signature );
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_25_signature );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$x509$ocsp$$$function_26_tbs_response_bytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_26_tbs_response_bytes );
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_26_tbs_response_bytes );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$x509$ocsp$$$function_27_certificates( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_27_certificates );
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_27_certificates );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$x509$ocsp$$$function_28_responder_key_hash( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_28_responder_key_hash );
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_28_responder_key_hash );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$x509$ocsp$$$function_29_responder_name( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_29_responder_name );
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_29_responder_name );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$x509$ocsp$$$function_30_produced_at( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_30_produced_at );
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_30_produced_at );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$x509$ocsp$$$function_31_certificate_status( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_31_certificate_status );
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_31_certificate_status );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$x509$ocsp$$$function_32_revocation_time( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_32_revocation_time );
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_32_revocation_time );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$x509$ocsp$$$function_33_revocation_reason( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_33_revocation_reason );
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_33_revocation_reason );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$x509$ocsp$$$function_34_this_update( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_34_this_update );
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_34_this_update );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$x509$ocsp$$$function_35_next_update( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_35_next_update );
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_35_next_update );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$x509$ocsp$$$function_36_issuer_key_hash( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_36_issuer_key_hash );
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_36_issuer_key_hash );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$x509$ocsp$$$function_37_issuer_name_hash( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_37_issuer_name_hash );
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_37_issuer_name_hash );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$x509$ocsp$$$function_38_hash_algorithm( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_38_hash_algorithm );
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_38_hash_algorithm );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$x509$ocsp$$$function_39_serial_number( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_39_serial_number );
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_39_serial_number );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$x509$ocsp$$$function_40_extensions( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_40_extensions );
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
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp$$$function_40_extensions );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_10_add_response(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_10_add_response,
        const_str_plain_add_response,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4d13a29968c79504215680258d6c7f94,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_11_responder_id(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_11_responder_id,
        const_str_plain_responder_id,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0378db3d07c92996c6d0447d61622e6c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_12_certificates(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_12_certificates,
        const_str_plain_certificates,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_31d339f4f915621e9d5c7e9a303e3068,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_13_add_extension(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_13_add_extension,
        const_str_plain_add_extension,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f87eeabacd9b8d4cb98cc1f488c9386b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_14_sign(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_14_sign,
        const_str_plain_sign,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_105c479a6dfe474c02d9cbc52c18c8ce,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_15_build_unsuccessful(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_15_build_unsuccessful,
        const_str_plain_build_unsuccessful,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2c832f873f4ed51090ad848d1659148a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_16_issuer_key_hash(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_16_issuer_key_hash,
        const_str_plain_issuer_key_hash,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5bbc64533165f3e42eabeae32870ba6d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_f1a3a125e3ba714b022de01f55589c5a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_17_issuer_name_hash(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_17_issuer_name_hash,
        const_str_plain_issuer_name_hash,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_20be0aa789fc70f8107b4bf8df131b0c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_e2f0f4177ab1ab3498fd8acfbbb86275,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_18_hash_algorithm(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_18_hash_algorithm,
        const_str_plain_hash_algorithm,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2bb8c4e5fa4244b488d96ff166274870,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_c834f18bb73a01711dd784328a5feb72,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_19_serial_number(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_19_serial_number,
        const_str_plain_serial_number,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8a96d8ff84d0ba5e61c51644c016fa06,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_65b530f15541aaeee94ab7b7dbde259c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_1__verify_algorithm(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_1__verify_algorithm,
        const_str_plain__verify_algorithm,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f6d9b29b163c8026fb84d515b307505c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_20_public_bytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_20_public_bytes,
        const_str_plain_public_bytes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0af0246fca7da59f682a3333700f1733,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_eaeff09629549f9f70f7ef52807e664d,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_21_extensions(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_21_extensions,
        const_str_plain_extensions,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_197fbc2c98a32aec4e04c2beadc0759a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_ebd4760caa2584dc3ed207ac08ddd807,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_22_response_status(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_22_response_status,
        const_str_plain_response_status,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_775dadb1232c3972970e8f93810278ce,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_e600056fa813ee20b834db2400ca93c0,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_23_signature_algorithm_oid(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_23_signature_algorithm_oid,
        const_str_plain_signature_algorithm_oid,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4c494f5cb464b72bd0fea57bafdee3aa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_8835d56aac8a3d020679344bdd06ae7a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_24_signature_hash_algorithm(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_24_signature_hash_algorithm,
        const_str_plain_signature_hash_algorithm,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c070e62cefe5bc6b37871120e5aa2892,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_ececf41bfab5efb57e44fd8dac31fad8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_25_signature(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_25_signature,
        const_str_plain_signature,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4e8e4823637471227451b2e3ddc61b4e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_6eec9db0a9e799e06ad4618b1a2d6bde,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_26_tbs_response_bytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_26_tbs_response_bytes,
        const_str_plain_tbs_response_bytes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0f8723b29c8ca8bed79cc25128f83fb6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_def803b62a8438702e7fa6e95ce69665,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_27_certificates(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_27_certificates,
        const_str_plain_certificates,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_aff67a95478aabac29902f520a315aad,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_0d6c085154d81c4fc564ab07d3f6dd63,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_28_responder_key_hash(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_28_responder_key_hash,
        const_str_plain_responder_key_hash,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d77a220e5520d72b3ad3bcf17f95dd83,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_6f2673571deef5894c0114a72c423238,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_29_responder_name(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_29_responder_name,
        const_str_plain_responder_name,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7071113c45a1f571c1a56936e374eb10,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_f0a38bfa5d6912ff8ce8e3d120aced3d,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_2_load_der_ocsp_request(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_2_load_der_ocsp_request,
        const_str_plain_load_der_ocsp_request,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4667b528fc2cae552bae49e6c7025bf4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_30_produced_at(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_30_produced_at,
        const_str_plain_produced_at,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4914ae20fbf0f09f19d35f99737c025b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_6bc610284c59e8c6c9f83e77f6a7a1fb,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_31_certificate_status(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_31_certificate_status,
        const_str_plain_certificate_status,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b3297a4811549f06e4b72e5865c4cf3a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_ef265d53a3abbd80162dfeeff2b1b653,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_32_revocation_time(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_32_revocation_time,
        const_str_plain_revocation_time,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7a85f105c43a6fdb16c182595b6d7d2e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_8a186eaf06e64a30f8176e9f9e79210d,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_33_revocation_reason(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_33_revocation_reason,
        const_str_plain_revocation_reason,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_44c2bcfe69d486094a39cd3f78d57a79,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_4fcf11bc6d439713857131f8070264ba,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_34_this_update(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_34_this_update,
        const_str_plain_this_update,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fa99ff21fe3117312d5c16beffebe02e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_94557de83454f1dc2ecf5e90de6f06e3,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_35_next_update(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_35_next_update,
        const_str_plain_next_update,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_16ce57eeba1b8bf148fcf0cff7a79252,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_41405f026fd915aaca466f4e1b3ea1d9,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_36_issuer_key_hash(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_36_issuer_key_hash,
        const_str_plain_issuer_key_hash,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0a803dc93460dcee9fb10d8902baeb24,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_f1a3a125e3ba714b022de01f55589c5a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_37_issuer_name_hash(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_37_issuer_name_hash,
        const_str_plain_issuer_name_hash,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cce748951e406e4a02ba5d1d95138745,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_e2f0f4177ab1ab3498fd8acfbbb86275,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_38_hash_algorithm(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_38_hash_algorithm,
        const_str_plain_hash_algorithm,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1563555fbceab8f282b180d808ac07d2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_c834f18bb73a01711dd784328a5feb72,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_39_serial_number(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_39_serial_number,
        const_str_plain_serial_number,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a587371f6046110309dd2c6bc01dae39,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_65b530f15541aaeee94ab7b7dbde259c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_3_load_der_ocsp_response(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_3_load_der_ocsp_response,
        const_str_plain_load_der_ocsp_response,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e06a4cc7ae6cb976daca73669b51ee17,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_40_extensions(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_40_extensions,
        const_str_plain_extensions,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1f0125239e98ab3f2013a65ddb7abddd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_70df9fead972d9ab43c8b20fadce06ec,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_4___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9581897c23964f1f7658fc0883a98f6a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_5_add_certificate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_5_add_certificate,
        const_str_plain_add_certificate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fed120ae117cf147d5482ca21ff5cfa0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_6_add_extension(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_6_add_extension,
        const_str_plain_add_extension,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a7436f6e0ba93b1c32d92e79a4e2fee7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_7_build(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_7_build,
        const_str_plain_build,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9d454552b6a177fbc5c259de6bde39aa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_8___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3b5cecfe08894161b4748375c5f5bb44,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_9___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_9___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c6bf55708d92134d5d97d9403f013ceb,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$x509$ocsp,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_cryptography$x509$ocsp =
{
    PyModuleDef_HEAD_INIT,
    "cryptography.x509.ocsp",   /* m_name */
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

MOD_INIT_DECL( cryptography$x509$ocsp )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_cryptography$x509$ocsp );
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
    puts("cryptography.x509.ocsp: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.x509.ocsp: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.x509.ocsp: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcryptography$x509$ocsp" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_cryptography$x509$ocsp = Py_InitModule4(
        "cryptography.x509.ocsp",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_cryptography$x509$ocsp = PyModule_Create( &mdef_cryptography$x509$ocsp );
#endif

    moduledict_cryptography$x509$ocsp = MODULE_DICT( module_cryptography$x509$ocsp );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_cryptography$x509$ocsp,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$x509$ocsp,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_cryptography$x509$ocsp,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$x509$ocsp,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_cryptography$x509$ocsp );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_2086ceef6289883db9f020fcaa2ebe44, module_cryptography$x509$ocsp );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
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
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_genexpr_2__$0 = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
    PyObject *tmp_select_metaclass_2__base = NULL;
    PyObject *tmp_select_metaclass_3__base = NULL;
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
    PyObject *tmp_classmethod_arg_1;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    int tmp_cmp_In_6;
    int tmp_cmp_In_7;
    int tmp_cmp_In_8;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
    PyObject *tmp_dict_name_6;
    PyObject *tmp_dict_name_7;
    PyObject *tmp_dict_name_8;
    PyObject *tmp_dict_seq_1;
    PyObject *tmp_dict_seq_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dictset_value;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_fromlist_name_8;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
    PyObject *tmp_globals_name_8;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_import_name_from_9;
    PyObject *tmp_import_name_from_10;
    PyObject *tmp_import_name_from_11;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_key_name_4;
    PyObject *tmp_key_name_5;
    PyObject *tmp_key_name_6;
    PyObject *tmp_key_name_7;
    PyObject *tmp_key_name_8;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_level_name_7;
    PyObject *tmp_level_name_8;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_locals_name_8;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    PyObject *tmp_name_name_8;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyObject *tmp_type_arg_3;
    static struct Nuitka_FrameObject *cache_frame_1a337f373c3631e3fabe5962d0ecabf1_2 = NULL;

    struct Nuitka_FrameObject *frame_1a337f373c3631e3fabe5962d0ecabf1_2;

    static struct Nuitka_FrameObject *cache_frame_9920709313efd618c10bf8642417c0ae_3 = NULL;

    struct Nuitka_FrameObject *frame_9920709313efd618c10bf8642417c0ae_3;

    static struct Nuitka_FrameObject *cache_frame_e5229b9e8a56e15a95d405dff847473d_4 = NULL;

    struct Nuitka_FrameObject *frame_e5229b9e8a56e15a95d405dff847473d_4;

    struct Nuitka_FrameObject *frame_a025b8a972fd89a77deece0b5fab4441;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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
    PyObject *locals_OCSPCertStatus_58 = NULL;
    PyObject *locals__SingleResponse_114 = NULL;
    PyObject *locals_OCSPRequestBuilder_77 = NULL;
    PyObject *locals_OCSPResponseStatus_35 = NULL;
    PyObject *locals_OCSPResponderEncoding_30 = NULL;
    PyObject *locals_OCSPRequest_272 = NULL;
    PyObject *locals_OCSPResponseBuilder_176 = NULL;
    PyObject *locals_OCSPResponse_310 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyImport_ImportModule("__future__");
    assert( tmp_assign_source_3 != NULL );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_3 );
    tmp_import_from_1__module = tmp_assign_source_3;

    // Frame without reuse.
    frame_a025b8a972fd89a77deece0b5fab4441 = MAKE_MODULE_FRAME( codeobj_a025b8a972fd89a77deece0b5fab4441, module_cryptography$x509$ocsp );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_a025b8a972fd89a77deece0b5fab4441 );
    assert( Py_REFCNT( frame_a025b8a972fd89a77deece0b5fab4441 ) == 2 );

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
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
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
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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
    tmp_globals_name_1 = (PyObject *)moduledict_cryptography$x509$ocsp;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_a025b8a972fd89a77deece0b5fab4441->m_frame.f_lineno = 7;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc, tmp_assign_source_7 );
    tmp_name_name_2 = const_str_plain_datetime;
    tmp_globals_name_2 = (PyObject *)moduledict_cryptography$x509$ocsp;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_a025b8a972fd89a77deece0b5fab4441->m_frame.f_lineno = 8;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_datetime, tmp_assign_source_8 );
    tmp_name_name_3 = const_str_plain_enum;
    tmp_globals_name_3 = (PyObject *)moduledict_cryptography$x509$ocsp;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_Enum_tuple;
    tmp_level_name_3 = const_int_0;
    frame_a025b8a972fd89a77deece0b5fab4441->m_frame.f_lineno = 9;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_Enum );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_Enum, tmp_assign_source_9 );
    tmp_name_name_4 = const_str_plain_six;
    tmp_globals_name_4 = (PyObject *)moduledict_cryptography$x509$ocsp;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = Py_None;
    tmp_level_name_4 = const_int_0;
    frame_a025b8a972fd89a77deece0b5fab4441->m_frame.f_lineno = 11;
    tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_10 );
    tmp_name_name_5 = const_str_plain_cryptography;
    tmp_globals_name_5 = (PyObject *)moduledict_cryptography$x509$ocsp;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_x509_tuple;
    tmp_level_name_5 = const_int_0;
    frame_a025b8a972fd89a77deece0b5fab4441->m_frame.f_lineno = 13;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_x509 );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_x509, tmp_assign_source_11 );
    tmp_name_name_6 = const_str_digest_9db3cdd3cd765463b4eec6754eb8e087;
    tmp_globals_name_6 = (PyObject *)moduledict_cryptography$x509$ocsp;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_hashes_tuple;
    tmp_level_name_6 = const_int_0;
    frame_a025b8a972fd89a77deece0b5fab4441->m_frame.f_lineno = 14;
    tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_hashes );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_hashes, tmp_assign_source_12 );
    tmp_name_name_7 = const_str_digest_426349c7e201b358f2086eb3f7fb6f47;
    tmp_globals_name_7 = (PyObject *)moduledict_cryptography$x509$ocsp;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_ed25519_str_plain_ed448_tuple;
    tmp_level_name_7 = const_int_0;
    frame_a025b8a972fd89a77deece0b5fab4441->m_frame.f_lineno = 15;
    tmp_assign_source_13 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_13;

    // Tried code:
    tmp_import_name_from_7 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_ed25519 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_ed25519, tmp_assign_source_14 );
    tmp_import_name_from_8 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_ed448 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_ed448, tmp_assign_source_15 );
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

    tmp_name_name_8 = const_str_digest_99d507f2ac89b982963447ed05345806;
    tmp_globals_name_8 = (PyObject *)moduledict_cryptography$x509$ocsp;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_bd38329603d033d1de4004f843766dc2_tuple;
    tmp_level_name_8 = const_int_0;
    frame_a025b8a972fd89a77deece0b5fab4441->m_frame.f_lineno = 16;
    tmp_assign_source_16 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_16;

    // Tried code:
    tmp_import_name_from_9 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain__EARLIEST_UTC_TIME );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__EARLIEST_UTC_TIME, tmp_assign_source_17 );
    tmp_import_name_from_10 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain__convert_to_naive_utc_time );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__convert_to_naive_utc_time, tmp_assign_source_18 );
    tmp_import_name_from_11 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain__reject_duplicate_extension );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__reject_duplicate_extension, tmp_assign_source_19 );
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    tmp_assign_source_20 = _PyDict_NewPresized( 5 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_hashes );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes );
    }

    if ( tmp_called_instance_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_20 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "hashes" );
        exception_tb = NULL;

        exception_lineno = 22;

        goto frame_exception_exit_1;
    }

    frame_a025b8a972fd89a77deece0b5fab4441->m_frame.f_lineno = 22;
    tmp_dict_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_SHA1 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_20 );

        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_digest_97841e0407a21a46fa17b8ec8f246b28;
    tmp_res = PyDict_SetItem( tmp_assign_source_20, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_hashes );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes );
    }

    if ( tmp_called_instance_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_20 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "hashes" );
        exception_tb = NULL;

        exception_lineno = 23;

        goto frame_exception_exit_1;
    }

    frame_a025b8a972fd89a77deece0b5fab4441->m_frame.f_lineno = 23;
    tmp_dict_value_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_SHA224 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_20 );

        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_digest_0803e6568131d3ace6a97c0848babbec;
    tmp_res = PyDict_SetItem( tmp_assign_source_20, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_hashes );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes );
    }

    if ( tmp_called_instance_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_20 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "hashes" );
        exception_tb = NULL;

        exception_lineno = 24;

        goto frame_exception_exit_1;
    }

    frame_a025b8a972fd89a77deece0b5fab4441->m_frame.f_lineno = 24;
    tmp_dict_value_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_SHA256 );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_20 );

        exception_lineno = 24;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_3 = const_str_digest_d5501c4718b7c887f0d053e467278836;
    tmp_res = PyDict_SetItem( tmp_assign_source_20, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_called_instance_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_hashes );

    if (unlikely( tmp_called_instance_4 == NULL ))
    {
        tmp_called_instance_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes );
    }

    if ( tmp_called_instance_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_20 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "hashes" );
        exception_tb = NULL;

        exception_lineno = 25;

        goto frame_exception_exit_1;
    }

    frame_a025b8a972fd89a77deece0b5fab4441->m_frame.f_lineno = 25;
    tmp_dict_value_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_SHA384 );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_20 );

        exception_lineno = 25;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_4 = const_str_digest_b748c93313cc612300dbdce6bc0417b9;
    tmp_res = PyDict_SetItem( tmp_assign_source_20, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_called_instance_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_hashes );

    if (unlikely( tmp_called_instance_5 == NULL ))
    {
        tmp_called_instance_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes );
    }

    if ( tmp_called_instance_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_20 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "hashes" );
        exception_tb = NULL;

        exception_lineno = 26;

        goto frame_exception_exit_1;
    }

    frame_a025b8a972fd89a77deece0b5fab4441->m_frame.f_lineno = 26;
    tmp_dict_value_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_SHA512 );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_20 );

        exception_lineno = 26;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_5 = const_str_digest_173e1f5936576e525a4ec0c436e18865;
    tmp_res = PyDict_SetItem( tmp_assign_source_20, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__OIDS_TO_HASH, tmp_assign_source_20 );
    // Tried code:
    tmp_assign_source_21 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_Enum );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Enum );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Enum" );
        exception_tb = NULL;

        exception_lineno = 30;

        goto try_except_handler_4;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_21;

    tmp_set_locals = PyDict_New();
    locals_OCSPResponderEncoding_30 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_2086ceef6289883db9f020fcaa2ebe44;
    tmp_res = PyDict_SetItem( locals_OCSPResponderEncoding_30, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_693ac668d00156b83095e145c5bd4cde;
    tmp_res = PyDict_SetItem( locals_OCSPResponderEncoding_30, const_str_plain_HASH, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_91d1cdc36c68313cdd0a89259cd9d216;
    tmp_res = PyDict_SetItem( locals_OCSPResponderEncoding_30, const_str_plain_NAME, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_1 = locals_OCSPResponderEncoding_30;
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_5:;
    Py_DECREF( locals_OCSPResponderEncoding_30 );
    locals_OCSPResponderEncoding_30 = NULL;
    goto outline_result_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp );
    return MOD_RETURN_VALUE( NULL );
    outline_result_1:;
    tmp_assign_source_22 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_22;

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
    tmp_assign_source_23 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_4;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_subscribed_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_24 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_4;
    }
    assert( tmp_select_metaclass_1__base == NULL );
    tmp_select_metaclass_1__base = tmp_assign_source_24;

    // Tried code:
    // Tried code:
    tmp_source_name_1 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_outline_return_value_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_outline_return_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_7;
    }
    goto try_return_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_4 );
    Py_XDECREF( exception_keeper_value_4 );
    Py_XDECREF( exception_keeper_tb_4 );
    tmp_type_arg_1 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_outline_return_value_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_outline_return_value_2 != NULL );
    goto try_return_handler_6;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_6:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
    Py_DECREF( tmp_select_metaclass_1__base );
    tmp_select_metaclass_1__base = NULL;

    goto outline_result_2;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
    Py_DECREF( tmp_select_metaclass_1__base );
    tmp_select_metaclass_1__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp );
    return MOD_RETURN_VALUE( NULL );
    outline_result_2:;
    tmp_assign_source_23 = tmp_outline_return_value_2;
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_23;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_OCSPResponderEncoding;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_a025b8a972fd89a77deece0b5fab4441->m_frame.f_lineno = 30;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_4;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_25;

    goto try_end_4;
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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    tmp_assign_source_26 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_26 );
    UPDATE_STRING_DICT0( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPResponderEncoding, tmp_assign_source_26 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Tried code:
    tmp_assign_source_27 = PyTuple_New( 1 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_Enum );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Enum );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_27 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Enum" );
        exception_tb = NULL;

        exception_lineno = 35;

        goto try_except_handler_8;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_27, 0, tmp_tuple_element_2 );
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_27;

    tmp_set_locals = PyDict_New();
    locals_OCSPResponseStatus_35 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_2086ceef6289883db9f020fcaa2ebe44;
    tmp_res = PyDict_SetItem( locals_OCSPResponseStatus_35, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_0;
    tmp_res = PyDict_SetItem( locals_OCSPResponseStatus_35, const_str_plain_SUCCESSFUL, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_1;
    tmp_res = PyDict_SetItem( locals_OCSPResponseStatus_35, const_str_plain_MALFORMED_REQUEST, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_2;
    tmp_res = PyDict_SetItem( locals_OCSPResponseStatus_35, const_str_plain_INTERNAL_ERROR, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_3;
    tmp_res = PyDict_SetItem( locals_OCSPResponseStatus_35, const_str_plain_TRY_LATER, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_5;
    tmp_res = PyDict_SetItem( locals_OCSPResponseStatus_35, const_str_plain_SIG_REQUIRED, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_6;
    tmp_res = PyDict_SetItem( locals_OCSPResponseStatus_35, const_str_plain_UNAUTHORIZED, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_3 = locals_OCSPResponseStatus_35;
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_9;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_9:;
    Py_DECREF( locals_OCSPResponseStatus_35 );
    locals_OCSPResponseStatus_35 = NULL;
    goto outline_result_3;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp );
    return MOD_RETURN_VALUE( NULL );
    outline_result_3:;
    tmp_assign_source_28 = tmp_outline_return_value_3;
    assert( tmp_class_creation_2__class_dict == NULL );
    tmp_class_creation_2__class_dict = tmp_assign_source_28;

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
    tmp_assign_source_29 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_8;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_subscribed_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_int_0;
    tmp_assign_source_30 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_8;
    }
    assert( tmp_select_metaclass_2__base == NULL );
    tmp_select_metaclass_2__base = tmp_assign_source_30;

    // Tried code:
    // Tried code:
    tmp_source_name_2 = tmp_select_metaclass_2__base;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_outline_return_value_4 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_2 );
    if ( tmp_outline_return_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_11;
    }
    goto try_return_handler_10;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_6 );
    Py_XDECREF( exception_keeper_value_6 );
    Py_XDECREF( exception_keeper_tb_6 );
    tmp_type_arg_2 = tmp_select_metaclass_2__base;

    CHECK_OBJECT( tmp_type_arg_2 );
    tmp_outline_return_value_4 = BUILTIN_TYPE1( tmp_type_arg_2 );
    assert( tmp_outline_return_value_4 != NULL );
    goto try_return_handler_10;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_10:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
    Py_DECREF( tmp_select_metaclass_2__base );
    tmp_select_metaclass_2__base = NULL;

    goto outline_result_4;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
    Py_DECREF( tmp_select_metaclass_2__base );
    tmp_select_metaclass_2__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp );
    return MOD_RETURN_VALUE( NULL );
    outline_result_4:;
    tmp_assign_source_29 = tmp_outline_return_value_4;
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_29;

    tmp_called_name_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_args_element_name_4 = const_str_plain_OCSPResponseStatus;
    tmp_args_element_name_5 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_args_element_name_5 );
    tmp_args_element_name_6 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_a025b8a972fd89a77deece0b5fab4441->m_frame.f_lineno = 35;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_8;
    }
    assert( tmp_class_creation_2__class == NULL );
    tmp_class_creation_2__class = tmp_assign_source_31;

    goto try_end_5;
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

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    tmp_assign_source_32 = tmp_class_creation_2__class;

    CHECK_OBJECT( tmp_assign_source_32 );
    UPDATE_STRING_DICT0( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPResponseStatus, tmp_assign_source_32 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class );
    Py_DECREF( tmp_class_creation_2__class );
    tmp_class_creation_2__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
    Py_DECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_dict );
    Py_DECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    tmp_iter_arg_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPResponseStatus );

    if (unlikely( tmp_iter_arg_1 == NULL ))
    {
        tmp_iter_arg_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OCSPResponseStatus );
    }

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "OCSPResponseStatus" );
        exception_tb = NULL;

        exception_lineno = 44;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_34 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto frame_exception_exit_1;
    }
    assert( tmp_genexpr_1__$0 == NULL );
    tmp_genexpr_1__$0 = tmp_assign_source_34;

    // Tried code:
    tmp_outline_return_value_5 = Nuitka_Generator_New(
        cryptography$x509$ocsp$$$genexpr_1_genexpr_context,
        module_cryptography$x509$ocsp,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_ebf0737295b5fe9a6fdb491ea43fded6,
        1
    );

    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_5)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );
    assert( Py_SIZE( tmp_outline_return_value_5 ) >= 1 ); 


    goto try_return_handler_12;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_12:;
    CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
    Py_DECREF( tmp_genexpr_1__$0 );
    tmp_genexpr_1__$0 = NULL;

    goto outline_result_5;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
    Py_DECREF( tmp_genexpr_1__$0 );
    tmp_genexpr_1__$0 = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp );
    return MOD_RETURN_VALUE( NULL );
    outline_result_5:;
    tmp_dict_seq_1 = tmp_outline_return_value_5;
    tmp_assign_source_33 = TO_DICT( tmp_dict_seq_1, NULL );
    Py_DECREF( tmp_dict_seq_1 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__RESPONSE_STATUS_TO_ENUM, tmp_assign_source_33 );
    tmp_assign_source_35 = PyTuple_New( 5 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_hashes );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "hashes" );
        exception_tb = NULL;

        exception_lineno = 46;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_SHA1 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 46;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_35, 0, tmp_tuple_element_3 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_hashes );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "hashes" );
        exception_tb = NULL;

        exception_lineno = 46;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_SHA224 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 46;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_35, 1, tmp_tuple_element_3 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_hashes );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "hashes" );
        exception_tb = NULL;

        exception_lineno = 46;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_SHA256 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 46;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_35, 2, tmp_tuple_element_3 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_hashes );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "hashes" );
        exception_tb = NULL;

        exception_lineno = 47;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_SHA384 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 47;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_35, 3, tmp_tuple_element_3 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_hashes );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "hashes" );
        exception_tb = NULL;

        exception_lineno = 47;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_SHA512 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 47;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_35, 4, tmp_tuple_element_3 );
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__ALLOWED_HASHES, tmp_assign_source_35 );
    tmp_assign_source_36 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_1__verify_algorithm(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__verify_algorithm, tmp_assign_source_36 );
    // Tried code:
    tmp_assign_source_37 = PyTuple_New( 1 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_Enum );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Enum );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_37 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Enum" );
        exception_tb = NULL;

        exception_lineno = 58;

        goto try_except_handler_13;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_37, 0, tmp_tuple_element_4 );
    assert( tmp_class_creation_3__bases == NULL );
    tmp_class_creation_3__bases = tmp_assign_source_37;

    tmp_set_locals = PyDict_New();
    locals_OCSPCertStatus_58 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_2086ceef6289883db9f020fcaa2ebe44;
    tmp_res = PyDict_SetItem( locals_OCSPCertStatus_58, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_0;
    tmp_res = PyDict_SetItem( locals_OCSPCertStatus_58, const_str_plain_GOOD, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_1;
    tmp_res = PyDict_SetItem( locals_OCSPCertStatus_58, const_str_plain_REVOKED, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_2;
    tmp_res = PyDict_SetItem( locals_OCSPCertStatus_58, const_str_plain_UNKNOWN, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_6 = locals_OCSPCertStatus_58;
    Py_INCREF( tmp_outline_return_value_6 );
    goto try_return_handler_14;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_14:;
    Py_DECREF( locals_OCSPCertStatus_58 );
    locals_OCSPCertStatus_58 = NULL;
    goto outline_result_6;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp );
    return MOD_RETURN_VALUE( NULL );
    outline_result_6:;
    tmp_assign_source_38 = tmp_outline_return_value_6;
    assert( tmp_class_creation_3__class_dict == NULL );
    tmp_class_creation_3__class_dict = tmp_assign_source_38;

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
    tmp_assign_source_39 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto try_except_handler_13;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_subscribed_name_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_subscribed_name_3 );
    tmp_subscript_name_3 = const_int_0;
    tmp_assign_source_40 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto try_except_handler_13;
    }
    assert( tmp_select_metaclass_3__base == NULL );
    tmp_select_metaclass_3__base = tmp_assign_source_40;

    // Tried code:
    // Tried code:
    tmp_source_name_8 = tmp_select_metaclass_3__base;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_outline_return_value_7 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_8 );
    if ( tmp_outline_return_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto try_except_handler_16;
    }
    goto try_return_handler_15;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_8 );
    Py_XDECREF( exception_keeper_value_8 );
    Py_XDECREF( exception_keeper_tb_8 );
    tmp_type_arg_3 = tmp_select_metaclass_3__base;

    CHECK_OBJECT( tmp_type_arg_3 );
    tmp_outline_return_value_7 = BUILTIN_TYPE1( tmp_type_arg_3 );
    assert( tmp_outline_return_value_7 != NULL );
    goto try_return_handler_15;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_15:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_3__base );
    Py_DECREF( tmp_select_metaclass_3__base );
    tmp_select_metaclass_3__base = NULL;

    goto outline_result_7;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_3__base );
    Py_DECREF( tmp_select_metaclass_3__base );
    tmp_select_metaclass_3__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp );
    return MOD_RETURN_VALUE( NULL );
    outline_result_7:;
    tmp_assign_source_39 = tmp_outline_return_value_7;
    condexpr_end_3:;
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_39;

    tmp_called_name_3 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_args_element_name_7 = const_str_plain_OCSPCertStatus;
    tmp_args_element_name_8 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_args_element_name_8 );
    tmp_args_element_name_9 = tmp_class_creation_3__class_dict;

    CHECK_OBJECT( tmp_args_element_name_9 );
    frame_a025b8a972fd89a77deece0b5fab4441->m_frame.f_lineno = 58;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto try_except_handler_13;
    }
    assert( tmp_class_creation_3__class == NULL );
    tmp_class_creation_3__class = tmp_assign_source_41;

    goto try_end_6;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    tmp_assign_source_42 = tmp_class_creation_3__class;

    CHECK_OBJECT( tmp_assign_source_42 );
    UPDATE_STRING_DICT0( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPCertStatus, tmp_assign_source_42 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class );
    Py_DECREF( tmp_class_creation_3__class );
    tmp_class_creation_3__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__bases );
    Py_DECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_dict );
    Py_DECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    tmp_iter_arg_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPCertStatus );

    if (unlikely( tmp_iter_arg_2 == NULL ))
    {
        tmp_iter_arg_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OCSPCertStatus );
    }

    if ( tmp_iter_arg_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "OCSPCertStatus" );
        exception_tb = NULL;

        exception_lineno = 64;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_44 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto frame_exception_exit_1;
    }
    assert( tmp_genexpr_2__$0 == NULL );
    tmp_genexpr_2__$0 = tmp_assign_source_44;

    // Tried code:
    tmp_outline_return_value_8 = Nuitka_Generator_New(
        cryptography$x509$ocsp$$$genexpr_2_genexpr_context,
        module_cryptography$x509$ocsp,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_8463c9ed5668fa1af74f2529e7a57cb3,
        1
    );

    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_8)->m_closure[0] = PyCell_NEW0( tmp_genexpr_2__$0 );
    assert( Py_SIZE( tmp_outline_return_value_8 ) >= 1 ); 


    goto try_return_handler_17;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_17:;
    CHECK_OBJECT( (PyObject *)tmp_genexpr_2__$0 );
    Py_DECREF( tmp_genexpr_2__$0 );
    tmp_genexpr_2__$0 = NULL;

    goto outline_result_8;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_genexpr_2__$0 );
    Py_DECREF( tmp_genexpr_2__$0 );
    tmp_genexpr_2__$0 = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp );
    return MOD_RETURN_VALUE( NULL );
    outline_result_8:;
    tmp_dict_seq_2 = tmp_outline_return_value_8;
    tmp_assign_source_43 = TO_DICT( tmp_dict_seq_2, NULL );
    Py_DECREF( tmp_dict_seq_2 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__CERT_STATUS_TO_ENUM, tmp_assign_source_43 );
    tmp_assign_source_45 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_2_load_der_ocsp_request(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_load_der_ocsp_request, tmp_assign_source_45 );
    tmp_assign_source_46 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_3_load_der_ocsp_response(  );
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_load_der_ocsp_response, tmp_assign_source_46 );
    tmp_set_locals = PyDict_New();
    locals_OCSPRequestBuilder_77 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_2086ceef6289883db9f020fcaa2ebe44;
    tmp_res = PyDict_SetItem( locals_OCSPRequestBuilder_77, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_defaults_1 = PyTuple_New( 2 );
    tmp_tuple_element_5 = Py_None;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = PyList_New( 0 );
    PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_5 );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_4___init__( tmp_defaults_1 );
    tmp_res = PyDict_SetItem( locals_OCSPRequestBuilder_77, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_5_add_certificate(  );
    tmp_res = PyDict_SetItem( locals_OCSPRequestBuilder_77, const_str_plain_add_certificate, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_6_add_extension(  );
    tmp_res = PyDict_SetItem( locals_OCSPRequestBuilder_77, const_str_plain_add_extension, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_7_build(  );
    tmp_res = PyDict_SetItem( locals_OCSPRequestBuilder_77, const_str_plain_build, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_9 = locals_OCSPRequestBuilder_77;
    Py_INCREF( tmp_outline_return_value_9 );
    goto try_return_handler_18;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_18:;
    Py_DECREF( locals_OCSPRequestBuilder_77 );
    locals_OCSPRequestBuilder_77 = NULL;
    goto outline_result_9;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp );
    return MOD_RETURN_VALUE( NULL );
    outline_result_9:;
    tmp_assign_source_47 = tmp_outline_return_value_9;
    assert( tmp_class_creation_4__class_dict == NULL );
    tmp_class_creation_4__class_dict = tmp_assign_source_47;

    // Tried code:
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
    tmp_assign_source_48 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;

        goto try_except_handler_19;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_assign_source_48 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_48 );
    condexpr_end_4:;
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_48;

    tmp_called_name_4 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_args_element_name_10 = const_str_plain_OCSPRequestBuilder;
    tmp_args_element_name_11 = const_tuple_type_object_tuple;
    tmp_args_element_name_12 = tmp_class_creation_4__class_dict;

    CHECK_OBJECT( tmp_args_element_name_12 );
    frame_a025b8a972fd89a77deece0b5fab4441->m_frame.f_lineno = 77;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_assign_source_49 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;

        goto try_except_handler_19;
    }
    assert( tmp_class_creation_4__class == NULL );
    tmp_class_creation_4__class = tmp_assign_source_49;

    goto try_end_7;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_dict );
    Py_DECREF( tmp_class_creation_4__class_dict );
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
    try_end_7:;
    tmp_assign_source_50 = tmp_class_creation_4__class;

    CHECK_OBJECT( tmp_assign_source_50 );
    UPDATE_STRING_DICT0( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPRequestBuilder, tmp_assign_source_50 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class );
    Py_DECREF( tmp_class_creation_4__class );
    tmp_class_creation_4__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_dict );
    Py_DECREF( tmp_class_creation_4__class_dict );
    tmp_class_creation_4__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__metaclass );
    Py_DECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    tmp_set_locals = PyDict_New();
    locals__SingleResponse_114 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_2086ceef6289883db9f020fcaa2ebe44;
    tmp_res = PyDict_SetItem( locals__SingleResponse_114, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_8___init__(  );
    tmp_res = PyDict_SetItem( locals__SingleResponse_114, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_10 = locals__SingleResponse_114;
    Py_INCREF( tmp_outline_return_value_10 );
    goto try_return_handler_20;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_20:;
    Py_DECREF( locals__SingleResponse_114 );
    locals__SingleResponse_114 = NULL;
    goto outline_result_10;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp );
    return MOD_RETURN_VALUE( NULL );
    outline_result_10:;
    tmp_assign_source_51 = tmp_outline_return_value_10;
    assert( tmp_class_creation_5__class_dict == NULL );
    tmp_class_creation_5__class_dict = tmp_assign_source_51;

    // Tried code:
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
    tmp_assign_source_52 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_21;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_assign_source_52 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_52 );
    condexpr_end_5:;
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_52;

    tmp_called_name_5 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_called_name_5 );
    tmp_args_element_name_13 = const_str_plain__SingleResponse;
    tmp_args_element_name_14 = const_tuple_type_object_tuple;
    tmp_args_element_name_15 = tmp_class_creation_5__class_dict;

    CHECK_OBJECT( tmp_args_element_name_15 );
    frame_a025b8a972fd89a77deece0b5fab4441->m_frame.f_lineno = 114;
    {
        PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_assign_source_53 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_21;
    }
    assert( tmp_class_creation_5__class == NULL );
    tmp_class_creation_5__class = tmp_assign_source_53;

    goto try_end_8;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_dict );
    Py_DECREF( tmp_class_creation_5__class_dict );
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
    try_end_8:;
    tmp_assign_source_54 = tmp_class_creation_5__class;

    CHECK_OBJECT( tmp_assign_source_54 );
    UPDATE_STRING_DICT0( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__SingleResponse, tmp_assign_source_54 );
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
    locals_OCSPResponseBuilder_176 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_2086ceef6289883db9f020fcaa2ebe44;
    tmp_res = PyDict_SetItem( locals_OCSPResponseBuilder_176, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_defaults_2 = PyTuple_New( 4 );
    tmp_tuple_element_6 = Py_None;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = Py_None;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_defaults_2, 1, tmp_tuple_element_6 );
    tmp_tuple_element_6 = Py_None;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_defaults_2, 2, tmp_tuple_element_6 );
    tmp_tuple_element_6 = PyList_New( 0 );
    PyTuple_SET_ITEM( tmp_defaults_2, 3, tmp_tuple_element_6 );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_9___init__( tmp_defaults_2 );
    tmp_res = PyDict_SetItem( locals_OCSPResponseBuilder_176, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_10_add_response(  );
    tmp_res = PyDict_SetItem( locals_OCSPResponseBuilder_176, const_str_plain_add_response, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_11_responder_id(  );
    tmp_res = PyDict_SetItem( locals_OCSPResponseBuilder_176, const_str_plain_responder_id, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_12_certificates(  );
    tmp_res = PyDict_SetItem( locals_OCSPResponseBuilder_176, const_str_plain_certificates, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_13_add_extension(  );
    tmp_res = PyDict_SetItem( locals_OCSPResponseBuilder_176, const_str_plain_add_extension, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_14_sign(  );
    tmp_res = PyDict_SetItem( locals_OCSPResponseBuilder_176, const_str_plain_sign, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1a337f373c3631e3fabe5962d0ecabf1_2, codeobj_1a337f373c3631e3fabe5962d0ecabf1, module_cryptography$x509$ocsp, 0 );
    frame_1a337f373c3631e3fabe5962d0ecabf1_2 = cache_frame_1a337f373c3631e3fabe5962d0ecabf1_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1a337f373c3631e3fabe5962d0ecabf1_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1a337f373c3631e3fabe5962d0ecabf1_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_classmethod_arg_1 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_15_build_unsuccessful(  );
    tmp_dictset_value = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_1 );
    Py_DECREF( tmp_classmethod_arg_1 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 258;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_OCSPResponseBuilder_176, const_str_plain_build_unsuccessful, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 258;

        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1a337f373c3631e3fabe5962d0ecabf1_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1a337f373c3631e3fabe5962d0ecabf1_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1a337f373c3631e3fabe5962d0ecabf1_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1a337f373c3631e3fabe5962d0ecabf1_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1a337f373c3631e3fabe5962d0ecabf1_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1a337f373c3631e3fabe5962d0ecabf1_2,
        type_description_2
    );


    // Release cached frame.
    if ( frame_1a337f373c3631e3fabe5962d0ecabf1_2 == cache_frame_1a337f373c3631e3fabe5962d0ecabf1_2 )
    {
        Py_DECREF( frame_1a337f373c3631e3fabe5962d0ecabf1_2 );
    }
    cache_frame_1a337f373c3631e3fabe5962d0ecabf1_2 = NULL;

    assertFrameObject( frame_1a337f373c3631e3fabe5962d0ecabf1_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_23;
    skip_nested_handling_1:;
    tmp_outline_return_value_11 = locals_OCSPResponseBuilder_176;
    Py_INCREF( tmp_outline_return_value_11 );
    goto try_return_handler_23;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_23:;
    Py_DECREF( locals_OCSPResponseBuilder_176 );
    locals_OCSPResponseBuilder_176 = NULL;
    goto outline_result_11;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_OCSPResponseBuilder_176 );
    locals_OCSPResponseBuilder_176 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 176;
    goto try_except_handler_22;
    outline_result_11:;
    tmp_assign_source_55 = tmp_outline_return_value_11;
    assert( tmp_class_creation_6__class_dict == NULL );
    tmp_class_creation_6__class_dict = tmp_assign_source_55;

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
    tmp_assign_source_56 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;

        goto try_except_handler_22;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_56 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_56 );
    condexpr_end_6:;
    assert( tmp_class_creation_6__metaclass == NULL );
    tmp_class_creation_6__metaclass = tmp_assign_source_56;

    tmp_called_name_6 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_called_name_6 );
    tmp_args_element_name_16 = const_str_plain_OCSPResponseBuilder;
    tmp_args_element_name_17 = const_tuple_type_object_tuple;
    tmp_args_element_name_18 = tmp_class_creation_6__class_dict;

    CHECK_OBJECT( tmp_args_element_name_18 );
    frame_a025b8a972fd89a77deece0b5fab4441->m_frame.f_lineno = 176;
    {
        PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18 };
        tmp_assign_source_57 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
    }

    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;

        goto try_except_handler_22;
    }
    assert( tmp_class_creation_6__class == NULL );
    tmp_class_creation_6__class = tmp_assign_source_57;

    goto try_end_9;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

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
    try_end_9:;
    tmp_assign_source_58 = tmp_class_creation_6__class;

    CHECK_OBJECT( tmp_assign_source_58 );
    UPDATE_STRING_DICT0( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPResponseBuilder, tmp_assign_source_58 );
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
    locals_OCSPRequest_272 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_2086ceef6289883db9f020fcaa2ebe44;
    tmp_res = PyDict_SetItem( locals_OCSPRequest_272, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9920709313efd618c10bf8642417c0ae_3, codeobj_9920709313efd618c10bf8642417c0ae, module_cryptography$x509$ocsp, 0 );
    frame_9920709313efd618c10bf8642417c0ae_3 = cache_frame_9920709313efd618c10bf8642417c0ae_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9920709313efd618c10bf8642417c0ae_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9920709313efd618c10bf8642417c0ae_3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_6 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 273;

        goto frame_exception_exit_3;
    }

    tmp_args_element_name_19 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_16_issuer_key_hash(  );
    frame_9920709313efd618c10bf8642417c0ae_3->m_frame.f_lineno = 273;
    {
        PyObject *call_args[] = { tmp_args_element_name_19 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_19 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;

        goto frame_exception_exit_3;
    }
    tmp_res = PyDict_SetItem( locals_OCSPRequest_272, const_str_plain_issuer_key_hash, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;

        goto frame_exception_exit_3;
    }
    tmp_called_instance_7 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 279;

        goto frame_exception_exit_3;
    }

    tmp_args_element_name_20 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_17_issuer_name_hash(  );
    frame_9920709313efd618c10bf8642417c0ae_3->m_frame.f_lineno = 279;
    {
        PyObject *call_args[] = { tmp_args_element_name_20 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_20 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;

        goto frame_exception_exit_3;
    }
    tmp_res = PyDict_SetItem( locals_OCSPRequest_272, const_str_plain_issuer_name_hash, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;

        goto frame_exception_exit_3;
    }
    tmp_called_instance_8 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 285;

        goto frame_exception_exit_3;
    }

    tmp_args_element_name_21 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_18_hash_algorithm(  );
    frame_9920709313efd618c10bf8642417c0ae_3->m_frame.f_lineno = 285;
    {
        PyObject *call_args[] = { tmp_args_element_name_21 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_21 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;

        goto frame_exception_exit_3;
    }
    tmp_res = PyDict_SetItem( locals_OCSPRequest_272, const_str_plain_hash_algorithm, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;

        goto frame_exception_exit_3;
    }
    tmp_called_instance_9 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 291;

        goto frame_exception_exit_3;
    }

    tmp_args_element_name_22 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_19_serial_number(  );
    frame_9920709313efd618c10bf8642417c0ae_3->m_frame.f_lineno = 291;
    {
        PyObject *call_args[] = { tmp_args_element_name_22 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_22 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 291;

        goto frame_exception_exit_3;
    }
    tmp_res = PyDict_SetItem( locals_OCSPRequest_272, const_str_plain_serial_number, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 291;

        goto frame_exception_exit_3;
    }
    tmp_called_instance_10 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 296;

        goto frame_exception_exit_3;
    }

    tmp_args_element_name_23 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_20_public_bytes(  );
    frame_9920709313efd618c10bf8642417c0ae_3->m_frame.f_lineno = 296;
    {
        PyObject *call_args[] = { tmp_args_element_name_23 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_23 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 296;

        goto frame_exception_exit_3;
    }
    tmp_res = PyDict_SetItem( locals_OCSPRequest_272, const_str_plain_public_bytes, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 296;

        goto frame_exception_exit_3;
    }
    tmp_called_instance_11 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 302;

        goto frame_exception_exit_3;
    }

    tmp_args_element_name_24 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_21_extensions(  );
    frame_9920709313efd618c10bf8642417c0ae_3->m_frame.f_lineno = 302;
    {
        PyObject *call_args[] = { tmp_args_element_name_24 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_24 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;

        goto frame_exception_exit_3;
    }
    tmp_res = PyDict_SetItem( locals_OCSPRequest_272, const_str_plain_extensions, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;

        goto frame_exception_exit_3;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9920709313efd618c10bf8642417c0ae_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9920709313efd618c10bf8642417c0ae_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9920709313efd618c10bf8642417c0ae_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9920709313efd618c10bf8642417c0ae_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9920709313efd618c10bf8642417c0ae_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9920709313efd618c10bf8642417c0ae_3,
        type_description_2
    );


    // Release cached frame.
    if ( frame_9920709313efd618c10bf8642417c0ae_3 == cache_frame_9920709313efd618c10bf8642417c0ae_3 )
    {
        Py_DECREF( frame_9920709313efd618c10bf8642417c0ae_3 );
    }
    cache_frame_9920709313efd618c10bf8642417c0ae_3 = NULL;

    assertFrameObject( frame_9920709313efd618c10bf8642417c0ae_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_25;
    skip_nested_handling_2:;
    tmp_outline_return_value_12 = locals_OCSPRequest_272;
    Py_INCREF( tmp_outline_return_value_12 );
    goto try_return_handler_25;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_25:;
    Py_DECREF( locals_OCSPRequest_272 );
    locals_OCSPRequest_272 = NULL;
    goto outline_result_12;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_OCSPRequest_272 );
    locals_OCSPRequest_272 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 272;
    goto try_except_handler_24;
    outline_result_12:;
    tmp_assign_source_59 = tmp_outline_return_value_12;
    assert( tmp_class_creation_7__class_dict == NULL );
    tmp_class_creation_7__class_dict = tmp_assign_source_59;

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
    tmp_assign_source_60 = DICT_GET_ITEM( tmp_dict_name_7, tmp_key_name_7 );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;

        goto try_except_handler_24;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_assign_source_60 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_60 );
    condexpr_end_7:;
    assert( tmp_class_creation_7__metaclass == NULL );
    tmp_class_creation_7__metaclass = tmp_assign_source_60;

    tmp_called_name_7 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_called_name_7 );
    tmp_args_element_name_25 = const_str_plain_OCSPRequest;
    tmp_args_element_name_26 = const_tuple_type_object_tuple;
    tmp_args_element_name_27 = tmp_class_creation_7__class_dict;

    CHECK_OBJECT( tmp_args_element_name_27 );
    frame_a025b8a972fd89a77deece0b5fab4441->m_frame.f_lineno = 272;
    {
        PyObject *call_args[] = { tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27 };
        tmp_assign_source_61 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
    }

    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;

        goto try_except_handler_24;
    }
    assert( tmp_class_creation_7__class == NULL );
    tmp_class_creation_7__class = tmp_assign_source_61;

    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_six );

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

        exception_lineno = 271;

        goto try_except_handler_24;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_add_metaclass );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;

        goto try_except_handler_24;
    }
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 271;

        goto try_except_handler_24;
    }

    tmp_args_element_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 271;

        goto try_except_handler_24;
    }
    frame_a025b8a972fd89a77deece0b5fab4441->m_frame.f_lineno = 271;
    {
        PyObject *call_args[] = { tmp_args_element_name_28 };
        tmp_called_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_28 );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;

        goto try_except_handler_24;
    }
    tmp_args_element_name_29 = tmp_class_creation_7__class;

    CHECK_OBJECT( tmp_args_element_name_29 );
    frame_a025b8a972fd89a77deece0b5fab4441->m_frame.f_lineno = 271;
    {
        PyObject *call_args[] = { tmp_args_element_name_29 };
        tmp_assign_source_62 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;

        goto try_except_handler_24;
    }
    {
        PyObject *old = tmp_class_creation_7__class;
        assert( old != NULL );
        tmp_class_creation_7__class = tmp_assign_source_62;
        Py_DECREF( old );
    }

    goto try_end_10;
    // Exception handler code:
    try_except_handler_24:;
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
    try_end_10:;
    tmp_assign_source_63 = tmp_class_creation_7__class;

    CHECK_OBJECT( tmp_assign_source_63 );
    UPDATE_STRING_DICT0( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPRequest, tmp_assign_source_63 );
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
    locals_OCSPResponse_310 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_2086ceef6289883db9f020fcaa2ebe44;
    tmp_res = PyDict_SetItem( locals_OCSPResponse_310, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e5229b9e8a56e15a95d405dff847473d_4, codeobj_e5229b9e8a56e15a95d405dff847473d, module_cryptography$x509$ocsp, 0 );
    frame_e5229b9e8a56e15a95d405dff847473d_4 = cache_frame_e5229b9e8a56e15a95d405dff847473d_4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e5229b9e8a56e15a95d405dff847473d_4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e5229b9e8a56e15a95d405dff847473d_4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_12 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 311;

        goto frame_exception_exit_4;
    }

    tmp_args_element_name_30 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_22_response_status(  );
    frame_e5229b9e8a56e15a95d405dff847473d_4->m_frame.f_lineno = 311;
    {
        PyObject *call_args[] = { tmp_args_element_name_30 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_12, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_30 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 311;

        goto frame_exception_exit_4;
    }
    tmp_res = PyDict_SetItem( locals_OCSPResponse_310, const_str_plain_response_status, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 311;

        goto frame_exception_exit_4;
    }
    tmp_called_instance_13 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 318;

        goto frame_exception_exit_4;
    }

    tmp_args_element_name_31 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_23_signature_algorithm_oid(  );
    frame_e5229b9e8a56e15a95d405dff847473d_4->m_frame.f_lineno = 318;
    {
        PyObject *call_args[] = { tmp_args_element_name_31 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_13, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_31 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;

        goto frame_exception_exit_4;
    }
    tmp_res = PyDict_SetItem( locals_OCSPResponse_310, const_str_plain_signature_algorithm_oid, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;

        goto frame_exception_exit_4;
    }
    tmp_called_instance_14 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 324;

        goto frame_exception_exit_4;
    }

    tmp_args_element_name_32 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_24_signature_hash_algorithm(  );
    frame_e5229b9e8a56e15a95d405dff847473d_4->m_frame.f_lineno = 324;
    {
        PyObject *call_args[] = { tmp_args_element_name_32 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_14, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_32 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 324;

        goto frame_exception_exit_4;
    }
    tmp_res = PyDict_SetItem( locals_OCSPResponse_310, const_str_plain_signature_hash_algorithm, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 324;

        goto frame_exception_exit_4;
    }
    tmp_called_instance_15 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 330;

        goto frame_exception_exit_4;
    }

    tmp_args_element_name_33 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_25_signature(  );
    frame_e5229b9e8a56e15a95d405dff847473d_4->m_frame.f_lineno = 330;
    {
        PyObject *call_args[] = { tmp_args_element_name_33 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_15, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_33 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 330;

        goto frame_exception_exit_4;
    }
    tmp_res = PyDict_SetItem( locals_OCSPResponse_310, const_str_plain_signature, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 330;

        goto frame_exception_exit_4;
    }
    tmp_called_instance_16 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 336;

        goto frame_exception_exit_4;
    }

    tmp_args_element_name_34 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_26_tbs_response_bytes(  );
    frame_e5229b9e8a56e15a95d405dff847473d_4->m_frame.f_lineno = 336;
    {
        PyObject *call_args[] = { tmp_args_element_name_34 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_16, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_34 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;

        goto frame_exception_exit_4;
    }
    tmp_res = PyDict_SetItem( locals_OCSPResponse_310, const_str_plain_tbs_response_bytes, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;

        goto frame_exception_exit_4;
    }
    tmp_called_instance_17 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 342;

        goto frame_exception_exit_4;
    }

    tmp_args_element_name_35 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_27_certificates(  );
    frame_e5229b9e8a56e15a95d405dff847473d_4->m_frame.f_lineno = 342;
    {
        PyObject *call_args[] = { tmp_args_element_name_35 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_17, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_35 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 342;

        goto frame_exception_exit_4;
    }
    tmp_res = PyDict_SetItem( locals_OCSPResponse_310, const_str_plain_certificates, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 342;

        goto frame_exception_exit_4;
    }
    tmp_called_instance_18 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 350;

        goto frame_exception_exit_4;
    }

    tmp_args_element_name_36 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_28_responder_key_hash(  );
    frame_e5229b9e8a56e15a95d405dff847473d_4->m_frame.f_lineno = 350;
    {
        PyObject *call_args[] = { tmp_args_element_name_36 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_18, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_36 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;

        goto frame_exception_exit_4;
    }
    tmp_res = PyDict_SetItem( locals_OCSPResponse_310, const_str_plain_responder_key_hash, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;

        goto frame_exception_exit_4;
    }
    tmp_called_instance_19 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 356;

        goto frame_exception_exit_4;
    }

    tmp_args_element_name_37 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_29_responder_name(  );
    frame_e5229b9e8a56e15a95d405dff847473d_4->m_frame.f_lineno = 356;
    {
        PyObject *call_args[] = { tmp_args_element_name_37 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_19, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_37 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;

        goto frame_exception_exit_4;
    }
    tmp_res = PyDict_SetItem( locals_OCSPResponse_310, const_str_plain_responder_name, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;

        goto frame_exception_exit_4;
    }
    tmp_called_instance_20 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 362;

        goto frame_exception_exit_4;
    }

    tmp_args_element_name_38 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_30_produced_at(  );
    frame_e5229b9e8a56e15a95d405dff847473d_4->m_frame.f_lineno = 362;
    {
        PyObject *call_args[] = { tmp_args_element_name_38 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_20, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_38 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 362;

        goto frame_exception_exit_4;
    }
    tmp_res = PyDict_SetItem( locals_OCSPResponse_310, const_str_plain_produced_at, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 362;

        goto frame_exception_exit_4;
    }
    tmp_called_instance_21 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 368;

        goto frame_exception_exit_4;
    }

    tmp_args_element_name_39 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_31_certificate_status(  );
    frame_e5229b9e8a56e15a95d405dff847473d_4->m_frame.f_lineno = 368;
    {
        PyObject *call_args[] = { tmp_args_element_name_39 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_21, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_39 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 368;

        goto frame_exception_exit_4;
    }
    tmp_res = PyDict_SetItem( locals_OCSPResponse_310, const_str_plain_certificate_status, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 368;

        goto frame_exception_exit_4;
    }
    tmp_called_instance_22 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 374;

        goto frame_exception_exit_4;
    }

    tmp_args_element_name_40 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_32_revocation_time(  );
    frame_e5229b9e8a56e15a95d405dff847473d_4->m_frame.f_lineno = 374;
    {
        PyObject *call_args[] = { tmp_args_element_name_40 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_22, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_40 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 374;

        goto frame_exception_exit_4;
    }
    tmp_res = PyDict_SetItem( locals_OCSPResponse_310, const_str_plain_revocation_time, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 374;

        goto frame_exception_exit_4;
    }
    tmp_called_instance_23 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 381;

        goto frame_exception_exit_4;
    }

    tmp_args_element_name_41 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_33_revocation_reason(  );
    frame_e5229b9e8a56e15a95d405dff847473d_4->m_frame.f_lineno = 381;
    {
        PyObject *call_args[] = { tmp_args_element_name_41 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_23, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_41 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 381;

        goto frame_exception_exit_4;
    }
    tmp_res = PyDict_SetItem( locals_OCSPResponse_310, const_str_plain_revocation_reason, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 381;

        goto frame_exception_exit_4;
    }
    tmp_called_instance_24 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 388;

        goto frame_exception_exit_4;
    }

    tmp_args_element_name_42 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_34_this_update(  );
    frame_e5229b9e8a56e15a95d405dff847473d_4->m_frame.f_lineno = 388;
    {
        PyObject *call_args[] = { tmp_args_element_name_42 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_24, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_42 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 388;

        goto frame_exception_exit_4;
    }
    tmp_res = PyDict_SetItem( locals_OCSPResponse_310, const_str_plain_this_update, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 388;

        goto frame_exception_exit_4;
    }
    tmp_called_instance_25 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 395;

        goto frame_exception_exit_4;
    }

    tmp_args_element_name_43 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_35_next_update(  );
    frame_e5229b9e8a56e15a95d405dff847473d_4->m_frame.f_lineno = 395;
    {
        PyObject *call_args[] = { tmp_args_element_name_43 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_25, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_43 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 395;

        goto frame_exception_exit_4;
    }
    tmp_res = PyDict_SetItem( locals_OCSPResponse_310, const_str_plain_next_update, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 395;

        goto frame_exception_exit_4;
    }
    tmp_called_instance_26 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 401;

        goto frame_exception_exit_4;
    }

    tmp_args_element_name_44 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_36_issuer_key_hash(  );
    frame_e5229b9e8a56e15a95d405dff847473d_4->m_frame.f_lineno = 401;
    {
        PyObject *call_args[] = { tmp_args_element_name_44 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_26, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_44 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 401;

        goto frame_exception_exit_4;
    }
    tmp_res = PyDict_SetItem( locals_OCSPResponse_310, const_str_plain_issuer_key_hash, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 401;

        goto frame_exception_exit_4;
    }
    tmp_called_instance_27 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 407;

        goto frame_exception_exit_4;
    }

    tmp_args_element_name_45 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_37_issuer_name_hash(  );
    frame_e5229b9e8a56e15a95d405dff847473d_4->m_frame.f_lineno = 407;
    {
        PyObject *call_args[] = { tmp_args_element_name_45 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_27, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_45 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 407;

        goto frame_exception_exit_4;
    }
    tmp_res = PyDict_SetItem( locals_OCSPResponse_310, const_str_plain_issuer_name_hash, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 407;

        goto frame_exception_exit_4;
    }
    tmp_called_instance_28 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 413;

        goto frame_exception_exit_4;
    }

    tmp_args_element_name_46 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_38_hash_algorithm(  );
    frame_e5229b9e8a56e15a95d405dff847473d_4->m_frame.f_lineno = 413;
    {
        PyObject *call_args[] = { tmp_args_element_name_46 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_28, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_46 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 413;

        goto frame_exception_exit_4;
    }
    tmp_res = PyDict_SetItem( locals_OCSPResponse_310, const_str_plain_hash_algorithm, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 413;

        goto frame_exception_exit_4;
    }
    tmp_called_instance_29 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 419;

        goto frame_exception_exit_4;
    }

    tmp_args_element_name_47 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_39_serial_number(  );
    frame_e5229b9e8a56e15a95d405dff847473d_4->m_frame.f_lineno = 419;
    {
        PyObject *call_args[] = { tmp_args_element_name_47 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_29, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_47 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 419;

        goto frame_exception_exit_4;
    }
    tmp_res = PyDict_SetItem( locals_OCSPResponse_310, const_str_plain_serial_number, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 419;

        goto frame_exception_exit_4;
    }
    tmp_called_instance_30 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc );

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

        exception_lineno = 425;

        goto frame_exception_exit_4;
    }

    tmp_args_element_name_48 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_40_extensions(  );
    frame_e5229b9e8a56e15a95d405dff847473d_4->m_frame.f_lineno = 425;
    {
        PyObject *call_args[] = { tmp_args_element_name_48 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_30, const_str_plain_abstractproperty, call_args );
    }

    Py_DECREF( tmp_args_element_name_48 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 425;

        goto frame_exception_exit_4;
    }
    tmp_res = PyDict_SetItem( locals_OCSPResponse_310, const_str_plain_extensions, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 425;

        goto frame_exception_exit_4;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e5229b9e8a56e15a95d405dff847473d_4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_exception_exit_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e5229b9e8a56e15a95d405dff847473d_4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e5229b9e8a56e15a95d405dff847473d_4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e5229b9e8a56e15a95d405dff847473d_4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e5229b9e8a56e15a95d405dff847473d_4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e5229b9e8a56e15a95d405dff847473d_4,
        type_description_2
    );


    // Release cached frame.
    if ( frame_e5229b9e8a56e15a95d405dff847473d_4 == cache_frame_e5229b9e8a56e15a95d405dff847473d_4 )
    {
        Py_DECREF( frame_e5229b9e8a56e15a95d405dff847473d_4 );
    }
    cache_frame_e5229b9e8a56e15a95d405dff847473d_4 = NULL;

    assertFrameObject( frame_e5229b9e8a56e15a95d405dff847473d_4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_3;

    frame_no_exception_3:;

    goto skip_nested_handling_3;
    nested_frame_exit_3:;

    goto try_except_handler_27;
    skip_nested_handling_3:;
    tmp_outline_return_value_13 = locals_OCSPResponse_310;
    Py_INCREF( tmp_outline_return_value_13 );
    goto try_return_handler_27;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_27:;
    Py_DECREF( locals_OCSPResponse_310 );
    locals_OCSPResponse_310 = NULL;
    goto outline_result_13;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_OCSPResponse_310 );
    locals_OCSPResponse_310 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto outline_exception_3;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$ocsp );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 310;
    goto try_except_handler_26;
    outline_result_13:;
    tmp_assign_source_64 = tmp_outline_return_value_13;
    assert( tmp_class_creation_8__class_dict == NULL );
    tmp_class_creation_8__class_dict = tmp_assign_source_64;

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
    tmp_assign_source_65 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
    if ( tmp_assign_source_65 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;

        goto try_except_handler_26;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_assign_source_65 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_65 );
    condexpr_end_8:;
    assert( tmp_class_creation_8__metaclass == NULL );
    tmp_class_creation_8__metaclass = tmp_assign_source_65;

    tmp_called_name_10 = tmp_class_creation_8__metaclass;

    CHECK_OBJECT( tmp_called_name_10 );
    tmp_args_element_name_49 = const_str_plain_OCSPResponse;
    tmp_args_element_name_50 = const_tuple_type_object_tuple;
    tmp_args_element_name_51 = tmp_class_creation_8__class_dict;

    CHECK_OBJECT( tmp_args_element_name_51 );
    frame_a025b8a972fd89a77deece0b5fab4441->m_frame.f_lineno = 310;
    {
        PyObject *call_args[] = { tmp_args_element_name_49, tmp_args_element_name_50, tmp_args_element_name_51 };
        tmp_assign_source_66 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, call_args );
    }

    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;

        goto try_except_handler_26;
    }
    assert( tmp_class_creation_8__class == NULL );
    tmp_class_creation_8__class = tmp_assign_source_66;

    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_six );

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

        exception_lineno = 309;

        goto try_except_handler_26;
    }

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_add_metaclass );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 309;

        goto try_except_handler_26;
    }
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 309;

        goto try_except_handler_26;
    }

    tmp_args_element_name_52 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );

        exception_lineno = 309;

        goto try_except_handler_26;
    }
    frame_a025b8a972fd89a77deece0b5fab4441->m_frame.f_lineno = 309;
    {
        PyObject *call_args[] = { tmp_args_element_name_52 };
        tmp_called_name_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    Py_DECREF( tmp_args_element_name_52 );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 309;

        goto try_except_handler_26;
    }
    tmp_args_element_name_53 = tmp_class_creation_8__class;

    CHECK_OBJECT( tmp_args_element_name_53 );
    frame_a025b8a972fd89a77deece0b5fab4441->m_frame.f_lineno = 309;
    {
        PyObject *call_args[] = { tmp_args_element_name_53 };
        tmp_assign_source_67 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    if ( tmp_assign_source_67 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 309;

        goto try_except_handler_26;
    }
    {
        PyObject *old = tmp_class_creation_8__class;
        assert( old != NULL );
        tmp_class_creation_8__class = tmp_assign_source_67;
        Py_DECREF( old );
    }

    goto try_end_11;
    // Exception handler code:
    try_except_handler_26:;
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
    try_end_11:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a025b8a972fd89a77deece0b5fab4441 );
#endif
    popFrameStack();

    assertFrameObject( frame_a025b8a972fd89a77deece0b5fab4441 );

    goto frame_no_exception_4;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a025b8a972fd89a77deece0b5fab4441 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a025b8a972fd89a77deece0b5fab4441, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a025b8a972fd89a77deece0b5fab4441->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a025b8a972fd89a77deece0b5fab4441, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_4:;
    tmp_assign_source_68 = tmp_class_creation_8__class;

    CHECK_OBJECT( tmp_assign_source_68 );
    UPDATE_STRING_DICT0( moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPResponse, tmp_assign_source_68 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__class );
    Py_DECREF( tmp_class_creation_8__class );
    tmp_class_creation_8__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__class_dict );
    Py_DECREF( tmp_class_creation_8__class_dict );
    tmp_class_creation_8__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__metaclass );
    Py_DECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;


    return MOD_RETURN_VALUE( module_cryptography$x509$ocsp );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
