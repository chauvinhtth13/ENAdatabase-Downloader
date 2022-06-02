/* Generated code for Python source for module 'urllib3.util.ssl_'
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

/* The _module_urllib3$util$ssl_ is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$util$ssl_;
PyDictObject *moduledict_urllib3$util$ssl_;

/* The module constants used, if any. */
static PyObject *const_tuple_str_plain_self_str_plain_cipher_suite_tuple;
static PyObject *const_tuple_8a6a9087acf223607f8d761b05c3c635_tuple;
static PyObject *const_str_digest_f5ab9e44d9781bbce93000ad3a218dd6;
extern PyObject *const_str_plain_BRACELESS_IPV6_ADDRZ_RE;
extern PyObject *const_str_plain_get;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_resolve_cert_reqs;
static PyObject *const_str_digest_7c46323d1955d9b4a74a964a21041d91;
static PyObject *const_tuple_7f7a0b18e3f69c3d677814bc00472a5f_tuple;
extern PyObject *const_str_plain_res;
extern PyObject *const_str_plain_hmac;
static PyObject *const_str_plain_post_handshake_auth;
static PyObject *const_str_digest_2681ca4c75814cad499c8358504657b6;
static PyObject *const_str_digest_d003c9c097edbd2a450c14deecbcfd2e;
static PyObject *const_str_digest_fdc80410a2b2c167f6d010d95118c7a2;
extern PyObject *const_str_plain_decode;
static PyObject *const_str_digest_b1b851bd94b3604444b241240c75e7c3;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_load_default_certs;
static PyObject *const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple;
extern PyObject *const_str_plain_verify_mode;
extern PyObject *const_str_plain_protocol;
extern PyObject *const_str_plain_IS_SECURETRANSPORT;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_ENCRYPTED;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_fingerprint;
static PyObject *const_str_plain_is_ipaddress;
static PyObject *const_tuple_str_plain_key_file_str_plain_line_str_plain_f_tuple;
extern PyObject *const_tuple_none_none_none_none_none_none_none_none_none_none_tuple;
extern PyObject *const_str_plain_l;
extern PyObject *const_str_plain_encode;
extern PyObject *const_str_plain_create_urllib3_context;
extern PyObject *const_str_plain_zip;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain__const_compare_digest;
extern PyObject *const_str_plain_server_side;
extern PyObject *const_str_plain_ssl_wrap_socket;
static PyObject *const_tuple_9473549b7ba644563513e7e61e0dc810_tuple;
extern PyObject *const_str_plain_compare_digest;
static PyObject *const_str_digest_1f7b5ce5a77b16d07a45e4d29e803bbc;
extern PyObject *const_str_plain_IS_PYOPENSSL;
extern PyObject *const_str_plain_warnings;
static PyObject *const_str_digest_fa180d3d80537b2aa9f9227fc855b3ea;
static PyObject *const_tuple_str_plain_SSLContext_tuple;
static PyObject *const_tuple_str_plain_IPV4_RE_str_plain_BRACELESS_IPV6_ADDRZ_RE_tuple;
static PyObject *const_str_plain_fingerprint_bytes;
extern PyObject *const_str_plain_format;
extern PyObject *const_int_pos_64;
extern PyObject *const_str_plain_socket;
extern PyObject *const_str_plain_ssl_version;
extern PyObject *const_str_plain_hexlify;
static PyObject *const_tuple_str_digest_9122c237564b58c6d395bd61e093c6a7_tuple;
extern PyObject *const_int_pos_4;
static PyObject *const_str_digest_265453facacdc76d97e06e2b7ad3f2c4;
extern PyObject *const_str_plain___exit__;
static PyObject *const_str_digest_e7dc819c78ea2e0685e83afc15e2e26b;
static PyObject *const_str_digest_af8fbc6bbb34bfe947825ffe4bd0065f;
extern PyObject *const_str_plain_b;
static PyObject *const_str_plain_hashfunc;
extern PyObject *const_str_plain_SNIMissingWarning;
extern PyObject *const_tuple_none_false_tuple;
static PyObject *const_tuple_str_plain_md5_str_plain_sha1_str_plain_sha256_tuple;
static PyObject *const_str_digest_fb43a38a807b012d6115ce5bca79e777;
static PyObject *const_str_digest_60133ff820b8c343c7e20e0a0152c1b7;
extern PyObject *const_str_plain_capath;
static PyObject *const_int_pos_16777216;
static PyObject *const_tuple_str_plain_self_str_plain_cafile_str_plain_capath_tuple;
extern PyObject *const_str_plain_ascii;
static PyObject *const_str_digest_40d4c2a9acff45d215ea7c0bc7f6dfe1;
extern PyObject *const_str_plain_cafile;
extern PyObject *const_str_plain_cert_reqs;
extern PyObject *const_str_plain_ciphers;
static PyObject *const_tuple_80d5c84edbc6047981e18ed8cb8a7a27_tuple;
static PyObject *const_str_digest_913763b75a83910d47b63aee55c4ce7c;
static PyObject *const_tuple_str_plain_PROTOCOL_TLS_tuple;
extern PyObject *const_str_plain_OP_NO_SSLv2;
extern PyObject *const_str_plain_OP_NO_SSLv3;
extern PyObject *const_str_plain_resolve_ssl_version;
extern PyObject *const_str_plain_digest;
extern PyObject *const_str_plain_OP_NO_COMPRESSION;
extern PyObject *const_str_plain_unhexlify;
static PyObject *const_str_plain_CERT_;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_ca_cert_dir;
static PyObject *const_str_digest_6efba4feba5d3ac1fc26ca13b212a604;
extern PyObject *const_str_plain_check_hostname;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_str_plain_HASHFUNC_MAP;
extern PyObject *const_str_plain_SSLError;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_d58b91cb97ab091d5f2ca31e327d619f;
extern PyObject *const_str_plain_hashlib;
extern PyObject *const_str_plain_f;
static PyObject *const_str_plain_DEFAULT_CIPHERS;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_protocol_version;
static PyObject *const_str_digest_935dace93363545d379a5e2ed3994f38;
extern PyObject *const_str_plain_sha256;
extern PyObject *const_str_plain_lower;
static PyObject *const_str_digest_873f89c91a6f1965f5902998a695e3d7;
extern PyObject *const_int_pos_7;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain__const_compare_digest_backport;
extern PyObject *const_str_plain_InsecurePlatformWarning;
extern PyObject *const_str_plain_sha1;
extern PyObject *const_str_plain_keyfile;
extern PyObject *const_str_plain_CERT_NONE;
extern PyObject *const_str_plain_errno;
extern PyObject *const_str_plain___init__;
static PyObject *const_tuple_str_plain_hostname_tuple;
static PyObject *const_tuple_str_plain_candidate_str_plain_res_tuple;
extern PyObject *const_int_pos_3;
extern PyObject *const_tuple_none_none_tuple;
static PyObject *const_str_digest_11208532747ea36cadee31118e841464;
static PyObject *const_str_digest_c6e5c4394838f24a74fcd724137f89e0;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_replace;
static PyObject *const_tuple_7673b4980e477b6659d3f5c31ead1376_tuple;
static PyObject *const_str_digest_355d1696e5e022fa728033399bc0d0e8;
extern PyObject *const_str_plain_assert_fingerprint;
extern PyObject *const_str_plain_ssl;
static PyObject *const_int_pos_33554432;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_url;
extern PyObject *const_str_plain_context;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_0735a7cb67d0fec10de5e4a8b02501c8;
extern PyObject *const_int_pos_32;
static PyObject *const_tuple_none_none_none_none_tuple;
extern PyObject *const_str_plain_options;
static PyObject *const_tuple_str_chr_58_str_empty_tuple;
extern PyObject *const_str_plain_set_ciphers;
static PyObject *const_str_plain_candidate;
extern PyObject *const_str_plain___enter__;
extern PyObject *const_str_chr_58;
extern PyObject *const_str_plain_key_password;
extern PyObject *const_str_plain_binascii;
static PyObject *const_tuple_str_digest_7c46323d1955d9b4a74a964a21041d91_tuple;
extern PyObject *const_str_plain_result;
static PyObject *const_tuple_str_plain_self_str_plain_protocol_version_tuple;
static PyObject *const_tuple_str_plain_PROTOCOL_SSLv23_tuple;
static PyObject *const_str_digest_8dea7a9de4b59b57c96f518f0d07104f;
static PyObject *const_tuple_str_plain_HAS_SNI_tuple;
static PyObject *const_str_digest_7433ea5e9bf8137907952033c6cfa210;
extern PyObject *const_str_plain_PROTOCOL_TLS;
static PyObject *const_tuple_int_pos_3_int_pos_7_int_pos_4_tuple;
extern PyObject *const_str_plain_e;
static PyObject *const_str_plain_ENOENT;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_SSLContext;
extern PyObject *const_str_plain_line;
static PyObject *const_str_plain__is_key_file_encrypted;
extern PyObject *const_str_plain_CERT_REQUIRED;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_match;
extern PyObject *const_tuple_str_plain_ascii_tuple;
static PyObject *const_str_plain_digest_length;
static PyObject *const_tuple_int_pos_16777216_int_pos_33554432_tuple;
static PyObject *const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list;
static PyObject *const_str_digest_9122c237564b58c6d395bd61e093c6a7;
extern PyObject *const_str_plain_wrap_socket;
extern PyObject *const_str_plain_IPV4_RE;
extern PyObject *const_str_plain_load_cert_chain;
extern PyObject *const_str_plain_certfile;
static PyObject *const_str_plain_cipher_suite;
static PyObject *const_tuple_str_plain_wrap_socket_str_plain_CERT_REQUIRED_tuple;
static PyObject *const_str_plain_PROTOCOL_;
static PyObject *const_tuple_str_plain_self_str_plain_certfile_str_plain_keyfile_tuple;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_HAS_SNI;
extern PyObject *const_str_plain_cert;
extern PyObject *const_str_plain_exceptions;
extern PyObject *const_str_plain_packages;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_md5;
extern PyObject *const_str_plain_sock;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_six;
static PyObject *const_str_plain_PROTOCOL_SSLv23;
extern PyObject *const_tuple_str_plain_six_tuple;
static PyObject *const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple;
extern PyObject *const_str_plain_abs;
extern PyObject *const_tuple_none_none_none_tuple;
static PyObject *const_int_pos_131072;
static PyObject *const_str_digest_5af34d61d2693f4cb5ec31c92baaebb5;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_PY2;
static PyObject *const_str_plain_cert_digest;
extern PyObject *const_str_plain_key_file;
static PyObject *const_str_digest_a3f8311010b88c3f004aef9d24a5fd03;
extern PyObject *const_str_plain_hostname;
static PyObject *const_str_digest_2ab5f213d34b1c74c5006ab35306cc75;
static PyObject *const_tuple_str_plain_hexlify_str_plain_unhexlify_tuple;
extern PyObject *const_str_plain_server_hostname;
static PyObject *const_str_digest_d069314bcc014e8d1c0cdffc71176664;
extern PyObject *const_str_plain_ca_certs;
extern PyObject *const_str_plain_load_verify_locations;
extern PyObject *const_int_pos_40;
extern PyObject *const_str_plain_ssl_context;
static PyObject *const_str_digest_b701eed1b0dbd7c95bf0642b83f3618a;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_plain_self_str_plain_cipher_suite_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cipher_suite_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_cipher_suite = UNSTREAM_STRING( &constant_bin[ 1091844 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cipher_suite_tuple, 1, const_str_plain_cipher_suite ); Py_INCREF( const_str_plain_cipher_suite );
    const_tuple_8a6a9087acf223607f8d761b05c3c635_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_8a6a9087acf223607f8d761b05c3c635_tuple, 0, const_str_plain_cert ); Py_INCREF( const_str_plain_cert );
    PyTuple_SET_ITEM( const_tuple_8a6a9087acf223607f8d761b05c3c635_tuple, 1, const_str_plain_fingerprint ); Py_INCREF( const_str_plain_fingerprint );
    const_str_plain_cert_digest = UNSTREAM_STRING( &constant_bin[ 1091856 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_8a6a9087acf223607f8d761b05c3c635_tuple, 2, const_str_plain_cert_digest ); Py_INCREF( const_str_plain_cert_digest );
    const_str_plain_digest_length = UNSTREAM_STRING( &constant_bin[ 1091867 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_8a6a9087acf223607f8d761b05c3c635_tuple, 3, const_str_plain_digest_length ); Py_INCREF( const_str_plain_digest_length );
    const_str_plain_fingerprint_bytes = UNSTREAM_STRING( &constant_bin[ 1091880 ], 17, 1 );
    PyTuple_SET_ITEM( const_tuple_8a6a9087acf223607f8d761b05c3c635_tuple, 4, const_str_plain_fingerprint_bytes ); Py_INCREF( const_str_plain_fingerprint_bytes );
    const_str_plain_hashfunc = UNSTREAM_STRING( &constant_bin[ 1091897 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_8a6a9087acf223607f8d761b05c3c635_tuple, 5, const_str_plain_hashfunc ); Py_INCREF( const_str_plain_hashfunc );
    const_str_digest_f5ab9e44d9781bbce93000ad3a218dd6 = UNSTREAM_STRING( &constant_bin[ 1091905 ], 167, 0 );
    const_str_digest_7c46323d1955d9b4a74a964a21041d91 = UNSTREAM_STRING( &constant_bin[ 1092072 ], 45, 0 );
    const_tuple_7f7a0b18e3f69c3d677814bc00472a5f_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_7f7a0b18e3f69c3d677814bc00472a5f_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_7f7a0b18e3f69c3d677814bc00472a5f_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_7f7a0b18e3f69c3d677814bc00472a5f_tuple, 2, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_7f7a0b18e3f69c3d677814bc00472a5f_tuple, 3, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    PyTuple_SET_ITEM( const_tuple_7f7a0b18e3f69c3d677814bc00472a5f_tuple, 4, const_str_plain_l ); Py_INCREF( const_str_plain_l );
    const_str_plain_post_handshake_auth = UNSTREAM_STRING( &constant_bin[ 667965 ], 19, 1 );
    const_str_digest_2681ca4c75814cad499c8358504657b6 = UNSTREAM_STRING( &constant_bin[ 1092117 ], 10, 0 );
    const_str_digest_d003c9c097edbd2a450c14deecbcfd2e = UNSTREAM_STRING( &constant_bin[ 1092127 ], 787, 0 );
    const_str_digest_fdc80410a2b2c167f6d010d95118c7a2 = UNSTREAM_STRING( &constant_bin[ 1092914 ], 10, 0 );
    const_str_digest_b1b851bd94b3604444b241240c75e7c3 = UNSTREAM_STRING( &constant_bin[ 1092924 ], 4, 0 );
    const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple, 0, const_str_plain_ssl_version ); Py_INCREF( const_str_plain_ssl_version );
    PyTuple_SET_ITEM( const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple, 1, const_str_plain_cert_reqs ); Py_INCREF( const_str_plain_cert_reqs );
    PyTuple_SET_ITEM( const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple, 2, const_str_plain_options ); Py_INCREF( const_str_plain_options );
    PyTuple_SET_ITEM( const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple, 3, const_str_plain_ciphers ); Py_INCREF( const_str_plain_ciphers );
    PyTuple_SET_ITEM( const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple, 4, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    const_str_plain_ENCRYPTED = UNSTREAM_STRING( &constant_bin[ 1092928 ], 9, 1 );
    const_str_plain_is_ipaddress = UNSTREAM_STRING( &constant_bin[ 1092937 ], 12, 1 );
    const_tuple_str_plain_key_file_str_plain_line_str_plain_f_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_key_file_str_plain_line_str_plain_f_tuple, 0, const_str_plain_key_file ); Py_INCREF( const_str_plain_key_file );
    PyTuple_SET_ITEM( const_tuple_str_plain_key_file_str_plain_line_str_plain_f_tuple, 1, const_str_plain_line ); Py_INCREF( const_str_plain_line );
    PyTuple_SET_ITEM( const_tuple_str_plain_key_file_str_plain_line_str_plain_f_tuple, 2, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    const_str_plain__const_compare_digest = UNSTREAM_STRING( &constant_bin[ 1092949 ], 21, 1 );
    const_tuple_9473549b7ba644563513e7e61e0dc810_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_9473549b7ba644563513e7e61e0dc810_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_9473549b7ba644563513e7e61e0dc810_tuple, 1, const_str_plain_socket ); Py_INCREF( const_str_plain_socket );
    PyTuple_SET_ITEM( const_tuple_9473549b7ba644563513e7e61e0dc810_tuple, 2, const_str_plain_server_hostname ); Py_INCREF( const_str_plain_server_hostname );
    PyTuple_SET_ITEM( const_tuple_9473549b7ba644563513e7e61e0dc810_tuple, 3, const_str_plain_server_side ); Py_INCREF( const_str_plain_server_side );
    PyTuple_SET_ITEM( const_tuple_9473549b7ba644563513e7e61e0dc810_tuple, 4, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_digest_1f7b5ce5a77b16d07a45e4d29e803bbc = UNSTREAM_STRING( &constant_bin[ 1092970 ], 384, 0 );
    const_str_digest_fa180d3d80537b2aa9f9227fc855b3ea = UNSTREAM_STRING( &constant_bin[ 1093354 ], 6, 0 );
    const_tuple_str_plain_SSLContext_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SSLContext_tuple, 0, const_str_plain_SSLContext ); Py_INCREF( const_str_plain_SSLContext );
    const_tuple_str_plain_IPV4_RE_str_plain_BRACELESS_IPV6_ADDRZ_RE_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_IPV4_RE_str_plain_BRACELESS_IPV6_ADDRZ_RE_tuple, 0, const_str_plain_IPV4_RE ); Py_INCREF( const_str_plain_IPV4_RE );
    PyTuple_SET_ITEM( const_tuple_str_plain_IPV4_RE_str_plain_BRACELESS_IPV6_ADDRZ_RE_tuple, 1, const_str_plain_BRACELESS_IPV6_ADDRZ_RE ); Py_INCREF( const_str_plain_BRACELESS_IPV6_ADDRZ_RE );
    const_tuple_str_digest_9122c237564b58c6d395bd61e093c6a7_tuple = PyTuple_New( 1 );
    const_str_digest_9122c237564b58c6d395bd61e093c6a7 = UNSTREAM_STRING( &constant_bin[ 1093360 ], 53, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_9122c237564b58c6d395bd61e093c6a7_tuple, 0, const_str_digest_9122c237564b58c6d395bd61e093c6a7 ); Py_INCREF( const_str_digest_9122c237564b58c6d395bd61e093c6a7 );
    const_str_digest_265453facacdc76d97e06e2b7ad3f2c4 = UNSTREAM_STRING( &constant_bin[ 1093413 ], 306, 0 );
    const_str_digest_e7dc819c78ea2e0685e83afc15e2e26b = UNSTREAM_STRING( &constant_bin[ 1093719 ], 54, 0 );
    const_str_digest_af8fbc6bbb34bfe947825ffe4bd0065f = UNSTREAM_STRING( &constant_bin[ 1092914 ], 7, 0 );
    const_tuple_str_plain_md5_str_plain_sha1_str_plain_sha256_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_md5_str_plain_sha1_str_plain_sha256_tuple, 0, const_str_plain_md5 ); Py_INCREF( const_str_plain_md5 );
    PyTuple_SET_ITEM( const_tuple_str_plain_md5_str_plain_sha1_str_plain_sha256_tuple, 1, const_str_plain_sha1 ); Py_INCREF( const_str_plain_sha1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_md5_str_plain_sha1_str_plain_sha256_tuple, 2, const_str_plain_sha256 ); Py_INCREF( const_str_plain_sha256 );
    const_str_digest_fb43a38a807b012d6115ce5bca79e777 = UNSTREAM_STRING( &constant_bin[ 1093773 ], 6, 0 );
    const_str_digest_60133ff820b8c343c7e20e0a0152c1b7 = UNSTREAM_STRING( &constant_bin[ 1093779 ], 4, 0 );
    const_int_pos_16777216 = PyInt_FromLong( 16777216l );
    const_tuple_str_plain_self_str_plain_cafile_str_plain_capath_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cafile_str_plain_capath_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cafile_str_plain_capath_tuple, 1, const_str_plain_cafile ); Py_INCREF( const_str_plain_cafile );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cafile_str_plain_capath_tuple, 2, const_str_plain_capath ); Py_INCREF( const_str_plain_capath );
    const_str_digest_40d4c2a9acff45d215ea7c0bc7f6dfe1 = UNSTREAM_STRING( &constant_bin[ 1093783 ], 32, 0 );
    const_tuple_80d5c84edbc6047981e18ed8cb8a7a27_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_80d5c84edbc6047981e18ed8cb8a7a27_tuple, 0, const_str_plain_OP_NO_SSLv2 ); Py_INCREF( const_str_plain_OP_NO_SSLv2 );
    PyTuple_SET_ITEM( const_tuple_80d5c84edbc6047981e18ed8cb8a7a27_tuple, 1, const_str_plain_OP_NO_SSLv3 ); Py_INCREF( const_str_plain_OP_NO_SSLv3 );
    PyTuple_SET_ITEM( const_tuple_80d5c84edbc6047981e18ed8cb8a7a27_tuple, 2, const_str_plain_OP_NO_COMPRESSION ); Py_INCREF( const_str_plain_OP_NO_COMPRESSION );
    const_str_digest_913763b75a83910d47b63aee55c4ce7c = UNSTREAM_STRING( &constant_bin[ 1093815 ], 8, 0 );
    const_tuple_str_plain_PROTOCOL_TLS_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PROTOCOL_TLS_tuple, 0, const_str_plain_PROTOCOL_TLS ); Py_INCREF( const_str_plain_PROTOCOL_TLS );
    const_str_plain_CERT_ = UNSTREAM_STRING( &constant_bin[ 19490 ], 5, 1 );
    const_str_digest_6efba4feba5d3ac1fc26ca13b212a604 = UNSTREAM_STRING( &constant_bin[ 1044077 ], 17, 0 );
    const_str_plain_HASHFUNC_MAP = UNSTREAM_STRING( &constant_bin[ 1093823 ], 12, 1 );
    const_str_digest_d58b91cb97ab091d5f2ca31e327d619f = UNSTREAM_STRING( &constant_bin[ 1093835 ], 12, 0 );
    const_str_plain_DEFAULT_CIPHERS = UNSTREAM_STRING( &constant_bin[ 1093847 ], 15, 1 );
    const_str_plain_protocol_version = UNSTREAM_STRING( &constant_bin[ 5429 ], 16, 1 );
    const_str_digest_935dace93363545d379a5e2ed3994f38 = UNSTREAM_STRING( &constant_bin[ 1093862 ], 225, 0 );
    const_str_digest_873f89c91a6f1965f5902998a695e3d7 = UNSTREAM_STRING( &constant_bin[ 1094087 ], 487, 0 );
    const_str_plain__const_compare_digest_backport = UNSTREAM_STRING( &constant_bin[ 1094574 ], 30, 1 );
    const_tuple_str_plain_hostname_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_hostname_tuple, 0, const_str_plain_hostname ); Py_INCREF( const_str_plain_hostname );
    const_tuple_str_plain_candidate_str_plain_res_tuple = PyTuple_New( 2 );
    const_str_plain_candidate = UNSTREAM_STRING( &constant_bin[ 1094604 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_candidate_str_plain_res_tuple, 0, const_str_plain_candidate ); Py_INCREF( const_str_plain_candidate );
    PyTuple_SET_ITEM( const_tuple_str_plain_candidate_str_plain_res_tuple, 1, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_str_digest_11208532747ea36cadee31118e841464 = UNSTREAM_STRING( &constant_bin[ 1094613 ], 42, 0 );
    const_str_digest_c6e5c4394838f24a74fcd724137f89e0 = UNSTREAM_STRING( &constant_bin[ 1094655 ], 1259, 0 );
    const_tuple_7673b4980e477b6659d3f5c31ead1376_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_7673b4980e477b6659d3f5c31ead1376_tuple, 0, const_str_plain_SSLError ); Py_INCREF( const_str_plain_SSLError );
    PyTuple_SET_ITEM( const_tuple_7673b4980e477b6659d3f5c31ead1376_tuple, 1, const_str_plain_InsecurePlatformWarning ); Py_INCREF( const_str_plain_InsecurePlatformWarning );
    PyTuple_SET_ITEM( const_tuple_7673b4980e477b6659d3f5c31ead1376_tuple, 2, const_str_plain_SNIMissingWarning ); Py_INCREF( const_str_plain_SNIMissingWarning );
    const_str_digest_355d1696e5e022fa728033399bc0d0e8 = UNSTREAM_STRING( &constant_bin[ 1093817 ], 6, 0 );
    const_int_pos_33554432 = PyInt_FromLong( 33554432l );
    const_str_digest_0735a7cb67d0fec10de5e4a8b02501c8 = UNSTREAM_STRING( &constant_bin[ 1095914 ], 34, 0 );
    const_tuple_none_none_none_none_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    const_tuple_str_chr_58_str_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_chr_58_str_empty_tuple, 0, const_str_chr_58 ); Py_INCREF( const_str_chr_58 );
    PyTuple_SET_ITEM( const_tuple_str_chr_58_str_empty_tuple, 1, const_str_empty ); Py_INCREF( const_str_empty );
    const_tuple_str_digest_7c46323d1955d9b4a74a964a21041d91_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_7c46323d1955d9b4a74a964a21041d91_tuple, 0, const_str_digest_7c46323d1955d9b4a74a964a21041d91 ); Py_INCREF( const_str_digest_7c46323d1955d9b4a74a964a21041d91 );
    const_tuple_str_plain_self_str_plain_protocol_version_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_protocol_version_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_protocol_version_tuple, 1, const_str_plain_protocol_version ); Py_INCREF( const_str_plain_protocol_version );
    const_tuple_str_plain_PROTOCOL_SSLv23_tuple = PyTuple_New( 1 );
    const_str_plain_PROTOCOL_SSLv23 = UNSTREAM_STRING( &constant_bin[ 1095329 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PROTOCOL_SSLv23_tuple, 0, const_str_plain_PROTOCOL_SSLv23 ); Py_INCREF( const_str_plain_PROTOCOL_SSLv23 );
    const_str_digest_8dea7a9de4b59b57c96f518f0d07104f = UNSTREAM_STRING( &constant_bin[ 1095948 ], 26, 0 );
    const_tuple_str_plain_HAS_SNI_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HAS_SNI_tuple, 0, const_str_plain_HAS_SNI ); Py_INCREF( const_str_plain_HAS_SNI );
    const_str_digest_7433ea5e9bf8137907952033c6cfa210 = UNSTREAM_STRING( &constant_bin[ 1095974 ], 230, 0 );
    const_tuple_int_pos_3_int_pos_7_int_pos_4_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_int_pos_3_int_pos_7_int_pos_4_tuple, 0, const_int_pos_3 ); Py_INCREF( const_int_pos_3 );
    PyTuple_SET_ITEM( const_tuple_int_pos_3_int_pos_7_int_pos_4_tuple, 1, const_int_pos_7 ); Py_INCREF( const_int_pos_7 );
    PyTuple_SET_ITEM( const_tuple_int_pos_3_int_pos_7_int_pos_4_tuple, 2, const_int_pos_4 ); Py_INCREF( const_int_pos_4 );
    const_str_plain_ENOENT = UNSTREAM_STRING( &constant_bin[ 1096204 ], 6, 1 );
    const_str_plain__is_key_file_encrypted = UNSTREAM_STRING( &constant_bin[ 1096210 ], 22, 1 );
    const_tuple_int_pos_16777216_int_pos_33554432_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_16777216_int_pos_33554432_tuple, 0, const_int_pos_16777216 ); Py_INCREF( const_int_pos_16777216 );
    PyTuple_SET_ITEM( const_tuple_int_pos_16777216_int_pos_33554432_tuple, 1, const_int_pos_33554432 ); Py_INCREF( const_int_pos_33554432 );
    const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list = PyList_New( 14 );
    PyList_SET_ITEM( const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list, 0, const_str_digest_d58b91cb97ab091d5f2ca31e327d619f ); Py_INCREF( const_str_digest_d58b91cb97ab091d5f2ca31e327d619f );
    const_str_digest_b701eed1b0dbd7c95bf0642b83f3618a = UNSTREAM_STRING( &constant_bin[ 1096232 ], 14, 0 );
    PyList_SET_ITEM( const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list, 1, const_str_digest_b701eed1b0dbd7c95bf0642b83f3618a ); Py_INCREF( const_str_digest_b701eed1b0dbd7c95bf0642b83f3618a );
    PyList_SET_ITEM( const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list, 2, const_str_digest_2681ca4c75814cad499c8358504657b6 ); Py_INCREF( const_str_digest_2681ca4c75814cad499c8358504657b6 );
    const_str_digest_2ab5f213d34b1c74c5006ab35306cc75 = UNSTREAM_STRING( &constant_bin[ 1096234 ], 12, 0 );
    PyList_SET_ITEM( const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list, 3, const_str_digest_2ab5f213d34b1c74c5006ab35306cc75 ); Py_INCREF( const_str_digest_2ab5f213d34b1c74c5006ab35306cc75 );
    const_str_digest_5af34d61d2693f4cb5ec31c92baaebb5 = UNSTREAM_STRING( &constant_bin[ 1096246 ], 11, 0 );
    PyList_SET_ITEM( const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list, 4, const_str_digest_5af34d61d2693f4cb5ec31c92baaebb5 ); Py_INCREF( const_str_digest_5af34d61d2693f4cb5ec31c92baaebb5 );
    const_str_digest_d069314bcc014e8d1c0cdffc71176664 = UNSTREAM_STRING( &constant_bin[ 1096248 ], 9, 0 );
    PyList_SET_ITEM( const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list, 5, const_str_digest_d069314bcc014e8d1c0cdffc71176664 ); Py_INCREF( const_str_digest_d069314bcc014e8d1c0cdffc71176664 );
    PyList_SET_ITEM( const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list, 6, const_str_digest_913763b75a83910d47b63aee55c4ce7c ); Py_INCREF( const_str_digest_913763b75a83910d47b63aee55c4ce7c );
    PyList_SET_ITEM( const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list, 7, const_str_digest_355d1696e5e022fa728033399bc0d0e8 ); Py_INCREF( const_str_digest_355d1696e5e022fa728033399bc0d0e8 );
    PyList_SET_ITEM( const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list, 8, const_str_digest_fdc80410a2b2c167f6d010d95118c7a2 ); Py_INCREF( const_str_digest_fdc80410a2b2c167f6d010d95118c7a2 );
    PyList_SET_ITEM( const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list, 9, const_str_digest_af8fbc6bbb34bfe947825ffe4bd0065f ); Py_INCREF( const_str_digest_af8fbc6bbb34bfe947825ffe4bd0065f );
    PyList_SET_ITEM( const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list, 10, const_str_digest_fa180d3d80537b2aa9f9227fc855b3ea ); Py_INCREF( const_str_digest_fa180d3d80537b2aa9f9227fc855b3ea );
    PyList_SET_ITEM( const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list, 11, const_str_digest_fb43a38a807b012d6115ce5bca79e777 ); Py_INCREF( const_str_digest_fb43a38a807b012d6115ce5bca79e777 );
    PyList_SET_ITEM( const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list, 12, const_str_digest_b1b851bd94b3604444b241240c75e7c3 ); Py_INCREF( const_str_digest_b1b851bd94b3604444b241240c75e7c3 );
    PyList_SET_ITEM( const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list, 13, const_str_digest_60133ff820b8c343c7e20e0a0152c1b7 ); Py_INCREF( const_str_digest_60133ff820b8c343c7e20e0a0152c1b7 );
    const_tuple_str_plain_wrap_socket_str_plain_CERT_REQUIRED_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_wrap_socket_str_plain_CERT_REQUIRED_tuple, 0, const_str_plain_wrap_socket ); Py_INCREF( const_str_plain_wrap_socket );
    PyTuple_SET_ITEM( const_tuple_str_plain_wrap_socket_str_plain_CERT_REQUIRED_tuple, 1, const_str_plain_CERT_REQUIRED ); Py_INCREF( const_str_plain_CERT_REQUIRED );
    const_str_plain_PROTOCOL_ = UNSTREAM_STRING( &constant_bin[ 1048922 ], 9, 1 );
    const_tuple_str_plain_self_str_plain_certfile_str_plain_keyfile_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_certfile_str_plain_keyfile_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_certfile_str_plain_keyfile_tuple, 1, const_str_plain_certfile ); Py_INCREF( const_str_plain_certfile );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_certfile_str_plain_keyfile_tuple, 2, const_str_plain_keyfile ); Py_INCREF( const_str_plain_keyfile );
    const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple, 0, const_str_plain_sock ); Py_INCREF( const_str_plain_sock );
    PyTuple_SET_ITEM( const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple, 1, const_str_plain_keyfile ); Py_INCREF( const_str_plain_keyfile );
    PyTuple_SET_ITEM( const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple, 2, const_str_plain_certfile ); Py_INCREF( const_str_plain_certfile );
    PyTuple_SET_ITEM( const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple, 3, const_str_plain_cert_reqs ); Py_INCREF( const_str_plain_cert_reqs );
    PyTuple_SET_ITEM( const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple, 4, const_str_plain_ca_certs ); Py_INCREF( const_str_plain_ca_certs );
    PyTuple_SET_ITEM( const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple, 5, const_str_plain_server_hostname ); Py_INCREF( const_str_plain_server_hostname );
    PyTuple_SET_ITEM( const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple, 6, const_str_plain_ssl_version ); Py_INCREF( const_str_plain_ssl_version );
    PyTuple_SET_ITEM( const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple, 7, const_str_plain_ciphers ); Py_INCREF( const_str_plain_ciphers );
    PyTuple_SET_ITEM( const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple, 8, const_str_plain_ssl_context ); Py_INCREF( const_str_plain_ssl_context );
    PyTuple_SET_ITEM( const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple, 9, const_str_plain_ca_cert_dir ); Py_INCREF( const_str_plain_ca_cert_dir );
    PyTuple_SET_ITEM( const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple, 10, const_str_plain_key_password ); Py_INCREF( const_str_plain_key_password );
    PyTuple_SET_ITEM( const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple, 11, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    PyTuple_SET_ITEM( const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple, 12, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_int_pos_131072 = PyInt_FromLong( 131072l );
    const_str_digest_a3f8311010b88c3f004aef9d24a5fd03 = UNSTREAM_STRING( &constant_bin[ 1096257 ], 20, 0 );
    const_tuple_str_plain_hexlify_str_plain_unhexlify_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_hexlify_str_plain_unhexlify_tuple, 0, const_str_plain_hexlify ); Py_INCREF( const_str_plain_hexlify );
    PyTuple_SET_ITEM( const_tuple_str_plain_hexlify_str_plain_unhexlify_tuple, 1, const_str_plain_unhexlify ); Py_INCREF( const_str_plain_unhexlify );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$util$ssl_( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_0179ea8e713f8987820c830a8eeae5ac;
static PyCodeObject *codeobj_c5fc2683dea24e9bce762d4a67569074;
static PyCodeObject *codeobj_cd5bbe1c6081885bea88ea7716be5cb7;
static PyCodeObject *codeobj_1dbe3bbc289db7dbdadd3d60b3def527;
static PyCodeObject *codeobj_22f2a5b029403f66e8df05948b08775b;
static PyCodeObject *codeobj_b1ed0fa73f235750b21d86a26c5a2a9f;
static PyCodeObject *codeobj_654e52afc443e8818122874c5a74ebc6;
static PyCodeObject *codeobj_b0f16da2fcd77424e84e39567cca4888;
static PyCodeObject *codeobj_fcb5f25590f1b417d5c17fc33bc46d43;
static PyCodeObject *codeobj_c679a734ea12cc00822a913dd5294757;
static PyCodeObject *codeobj_66bd023fd9bd9693ea48948185740b83;
static PyCodeObject *codeobj_239cb741fa929382023eb79721b3c006;
static PyCodeObject *codeobj_1130831c3d5ce4171eba6db9008c9434;
static PyCodeObject *codeobj_5daa1b5132645273087bf6eb5886e540;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_a3f8311010b88c3f004aef9d24a5fd03 );
    codeobj_0179ea8e713f8987820c830a8eeae5ac = MAKE_CODEOBJ( module_filename_obj, const_str_digest_8dea7a9de4b59b57c96f518f0d07104f, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_c5fc2683dea24e9bce762d4a67569074 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 107, const_tuple_str_plain_self_str_plain_protocol_version_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_cd5bbe1c6081885bea88ea7716be5cb7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__const_compare_digest_backport, 24, const_tuple_7f7a0b18e3f69c3d677814bc00472a5f_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_1dbe3bbc289db7dbdadd3d60b3def527 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__is_key_file_encrypted, 399, const_tuple_str_plain_key_file_str_plain_line_str_plain_f_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_22f2a5b029403f66e8df05948b08775b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_assert_fingerprint, 152, const_tuple_8a6a9087acf223607f8d761b05c3c635_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_b1ed0fa73f235750b21d86a26c5a2a9f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_create_urllib3_context, 220, const_tuple_b938b3ee2b37f9eb584d5786ccca5194_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_654e52afc443e8818122874c5a74ebc6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_ipaddress, 386, const_tuple_str_plain_hostname_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_b0f16da2fcd77424e84e39567cca4888 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_cert_chain, 118, const_tuple_str_plain_self_str_plain_certfile_str_plain_keyfile_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_fcb5f25590f1b417d5c17fc33bc46d43 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_verify_locations, 122, const_tuple_str_plain_self_str_plain_cafile_str_plain_capath_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_c679a734ea12cc00822a913dd5294757 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_resolve_cert_reqs, 181, const_tuple_str_plain_candidate_str_plain_res_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_66bd023fd9bd9693ea48948185740b83 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_resolve_ssl_version, 204, const_tuple_str_plain_candidate_str_plain_res_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_239cb741fa929382023eb79721b3c006 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_ciphers, 128, const_tuple_str_plain_self_str_plain_cipher_suite_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_1130831c3d5ce4171eba6db9008c9434 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ssl_wrap_socket, 296, const_tuple_9c2c7130c969a7af4df191500140cc6f_tuple, 11, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_5daa1b5132645273087bf6eb5886e540 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wrap_socket, 131, const_tuple_9473549b7ba644563513e7e61e0dc810_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_9_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_10_create_urllib3_context( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_11_ssl_wrap_socket( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_12_is_ipaddress(  );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_13__is_key_file_encrypted(  );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_1__const_compare_digest_backport(  );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_2___init__(  );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_3_load_cert_chain(  );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_4_load_verify_locations( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_5_set_ciphers(  );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_6_wrap_socket( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_7_assert_fingerprint(  );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_8_resolve_cert_reqs(  );


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_9_resolve_ssl_version(  );


// The module function definitions.
static PyObject *impl_urllib3$util$ssl_$$$function_1__const_compare_digest_backport( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    PyObject *var_r = NULL;
    PyObject *var_result = NULL;
    PyObject *var_l = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_bytearray_arg_1;
    PyObject *tmp_bytearray_arg_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
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
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_cd5bbe1c6081885bea88ea7716be5cb7 = NULL;

    struct Nuitka_FrameObject *frame_cd5bbe1c6081885bea88ea7716be5cb7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cd5bbe1c6081885bea88ea7716be5cb7, codeobj_cd5bbe1c6081885bea88ea7716be5cb7, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cd5bbe1c6081885bea88ea7716be5cb7 = cache_frame_cd5bbe1c6081885bea88ea7716be5cb7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cd5bbe1c6081885bea88ea7716be5cb7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cd5bbe1c6081885bea88ea7716be5cb7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_abs );
    assert( tmp_called_name_1 != NULL );
    tmp_len_arg_1 = par_a;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_2 = par_b;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_right_name_1 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 31;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_cd5bbe1c6081885bea88ea7716be5cb7->m_frame.f_lineno = 31;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_result == NULL );
    var_result = tmp_assign_source_1;

    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_zip );
    assert( tmp_called_name_2 != NULL );
    tmp_bytearray_arg_1 = par_a;

    CHECK_OBJECT( tmp_bytearray_arg_1 );
    tmp_args_element_name_2 = BUILTIN_BYTEARRAY1( tmp_bytearray_arg_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_bytearray_arg_2 = par_b;

    CHECK_OBJECT( tmp_bytearray_arg_2 );
    tmp_args_element_name_3 = BUILTIN_BYTEARRAY1( tmp_bytearray_arg_2 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 32;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_cd5bbe1c6081885bea88ea7716be5cb7->m_frame.f_lineno = 32;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_2;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_3 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_3 == NULL )
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


        type_description_1 = "ooooo";
        exception_lineno = 32;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_3;
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

        exception_lineno = 32;
        type_description_1 = "ooooo";
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
    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_5 == NULL )
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


        type_description_1 = "ooooo";
        exception_lineno = 32;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_6 == NULL )
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


        type_description_1 = "ooooo";
        exception_lineno = 32;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_iterator_name_1 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooo";
                exception_lineno = 32;
                goto try_except_handler_5;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooo";
        exception_lineno = 32;
        goto try_except_handler_5;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    goto try_end_3;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_7 );
    {
        PyObject *old = var_l;
        var_l = tmp_assign_source_7;
        Py_INCREF( var_l );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_8 );
    {
        PyObject *old = var_r;
        var_r = tmp_assign_source_8;
        Py_INCREF( var_r );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_left_name_2 = var_result;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "result" );
        exception_tb = NULL;

        exception_lineno = 33;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_left_name_3 = var_l;

    CHECK_OBJECT( tmp_left_name_3 );
    tmp_right_name_3 = var_r;

    CHECK_OBJECT( tmp_right_name_3 );
    tmp_right_name_2 = BINARY_OPERATION( PyNumber_Xor, tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_9 = tmp_left_name_2;
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    var_result = tmp_assign_source_9;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_compexpr_left_1 = var_result;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "result" );
        exception_tb = NULL;

        exception_lineno = 34;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = const_int_0;
    tmp_return_value = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd5bbe1c6081885bea88ea7716be5cb7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd5bbe1c6081885bea88ea7716be5cb7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd5bbe1c6081885bea88ea7716be5cb7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cd5bbe1c6081885bea88ea7716be5cb7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cd5bbe1c6081885bea88ea7716be5cb7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cd5bbe1c6081885bea88ea7716be5cb7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cd5bbe1c6081885bea88ea7716be5cb7,
        type_description_1,
        par_a,
        par_b,
        var_r,
        var_result,
        var_l
    );


    // Release cached frame.
    if ( frame_cd5bbe1c6081885bea88ea7716be5cb7 == cache_frame_cd5bbe1c6081885bea88ea7716be5cb7 )
    {
        Py_DECREF( frame_cd5bbe1c6081885bea88ea7716be5cb7 );
    }
    cache_frame_cd5bbe1c6081885bea88ea7716be5cb7 = NULL;

    assertFrameObject( frame_cd5bbe1c6081885bea88ea7716be5cb7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_1__const_compare_digest_backport );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_1__const_compare_digest_backport );
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


static PyObject *impl_urllib3$util$ssl_$$$function_2___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_protocol_version = python_pars[ 1 ];
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
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_c5fc2683dea24e9bce762d4a67569074 = NULL;

    struct Nuitka_FrameObject *frame_c5fc2683dea24e9bce762d4a67569074;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c5fc2683dea24e9bce762d4a67569074, codeobj_c5fc2683dea24e9bce762d4a67569074, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *) );
    frame_c5fc2683dea24e9bce762d4a67569074 = cache_frame_c5fc2683dea24e9bce762d4a67569074;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c5fc2683dea24e9bce762d4a67569074 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c5fc2683dea24e9bce762d4a67569074 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_protocol_version;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_protocol, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = Py_False;
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_check_hostname, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ssl" );
        exception_tb = NULL;

        exception_lineno = 111;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_CERT_NONE );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_verify_mode, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 111;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    tmp_assattr_name_4 = Py_None;
    tmp_assattr_target_4 = par_self;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_ca_certs, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_5 = const_int_0;
    tmp_assattr_target_5 = par_self;

    CHECK_OBJECT( tmp_assattr_target_5 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_options, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_6 = Py_None;
    tmp_assattr_target_6 = par_self;

    CHECK_OBJECT( tmp_assattr_target_6 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_certfile, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_7 = Py_None;
    tmp_assattr_target_7 = par_self;

    CHECK_OBJECT( tmp_assattr_target_7 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_keyfile, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_8 = Py_None;
    tmp_assattr_target_8 = par_self;

    CHECK_OBJECT( tmp_assattr_target_8 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_ciphers, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c5fc2683dea24e9bce762d4a67569074 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c5fc2683dea24e9bce762d4a67569074 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c5fc2683dea24e9bce762d4a67569074, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c5fc2683dea24e9bce762d4a67569074->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c5fc2683dea24e9bce762d4a67569074, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c5fc2683dea24e9bce762d4a67569074,
        type_description_1,
        par_self,
        par_protocol_version
    );


    // Release cached frame.
    if ( frame_c5fc2683dea24e9bce762d4a67569074 == cache_frame_c5fc2683dea24e9bce762d4a67569074 )
    {
        Py_DECREF( frame_c5fc2683dea24e9bce762d4a67569074 );
    }
    cache_frame_c5fc2683dea24e9bce762d4a67569074 = NULL;

    assertFrameObject( frame_c5fc2683dea24e9bce762d4a67569074 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_2___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_protocol_version );
    Py_DECREF( par_protocol_version );
    par_protocol_version = NULL;

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

    CHECK_OBJECT( (PyObject *)par_protocol_version );
    Py_DECREF( par_protocol_version );
    par_protocol_version = NULL;

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
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_2___init__ );
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


static PyObject *impl_urllib3$util$ssl_$$$function_3_load_cert_chain( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_certfile = python_pars[ 1 ];
    PyObject *par_keyfile = python_pars[ 2 ];
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
    static struct Nuitka_FrameObject *cache_frame_b0f16da2fcd77424e84e39567cca4888 = NULL;

    struct Nuitka_FrameObject *frame_b0f16da2fcd77424e84e39567cca4888;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b0f16da2fcd77424e84e39567cca4888, codeobj_b0f16da2fcd77424e84e39567cca4888, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b0f16da2fcd77424e84e39567cca4888 = cache_frame_b0f16da2fcd77424e84e39567cca4888;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b0f16da2fcd77424e84e39567cca4888 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b0f16da2fcd77424e84e39567cca4888 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_certfile;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_certfile, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_keyfile;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_keyfile, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b0f16da2fcd77424e84e39567cca4888 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b0f16da2fcd77424e84e39567cca4888 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b0f16da2fcd77424e84e39567cca4888, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b0f16da2fcd77424e84e39567cca4888->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b0f16da2fcd77424e84e39567cca4888, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b0f16da2fcd77424e84e39567cca4888,
        type_description_1,
        par_self,
        par_certfile,
        par_keyfile
    );


    // Release cached frame.
    if ( frame_b0f16da2fcd77424e84e39567cca4888 == cache_frame_b0f16da2fcd77424e84e39567cca4888 )
    {
        Py_DECREF( frame_b0f16da2fcd77424e84e39567cca4888 );
    }
    cache_frame_b0f16da2fcd77424e84e39567cca4888 = NULL;

    assertFrameObject( frame_b0f16da2fcd77424e84e39567cca4888 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_3_load_cert_chain );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_keyfile );
    Py_DECREF( par_keyfile );
    par_keyfile = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_certfile );
    Py_DECREF( par_certfile );
    par_certfile = NULL;

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

    CHECK_OBJECT( (PyObject *)par_keyfile );
    Py_DECREF( par_keyfile );
    par_keyfile = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_certfile );
    Py_DECREF( par_certfile );
    par_certfile = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_3_load_cert_chain );
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


static PyObject *impl_urllib3$util$ssl_$$$function_4_load_verify_locations( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_cafile = python_pars[ 1 ];
    PyObject *par_capath = python_pars[ 2 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_isnot_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_fcb5f25590f1b417d5c17fc33bc46d43 = NULL;

    struct Nuitka_FrameObject *frame_fcb5f25590f1b417d5c17fc33bc46d43;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fcb5f25590f1b417d5c17fc33bc46d43, codeobj_fcb5f25590f1b417d5c17fc33bc46d43, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fcb5f25590f1b417d5c17fc33bc46d43 = cache_frame_fcb5f25590f1b417d5c17fc33bc46d43;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fcb5f25590f1b417d5c17fc33bc46d43 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fcb5f25590f1b417d5c17fc33bc46d43 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_cafile;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_ca_certs, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = par_capath;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SSLError" );
        exception_tb = NULL;

        exception_lineno = 126;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_fcb5f25590f1b417d5c17fc33bc46d43->m_frame.f_lineno = 126;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_7c46323d1955d9b4a74a964a21041d91_tuple, 0 ) );

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 126;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fcb5f25590f1b417d5c17fc33bc46d43 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fcb5f25590f1b417d5c17fc33bc46d43 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fcb5f25590f1b417d5c17fc33bc46d43, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fcb5f25590f1b417d5c17fc33bc46d43->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fcb5f25590f1b417d5c17fc33bc46d43, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fcb5f25590f1b417d5c17fc33bc46d43,
        type_description_1,
        par_self,
        par_cafile,
        par_capath
    );


    // Release cached frame.
    if ( frame_fcb5f25590f1b417d5c17fc33bc46d43 == cache_frame_fcb5f25590f1b417d5c17fc33bc46d43 )
    {
        Py_DECREF( frame_fcb5f25590f1b417d5c17fc33bc46d43 );
    }
    cache_frame_fcb5f25590f1b417d5c17fc33bc46d43 = NULL;

    assertFrameObject( frame_fcb5f25590f1b417d5c17fc33bc46d43 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_4_load_verify_locations );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_capath );
    Py_DECREF( par_capath );
    par_capath = NULL;

    CHECK_OBJECT( (PyObject *)par_cafile );
    Py_DECREF( par_cafile );
    par_cafile = NULL;

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

    CHECK_OBJECT( (PyObject *)par_capath );
    Py_DECREF( par_capath );
    par_capath = NULL;

    CHECK_OBJECT( (PyObject *)par_cafile );
    Py_DECREF( par_cafile );
    par_cafile = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_4_load_verify_locations );
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


static PyObject *impl_urllib3$util$ssl_$$$function_5_set_ciphers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_cipher_suite = python_pars[ 1 ];
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
    static struct Nuitka_FrameObject *cache_frame_239cb741fa929382023eb79721b3c006 = NULL;

    struct Nuitka_FrameObject *frame_239cb741fa929382023eb79721b3c006;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_239cb741fa929382023eb79721b3c006, codeobj_239cb741fa929382023eb79721b3c006, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *) );
    frame_239cb741fa929382023eb79721b3c006 = cache_frame_239cb741fa929382023eb79721b3c006;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_239cb741fa929382023eb79721b3c006 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_239cb741fa929382023eb79721b3c006 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_cipher_suite;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_ciphers, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_239cb741fa929382023eb79721b3c006 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_239cb741fa929382023eb79721b3c006 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_239cb741fa929382023eb79721b3c006, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_239cb741fa929382023eb79721b3c006->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_239cb741fa929382023eb79721b3c006, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_239cb741fa929382023eb79721b3c006,
        type_description_1,
        par_self,
        par_cipher_suite
    );


    // Release cached frame.
    if ( frame_239cb741fa929382023eb79721b3c006 == cache_frame_239cb741fa929382023eb79721b3c006 )
    {
        Py_DECREF( frame_239cb741fa929382023eb79721b3c006 );
    }
    cache_frame_239cb741fa929382023eb79721b3c006 = NULL;

    assertFrameObject( frame_239cb741fa929382023eb79721b3c006 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_5_set_ciphers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cipher_suite );
    Py_DECREF( par_cipher_suite );
    par_cipher_suite = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cipher_suite );
    Py_DECREF( par_cipher_suite );
    par_cipher_suite = NULL;

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
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_5_set_ciphers );
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


static PyObject *impl_urllib3$util$ssl_$$$function_6_wrap_socket( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_socket = python_pars[ 1 ];
    PyObject *par_server_hostname = python_pars[ 2 ];
    PyObject *par_server_side = python_pars[ 3 ];
    PyObject *var_kwargs = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_5daa1b5132645273087bf6eb5886e540 = NULL;

    struct Nuitka_FrameObject *frame_5daa1b5132645273087bf6eb5886e540;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5daa1b5132645273087bf6eb5886e540, codeobj_5daa1b5132645273087bf6eb5886e540, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5daa1b5132645273087bf6eb5886e540 = cache_frame_5daa1b5132645273087bf6eb5886e540;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5daa1b5132645273087bf6eb5886e540 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5daa1b5132645273087bf6eb5886e540 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_warnings );

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

        exception_lineno = 132;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_digest_265453facacdc76d97e06e2b7ad3f2c4;
    tmp_args_element_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_InsecurePlatformWarning );

    if (unlikely( tmp_args_element_name_2 == NULL ))
    {
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InsecurePlatformWarning );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "InsecurePlatformWarning" );
        exception_tb = NULL;

        exception_lineno = 139;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_5daa1b5132645273087bf6eb5886e540->m_frame.f_lineno = 132;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_1 = _PyDict_NewPresized( 6 );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_keyfile );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 142;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_keyfile;
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_certfile );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 143;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_certfile;
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ca_certs );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 144;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_3 = const_str_plain_ca_certs;
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_verify_mode );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 145;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_4 = const_str_plain_cert_reqs;
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_protocol );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 146;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_5 = const_str_plain_ssl_version;
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = par_server_side;

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dict_key_6 = const_str_plain_server_side;
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    assert( var_kwargs == NULL );
    var_kwargs = tmp_assign_source_1;

    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_wrap_socket );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wrap_socket );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "wrap_socket" );
        exception_tb = NULL;

        exception_lineno = 149;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_socket;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_7 = par_self;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ciphers );
    if ( tmp_dict_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        exception_lineno = 149;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_7 = const_str_plain_ciphers;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_1 = var_kwargs;

    CHECK_OBJECT( tmp_dircall_arg4_1 );
    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_return_value = impl___internal__$$$function_9_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5daa1b5132645273087bf6eb5886e540 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5daa1b5132645273087bf6eb5886e540 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5daa1b5132645273087bf6eb5886e540 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5daa1b5132645273087bf6eb5886e540, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5daa1b5132645273087bf6eb5886e540->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5daa1b5132645273087bf6eb5886e540, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5daa1b5132645273087bf6eb5886e540,
        type_description_1,
        par_self,
        par_socket,
        par_server_hostname,
        par_server_side,
        var_kwargs
    );


    // Release cached frame.
    if ( frame_5daa1b5132645273087bf6eb5886e540 == cache_frame_5daa1b5132645273087bf6eb5886e540 )
    {
        Py_DECREF( frame_5daa1b5132645273087bf6eb5886e540 );
    }
    cache_frame_5daa1b5132645273087bf6eb5886e540 = NULL;

    assertFrameObject( frame_5daa1b5132645273087bf6eb5886e540 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_6_wrap_socket );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_server_hostname );
    Py_DECREF( par_server_hostname );
    par_server_hostname = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_socket );
    Py_DECREF( par_socket );
    par_socket = NULL;

    CHECK_OBJECT( (PyObject *)par_server_side );
    Py_DECREF( par_server_side );
    par_server_side = NULL;

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_server_hostname );
    Py_DECREF( par_server_hostname );
    par_server_hostname = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_socket );
    Py_DECREF( par_socket );
    par_socket = NULL;

    CHECK_OBJECT( (PyObject *)par_server_side );
    Py_DECREF( par_server_side );
    par_server_side = NULL;

    Py_XDECREF( var_kwargs );
    var_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_6_wrap_socket );
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


static PyObject *impl_urllib3$util$ssl_$$$function_7_assert_fingerprint( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cert = python_pars[ 0 ];
    PyObject *par_fingerprint = python_pars[ 1 ];
    PyObject *var_cert_digest = NULL;
    PyObject *var_digest_length = NULL;
    PyObject *var_fingerprint_bytes = NULL;
    PyObject *var_hashfunc = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_22f2a5b029403f66e8df05948b08775b = NULL;

    struct Nuitka_FrameObject *frame_22f2a5b029403f66e8df05948b08775b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_22f2a5b029403f66e8df05948b08775b, codeobj_22f2a5b029403f66e8df05948b08775b, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_22f2a5b029403f66e8df05948b08775b = cache_frame_22f2a5b029403f66e8df05948b08775b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_22f2a5b029403f66e8df05948b08775b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_22f2a5b029403f66e8df05948b08775b ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_2 = par_fingerprint;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_22f2a5b029403f66e8df05948b08775b->m_frame.f_lineno = 162;
    tmp_called_instance_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_str_chr_58_str_empty_tuple, 0 ) );

    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_22f2a5b029403f66e8df05948b08775b->m_frame.f_lineno = 162;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_lower );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_fingerprint;
        assert( old != NULL );
        par_fingerprint = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_len_arg_1 = par_fingerprint;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_assign_source_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_digest_length == NULL );
    var_digest_length = tmp_assign_source_2;

    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_HASHFUNC_MAP );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HASHFUNC_MAP );
    }

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "HASHFUNC_MAP" );
        exception_tb = NULL;

        exception_lineno = 164;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = var_digest_length;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_22f2a5b029403f66e8df05948b08775b->m_frame.f_lineno = 164;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_get, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_hashfunc == NULL );
    var_hashfunc = tmp_assign_source_3;

    tmp_cond_value_1 = var_hashfunc;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SSLError" );
        exception_tb = NULL;

        exception_lineno = 166;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_4 = const_str_digest_0735a7cb67d0fec10de5e4a8b02501c8;
    tmp_args_element_name_3 = par_fingerprint;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_22f2a5b029403f66e8df05948b08775b->m_frame.f_lineno = 166;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_format, call_args );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_22f2a5b029403f66e8df05948b08775b->m_frame.f_lineno = 166;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 166;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_unhexlify );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unhexlify );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "unhexlify" );
        exception_tb = NULL;

        exception_lineno = 169;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_5 = par_fingerprint;

    CHECK_OBJECT( tmp_called_instance_5 );
    frame_22f2a5b029403f66e8df05948b08775b->m_frame.f_lineno = 169;
    tmp_args_element_name_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_encode );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_22f2a5b029403f66e8df05948b08775b->m_frame.f_lineno = 169;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_fingerprint_bytes == NULL );
    var_fingerprint_bytes = tmp_assign_source_4;

    tmp_called_name_3 = var_hashfunc;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_args_element_name_5 = par_cert;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_22f2a5b029403f66e8df05948b08775b->m_frame.f_lineno = 171;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_called_instance_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_called_instance_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_22f2a5b029403f66e8df05948b08775b->m_frame.f_lineno = 171;
    tmp_assign_source_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_digest );
    Py_DECREF( tmp_called_instance_6 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_cert_digest == NULL );
    var_cert_digest = tmp_assign_source_5;

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain__const_compare_digest );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__const_compare_digest );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_const_compare_digest" );
        exception_tb = NULL;

        exception_lineno = 173;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = var_cert_digest;

    CHECK_OBJECT( tmp_args_element_name_6 );
    tmp_args_element_name_7 = var_fingerprint_bytes;

    CHECK_OBJECT( tmp_args_element_name_7 );
    frame_22f2a5b029403f66e8df05948b08775b->m_frame.f_lineno = 173;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 173;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SSLError" );
        exception_tb = NULL;

        exception_lineno = 174;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = const_str_digest_e7dc819c78ea2e0685e83afc15e2e26b;
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
    assert( tmp_called_name_6 != NULL );
    tmp_args_element_name_9 = par_fingerprint;

    CHECK_OBJECT( tmp_args_element_name_9 );
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_hexlify );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hexlify );
    }

    if ( tmp_called_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "hexlify" );
        exception_tb = NULL;

        exception_lineno = 176;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = var_cert_digest;

    CHECK_OBJECT( tmp_args_element_name_11 );
    frame_22f2a5b029403f66e8df05948b08775b->m_frame.f_lineno = 176;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_args_element_name_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 176;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_22f2a5b029403f66e8df05948b08775b->m_frame.f_lineno = 175;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_args_element_name_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_22f2a5b029403f66e8df05948b08775b->m_frame.f_lineno = 174;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 174;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_22f2a5b029403f66e8df05948b08775b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_22f2a5b029403f66e8df05948b08775b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_22f2a5b029403f66e8df05948b08775b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_22f2a5b029403f66e8df05948b08775b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_22f2a5b029403f66e8df05948b08775b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_22f2a5b029403f66e8df05948b08775b,
        type_description_1,
        par_cert,
        par_fingerprint,
        var_cert_digest,
        var_digest_length,
        var_fingerprint_bytes,
        var_hashfunc
    );


    // Release cached frame.
    if ( frame_22f2a5b029403f66e8df05948b08775b == cache_frame_22f2a5b029403f66e8df05948b08775b )
    {
        Py_DECREF( frame_22f2a5b029403f66e8df05948b08775b );
    }
    cache_frame_22f2a5b029403f66e8df05948b08775b = NULL;

    assertFrameObject( frame_22f2a5b029403f66e8df05948b08775b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_7_assert_fingerprint );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_cert_digest );
    Py_DECREF( var_cert_digest );
    var_cert_digest = NULL;

    CHECK_OBJECT( (PyObject *)var_digest_length );
    Py_DECREF( var_digest_length );
    var_digest_length = NULL;

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    CHECK_OBJECT( (PyObject *)par_fingerprint );
    Py_DECREF( par_fingerprint );
    par_fingerprint = NULL;

    CHECK_OBJECT( (PyObject *)var_fingerprint_bytes );
    Py_DECREF( var_fingerprint_bytes );
    var_fingerprint_bytes = NULL;

    CHECK_OBJECT( (PyObject *)var_hashfunc );
    Py_DECREF( var_hashfunc );
    var_hashfunc = NULL;

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

    Py_XDECREF( var_cert_digest );
    var_cert_digest = NULL;

    Py_XDECREF( var_digest_length );
    var_digest_length = NULL;

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    CHECK_OBJECT( (PyObject *)par_fingerprint );
    Py_DECREF( par_fingerprint );
    par_fingerprint = NULL;

    Py_XDECREF( var_fingerprint_bytes );
    var_fingerprint_bytes = NULL;

    Py_XDECREF( var_hashfunc );
    var_hashfunc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_7_assert_fingerprint );
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


static PyObject *impl_urllib3$util$ssl_$$$function_8_resolve_cert_reqs( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_candidate = python_pars[ 0 ];
    PyObject *var_res = NULL;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_left_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    static struct Nuitka_FrameObject *cache_frame_c679a734ea12cc00822a913dd5294757 = NULL;

    struct Nuitka_FrameObject *frame_c679a734ea12cc00822a913dd5294757;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c679a734ea12cc00822a913dd5294757, codeobj_c679a734ea12cc00822a913dd5294757, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *) );
    frame_c679a734ea12cc00822a913dd5294757 = cache_frame_c679a734ea12cc00822a913dd5294757;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c679a734ea12cc00822a913dd5294757 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c679a734ea12cc00822a913dd5294757 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_candidate;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_CERT_REQUIRED );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CERT_REQUIRED );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "CERT_REQUIRED" );
        exception_tb = NULL;

        exception_lineno = 193;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_isinstance_inst_1 = par_candidate;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = (PyObject *)&PyString_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        type_description_1 = "oo";
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
    tmp_getattr_target_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

    if (unlikely( tmp_getattr_target_1 == NULL ))
    {
        tmp_getattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
    }

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ssl" );
        exception_tb = NULL;

        exception_lineno = 196;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_1 = par_candidate;

    CHECK_OBJECT( tmp_getattr_attr_1 );
    tmp_getattr_default_1 = Py_None;
    tmp_assign_source_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_1;

    tmp_compare_left_2 = var_res;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_getattr_target_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

    if (unlikely( tmp_getattr_target_2 == NULL ))
    {
        tmp_getattr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
    }

    if ( tmp_getattr_target_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ssl" );
        exception_tb = NULL;

        exception_lineno = 198;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = const_str_plain_CERT_;
    tmp_right_name_1 = par_candidate;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_getattr_attr_2 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_getattr_attr_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, NULL );
    Py_DECREF( tmp_getattr_attr_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_res;
        assert( old != NULL );
        var_res = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_return_value = var_res;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c679a734ea12cc00822a913dd5294757 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c679a734ea12cc00822a913dd5294757 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c679a734ea12cc00822a913dd5294757 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c679a734ea12cc00822a913dd5294757, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c679a734ea12cc00822a913dd5294757->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c679a734ea12cc00822a913dd5294757, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c679a734ea12cc00822a913dd5294757,
        type_description_1,
        par_candidate,
        var_res
    );


    // Release cached frame.
    if ( frame_c679a734ea12cc00822a913dd5294757 == cache_frame_c679a734ea12cc00822a913dd5294757 )
    {
        Py_DECREF( frame_c679a734ea12cc00822a913dd5294757 );
    }
    cache_frame_c679a734ea12cc00822a913dd5294757 = NULL;

    assertFrameObject( frame_c679a734ea12cc00822a913dd5294757 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = par_candidate;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_8_resolve_cert_reqs );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)par_candidate );
    Py_DECREF( par_candidate );
    par_candidate = NULL;

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

    CHECK_OBJECT( (PyObject *)par_candidate );
    Py_DECREF( par_candidate );
    par_candidate = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_8_resolve_cert_reqs );
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


static PyObject *impl_urllib3$util$ssl_$$$function_9_resolve_ssl_version( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_candidate = python_pars[ 0 ];
    PyObject *var_res = NULL;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_left_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    static struct Nuitka_FrameObject *cache_frame_66bd023fd9bd9693ea48948185740b83 = NULL;

    struct Nuitka_FrameObject *frame_66bd023fd9bd9693ea48948185740b83;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_66bd023fd9bd9693ea48948185740b83, codeobj_66bd023fd9bd9693ea48948185740b83, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *) );
    frame_66bd023fd9bd9693ea48948185740b83 = cache_frame_66bd023fd9bd9693ea48948185740b83;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_66bd023fd9bd9693ea48948185740b83 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_66bd023fd9bd9693ea48948185740b83 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_candidate;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_PROTOCOL_TLS );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PROTOCOL_TLS );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "PROTOCOL_TLS" );
        exception_tb = NULL;

        exception_lineno = 209;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_isinstance_inst_1 = par_candidate;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = (PyObject *)&PyString_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        type_description_1 = "oo";
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
    tmp_getattr_target_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

    if (unlikely( tmp_getattr_target_1 == NULL ))
    {
        tmp_getattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
    }

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ssl" );
        exception_tb = NULL;

        exception_lineno = 212;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_1 = par_candidate;

    CHECK_OBJECT( tmp_getattr_attr_1 );
    tmp_getattr_default_1 = Py_None;
    tmp_assign_source_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_1;

    tmp_compare_left_2 = var_res;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_getattr_target_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

    if (unlikely( tmp_getattr_target_2 == NULL ))
    {
        tmp_getattr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
    }

    if ( tmp_getattr_target_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ssl" );
        exception_tb = NULL;

        exception_lineno = 214;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = const_str_plain_PROTOCOL_;
    tmp_right_name_1 = par_candidate;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_getattr_attr_2 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_getattr_attr_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, NULL );
    Py_DECREF( tmp_getattr_attr_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_res;
        assert( old != NULL );
        var_res = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_return_value = var_res;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_66bd023fd9bd9693ea48948185740b83 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_66bd023fd9bd9693ea48948185740b83 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_66bd023fd9bd9693ea48948185740b83 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_66bd023fd9bd9693ea48948185740b83, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_66bd023fd9bd9693ea48948185740b83->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_66bd023fd9bd9693ea48948185740b83, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_66bd023fd9bd9693ea48948185740b83,
        type_description_1,
        par_candidate,
        var_res
    );


    // Release cached frame.
    if ( frame_66bd023fd9bd9693ea48948185740b83 == cache_frame_66bd023fd9bd9693ea48948185740b83 )
    {
        Py_DECREF( frame_66bd023fd9bd9693ea48948185740b83 );
    }
    cache_frame_66bd023fd9bd9693ea48948185740b83 = NULL;

    assertFrameObject( frame_66bd023fd9bd9693ea48948185740b83 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = par_candidate;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_9_resolve_ssl_version );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)par_candidate );
    Py_DECREF( par_candidate );
    par_candidate = NULL;

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

    CHECK_OBJECT( (PyObject *)par_candidate );
    Py_DECREF( par_candidate );
    par_candidate = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_9_resolve_ssl_version );
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


static PyObject *impl_urllib3$util$ssl_$$$function_10_create_urllib3_context( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ssl_version = python_pars[ 0 ];
    PyObject *par_cert_reqs = python_pars[ 1 ];
    PyObject *par_options = python_pars[ 2 ];
    PyObject *par_ciphers = python_pars[ 3 ];
    PyObject *var_context = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
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
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_default_2;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    int tmp_or_left_truth_3;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_left_value_3;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_or_right_value_3;
    bool tmp_result;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_b1ed0fa73f235750b21d86a26c5a2a9f = NULL;

    struct Nuitka_FrameObject *frame_b1ed0fa73f235750b21d86a26c5a2a9f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b1ed0fa73f235750b21d86a26c5a2a9f, codeobj_b1ed0fa73f235750b21d86a26c5a2a9f, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b1ed0fa73f235750b21d86a26c5a2a9f = cache_frame_b1ed0fa73f235750b21d86a26c5a2a9f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b1ed0fa73f235750b21d86a26c5a2a9f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b1ed0fa73f235750b21d86a26c5a2a9f ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLContext );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLContext );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SSLContext" );
        exception_tb = NULL;

        exception_lineno = 256;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_1 = par_ssl_version;

    CHECK_OBJECT( tmp_or_left_value_1 );
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        type_description_1 = "ooooo";
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
    tmp_or_right_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_PROTOCOL_TLS );

    if (unlikely( tmp_or_right_value_1 == NULL ))
    {
        tmp_or_right_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PROTOCOL_TLS );
    }

    if ( tmp_or_right_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "PROTOCOL_TLS" );
        exception_tb = NULL;

        exception_lineno = 256;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_args_element_name_1 = tmp_or_left_value_1;
    or_end_1:;
    frame_b1ed0fa73f235750b21d86a26c5a2a9f->m_frame.f_lineno = 256;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_context == NULL );
    var_context = tmp_assign_source_1;

    tmp_source_name_1 = var_context;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_set_ciphers );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 258;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_2 = par_ciphers;

    CHECK_OBJECT( tmp_or_left_value_2 );
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 258;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_2 == 1 )
    {
        goto or_left_2;
    }
    else
    {
        goto or_right_2;
    }
    or_right_2:;
    tmp_or_right_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_DEFAULT_CIPHERS );

    if (unlikely( tmp_or_right_value_2 == NULL ))
    {
        tmp_or_right_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_CIPHERS );
    }

    if ( tmp_or_right_value_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "DEFAULT_CIPHERS" );
        exception_tb = NULL;

        exception_lineno = 258;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_args_element_name_2 = tmp_or_left_value_2;
    or_end_2:;
    frame_b1ed0fa73f235750b21d86a26c5a2a9f->m_frame.f_lineno = 258;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 258;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_compare_left_1 = par_cert_reqs;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ssl" );
        exception_tb = NULL;

        exception_lineno = 261;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_CERT_REQUIRED );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 261;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_2 = par_cert_reqs;

    CHECK_OBJECT( tmp_assign_source_2 );
    Py_INCREF( tmp_assign_source_2 );
    condexpr_end_1:;
    {
        PyObject *old = par_cert_reqs;
        assert( old != NULL );
        par_cert_reqs = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_compare_left_2 = par_options;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    Py_XDECREF( par_options );
    par_options = NULL;

    tmp_left_name_1 = const_int_0;
    tmp_right_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv2 );

    if (unlikely( tmp_right_name_1 == NULL ))
    {
        tmp_right_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv2 );
    }

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "OP_NO_SSLv2" );
        exception_tb = NULL;

        exception_lineno = 266;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( par_options == NULL );
    par_options = tmp_assign_source_3;

    tmp_left_name_2 = par_options;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_right_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv3 );

    if (unlikely( tmp_right_name_2 == NULL ))
    {
        tmp_right_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv3 );
    }

    if ( tmp_right_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "OP_NO_SSLv3" );
        exception_tb = NULL;

        exception_lineno = 268;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_4 = tmp_left_name_2;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    par_options = tmp_assign_source_4;

    tmp_left_name_3 = par_options;

    CHECK_OBJECT( tmp_left_name_3 );
    tmp_right_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_COMPRESSION );

    if (unlikely( tmp_right_name_3 == NULL ))
    {
        tmp_right_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OP_NO_COMPRESSION );
    }

    if ( tmp_right_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "OP_NO_COMPRESSION" );
        exception_tb = NULL;

        exception_lineno = 271;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_3, tmp_right_name_3 );
    tmp_assign_source_5 = tmp_left_name_3;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    par_options = tmp_assign_source_5;

    branch_no_1:;
    tmp_source_name_3 = var_context;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_options );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_inplace_assign_attr_1__start == NULL );
    tmp_inplace_assign_attr_1__start = tmp_assign_source_6;

    // Tried code:
    tmp_left_name_4 = tmp_inplace_assign_attr_1__start;

    CHECK_OBJECT( tmp_left_name_4 );
    tmp_right_name_4 = par_options;

    CHECK_OBJECT( tmp_right_name_4 );
    tmp_assign_source_7 = BINARY_OPERATION( PyNumber_InPlaceOr, tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    assert( tmp_inplace_assign_attr_1__end == NULL );
    tmp_inplace_assign_attr_1__end = tmp_assign_source_7;

    // Tried code:
    tmp_compare_left_3 = tmp_inplace_assign_attr_1__start;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = tmp_inplace_assign_attr_1__end;

    CHECK_OBJECT( tmp_compare_right_3 );
    tmp_isnot_1 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = var_context;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_options, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    branch_no_2:;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    tmp_compexpr_left_1 = par_cert_reqs;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ssl" );
        exception_tb = NULL;

        exception_lineno = 281;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_CERT_REQUIRED );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_3 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_or_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_3 = CHECK_IF_TRUE( tmp_or_left_value_3 );
    if ( tmp_or_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_3 );

        exception_lineno = 281;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_3 == 1 )
    {
        goto or_left_3;
    }
    else
    {
        goto or_right_3;
    }
    or_right_3:;
    Py_DECREF( tmp_or_left_value_3 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 281;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_version_info );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = const_tuple_int_pos_3_int_pos_7_int_pos_4_tuple;
    tmp_or_right_value_3 = RICH_COMPARE_GE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_or_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_1 = tmp_or_right_value_3;
    goto or_end_3;
    or_left_3:;
    tmp_and_left_value_1 = tmp_or_left_value_3;
    or_end_3:;
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 281;
        type_description_1 = "ooooo";
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
    tmp_getattr_target_1 = var_context;

    CHECK_OBJECT( tmp_getattr_target_1 );
    tmp_getattr_attr_1 = const_str_plain_post_handshake_auth;
    tmp_getattr_default_1 = Py_None;
    tmp_compexpr_left_3 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_3 = Py_None;
    tmp_and_right_value_1 = BOOL_FROM( tmp_compexpr_left_3 != tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    Py_INCREF( tmp_and_right_value_1 );
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

        exception_lineno = 281;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assattr_name_2 = Py_True;
    tmp_assattr_target_2 = var_context;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_post_handshake_auth, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    tmp_assattr_name_3 = par_cert_reqs;

    CHECK_OBJECT( tmp_assattr_name_3 );
    tmp_assattr_target_3 = var_context;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_verify_mode, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 286;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_getattr_target_2 = var_context;

    CHECK_OBJECT( tmp_getattr_target_2 );
    tmp_getattr_attr_2 = const_str_plain_check_hostname;
    tmp_getattr_default_2 = Py_None;
    tmp_compare_left_4 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 288;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_4 != tmp_compare_right_4 );
    Py_DECREF( tmp_compare_left_4 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assattr_name_4 = Py_False;
    tmp_assattr_target_4 = var_context;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_check_hostname, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 292;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b1ed0fa73f235750b21d86a26c5a2a9f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b1ed0fa73f235750b21d86a26c5a2a9f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b1ed0fa73f235750b21d86a26c5a2a9f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b1ed0fa73f235750b21d86a26c5a2a9f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b1ed0fa73f235750b21d86a26c5a2a9f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b1ed0fa73f235750b21d86a26c5a2a9f,
        type_description_1,
        par_ssl_version,
        par_cert_reqs,
        par_options,
        par_ciphers,
        var_context
    );


    // Release cached frame.
    if ( frame_b1ed0fa73f235750b21d86a26c5a2a9f == cache_frame_b1ed0fa73f235750b21d86a26c5a2a9f )
    {
        Py_DECREF( frame_b1ed0fa73f235750b21d86a26c5a2a9f );
    }
    cache_frame_b1ed0fa73f235750b21d86a26c5a2a9f = NULL;

    assertFrameObject( frame_b1ed0fa73f235750b21d86a26c5a2a9f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_context;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_10_create_urllib3_context );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ciphers );
    Py_DECREF( par_ciphers );
    par_ciphers = NULL;

    CHECK_OBJECT( (PyObject *)par_ssl_version );
    Py_DECREF( par_ssl_version );
    par_ssl_version = NULL;

    CHECK_OBJECT( (PyObject *)par_options );
    Py_DECREF( par_options );
    par_options = NULL;

    CHECK_OBJECT( (PyObject *)var_context );
    Py_DECREF( var_context );
    var_context = NULL;

    CHECK_OBJECT( (PyObject *)par_cert_reqs );
    Py_DECREF( par_cert_reqs );
    par_cert_reqs = NULL;

    goto function_return_exit;
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

    CHECK_OBJECT( (PyObject *)par_ciphers );
    Py_DECREF( par_ciphers );
    par_ciphers = NULL;

    CHECK_OBJECT( (PyObject *)par_ssl_version );
    Py_DECREF( par_ssl_version );
    par_ssl_version = NULL;

    Py_XDECREF( par_options );
    par_options = NULL;

    Py_XDECREF( var_context );
    var_context = NULL;

    CHECK_OBJECT( (PyObject *)par_cert_reqs );
    Py_DECREF( par_cert_reqs );
    par_cert_reqs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_10_create_urllib3_context );
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


static PyObject *impl_urllib3$util$ssl_$$$function_11_ssl_wrap_socket( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sock = python_pars[ 0 ];
    PyObject *par_keyfile = python_pars[ 1 ];
    PyObject *par_certfile = python_pars[ 2 ];
    PyObject *par_cert_reqs = python_pars[ 3 ];
    PyObject *par_ca_certs = python_pars[ 4 ];
    PyObject *par_server_hostname = python_pars[ 5 ];
    PyObject *par_ssl_version = python_pars[ 6 ];
    PyObject *par_ciphers = python_pars[ 7 ];
    PyObject *par_ssl_context = python_pars[ 8 ];
    PyObject *par_ca_cert_dir = python_pars[ 9 ];
    PyObject *par_key_password = python_pars[ 10 ];
    PyObject *var_context = NULL;
    PyObject *var_e = NULL;
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
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    int tmp_and_left_truth_3;
    int tmp_and_left_truth_4;
    int tmp_and_left_truth_5;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_left_value_4;
    PyObject *tmp_and_left_value_5;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
    PyObject *tmp_and_right_value_4;
    PyObject *tmp_and_right_value_5;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
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
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_value_1;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_operand_name_1;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1130831c3d5ce4171eba6db9008c9434 = NULL;

    struct Nuitka_FrameObject *frame_1130831c3d5ce4171eba6db9008c9434;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = par_ssl_context;

    CHECK_OBJECT( tmp_assign_source_1 );
    assert( var_context == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_context = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1130831c3d5ce4171eba6db9008c9434, codeobj_1130831c3d5ce4171eba6db9008c9434, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1130831c3d5ce4171eba6db9008c9434 = cache_frame_1130831c3d5ce4171eba6db9008c9434;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1130831c3d5ce4171eba6db9008c9434 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1130831c3d5ce4171eba6db9008c9434 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = var_context;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_create_urllib3_context );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_create_urllib3_context );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "create_urllib3_context" );
        exception_tb = NULL;

        exception_lineno = 332;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_ssl_version;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_cert_reqs;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_ciphers;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_ciphers;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_1130831c3d5ce4171eba6db9008c9434->m_frame.f_lineno = 332;
    tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 332;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_context;
        assert( old != NULL );
        var_context = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_or_left_value_1 = par_ca_certs;

    CHECK_OBJECT( tmp_or_left_value_1 );
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;
        type_description_1 = "ooooooooooooo";
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
    tmp_or_right_value_1 = par_ca_cert_dir;

    CHECK_OBJECT( tmp_or_right_value_1 );
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


        exception_lineno = 334;
        type_description_1 = "ooooooooooooo";
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
    // Tried code:
    tmp_called_instance_1 = var_context;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_ca_certs;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_ca_cert_dir;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_1130831c3d5ce4171eba6db9008c9434->m_frame.f_lineno = 336;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_load_verify_locations, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_1130831c3d5ce4171eba6db9008c9434 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_1130831c3d5ce4171eba6db9008c9434, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_1130831c3d5ce4171eba6db9008c9434, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_IOError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 337;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_3 = PyThreadState_GET()->exc_value;
    assert( var_e == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_e = tmp_assign_source_3;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SSLError" );
        exception_tb = NULL;

        exception_lineno = 338;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_e;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_1130831c3d5ce4171eba6db9008c9434->m_frame.f_lineno = 338;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 338;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 338;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_OSError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 341;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_4 = PyThreadState_GET()->exc_value;
    assert( var_e == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_e = tmp_assign_source_4;

    tmp_source_name_1 = var_e;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_errno );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 342;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_errno );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_errno );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_compare_left_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "errno" );
        exception_tb = NULL;

        exception_lineno = 342;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ENOENT );
    if ( tmp_compare_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 342;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );
        Py_DECREF( tmp_compare_right_4 );

        exception_lineno = 342;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    Py_DECREF( tmp_compare_right_4 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SSLError" );
        exception_tb = NULL;

        exception_lineno = 343;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = var_e;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_1130831c3d5ce4171eba6db9008c9434->m_frame.f_lineno = 343;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 343;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 344;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1130831c3d5ce4171eba6db9008c9434->m_frame) frame_1130831c3d5ce4171eba6db9008c9434->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 335;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1130831c3d5ce4171eba6db9008c9434->m_frame) frame_1130831c3d5ce4171eba6db9008c9434->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
    branch_end_4:;
    branch_end_3:;
    // End of try:
    try_end_1:;
    goto branch_end_2;
    branch_no_2:;
    tmp_compexpr_left_1 = par_ssl_context;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = Py_None;
    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
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
    tmp_hasattr_value_1 = var_context;

    CHECK_OBJECT( tmp_hasattr_value_1 );
    tmp_hasattr_attr_1 = const_str_plain_load_default_certs;
    tmp_and_right_value_1 = BUILTIN_HASATTR( tmp_hasattr_value_1, tmp_hasattr_attr_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 346;
        type_description_1 = "ooooooooooooo";
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


        exception_lineno = 346;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_called_instance_2 = var_context;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_1130831c3d5ce4171eba6db9008c9434->m_frame.f_lineno = 348;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_load_default_certs );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 348;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
    branch_end_2:;
    tmp_and_left_value_2 = par_keyfile;

    CHECK_OBJECT( tmp_and_left_value_2 );
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 353;
        type_description_1 = "ooooooooooooo";
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
    tmp_compexpr_left_2 = par_key_password;

    CHECK_OBJECT( tmp_compexpr_left_2 );
    tmp_compexpr_right_2 = Py_None;
    tmp_and_left_value_3 = BOOL_FROM( tmp_compexpr_left_2 == tmp_compexpr_right_2 );
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    assert( !(tmp_and_left_truth_3 == -1) );
    if ( tmp_and_left_truth_3 == 1 )
    {
        goto and_right_3;
    }
    else
    {
        goto and_left_3;
    }
    and_right_3:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain__is_key_file_encrypted );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__is_key_file_encrypted );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_is_key_file_encrypted" );
        exception_tb = NULL;

        exception_lineno = 353;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_keyfile;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_1130831c3d5ce4171eba6db9008c9434->m_frame.f_lineno = 353;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_and_right_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_and_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 353;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_2 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    Py_INCREF( tmp_and_left_value_3 );
    tmp_and_right_value_2 = tmp_and_left_value_3;
    and_end_3:;
    tmp_cond_value_3 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    Py_INCREF( tmp_and_left_value_2 );
    tmp_cond_value_3 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 353;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SSLError" );
        exception_tb = NULL;

        exception_lineno = 354;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_1130831c3d5ce4171eba6db9008c9434->m_frame.f_lineno = 354;
    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_str_digest_9122c237564b58c6d395bd61e093c6a7_tuple, 0 ) );

    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 354;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    exception_lineno = 354;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_7:;
    tmp_cond_value_4 = par_certfile;

    CHECK_OBJECT( tmp_cond_value_4 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_compare_left_5 = par_key_password;

    CHECK_OBJECT( tmp_compare_left_5 );
    tmp_compare_right_5 = Py_None;
    tmp_is_2 = ( tmp_compare_left_5 == tmp_compare_right_5 );
    if ( tmp_is_2 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_called_instance_3 = var_context;

    CHECK_OBJECT( tmp_called_instance_3 );
    tmp_args_element_name_6 = par_certfile;

    CHECK_OBJECT( tmp_args_element_name_6 );
    tmp_args_element_name_7 = par_keyfile;

    CHECK_OBJECT( tmp_args_element_name_7 );
    frame_1130831c3d5ce4171eba6db9008c9434->m_frame.f_lineno = 358;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_load_cert_chain, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 358;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_9;
    branch_no_9:;
    tmp_called_instance_4 = var_context;

    CHECK_OBJECT( tmp_called_instance_4 );
    tmp_args_element_name_8 = par_certfile;

    CHECK_OBJECT( tmp_args_element_name_8 );
    tmp_args_element_name_9 = par_keyfile;

    CHECK_OBJECT( tmp_args_element_name_9 );
    tmp_args_element_name_10 = par_key_password;

    CHECK_OBJECT( tmp_args_element_name_10 );
    frame_1130831c3d5ce4171eba6db9008c9434->m_frame.f_lineno = 360;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_unused = CALL_METHOD_WITH_ARGS3( tmp_called_instance_4, const_str_plain_load_cert_chain, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 360;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_9:;
    branch_no_8:;
    tmp_compexpr_left_3 = par_server_hostname;

    CHECK_OBJECT( tmp_compexpr_left_3 );
    tmp_compexpr_right_3 = Py_None;
    tmp_and_left_value_4 = BOOL_FROM( tmp_compexpr_left_3 != tmp_compexpr_right_3 );
    tmp_and_left_truth_4 = CHECK_IF_TRUE( tmp_and_left_value_4 );
    assert( !(tmp_and_left_truth_4 == -1) );
    if ( tmp_and_left_truth_4 == 1 )
    {
        goto and_right_4;
    }
    else
    {
        goto and_left_4;
    }
    and_right_4:;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_is_ipaddress );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_ipaddress );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "is_ipaddress" );
        exception_tb = NULL;

        exception_lineno = 367;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = par_server_hostname;

    CHECK_OBJECT( tmp_args_element_name_11 );
    frame_1130831c3d5ce4171eba6db9008c9434->m_frame.f_lineno = 367;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_4 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_and_right_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_2 = tmp_and_right_value_4;
    goto and_end_4;
    and_left_4:;
    tmp_or_left_value_2 = tmp_and_left_value_4;
    and_end_4:;
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 368;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_2 == 1 )
    {
        goto or_left_2;
    }
    else
    {
        goto or_right_2;
    }
    or_right_2:;
    tmp_or_right_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_IS_SECURETRANSPORT );

    if (unlikely( tmp_or_right_value_2 == NULL ))
    {
        tmp_or_right_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IS_SECURETRANSPORT );
    }

    if ( tmp_or_right_value_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "IS_SECURETRANSPORT" );
        exception_tb = NULL;

        exception_lineno = 368;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_5 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_cond_value_5 = tmp_or_left_value_2;
    or_end_2:;
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 368;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_and_left_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_HAS_SNI );

    if (unlikely( tmp_and_left_value_5 == NULL ))
    {
        tmp_and_left_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HAS_SNI );
    }

    if ( tmp_and_left_value_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "HAS_SNI" );
        exception_tb = NULL;

        exception_lineno = 369;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_5 = CHECK_IF_TRUE( tmp_and_left_value_5 );
    if ( tmp_and_left_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 369;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_5 == 1 )
    {
        goto and_right_5;
    }
    else
    {
        goto and_left_5;
    }
    and_right_5:;
    tmp_compexpr_left_4 = par_server_hostname;

    CHECK_OBJECT( tmp_compexpr_left_4 );
    tmp_compexpr_right_4 = Py_None;
    tmp_and_right_value_5 = BOOL_FROM( tmp_compexpr_left_4 != tmp_compexpr_right_4 );
    tmp_cond_value_6 = tmp_and_right_value_5;
    goto and_end_5;
    and_left_5:;
    tmp_cond_value_6 = tmp_and_left_value_5;
    and_end_5:;
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 369;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_source_name_3 = var_context;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_wrap_socket );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = par_sock;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = par_server_hostname;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_server_hostname;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_1130831c3d5ce4171eba6db9008c9434->m_frame.f_lineno = 370;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_11:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "warnings" );
        exception_tb = NULL;

        exception_lineno = 372;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_warn );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 372;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_12 = const_str_digest_1f7b5ce5a77b16d07a45e4d29e803bbc;
    tmp_args_element_name_13 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SNIMissingWarning );

    if (unlikely( tmp_args_element_name_13 == NULL ))
    {
        tmp_args_element_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SNIMissingWarning );
    }

    if ( tmp_args_element_name_13 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SNIMissingWarning" );
        exception_tb = NULL;

        exception_lineno = 380;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_1130831c3d5ce4171eba6db9008c9434->m_frame.f_lineno = 372;
    {
        PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 372;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_10:;
    tmp_called_instance_5 = var_context;

    CHECK_OBJECT( tmp_called_instance_5 );
    tmp_args_element_name_14 = par_sock;

    CHECK_OBJECT( tmp_args_element_name_14 );
    frame_1130831c3d5ce4171eba6db9008c9434->m_frame.f_lineno = 383;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_wrap_socket, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_1130831c3d5ce4171eba6db9008c9434 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_1130831c3d5ce4171eba6db9008c9434 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_1130831c3d5ce4171eba6db9008c9434 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1130831c3d5ce4171eba6db9008c9434, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1130831c3d5ce4171eba6db9008c9434->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1130831c3d5ce4171eba6db9008c9434, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1130831c3d5ce4171eba6db9008c9434,
        type_description_1,
        par_sock,
        par_keyfile,
        par_certfile,
        par_cert_reqs,
        par_ca_certs,
        par_server_hostname,
        par_ssl_version,
        par_ciphers,
        par_ssl_context,
        par_ca_cert_dir,
        par_key_password,
        var_context,
        var_e
    );


    // Release cached frame.
    if ( frame_1130831c3d5ce4171eba6db9008c9434 == cache_frame_1130831c3d5ce4171eba6db9008c9434 )
    {
        Py_DECREF( frame_1130831c3d5ce4171eba6db9008c9434 );
    }
    cache_frame_1130831c3d5ce4171eba6db9008c9434 = NULL;

    assertFrameObject( frame_1130831c3d5ce4171eba6db9008c9434 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_11_ssl_wrap_socket );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_server_hostname );
    Py_DECREF( par_server_hostname );
    par_server_hostname = NULL;

    CHECK_OBJECT( (PyObject *)par_certfile );
    Py_DECREF( par_certfile );
    par_certfile = NULL;

    CHECK_OBJECT( (PyObject *)par_ssl_version );
    Py_DECREF( par_ssl_version );
    par_ssl_version = NULL;

    CHECK_OBJECT( (PyObject *)par_ciphers );
    Py_DECREF( par_ciphers );
    par_ciphers = NULL;

    CHECK_OBJECT( (PyObject *)par_sock );
    Py_DECREF( par_sock );
    par_sock = NULL;

    CHECK_OBJECT( (PyObject *)par_ssl_context );
    Py_DECREF( par_ssl_context );
    par_ssl_context = NULL;

    CHECK_OBJECT( (PyObject *)par_ca_cert_dir );
    Py_DECREF( par_ca_cert_dir );
    par_ca_cert_dir = NULL;

    CHECK_OBJECT( (PyObject *)var_context );
    Py_DECREF( var_context );
    var_context = NULL;

    CHECK_OBJECT( (PyObject *)par_cert_reqs );
    Py_DECREF( par_cert_reqs );
    par_cert_reqs = NULL;

    CHECK_OBJECT( (PyObject *)par_ca_certs );
    Py_DECREF( par_ca_certs );
    par_ca_certs = NULL;

    CHECK_OBJECT( (PyObject *)par_keyfile );
    Py_DECREF( par_keyfile );
    par_keyfile = NULL;

    CHECK_OBJECT( (PyObject *)par_key_password );
    Py_DECREF( par_key_password );
    par_key_password = NULL;

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

    CHECK_OBJECT( (PyObject *)par_server_hostname );
    Py_DECREF( par_server_hostname );
    par_server_hostname = NULL;

    CHECK_OBJECT( (PyObject *)par_certfile );
    Py_DECREF( par_certfile );
    par_certfile = NULL;

    CHECK_OBJECT( (PyObject *)par_ssl_version );
    Py_DECREF( par_ssl_version );
    par_ssl_version = NULL;

    CHECK_OBJECT( (PyObject *)par_ciphers );
    Py_DECREF( par_ciphers );
    par_ciphers = NULL;

    CHECK_OBJECT( (PyObject *)par_sock );
    Py_DECREF( par_sock );
    par_sock = NULL;

    CHECK_OBJECT( (PyObject *)par_ssl_context );
    Py_DECREF( par_ssl_context );
    par_ssl_context = NULL;

    CHECK_OBJECT( (PyObject *)par_ca_cert_dir );
    Py_DECREF( par_ca_cert_dir );
    par_ca_cert_dir = NULL;

    Py_XDECREF( var_context );
    var_context = NULL;

    CHECK_OBJECT( (PyObject *)par_cert_reqs );
    Py_DECREF( par_cert_reqs );
    par_cert_reqs = NULL;

    CHECK_OBJECT( (PyObject *)par_ca_certs );
    Py_DECREF( par_ca_certs );
    par_ca_certs = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    CHECK_OBJECT( (PyObject *)par_keyfile );
    Py_DECREF( par_keyfile );
    par_keyfile = NULL;

    CHECK_OBJECT( (PyObject *)par_key_password );
    Py_DECREF( par_key_password );
    par_key_password = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_11_ssl_wrap_socket );
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


static PyObject *impl_urllib3$util$ssl_$$$function_12_is_ipaddress( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_hostname = python_pars[ 0 ];
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_bool_arg_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_operand_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_654e52afc443e8818122874c5a74ebc6 = NULL;

    struct Nuitka_FrameObject *frame_654e52afc443e8818122874c5a74ebc6;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_654e52afc443e8818122874c5a74ebc6, codeobj_654e52afc443e8818122874c5a74ebc6, module_urllib3$util$ssl_, sizeof(void *) );
    frame_654e52afc443e8818122874c5a74ebc6 = cache_frame_654e52afc443e8818122874c5a74ebc6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_654e52afc443e8818122874c5a74ebc6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_654e52afc443e8818122874c5a74ebc6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_six );

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

        exception_lineno = 393;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_PY2 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        type_description_1 = "o";
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
    tmp_isinstance_inst_1 = par_hostname;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = (PyObject *)&PyString_Type;
    tmp_and_right_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        type_description_1 = "o";
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


        exception_lineno = 393;
        type_description_1 = "o";
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
    tmp_called_instance_1 = par_hostname;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_654e52afc443e8818122874c5a74ebc6->m_frame.f_lineno = 395;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_plain_ascii_tuple, 0 ) );

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 395;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_hostname;
        assert( old != NULL );
        par_hostname = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_IPV4_RE );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IPV4_RE );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "IPV4_RE" );
        exception_tb = NULL;

        exception_lineno = 396;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_hostname;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_654e52afc443e8818122874c5a74ebc6->m_frame.f_lineno = 396;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_or_left_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_match, call_args );
    }

    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 396;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 396;
        type_description_1 = "o";
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
    Py_DECREF( tmp_or_left_value_1 );
    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_BRACELESS_IPV6_ADDRZ_RE );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BRACELESS_IPV6_ADDRZ_RE );
    }

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "BRACELESS_IPV6_ADDRZ_RE" );
        exception_tb = NULL;

        exception_lineno = 396;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_hostname;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_654e52afc443e8818122874c5a74ebc6->m_frame.f_lineno = 396;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_or_right_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_match, call_args );
    }

    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 396;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_bool_arg_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_bool_arg_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_return_value = TO_BOOL( tmp_bool_arg_1 );
    Py_DECREF( tmp_bool_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 396;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_654e52afc443e8818122874c5a74ebc6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_654e52afc443e8818122874c5a74ebc6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_654e52afc443e8818122874c5a74ebc6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_654e52afc443e8818122874c5a74ebc6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_654e52afc443e8818122874c5a74ebc6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_654e52afc443e8818122874c5a74ebc6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_654e52afc443e8818122874c5a74ebc6,
        type_description_1,
        par_hostname
    );


    // Release cached frame.
    if ( frame_654e52afc443e8818122874c5a74ebc6 == cache_frame_654e52afc443e8818122874c5a74ebc6 )
    {
        Py_DECREF( frame_654e52afc443e8818122874c5a74ebc6 );
    }
    cache_frame_654e52afc443e8818122874c5a74ebc6 = NULL;

    assertFrameObject( frame_654e52afc443e8818122874c5a74ebc6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_12_is_ipaddress );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_hostname );
    Py_DECREF( par_hostname );
    par_hostname = NULL;

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

    Py_XDECREF( par_hostname );
    par_hostname = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_12_is_ipaddress );
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


static PyObject *impl_urllib3$util$ssl_$$$function_13__is_key_file_encrypted( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key_file = python_pars[ 0 ];
    PyObject *var_line = NULL;
    PyObject *var_f = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    PyObject *tmp_with_1__indicator = NULL;
    PyObject *tmp_with_1__source = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_open_filename_1;
    PyObject *tmp_open_mode_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_1dbe3bbc289db7dbdadd3d60b3def527 = NULL;

    struct Nuitka_FrameObject *frame_1dbe3bbc289db7dbdadd3d60b3def527;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1dbe3bbc289db7dbdadd3d60b3def527, codeobj_1dbe3bbc289db7dbdadd3d60b3def527, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1dbe3bbc289db7dbdadd3d60b3def527 = cache_frame_1dbe3bbc289db7dbdadd3d60b3def527;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1dbe3bbc289db7dbdadd3d60b3def527 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1dbe3bbc289db7dbdadd3d60b3def527 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_open_filename_1 = par_key_file;

    CHECK_OBJECT( tmp_open_filename_1 );
    tmp_open_mode_1 = const_str_plain_r;
    tmp_assign_source_1 = BUILTIN_OPEN( tmp_open_filename_1, tmp_open_mode_1, NULL );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 401;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    assert( tmp_with_1__source == NULL );
    tmp_with_1__source = tmp_assign_source_1;

    tmp_source_name_1 = tmp_with_1__source;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_2 = LOOKUP_SPECIAL( tmp_source_name_1, const_str_plain___exit__ );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 401;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    assert( tmp_with_1__exit == NULL );
    tmp_with_1__exit = tmp_assign_source_2;

    tmp_source_name_2 = tmp_with_1__source;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_1 = LOOKUP_SPECIAL( tmp_source_name_2, const_str_plain___enter__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 401;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    frame_1dbe3bbc289db7dbdadd3d60b3def527->m_frame.f_lineno = 401;
    tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 401;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    assert( tmp_with_1__enter == NULL );
    tmp_with_1__enter = tmp_assign_source_3;

    tmp_assign_source_4 = Py_True;
    assert( tmp_with_1__indicator == NULL );
    Py_INCREF( tmp_assign_source_4 );
    tmp_with_1__indicator = tmp_assign_source_4;

    tmp_assign_source_5 = tmp_with_1__enter;

    CHECK_OBJECT( tmp_assign_source_5 );
    assert( var_f == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_f = tmp_assign_source_5;

    // Tried code:
    // Tried code:
    tmp_iter_arg_1 = var_f;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 402;
        type_description_1 = "ooo";
        goto try_except_handler_4;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_6;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_7 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_7 == NULL )
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


        type_description_1 = "ooo";
        exception_lineno = 402;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    goto try_end_1;
    // Exception handler code:
    try_except_handler_6:;
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

        exception_lineno = 402;
        type_description_1 = "ooo";
        goto try_except_handler_5;
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

    goto try_except_handler_5;
    branch_end_1:;
    // End of try:
    try_end_1:;
    tmp_assign_source_8 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_8 );
    {
        PyObject *old = var_line;
        var_line = tmp_assign_source_8;
        Py_INCREF( var_line );
        Py_XDECREF( old );
    }

    tmp_compare_left_2 = const_str_plain_ENCRYPTED;
    tmp_compare_right_2 = var_line;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_5;
    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 402;
        type_description_1 = "ooo";
        goto try_except_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Return handler code:
    try_return_handler_5:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__iter_value );
    Py_DECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto try_return_handler_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto try_end_3;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_1dbe3bbc289db7dbdadd3d60b3def527 );
    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_1dbe3bbc289db7dbdadd3d60b3def527, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_1dbe3bbc289db7dbdadd3d60b3def527, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_BaseException;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 401;
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_9 = Py_False;
    {
        PyObject *old = tmp_with_1__indicator;
        assert( old != NULL );
        tmp_with_1__indicator = tmp_assign_source_9;
        Py_INCREF( tmp_with_1__indicator );
        Py_DECREF( old );
    }

    tmp_called_name_2 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_args_element_name_1 = PyThreadState_GET()->exc_type;
    tmp_args_element_name_2 = PyThreadState_GET()->exc_value;
    tmp_args_element_name_3 = PyThreadState_GET()->exc_traceback;
    frame_1dbe3bbc289db7dbdadd3d60b3def527->m_frame.f_lineno = 401;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 401;
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 401;
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 401;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1dbe3bbc289db7dbdadd3d60b3def527->m_frame) frame_1dbe3bbc289db7dbdadd3d60b3def527->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_3;
    branch_no_4:;
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 401;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1dbe3bbc289db7dbdadd3d60b3def527->m_frame) frame_1dbe3bbc289db7dbdadd3d60b3def527->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_3;
    branch_end_3:;
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_13__is_key_file_encrypted );
    return NULL;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Return handler code:
    try_return_handler_3:;
    tmp_called_name_3 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_3 );
    frame_1dbe3bbc289db7dbdadd3d60b3def527->m_frame.f_lineno = 401;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 401;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    goto try_return_handler_2;
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

    tmp_compare_left_4 = tmp_with_1__indicator;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = Py_True;
    tmp_is_1 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if ( tmp_is_1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_name_4 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_4 );
    frame_1dbe3bbc289db7dbdadd3d60b3def527->m_frame.f_lineno = 401;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_4 );
        Py_XDECREF( exception_keeper_value_4 );
        Py_XDECREF( exception_keeper_tb_4 );

        exception_lineno = 401;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_5:;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    tmp_compare_left_5 = tmp_with_1__indicator;

    CHECK_OBJECT( tmp_compare_left_5 );
    tmp_compare_right_5 = Py_True;
    tmp_is_2 = ( tmp_compare_left_5 == tmp_compare_right_5 );
    if ( tmp_is_2 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_called_name_5 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_5 );
    frame_1dbe3bbc289db7dbdadd3d60b3def527->m_frame.f_lineno = 401;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 401;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
    goto try_end_5;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__indicator );
    Py_DECREF( tmp_with_1__indicator );
    tmp_with_1__indicator = NULL;

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    Py_XDECREF( tmp_with_1__indicator );
    tmp_with_1__indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_1dbe3bbc289db7dbdadd3d60b3def527 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_1dbe3bbc289db7dbdadd3d60b3def527 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_1dbe3bbc289db7dbdadd3d60b3def527 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1dbe3bbc289db7dbdadd3d60b3def527, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1dbe3bbc289db7dbdadd3d60b3def527->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1dbe3bbc289db7dbdadd3d60b3def527, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1dbe3bbc289db7dbdadd3d60b3def527,
        type_description_1,
        par_key_file,
        var_line,
        var_f
    );


    // Release cached frame.
    if ( frame_1dbe3bbc289db7dbdadd3d60b3def527 == cache_frame_1dbe3bbc289db7dbdadd3d60b3def527 )
    {
        Py_DECREF( frame_1dbe3bbc289db7dbdadd3d60b3def527 );
    }
    cache_frame_1dbe3bbc289db7dbdadd3d60b3def527 = NULL;

    assertFrameObject( frame_1dbe3bbc289db7dbdadd3d60b3def527 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    Py_XDECREF( tmp_with_1__indicator );
    tmp_with_1__indicator = NULL;

    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_13__is_key_file_encrypted );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_key_file );
    Py_DECREF( par_key_file );
    par_key_file = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;

    CHECK_OBJECT( (PyObject *)var_f );
    Py_DECREF( var_f );
    var_f = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_key_file );
    Py_DECREF( par_key_file );
    par_key_file = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_$$$function_13__is_key_file_encrypted );
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



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_10_create_urllib3_context( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_10_create_urllib3_context,
        const_str_plain_create_urllib3_context,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b1ed0fa73f235750b21d86a26c5a2a9f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$ssl_,
        const_str_digest_c6e5c4394838f24a74fcd724137f89e0,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_11_ssl_wrap_socket( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_11_ssl_wrap_socket,
        const_str_plain_ssl_wrap_socket,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1130831c3d5ce4171eba6db9008c9434,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$ssl_,
        const_str_digest_d003c9c097edbd2a450c14deecbcfd2e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_12_is_ipaddress(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_12_is_ipaddress,
        const_str_plain_is_ipaddress,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_654e52afc443e8818122874c5a74ebc6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$ssl_,
        const_str_digest_7433ea5e9bf8137907952033c6cfa210,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_13__is_key_file_encrypted(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_13__is_key_file_encrypted,
        const_str_plain__is_key_file_encrypted,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1dbe3bbc289db7dbdadd3d60b3def527,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$ssl_,
        const_str_digest_11208532747ea36cadee31118e841464,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_1__const_compare_digest_backport(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_1__const_compare_digest_backport,
        const_str_plain__const_compare_digest_backport,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cd5bbe1c6081885bea88ea7716be5cb7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$ssl_,
        const_str_digest_f5ab9e44d9781bbce93000ad3a218dd6,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_2___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c5fc2683dea24e9bce762d4a67569074,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$ssl_,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_3_load_cert_chain(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_3_load_cert_chain,
        const_str_plain_load_cert_chain,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b0f16da2fcd77424e84e39567cca4888,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$ssl_,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_4_load_verify_locations( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_4_load_verify_locations,
        const_str_plain_load_verify_locations,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fcb5f25590f1b417d5c17fc33bc46d43,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$ssl_,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_5_set_ciphers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_5_set_ciphers,
        const_str_plain_set_ciphers,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_239cb741fa929382023eb79721b3c006,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$ssl_,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_6_wrap_socket( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_6_wrap_socket,
        const_str_plain_wrap_socket,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5daa1b5132645273087bf6eb5886e540,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$ssl_,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_7_assert_fingerprint(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_7_assert_fingerprint,
        const_str_plain_assert_fingerprint,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_22f2a5b029403f66e8df05948b08775b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$ssl_,
        const_str_digest_935dace93363545d379a5e2ed3994f38,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_8_resolve_cert_reqs(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_8_resolve_cert_reqs,
        const_str_plain_resolve_cert_reqs,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c679a734ea12cc00822a913dd5294757,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$ssl_,
        const_str_digest_873f89c91a6f1965f5902998a695e3d7,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function_9_resolve_ssl_version(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function_9_resolve_ssl_version,
        const_str_plain_resolve_ssl_version,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_66bd023fd9bd9693ea48948185740b83,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$ssl_,
        const_str_digest_40d4c2a9acff45d215ea7c0bc7f6dfe1,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$util$ssl_ =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.util.ssl_",   /* m_name */
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

MOD_INIT_DECL( urllib3$util$ssl_ )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$util$ssl_ );
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
    puts("urllib3.util.ssl_: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.util.ssl_: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.util.ssl_: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$util$ssl_" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$util$ssl_ = Py_InitModule4(
        "urllib3.util.ssl_",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3$util$ssl_ = PyModule_Create( &mdef_urllib3$util$ssl_ );
#endif

    moduledict_urllib3$util$ssl_ = MODULE_DICT( module_urllib3$util$ssl_ );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3$util$ssl_,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$ssl_,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_urllib3$util$ssl_,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$ssl_,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3$util$ssl_ );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_6efba4feba5d3ac1fc26ca13b212a604, module_urllib3$util$ssl_ );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_import_from_6__module = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dictset_value;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    int tmp_exc_match_exception_match_4;
    int tmp_exc_match_exception_match_5;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_fromlist_name_8;
    PyObject *tmp_fromlist_name_9;
    PyObject *tmp_fromlist_name_10;
    PyObject *tmp_fromlist_name_11;
    PyObject *tmp_fromlist_name_12;
    PyObject *tmp_fromlist_name_13;
    PyObject *tmp_fromlist_name_14;
    PyObject *tmp_fromlist_name_15;
    PyObject *tmp_fromlist_name_16;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
    PyObject *tmp_globals_name_8;
    PyObject *tmp_globals_name_9;
    PyObject *tmp_globals_name_10;
    PyObject *tmp_globals_name_11;
    PyObject *tmp_globals_name_12;
    PyObject *tmp_globals_name_13;
    PyObject *tmp_globals_name_14;
    PyObject *tmp_globals_name_15;
    PyObject *tmp_globals_name_16;
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
    PyObject *tmp_import_name_from_12;
    PyObject *tmp_import_name_from_13;
    PyObject *tmp_import_name_from_14;
    PyObject *tmp_import_name_from_15;
    PyObject *tmp_import_name_from_16;
    PyObject *tmp_import_name_from_17;
    PyObject *tmp_import_name_from_18;
    PyObject *tmp_import_name_from_19;
    PyObject *tmp_import_name_from_20;
    PyObject *tmp_import_name_from_21;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_level_name_7;
    PyObject *tmp_level_name_8;
    PyObject *tmp_level_name_9;
    PyObject *tmp_level_name_10;
    PyObject *tmp_level_name_11;
    PyObject *tmp_level_name_12;
    PyObject *tmp_level_name_13;
    PyObject *tmp_level_name_14;
    PyObject *tmp_level_name_15;
    PyObject *tmp_level_name_16;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_locals_name_8;
    PyObject *tmp_locals_name_9;
    PyObject *tmp_locals_name_10;
    PyObject *tmp_locals_name_11;
    PyObject *tmp_locals_name_12;
    PyObject *tmp_locals_name_13;
    PyObject *tmp_locals_name_14;
    PyObject *tmp_locals_name_15;
    PyObject *tmp_locals_name_16;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    PyObject *tmp_name_name_8;
    PyObject *tmp_name_name_9;
    PyObject *tmp_name_name_10;
    PyObject *tmp_name_name_11;
    PyObject *tmp_name_name_12;
    PyObject *tmp_name_name_13;
    PyObject *tmp_name_name_14;
    PyObject *tmp_name_name_15;
    PyObject *tmp_name_name_16;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    struct Nuitka_FrameObject *frame_0179ea8e713f8987820c830a8eeae5ac;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;
    PyObject *locals_SSLContext_106 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_0179ea8e713f8987820c830a8eeae5ac = MAKE_MODULE_FRAME( codeobj_0179ea8e713f8987820c830a8eeae5ac, module_urllib3$util$ssl_ );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_0179ea8e713f8987820c830a8eeae5ac );
    assert( Py_REFCNT( frame_0179ea8e713f8987820c830a8eeae5ac ) == 2 );

    // Framed code:
    frame_0179ea8e713f8987820c830a8eeae5ac->m_frame.f_lineno = 1;
    tmp_import_name_from_1 = PyImport_ImportModule("__future__");
    assert( tmp_import_name_from_1 != NULL );
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_3 );
    tmp_name_name_1 = const_str_plain_errno;
    tmp_globals_name_1 = (PyObject *)moduledict_urllib3$util$ssl_;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_0179ea8e713f8987820c830a8eeae5ac->m_frame.f_lineno = 2;
    tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    assert( tmp_assign_source_4 != NULL );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_errno, tmp_assign_source_4 );
    tmp_name_name_2 = const_str_plain_warnings;
    tmp_globals_name_2 = (PyObject *)moduledict_urllib3$util$ssl_;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_0179ea8e713f8987820c830a8eeae5ac->m_frame.f_lineno = 3;
    tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_5 );
    tmp_name_name_3 = const_str_plain_hmac;
    tmp_globals_name_3 = (PyObject *)moduledict_urllib3$util$ssl_;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    tmp_level_name_3 = const_int_0;
    frame_0179ea8e713f8987820c830a8eeae5ac->m_frame.f_lineno = 4;
    tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_hmac, tmp_assign_source_6 );
    tmp_name_name_4 = const_str_plain_sys;
    tmp_globals_name_4 = (PyObject *)moduledict_urllib3$util$ssl_;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = Py_None;
    tmp_level_name_4 = const_int_0;
    frame_0179ea8e713f8987820c830a8eeae5ac->m_frame.f_lineno = 5;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    assert( tmp_assign_source_7 != NULL );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_7 );
    tmp_name_name_5 = const_str_plain_binascii;
    tmp_globals_name_5 = (PyObject *)moduledict_urllib3$util$ssl_;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_hexlify_str_plain_unhexlify_tuple;
    tmp_level_name_5 = const_int_0;
    frame_0179ea8e713f8987820c830a8eeae5ac->m_frame.f_lineno = 7;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_8;

    // Tried code:
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_hexlify );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_hexlify, tmp_assign_source_9 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_unhexlify );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_unhexlify, tmp_assign_source_10 );
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

    tmp_name_name_6 = const_str_plain_hashlib;
    tmp_globals_name_6 = (PyObject *)moduledict_urllib3$util$ssl_;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_md5_str_plain_sha1_str_plain_sha256_tuple;
    tmp_level_name_6 = const_int_0;
    frame_0179ea8e713f8987820c830a8eeae5ac->m_frame.f_lineno = 8;
    tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_11;

    // Tried code:
    tmp_import_name_from_4 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_md5 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_md5, tmp_assign_source_12 );
    tmp_import_name_from_5 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_sha1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_sha1, tmp_assign_source_13 );
    tmp_import_name_from_6 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_sha256 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_sha256, tmp_assign_source_14 );
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

    tmp_name_name_7 = const_str_plain_url;
    tmp_globals_name_7 = (PyObject *)moduledict_urllib3$util$ssl_;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_IPV4_RE_str_plain_BRACELESS_IPV6_ADDRZ_RE_tuple;
    tmp_level_name_7 = const_int_pos_1;
    frame_0179ea8e713f8987820c830a8eeae5ac->m_frame.f_lineno = 10;
    tmp_assign_source_15 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_15;

    // Tried code:
    tmp_import_name_from_7 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_IPV4_RE );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_IPV4_RE, tmp_assign_source_16 );
    tmp_import_name_from_8 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_BRACELESS_IPV6_ADDRZ_RE );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_BRACELESS_IPV6_ADDRZ_RE, tmp_assign_source_17 );
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

    tmp_name_name_8 = const_str_plain_exceptions;
    tmp_globals_name_8 = (PyObject *)moduledict_urllib3$util$ssl_;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_7673b4980e477b6659d3f5c31ead1376_tuple;
    tmp_level_name_8 = const_int_pos_2;
    frame_0179ea8e713f8987820c830a8eeae5ac->m_frame.f_lineno = 11;
    tmp_assign_source_18 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_4__module == NULL );
    tmp_import_from_4__module = tmp_assign_source_18;

    // Tried code:
    tmp_import_name_from_9 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_SSLError );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLError, tmp_assign_source_19 );
    tmp_import_name_from_10 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_InsecurePlatformWarning );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_InsecurePlatformWarning, tmp_assign_source_20 );
    tmp_import_name_from_11 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_SNIMissingWarning );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SNIMissingWarning, tmp_assign_source_21 );
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    tmp_name_name_9 = const_str_plain_packages;
    tmp_globals_name_9 = (PyObject *)moduledict_urllib3$util$ssl_;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = const_tuple_str_plain_six_tuple;
    tmp_level_name_9 = const_int_pos_2;
    frame_0179ea8e713f8987820c830a8eeae5ac->m_frame.f_lineno = 12;
    tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_six );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_22 );
    tmp_assign_source_23 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLContext, tmp_assign_source_23 );
    tmp_assign_source_24 = Py_False;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_HAS_SNI, tmp_assign_source_24 );
    tmp_assign_source_25 = Py_False;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_IS_PYOPENSSL, tmp_assign_source_25 );
    tmp_assign_source_26 = Py_False;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_IS_SECURETRANSPORT, tmp_assign_source_26 );
    tmp_assign_source_27 = _PyDict_NewPresized( 3 );
    tmp_dict_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_md5 );

    if (unlikely( tmp_dict_value_1 == NULL ))
    {
        tmp_dict_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_md5 );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_27 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "md5" );
        exception_tb = NULL;

        exception_lineno = 21;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_int_pos_32;
    tmp_res = PyDict_SetItem( tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_sha1 );

    if (unlikely( tmp_dict_value_2 == NULL ))
    {
        tmp_dict_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sha1 );
    }

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_27 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "sha1" );
        exception_tb = NULL;

        exception_lineno = 21;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_int_pos_40;
    tmp_res = PyDict_SetItem( tmp_assign_source_27, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_sha256 );

    if (unlikely( tmp_dict_value_3 == NULL ))
    {
        tmp_dict_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sha256 );
    }

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_27 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "sha256" );
        exception_tb = NULL;

        exception_lineno = 21;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = const_int_pos_64;
    tmp_res = PyDict_SetItem( tmp_assign_source_27, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_HASHFUNC_MAP, tmp_assign_source_27 );
    tmp_assign_source_28 = MAKE_FUNCTION_urllib3$util$ssl_$$$function_1__const_compare_digest_backport(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain__const_compare_digest_backport, tmp_assign_source_28 );
    tmp_getattr_target_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_hmac );

    if (unlikely( tmp_getattr_target_1 == NULL ))
    {
        tmp_getattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hmac );
    }

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "hmac" );
        exception_tb = NULL;

        exception_lineno = 37;

        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_1 = const_str_plain_compare_digest;
    tmp_getattr_default_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain__const_compare_digest_backport );

    if (unlikely( tmp_getattr_default_1 == NULL ))
    {
        tmp_getattr_default_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__const_compare_digest_backport );
    }

    CHECK_OBJECT( tmp_getattr_default_1 );
    tmp_assign_source_29 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain__const_compare_digest, tmp_assign_source_29 );
    // Tried code:
    tmp_name_name_10 = const_str_plain_ssl;
    tmp_globals_name_10 = (PyObject *)moduledict_urllib3$util$ssl_;
    tmp_locals_name_10 = Py_None;
    tmp_fromlist_name_10 = Py_None;
    tmp_level_name_10 = const_int_0;
    frame_0179ea8e713f8987820c830a8eeae5ac->m_frame.f_lineno = 40;
    tmp_assign_source_30 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl, tmp_assign_source_30 );
    tmp_name_name_11 = const_str_plain_ssl;
    tmp_globals_name_11 = (PyObject *)moduledict_urllib3$util$ssl_;
    tmp_locals_name_11 = Py_None;
    tmp_fromlist_name_11 = const_tuple_str_plain_wrap_socket_str_plain_CERT_REQUIRED_tuple;
    tmp_level_name_11 = const_int_0;
    frame_0179ea8e713f8987820c830a8eeae5ac->m_frame.f_lineno = 41;
    tmp_assign_source_31 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto try_except_handler_5;
    }
    assert( tmp_import_from_5__module == NULL );
    tmp_import_from_5__module = tmp_assign_source_31;

    // Tried code:
    tmp_import_name_from_13 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_13 );
    tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_wrap_socket );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_wrap_socket, tmp_assign_source_32 );
    tmp_import_name_from_14 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_14 );
    tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_CERT_REQUIRED );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_CERT_REQUIRED, tmp_assign_source_33 );
    goto try_end_5;
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_5;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    tmp_name_name_12 = const_str_plain_ssl;
    tmp_globals_name_12 = (PyObject *)moduledict_urllib3$util$ssl_;
    tmp_locals_name_12 = Py_None;
    tmp_fromlist_name_12 = const_tuple_str_plain_HAS_SNI_tuple;
    tmp_level_name_12 = const_int_0;
    frame_0179ea8e713f8987820c830a8eeae5ac->m_frame.f_lineno = 42;
    tmp_import_name_from_15 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    tmp_assign_source_34 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_HAS_SNI );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_HAS_SNI, tmp_assign_source_34 );
    goto try_end_6;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_0179ea8e713f8987820c830a8eeae5ac );
    if ( exception_keeper_tb_6 == NULL )
    {
        exception_keeper_tb_6 = MAKE_TRACEBACK( frame_0179ea8e713f8987820c830a8eeae5ac, exception_keeper_lineno_6 );
    }
    else if ( exception_keeper_lineno_6 != 0 )
    {
        exception_keeper_tb_6 = ADD_TRACEBACK( exception_keeper_tb_6, frame_0179ea8e713f8987820c830a8eeae5ac, exception_keeper_lineno_6 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    PUBLISH_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_ImportError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 39;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_0179ea8e713f8987820c830a8eeae5ac->m_frame) frame_0179ea8e713f8987820c830a8eeae5ac->m_frame.f_lineno = exception_tb->tb_lineno;

    goto frame_exception_exit_1;
    branch_no_1:;
    goto try_end_6;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_ );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_6:;
    // Tried code:
    tmp_name_name_13 = const_str_plain_ssl;
    tmp_globals_name_13 = (PyObject *)moduledict_urllib3$util$ssl_;
    tmp_locals_name_13 = Py_None;
    tmp_fromlist_name_13 = const_tuple_str_plain_PROTOCOL_TLS_tuple;
    tmp_level_name_13 = const_int_0;
    frame_0179ea8e713f8987820c830a8eeae5ac->m_frame.f_lineno = 47;
    tmp_import_name_from_16 = IMPORT_MODULE5( tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;

        goto try_except_handler_7;
    }
    tmp_assign_source_35 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_PROTOCOL_TLS );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_PROTOCOL_TLS, tmp_assign_source_35 );
    tmp_assign_source_36 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_PROTOCOL_TLS );

    if (unlikely( tmp_assign_source_36 == NULL ))
    {
        tmp_assign_source_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PROTOCOL_TLS );
    }

    CHECK_OBJECT( tmp_assign_source_36 );
    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_PROTOCOL_SSLv23, tmp_assign_source_36 );
    goto try_end_7;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_0179ea8e713f8987820c830a8eeae5ac );
    if ( exception_keeper_tb_7 == NULL )
    {
        exception_keeper_tb_7 = MAKE_TRACEBACK( frame_0179ea8e713f8987820c830a8eeae5ac, exception_keeper_lineno_7 );
    }
    else if ( exception_keeper_lineno_7 != 0 )
    {
        exception_keeper_tb_7 = ADD_TRACEBACK( exception_keeper_tb_7, frame_0179ea8e713f8987820c830a8eeae5ac, exception_keeper_lineno_7 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    PUBLISH_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_ImportError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    // Tried code:
    tmp_name_name_14 = const_str_plain_ssl;
    tmp_globals_name_14 = (PyObject *)moduledict_urllib3$util$ssl_;
    tmp_locals_name_14 = Py_None;
    tmp_fromlist_name_14 = const_tuple_str_plain_PROTOCOL_SSLv23_tuple;
    tmp_level_name_14 = const_int_0;
    frame_0179ea8e713f8987820c830a8eeae5ac->m_frame.f_lineno = 52;
    tmp_import_name_from_17 = IMPORT_MODULE5( tmp_name_name_14, tmp_globals_name_14, tmp_locals_name_14, tmp_fromlist_name_14, tmp_level_name_14 );
    if ( tmp_import_name_from_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;

        goto try_except_handler_8;
    }
    tmp_assign_source_37 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_PROTOCOL_SSLv23 );
    Py_DECREF( tmp_import_name_from_17 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;

        goto try_except_handler_8;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_PROTOCOL_TLS, tmp_assign_source_37 );
    tmp_assign_source_38 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_PROTOCOL_TLS );

    if (unlikely( tmp_assign_source_38 == NULL ))
    {
        tmp_assign_source_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PROTOCOL_TLS );
    }

    CHECK_OBJECT( tmp_assign_source_38 );
    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_PROTOCOL_SSLv23, tmp_assign_source_38 );
    goto try_end_8;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_0179ea8e713f8987820c830a8eeae5ac );
    if ( exception_keeper_tb_8 == NULL )
    {
        exception_keeper_tb_8 = MAKE_TRACEBACK( frame_0179ea8e713f8987820c830a8eeae5ac, exception_keeper_lineno_8 );
    }
    else if ( exception_keeper_lineno_8 != 0 )
    {
        exception_keeper_tb_8 = ADD_TRACEBACK( exception_keeper_tb_8, frame_0179ea8e713f8987820c830a8eeae5ac, exception_keeper_lineno_8 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_8, &exception_keeper_value_8, &exception_keeper_tb_8 );
    PUBLISH_EXCEPTION( &exception_keeper_type_8, &exception_keeper_value_8, &exception_keeper_tb_8 );
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_ImportError;
    tmp_exc_match_exception_match_3 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_39 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_PROTOCOL_SSLv23, tmp_assign_source_39 );
    tmp_assign_source_40 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_PROTOCOL_TLS, tmp_assign_source_40 );
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 51;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_0179ea8e713f8987820c830a8eeae5ac->m_frame) frame_0179ea8e713f8987820c830a8eeae5ac->m_frame.f_lineno = exception_tb->tb_lineno;

    goto frame_exception_exit_1;
    branch_end_3:;
    goto try_end_8;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_ );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_8:;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 46;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_0179ea8e713f8987820c830a8eeae5ac->m_frame) frame_0179ea8e713f8987820c830a8eeae5ac->m_frame.f_lineno = exception_tb->tb_lineno;

    goto frame_exception_exit_1;
    branch_end_2:;
    goto try_end_7;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_ );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_7:;
    // Tried code:
    tmp_name_name_15 = const_str_plain_ssl;
    tmp_globals_name_15 = (PyObject *)moduledict_urllib3$util$ssl_;
    tmp_locals_name_15 = Py_None;
    tmp_fromlist_name_15 = const_tuple_80d5c84edbc6047981e18ed8cb8a7a27_tuple;
    tmp_level_name_15 = const_int_0;
    frame_0179ea8e713f8987820c830a8eeae5ac->m_frame.f_lineno = 60;
    tmp_assign_source_41 = IMPORT_MODULE5( tmp_name_name_15, tmp_globals_name_15, tmp_locals_name_15, tmp_fromlist_name_15, tmp_level_name_15 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_9;
    }
    assert( tmp_import_from_6__module == NULL );
    tmp_import_from_6__module = tmp_assign_source_41;

    // Tried code:
    tmp_import_name_from_18 = tmp_import_from_6__module;

    CHECK_OBJECT( tmp_import_name_from_18 );
    tmp_assign_source_42 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_OP_NO_SSLv2 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_10;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv2, tmp_assign_source_42 );
    tmp_import_name_from_19 = tmp_import_from_6__module;

    CHECK_OBJECT( tmp_import_name_from_19 );
    tmp_assign_source_43 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_OP_NO_SSLv3 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_10;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv3, tmp_assign_source_43 );
    tmp_import_name_from_20 = tmp_import_from_6__module;

    CHECK_OBJECT( tmp_import_name_from_20 );
    tmp_assign_source_44 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_OP_NO_COMPRESSION );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_10;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_COMPRESSION, tmp_assign_source_44 );
    goto try_end_9;
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_6__module );
    Py_DECREF( tmp_import_from_6__module );
    tmp_import_from_6__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_9;
    // End of try:
    try_end_9:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_6__module );
    Py_DECREF( tmp_import_from_6__module );
    tmp_import_from_6__module = NULL;

    goto try_end_10;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_0179ea8e713f8987820c830a8eeae5ac );
    if ( exception_keeper_tb_10 == NULL )
    {
        exception_keeper_tb_10 = MAKE_TRACEBACK( frame_0179ea8e713f8987820c830a8eeae5ac, exception_keeper_lineno_10 );
    }
    else if ( exception_keeper_lineno_10 != 0 )
    {
        exception_keeper_tb_10 = ADD_TRACEBACK( exception_keeper_tb_10, frame_0179ea8e713f8987820c830a8eeae5ac, exception_keeper_lineno_10 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_10, &exception_keeper_value_10, &exception_keeper_tb_10 );
    PUBLISH_EXCEPTION( &exception_keeper_type_10, &exception_keeper_value_10, &exception_keeper_tb_10 );
    tmp_compare_left_4 = PyThreadState_GET()->exc_type;
    tmp_compare_right_4 = PyExc_ImportError;
    tmp_exc_match_exception_match_4 = EXCEPTION_MATCH_BOOL( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_exc_match_exception_match_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_4 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_iter_arg_1 = const_tuple_int_pos_16777216_int_pos_33554432_tuple;
    tmp_assign_source_45 = MAKE_ITERATOR( tmp_iter_arg_1 );
    assert( tmp_assign_source_45 != NULL );
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_45;

    // Tried code:
    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_46 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_46 == NULL )
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



        exception_lineno = 62;
        goto try_except_handler_12;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_46;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_47 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_47 == NULL )
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



        exception_lineno = 62;
        goto try_except_handler_12;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_47;

    goto try_end_11;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_11;
    // End of try:
    try_end_11:;
    goto try_end_12;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_48 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_48 );
    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv2, tmp_assign_source_48 );
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_49 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_49 );
    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_SSLv3, tmp_assign_source_49 );
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_assign_source_50 = const_int_pos_131072;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_OP_NO_COMPRESSION, tmp_assign_source_50 );
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 59;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_0179ea8e713f8987820c830a8eeae5ac->m_frame) frame_0179ea8e713f8987820c830a8eeae5ac->m_frame.f_lineno = exception_tb->tb_lineno;

    goto frame_exception_exit_1;
    branch_end_4:;
    goto try_end_10;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_ );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_10:;
    tmp_called_instance_1 = const_str_chr_58;
    tmp_call_arg_element_1 = LIST_COPY( const_list_b43d8fff752a31a0d1b2643cd9aa64f8_list );
    frame_0179ea8e713f8987820c830a8eeae5ac->m_frame.f_lineno = 83;
    {
        PyObject *call_args[] = { tmp_call_arg_element_1 };
        tmp_assign_source_51 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_join, call_args );
    }

    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_DEFAULT_CIPHERS, tmp_assign_source_51 );
    // Tried code:
    tmp_name_name_16 = const_str_plain_ssl;
    tmp_globals_name_16 = (PyObject *)moduledict_urllib3$util$ssl_;
    tmp_locals_name_16 = Py_None;
    tmp_fromlist_name_16 = const_tuple_str_plain_SSLContext_tuple;
    tmp_level_name_16 = const_int_0;
    frame_0179ea8e713f8987820c830a8eeae5ac->m_frame.f_lineno = 103;
    tmp_import_name_from_21 = IMPORT_MODULE5( tmp_name_name_16, tmp_globals_name_16, tmp_locals_name_16, tmp_fromlist_name_16, tmp_level_name_16 );
    if ( tmp_import_name_from_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;

        goto try_except_handler_13;
    }
    tmp_assign_source_52 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_SSLContext );
    Py_DECREF( tmp_import_name_from_21 );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;

        goto try_except_handler_13;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLContext, tmp_assign_source_52 );
    goto try_end_13;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_0179ea8e713f8987820c830a8eeae5ac );
    if ( exception_keeper_tb_13 == NULL )
    {
        exception_keeper_tb_13 = MAKE_TRACEBACK( frame_0179ea8e713f8987820c830a8eeae5ac, exception_keeper_lineno_13 );
    }
    else if ( exception_keeper_lineno_13 != 0 )
    {
        exception_keeper_tb_13 = ADD_TRACEBACK( exception_keeper_tb_13, frame_0179ea8e713f8987820c830a8eeae5ac, exception_keeper_lineno_13 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_13, &exception_keeper_value_13, &exception_keeper_tb_13 );
    PUBLISH_EXCEPTION( &exception_keeper_type_13, &exception_keeper_value_13, &exception_keeper_tb_13 );
    tmp_compare_left_5 = PyThreadState_GET()->exc_type;
    tmp_compare_right_5 = PyExc_ImportError;
    tmp_exc_match_exception_match_5 = EXCEPTION_MATCH_BOOL( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_exc_match_exception_match_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_5 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_set_locals = PyDict_New();
    locals_SSLContext_106 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_6efba4feba5d3ac1fc26ca13b212a604;
    tmp_res = PyDict_SetItem( locals_SSLContext_106, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssl_$$$function_2___init__(  );
    tmp_res = PyDict_SetItem( locals_SSLContext_106, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssl_$$$function_3_load_cert_chain(  );
    tmp_res = PyDict_SetItem( locals_SSLContext_106, const_str_plain_load_cert_chain, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_defaults_1 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssl_$$$function_4_load_verify_locations( tmp_defaults_1 );
    tmp_res = PyDict_SetItem( locals_SSLContext_106, const_str_plain_load_verify_locations, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssl_$$$function_5_set_ciphers(  );
    tmp_res = PyDict_SetItem( locals_SSLContext_106, const_str_plain_set_ciphers, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_defaults_2 = const_tuple_none_false_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssl_$$$function_6_wrap_socket( tmp_defaults_2 );
    tmp_res = PyDict_SetItem( locals_SSLContext_106, const_str_plain_wrap_socket, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_1 = locals_SSLContext_106;
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_14;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_ );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_14:;
    Py_DECREF( locals_SSLContext_106 );
    locals_SSLContext_106 = NULL;
    goto outline_result_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_ );
    return MOD_RETURN_VALUE( NULL );
    outline_result_1:;
    tmp_assign_source_53 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_53;

    // Tried code:
    tmp_compare_left_6 = const_str_plain___metaclass__;
    tmp_compare_right_6 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_compare_right_6 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
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
    tmp_assign_source_54 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;

        goto try_except_handler_15;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_54 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_54 );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_54;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_SSLContext;
    tmp_args_element_name_2 = const_tuple_type_object_tuple;
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_0179ea8e713f8987820c830a8eeae5ac->m_frame.f_lineno = 106;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_55 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;

        goto try_except_handler_15;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_55;

    goto try_end_14;
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    tmp_assign_source_56 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_56 );
    UPDATE_STRING_DICT0( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_SSLContext, tmp_assign_source_56 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 102;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_0179ea8e713f8987820c830a8eeae5ac->m_frame) frame_0179ea8e713f8987820c830a8eeae5ac->m_frame.f_lineno = exception_tb->tb_lineno;

    goto frame_exception_exit_1;
    branch_end_5:;
    goto try_end_13;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$ssl_ );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_13:;

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_0179ea8e713f8987820c830a8eeae5ac );
#endif
    popFrameStack();

    assertFrameObject( frame_0179ea8e713f8987820c830a8eeae5ac );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_0179ea8e713f8987820c830a8eeae5ac );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0179ea8e713f8987820c830a8eeae5ac, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0179ea8e713f8987820c830a8eeae5ac->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0179ea8e713f8987820c830a8eeae5ac, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_57 = MAKE_FUNCTION_urllib3$util$ssl_$$$function_7_assert_fingerprint(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_assert_fingerprint, tmp_assign_source_57 );
    tmp_assign_source_58 = MAKE_FUNCTION_urllib3$util$ssl_$$$function_8_resolve_cert_reqs(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_resolve_cert_reqs, tmp_assign_source_58 );
    tmp_assign_source_59 = MAKE_FUNCTION_urllib3$util$ssl_$$$function_9_resolve_ssl_version(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_resolve_ssl_version, tmp_assign_source_59 );
    tmp_defaults_3 = const_tuple_none_none_none_none_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_assign_source_60 = MAKE_FUNCTION_urllib3$util$ssl_$$$function_10_create_urllib3_context( tmp_defaults_3 );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_create_urllib3_context, tmp_assign_source_60 );
    tmp_defaults_4 = const_tuple_none_none_none_none_none_none_none_none_none_none_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_assign_source_61 = MAKE_FUNCTION_urllib3$util$ssl_$$$function_11_ssl_wrap_socket( tmp_defaults_4 );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_ssl_wrap_socket, tmp_assign_source_61 );
    tmp_assign_source_62 = MAKE_FUNCTION_urllib3$util$ssl_$$$function_12_is_ipaddress(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain_is_ipaddress, tmp_assign_source_62 );
    tmp_assign_source_63 = MAKE_FUNCTION_urllib3$util$ssl_$$$function_13__is_key_file_encrypted(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain__is_key_file_encrypted, tmp_assign_source_63 );

    return MOD_RETURN_VALUE( module_urllib3$util$ssl_ );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
