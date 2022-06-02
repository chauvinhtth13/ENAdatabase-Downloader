/* Generated code for Python source for module 'urllib3.connection'
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

/* The _module_urllib3$connection is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$connection;
PyDictObject *moduledict_urllib3$connection;

/* The module constants used, if any. */
extern PyObject *const_str_plain_default_port;
extern PyObject *const_tuple_none_none_tuple;
extern PyObject *const_str_plain_set_cert;
extern PyObject *const_str_plain_putheader;
extern PyObject *const_str_plain_get;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_is_verified;
extern PyObject *const_str_plain_resolve_cert_reqs;
extern PyObject *const_str_plain_ConnectTimeoutError;
static PyObject *const_str_plain_date;
static PyObject *const_tuple_46883296661294fd3001b0890831f3c0_tuple;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_ConnectionError;
extern PyObject *const_str_plain_verify_mode;
static PyObject *const_tuple_str_plain_cert_str_plain_asserted_hostname_str_plain_e_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_str_plain_self_str_plain_e_str_plain_conn_str_plain_extra_kw_tuple;
extern PyObject *const_str_digest_0a2ea16757d4dad15d4c8e0ada40cd0c;
extern PyObject *const_str_plain_warn;
static PyObject *const_str_digest_413072d56f5b6cab90a6a564aa42b34d;
extern PyObject *const_str_plain_encode;
extern PyObject *const_str_plain_create_urllib3_context;
static PyObject *const_str_plain_is_time_off;
extern PyObject *const_int_pos_443;
extern PyObject *const_str_plain_VerifiedHTTPSConnection;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_body;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_str_plain_ssl_wrap_socket;
extern PyObject *const_str_plain_skip_accept_encoding;
static PyObject *const_str_plain__protocol;
extern PyObject *const_str_plain__new_conn;
extern PyObject *const_str_plain_NewConnectionError;
extern PyObject *const_str_plain_warnings;
static PyObject *const_str_digest_003800fb824e3437bbbf235acf31301c;
extern PyObject *const_str_plain_connection;
extern PyObject *const_str_plain_strict;
extern PyObject *const_str_plain_e;
extern PyObject *const_str_plain_format;
static PyObject *const_str_digest_df5958c87718dd50f2e0bfe7cc6ada5c;
extern PyObject *const_str_plain_socket;
extern PyObject *const_str_plain_http;
extern PyObject *const_str_plain_ssl_version;
extern PyObject *const_tuple_str_plain_self_str_plain_conn_tuple;
extern PyObject *const_str_plain_datetime;
extern PyObject *const_str_digest_0f2eb9f71c85852d8e24437103b38cdd;
extern PyObject *const_str_plain_value;
static PyObject *const_dict_a6ff982bac01e8d0bcf997a792f16c84;
static PyObject *const_str_digest_fbcb06792f2497ac6c7abd423e9e2d62;
extern PyObject *const_str_plain_conn;
static PyObject *const_str_plain_today;
extern PyObject *const_str_plain_chunked;
static PyObject *const_str_digest_23a97306f3a4bf1a3b9bf48c92fd45b8;
extern PyObject *const_int_pos_80;
static PyObject *const_tuple_f7eebd37474e24363bd71b57049771f9_tuple;
extern PyObject *const_str_plain__GLOBAL_DEFAULT_TIMEOUT;
static PyObject *const_tuple_str_plain_HTTPConnection_tuple;
extern PyObject *const_str_plain_chunk;
static PyObject *const_tuple_none_none_none_none_none_none_none_none_tuple;
static PyObject *const_tuple_1bf7ec2364041a6038f313c34bc76226_tuple;
extern PyObject *const_str_plain_endheaders;
extern PyObject *const_str_plain_timeout;
extern PyObject *const_tuple_str_dot_tuple;
extern PyObject *const_tuple_str_plain_subjectAltName_tuple_empty_tuple;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_context;
static PyObject *const_str_plain_len_str;
extern PyObject *const_str_plain_SystemTimeWarning;
extern PyObject *const_tuple_str_plain_error_str_plain_timeout_tuple;
extern PyObject *const_str_plain_error;
extern PyObject *const_str_plain_os;
static PyObject *const_str_digest_feb167a80b64f9a6111c2ef450038b43;
static PyObject *const_str_plain_stringish_types;
extern PyObject *const_str_plain_headers;
static PyObject *const_str_plain__match_hostname;
extern PyObject *const_str_plain_IPPROTO_TCP;
extern PyObject *const_str_plain_resolve_ssl_version;
static PyObject *const_str_plain_TCP_NODELAY;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_ca_cert_dir;
static PyObject *const_tuple_str_plain_source_address_tuple;
static PyObject *const_tuple_4f149d5dfda207819738a60f1cee0efb_tuple;
extern PyObject *const_tuple_str_plain_HTTPHeaderDict_tuple;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_SSLError;
extern PyObject *const_str_plain_SubjectAltNameWarning;
extern PyObject *const_str_dot;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_send;
extern PyObject *const_str_plain_cert_reqs;
extern PyObject *const_str_plain_auto_open;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_DummyConnection;
extern PyObject *const_str_digest_f4cf83dd2e7e2f235646bf31dc9dfbff;
extern PyObject *const_str_plain_binary_form;
extern PyObject *const_str_plain_putrequest;
extern PyObject *const_str_plain_HTTPConnection;
extern PyObject *const_str_plain_HTTPHeaderDict;
extern PyObject *const_str_plain_SocketTimeout;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_tuple_str_plain_HTTPException_tuple;
extern PyObject *const_str_plain_extra_kw;
extern PyObject *const_str_plain_cert;
extern PyObject *const_str_plain_certfile;
extern PyObject *const_str_plain_keyfile;
static PyObject *const_tuple_str_plain_strict_none_tuple;
extern PyObject *const_str_plain_CERT_NONE;
extern PyObject *const_str_plain_subjectAltName;
extern PyObject *const_str_plain_request_chunked;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_warning;
static PyObject *const_str_digest_e8fecadf67c84324aa28152f08ceec4c;
static PyObject *const_str_plain__HTTPConnection;
extern PyObject *const_str_plain_rstrip;
extern PyObject *const_str_digest_a93bc1dc732be398b86f8538baa37185;
extern PyObject *const_str_plain_items;
static PyObject *const_str_plain_skip_host;
extern PyObject *const_str_plain_setter;
extern PyObject *const_str_digest_03224f9e3167cae45c1e00020c2975eb;
extern PyObject *const_str_plain_assert_fingerprint;
extern PyObject *const_str_plain_ssl;
extern PyObject *const_str_plain_path;
static PyObject *const_int_pos_2019;
extern PyObject *const_tuple_str_plain_utf8_tuple;
static PyObject *const_str_digest_76770aa881e569a0306b7353925db341;
static PyObject *const_str_digest_fa24e620292c5ddd664b0f39ae7cf5ea;
extern PyObject *const_str_plain_assert_hostname;
extern PyObject *const_dict_93916f845314fde3dc45a1c4d3d34ff8;
extern PyObject *const_str_plain_url;
extern PyObject *const_str_plain_pop;
static PyObject *const_str_digest_b2ad7e969ce4ff9ff75483c3ea00ac22;
static PyObject *const_str_plain__dns_host;
extern PyObject *const_str_plain_getpeercert;
extern PyObject *const_str_plain_utf8;
static PyObject *const_str_digest_e0fe92f188862ba1c4cac2ad70dff86d;
static PyObject *const_tuple_int_pos_2019_int_pos_1_int_pos_1_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_args_str_plain_kw_tuple;
extern PyObject *const_str_plain_connect;
static PyObject *const_str_digest_a1a5bf2862f29210f40238564b9bab29;
static PyObject *const_str_plain__tunnel;
extern PyObject *const_str_plain_key_password;
extern PyObject *const_str_plain_string_types;
static PyObject *const_str_plain_RECENT_DATE;
extern PyObject *const_str_digest_80cf594c6b193676cb3f905f65b5d391;
extern PyObject *const_str_plain_method;
static PyObject *const_tuple_str_plain_match_hostname_str_plain_CertificateError_tuple;
extern PyObject *const_str_plain_cert_file;
extern PyObject *const_tuple_type_str_tuple;
extern PyObject *const_str_plain_load_default_certs;
static PyObject *const_str_plain__peer_cert;
static PyObject *const_str_plain_UnverifiedHTTPSConnection;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_str_plain_https;
static PyObject *const_tuple_e4d50c48f2ee1b6eb3ae021a15141bf1_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_value_tuple;
static PyObject *const_str_plain_asserted_hostname;
static PyObject *const_tuple_str_digest_003800fb824e3437bbbf235acf31301c_tuple;
extern PyObject *const_str_digest_2b15502c566d8238f4869c227793bd1a;
extern PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
extern PyObject *const_str_plain_CERT_REQUIRED;
extern PyObject *const_str_plain_log;
extern PyObject *const_str_plain__collections;
extern PyObject *const_str_plain_port_by_scheme;
extern PyObject *const_str_plain_kw;
static PyObject *const_tuple_str_plain_connection_tuple;
extern PyObject *const_tuple_str_digest_7ca129d2d421fe965ad48cbb290b579b_tuple;
extern PyObject *const_str_digest_0910c0c2f1750b2fe8203b1da8f91dfb;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_plain_sock;
static PyObject *const_tuple_394c29d0170bb3b56b05d6545708fbe3_tuple;
extern PyObject *const_str_plain_util;
extern PyObject *const_tuple_str_digest_0910c0c2f1750b2fe8203b1da8f91dfb_tuple;
extern PyObject *const_str_plain_HTTPException;
extern PyObject *const_str_plain_SocketError;
extern PyObject *const_str_plain_create_connection;
static PyObject *const_str_plain__tunnel_host;
extern PyObject *const_str_plain_CertificateError;
extern PyObject *const_str_plain_exceptions;
extern PyObject *const_str_plain_packages;
static PyObject *const_str_digest_5e42e68968b4150e2b97070212311786;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_port;
static PyObject *const_str_plain_default_socket_options;
static PyObject *const_tuple_a6e06c7392f08177d18d8825f461da60_tuple;
extern PyObject *const_str_plain_six;
extern PyObject *const_tuple_str_plain_six_tuple;
extern PyObject *const_str_plain_host;
static PyObject *const_str_plain_default_ssl_context;
extern PyObject *const_str_digest_7ca129d2d421fe965ad48cbb290b579b;
extern PyObject *const_str_plain_check_hostname;
extern PyObject *const_str_plain_expanduser;
extern PyObject *const_str_plain_match_hostname;
extern PyObject *const_str_plain_source_address;
static PyObject *const_tuple_659bcfd89e2a907d800ea69675ef86b4_tuple;
extern PyObject *const_str_plain_PY2;
extern PyObject *const_str_plain_BaseSSLError;
extern PyObject *const_str_plain_socket_options;
extern PyObject *const_str_plain_header;
extern PyObject *const_str_plain_key_file;
extern PyObject *const_str_plain__prepare_conn;
extern PyObject *const_str_plain_hostname;
extern PyObject *const_str_plain_HTTPSConnection;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_server_hostname;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_ca_certs;
static PyObject *const_str_digest_a2ffa7a4a6da141b7e16370ced35175d;
extern PyObject *const_str_plain_ssl_context;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_dc659baf5812ef509a1bfb99226d850c;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_date = UNSTREAM_STRING( &constant_bin[ 22573 ], 4, 1 );
    const_tuple_46883296661294fd3001b0890831f3c0_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_46883296661294fd3001b0890831f3c0_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_46883296661294fd3001b0890831f3c0_tuple, 1, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_46883296661294fd3001b0890831f3c0_tuple, 2, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_46883296661294fd3001b0890831f3c0_tuple, 3, const_str_plain_body ); Py_INCREF( const_str_plain_body );
    PyTuple_SET_ITEM( const_tuple_46883296661294fd3001b0890831f3c0_tuple, 4, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_46883296661294fd3001b0890831f3c0_tuple, 5, const_str_plain_chunk ); Py_INCREF( const_str_plain_chunk );
    const_str_plain_skip_host = UNSTREAM_STRING( &constant_bin[ 1030847 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_46883296661294fd3001b0890831f3c0_tuple, 6, const_str_plain_skip_host ); Py_INCREF( const_str_plain_skip_host );
    PyTuple_SET_ITEM( const_tuple_46883296661294fd3001b0890831f3c0_tuple, 7, const_str_plain_header ); Py_INCREF( const_str_plain_header );
    PyTuple_SET_ITEM( const_tuple_46883296661294fd3001b0890831f3c0_tuple, 8, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_str_plain_stringish_types = UNSTREAM_STRING( &constant_bin[ 1030856 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_46883296661294fd3001b0890831f3c0_tuple, 9, const_str_plain_stringish_types ); Py_INCREF( const_str_plain_stringish_types );
    const_str_plain_len_str = UNSTREAM_STRING( &constant_bin[ 907099 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_46883296661294fd3001b0890831f3c0_tuple, 10, const_str_plain_len_str ); Py_INCREF( const_str_plain_len_str );
    PyTuple_SET_ITEM( const_tuple_46883296661294fd3001b0890831f3c0_tuple, 11, const_str_plain_skip_accept_encoding ); Py_INCREF( const_str_plain_skip_accept_encoding );
    const_tuple_str_plain_cert_str_plain_asserted_hostname_str_plain_e_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cert_str_plain_asserted_hostname_str_plain_e_tuple, 0, const_str_plain_cert ); Py_INCREF( const_str_plain_cert );
    const_str_plain_asserted_hostname = UNSTREAM_STRING( &constant_bin[ 1030871 ], 17, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cert_str_plain_asserted_hostname_str_plain_e_tuple, 1, const_str_plain_asserted_hostname ); Py_INCREF( const_str_plain_asserted_hostname );
    PyTuple_SET_ITEM( const_tuple_str_plain_cert_str_plain_asserted_hostname_str_plain_e_tuple, 2, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_tuple_str_plain_self_str_plain_e_str_plain_conn_str_plain_extra_kw_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_e_str_plain_conn_str_plain_extra_kw_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_e_str_plain_conn_str_plain_extra_kw_tuple, 1, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_e_str_plain_conn_str_plain_extra_kw_tuple, 2, const_str_plain_conn ); Py_INCREF( const_str_plain_conn );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_e_str_plain_conn_str_plain_extra_kw_tuple, 3, const_str_plain_extra_kw ); Py_INCREF( const_str_plain_extra_kw );
    const_str_digest_413072d56f5b6cab90a6a564aa42b34d = UNSTREAM_STRING( &constant_bin[ 1030888 ], 927, 0 );
    const_str_plain_is_time_off = UNSTREAM_STRING( &constant_bin[ 1031815 ], 11, 1 );
    const_str_plain__protocol = UNSTREAM_STRING( &constant_bin[ 5428 ], 9, 1 );
    const_str_digest_003800fb824e3437bbbf235acf31301c = UNSTREAM_STRING( &constant_bin[ 1031826 ], 18, 0 );
    const_str_digest_df5958c87718dd50f2e0bfe7cc6ada5c = UNSTREAM_STRING( &constant_bin[ 1031844 ], 45, 0 );
    const_dict_a6ff982bac01e8d0bcf997a792f16c84 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_a6ff982bac01e8d0bcf997a792f16c84, const_str_plain_binary_form, Py_True );
    assert( PyDict_Size( const_dict_a6ff982bac01e8d0bcf997a792f16c84 ) == 1 );
    const_str_digest_fbcb06792f2497ac6c7abd423e9e2d62 = UNSTREAM_STRING( &constant_bin[ 1031889 ], 9, 0 );
    const_str_plain_today = UNSTREAM_STRING( &constant_bin[ 1031898 ], 5, 1 );
    const_str_digest_23a97306f3a4bf1a3b9bf48c92fd45b8 = UNSTREAM_STRING( &constant_bin[ 1031903 ], 27, 0 );
    const_tuple_f7eebd37474e24363bd71b57049771f9_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_f7eebd37474e24363bd71b57049771f9_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_f7eebd37474e24363bd71b57049771f9_tuple, 1, const_str_plain_host ); Py_INCREF( const_str_plain_host );
    PyTuple_SET_ITEM( const_tuple_f7eebd37474e24363bd71b57049771f9_tuple, 2, const_str_plain_port ); Py_INCREF( const_str_plain_port );
    PyTuple_SET_ITEM( const_tuple_f7eebd37474e24363bd71b57049771f9_tuple, 3, const_str_plain_key_file ); Py_INCREF( const_str_plain_key_file );
    PyTuple_SET_ITEM( const_tuple_f7eebd37474e24363bd71b57049771f9_tuple, 4, const_str_plain_cert_file ); Py_INCREF( const_str_plain_cert_file );
    PyTuple_SET_ITEM( const_tuple_f7eebd37474e24363bd71b57049771f9_tuple, 5, const_str_plain_key_password ); Py_INCREF( const_str_plain_key_password );
    PyTuple_SET_ITEM( const_tuple_f7eebd37474e24363bd71b57049771f9_tuple, 6, const_str_plain_strict ); Py_INCREF( const_str_plain_strict );
    PyTuple_SET_ITEM( const_tuple_f7eebd37474e24363bd71b57049771f9_tuple, 7, const_str_plain_timeout ); Py_INCREF( const_str_plain_timeout );
    PyTuple_SET_ITEM( const_tuple_f7eebd37474e24363bd71b57049771f9_tuple, 8, const_str_plain_ssl_context ); Py_INCREF( const_str_plain_ssl_context );
    PyTuple_SET_ITEM( const_tuple_f7eebd37474e24363bd71b57049771f9_tuple, 9, const_str_plain_server_hostname ); Py_INCREF( const_str_plain_server_hostname );
    PyTuple_SET_ITEM( const_tuple_f7eebd37474e24363bd71b57049771f9_tuple, 10, const_str_plain_kw ); Py_INCREF( const_str_plain_kw );
    const_tuple_str_plain_HTTPConnection_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HTTPConnection_tuple, 0, const_str_plain_HTTPConnection ); Py_INCREF( const_str_plain_HTTPConnection );
    const_tuple_none_none_none_none_none_none_none_none_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_none_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_none_tuple, 5, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_none_tuple, 6, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_none_none_none_none_tuple, 7, Py_None ); Py_INCREF( Py_None );
    const_tuple_1bf7ec2364041a6038f313c34bc76226_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_1bf7ec2364041a6038f313c34bc76226_tuple, 0, const_str_digest_2b15502c566d8238f4869c227793bd1a ); Py_INCREF( const_str_digest_2b15502c566d8238f4869c227793bd1a );
    PyTuple_SET_ITEM( const_tuple_1bf7ec2364041a6038f313c34bc76226_tuple, 1, const_str_plain_chunked ); Py_INCREF( const_str_plain_chunked );
    const_str_digest_feb167a80b64f9a6111c2ef450038b43 = UNSTREAM_STRING( &constant_bin[ 1031930 ], 215, 0 );
    const_str_plain__match_hostname = UNSTREAM_STRING( &constant_bin[ 1032145 ], 15, 1 );
    const_str_plain_TCP_NODELAY = UNSTREAM_STRING( &constant_bin[ 1032160 ], 11, 1 );
    const_tuple_str_plain_source_address_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_source_address_tuple, 0, const_str_plain_source_address ); Py_INCREF( const_str_plain_source_address );
    const_tuple_4f149d5dfda207819738a60f1cee0efb_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_4f149d5dfda207819738a60f1cee0efb_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_4f149d5dfda207819738a60f1cee0efb_tuple, 1, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    PyTuple_SET_ITEM( const_tuple_4f149d5dfda207819738a60f1cee0efb_tuple, 2, const_str_plain_conn ); Py_INCREF( const_str_plain_conn );
    const_str_plain_default_ssl_context = UNSTREAM_STRING( &constant_bin[ 1032171 ], 19, 1 );
    PyTuple_SET_ITEM( const_tuple_4f149d5dfda207819738a60f1cee0efb_tuple, 3, const_str_plain_default_ssl_context ); Py_INCREF( const_str_plain_default_ssl_context );
    const_tuple_str_plain_HTTPException_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HTTPException_tuple, 0, const_str_plain_HTTPException ); Py_INCREF( const_str_plain_HTTPException );
    const_tuple_str_plain_strict_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_strict_none_tuple, 0, const_str_plain_strict ); Py_INCREF( const_str_plain_strict );
    PyTuple_SET_ITEM( const_tuple_str_plain_strict_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_digest_e8fecadf67c84324aa28152f08ceec4c = UNSTREAM_STRING( &constant_bin[ 1032190 ], 64, 0 );
    const_str_plain__HTTPConnection = UNSTREAM_STRING( &constant_bin[ 1032254 ], 15, 1 );
    const_int_pos_2019 = PyInt_FromLong( 2019l );
    const_str_digest_76770aa881e569a0306b7353925db341 = UNSTREAM_STRING( &constant_bin[ 1032269 ], 87, 0 );
    const_str_digest_fa24e620292c5ddd664b0f39ae7cf5ea = UNSTREAM_STRING( &constant_bin[ 1032356 ], 91, 0 );
    const_str_digest_b2ad7e969ce4ff9ff75483c3ea00ac22 = UNSTREAM_STRING( &constant_bin[ 1032447 ], 21, 0 );
    const_str_plain__dns_host = UNSTREAM_STRING( &constant_bin[ 1032017 ], 9, 1 );
    const_str_digest_e0fe92f188862ba1c4cac2ad70dff86d = UNSTREAM_STRING( &constant_bin[ 1032468 ], 112, 0 );
    const_tuple_int_pos_2019_int_pos_1_int_pos_1_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_int_pos_2019_int_pos_1_int_pos_1_tuple, 0, const_int_pos_2019 ); Py_INCREF( const_int_pos_2019 );
    PyTuple_SET_ITEM( const_tuple_int_pos_2019_int_pos_1_int_pos_1_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_2019_int_pos_1_int_pos_1_tuple, 2, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_tuple_str_plain_self_str_plain_args_str_plain_kw_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_args_str_plain_kw_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_args_str_plain_kw_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_args_str_plain_kw_tuple, 2, const_str_plain_kw ); Py_INCREF( const_str_plain_kw );
    const_str_digest_a1a5bf2862f29210f40238564b9bab29 = UNSTREAM_STRING( &constant_bin[ 1032580 ], 235, 0 );
    const_str_plain__tunnel = UNSTREAM_STRING( &constant_bin[ 1032815 ], 7, 1 );
    const_str_plain_RECENT_DATE = UNSTREAM_STRING( &constant_bin[ 1032822 ], 11, 1 );
    const_tuple_str_plain_match_hostname_str_plain_CertificateError_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_match_hostname_str_plain_CertificateError_tuple, 0, const_str_plain_match_hostname ); Py_INCREF( const_str_plain_match_hostname );
    PyTuple_SET_ITEM( const_tuple_str_plain_match_hostname_str_plain_CertificateError_tuple, 1, const_str_plain_CertificateError ); Py_INCREF( const_str_plain_CertificateError );
    const_str_plain__peer_cert = UNSTREAM_STRING( &constant_bin[ 26692 ], 10, 1 );
    const_str_plain_UnverifiedHTTPSConnection = UNSTREAM_STRING( &constant_bin[ 1032833 ], 25, 1 );
    const_tuple_e4d50c48f2ee1b6eb3ae021a15141bf1_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_e4d50c48f2ee1b6eb3ae021a15141bf1_tuple, 0, const_str_plain_NewConnectionError ); Py_INCREF( const_str_plain_NewConnectionError );
    PyTuple_SET_ITEM( const_tuple_e4d50c48f2ee1b6eb3ae021a15141bf1_tuple, 1, const_str_plain_ConnectTimeoutError ); Py_INCREF( const_str_plain_ConnectTimeoutError );
    PyTuple_SET_ITEM( const_tuple_e4d50c48f2ee1b6eb3ae021a15141bf1_tuple, 2, const_str_plain_SubjectAltNameWarning ); Py_INCREF( const_str_plain_SubjectAltNameWarning );
    PyTuple_SET_ITEM( const_tuple_e4d50c48f2ee1b6eb3ae021a15141bf1_tuple, 3, const_str_plain_SystemTimeWarning ); Py_INCREF( const_str_plain_SystemTimeWarning );
    const_tuple_str_digest_003800fb824e3437bbbf235acf31301c_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_003800fb824e3437bbbf235acf31301c_tuple, 0, const_str_digest_003800fb824e3437bbbf235acf31301c ); Py_INCREF( const_str_digest_003800fb824e3437bbbf235acf31301c );
    const_tuple_str_plain_connection_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_connection_tuple, 0, const_str_plain_connection ); Py_INCREF( const_str_plain_connection );
    const_tuple_394c29d0170bb3b56b05d6545708fbe3_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_394c29d0170bb3b56b05d6545708fbe3_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_394c29d0170bb3b56b05d6545708fbe3_tuple, 1, const_str_plain_server_hostname ); Py_INCREF( const_str_plain_server_hostname );
    PyTuple_SET_ITEM( const_tuple_394c29d0170bb3b56b05d6545708fbe3_tuple, 2, const_str_plain_is_time_off ); Py_INCREF( const_str_plain_is_time_off );
    PyTuple_SET_ITEM( const_tuple_394c29d0170bb3b56b05d6545708fbe3_tuple, 3, const_str_plain_hostname ); Py_INCREF( const_str_plain_hostname );
    PyTuple_SET_ITEM( const_tuple_394c29d0170bb3b56b05d6545708fbe3_tuple, 4, const_str_plain_cert ); Py_INCREF( const_str_plain_cert );
    PyTuple_SET_ITEM( const_tuple_394c29d0170bb3b56b05d6545708fbe3_tuple, 5, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    PyTuple_SET_ITEM( const_tuple_394c29d0170bb3b56b05d6545708fbe3_tuple, 6, const_str_plain_default_ssl_context ); Py_INCREF( const_str_plain_default_ssl_context );
    PyTuple_SET_ITEM( const_tuple_394c29d0170bb3b56b05d6545708fbe3_tuple, 7, const_str_plain_conn ); Py_INCREF( const_str_plain_conn );
    const_str_plain__tunnel_host = UNSTREAM_STRING( &constant_bin[ 1032858 ], 12, 1 );
    const_str_digest_5e42e68968b4150e2b97070212311786 = UNSTREAM_STRING( &constant_bin[ 1032870 ], 88, 0 );
    const_str_plain_default_socket_options = UNSTREAM_STRING( &constant_bin[ 1032958 ], 22, 1 );
    const_tuple_a6e06c7392f08177d18d8825f461da60_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_a6e06c7392f08177d18d8825f461da60_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_a6e06c7392f08177d18d8825f461da60_tuple, 1, const_str_plain_key_file ); Py_INCREF( const_str_plain_key_file );
    PyTuple_SET_ITEM( const_tuple_a6e06c7392f08177d18d8825f461da60_tuple, 2, const_str_plain_cert_file ); Py_INCREF( const_str_plain_cert_file );
    PyTuple_SET_ITEM( const_tuple_a6e06c7392f08177d18d8825f461da60_tuple, 3, const_str_plain_cert_reqs ); Py_INCREF( const_str_plain_cert_reqs );
    PyTuple_SET_ITEM( const_tuple_a6e06c7392f08177d18d8825f461da60_tuple, 4, const_str_plain_key_password ); Py_INCREF( const_str_plain_key_password );
    PyTuple_SET_ITEM( const_tuple_a6e06c7392f08177d18d8825f461da60_tuple, 5, const_str_plain_ca_certs ); Py_INCREF( const_str_plain_ca_certs );
    PyTuple_SET_ITEM( const_tuple_a6e06c7392f08177d18d8825f461da60_tuple, 6, const_str_plain_assert_hostname ); Py_INCREF( const_str_plain_assert_hostname );
    PyTuple_SET_ITEM( const_tuple_a6e06c7392f08177d18d8825f461da60_tuple, 7, const_str_plain_assert_fingerprint ); Py_INCREF( const_str_plain_assert_fingerprint );
    PyTuple_SET_ITEM( const_tuple_a6e06c7392f08177d18d8825f461da60_tuple, 8, const_str_plain_ca_cert_dir ); Py_INCREF( const_str_plain_ca_cert_dir );
    const_tuple_659bcfd89e2a907d800ea69675ef86b4_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_659bcfd89e2a907d800ea69675ef86b4_tuple, 0, const_str_plain_resolve_cert_reqs ); Py_INCREF( const_str_plain_resolve_cert_reqs );
    PyTuple_SET_ITEM( const_tuple_659bcfd89e2a907d800ea69675ef86b4_tuple, 1, const_str_plain_resolve_ssl_version ); Py_INCREF( const_str_plain_resolve_ssl_version );
    PyTuple_SET_ITEM( const_tuple_659bcfd89e2a907d800ea69675ef86b4_tuple, 2, const_str_plain_assert_fingerprint ); Py_INCREF( const_str_plain_assert_fingerprint );
    PyTuple_SET_ITEM( const_tuple_659bcfd89e2a907d800ea69675ef86b4_tuple, 3, const_str_plain_create_urllib3_context ); Py_INCREF( const_str_plain_create_urllib3_context );
    PyTuple_SET_ITEM( const_tuple_659bcfd89e2a907d800ea69675ef86b4_tuple, 4, const_str_plain_ssl_wrap_socket ); Py_INCREF( const_str_plain_ssl_wrap_socket );
    const_str_digest_a2ffa7a4a6da141b7e16370ced35175d = UNSTREAM_STRING( &constant_bin[ 1032980 ], 1060, 0 );
    const_str_digest_dc659baf5812ef509a1bfb99226d850c = UNSTREAM_STRING( &constant_bin[ 1034040 ], 131, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$connection( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_9d0ea5f4f81113907b4cc3172e52ad30;
static PyCodeObject *codeobj_c36500281b0b9e6b8f226eddd531bcf9;
static PyCodeObject *codeobj_c2df862b7d3e8e84dda1ddf7cd1b3c51;
static PyCodeObject *codeobj_faef104ca649760f54933c4685471ba9;
static PyCodeObject *codeobj_6c2e598a12a14a69117ebc80a9746305;
static PyCodeObject *codeobj_aee2124ef0766b4c6f14903041560fcd;
static PyCodeObject *codeobj_a8dcef716500e1b9d9bd2b737d43eb95;
static PyCodeObject *codeobj_5e9da990dabbc1d22fe7f2ae3cbfedbc;
static PyCodeObject *codeobj_ad423f2fbbc65244e7096dafd1016932;
static PyCodeObject *codeobj_f860a615da997754f0ede999b15c16bd;
static PyCodeObject *codeobj_b27a683314ce4bec0e50c8d2a7c7d6db;
static PyCodeObject *codeobj_a9fea7cd2909b294443f21f18d9c2044;
static PyCodeObject *codeobj_68336967122696592b6fa3d6c3834b84;
static PyCodeObject *codeobj_0a2f9d2353479050301730992fc0ec2c;
static PyCodeObject *codeobj_dfb0ad32cd22a77f747c1d0f58f412aa;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_b2ad7e969ce4ff9ff75483c3ea00ac22 );
    codeobj_9d0ea5f4f81113907b4cc3172e52ad30 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_23a97306f3a4bf1a3b9bf48c92fd45b8, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_c36500281b0b9e6b8f226eddd531bcf9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_HTTPConnection, 68, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_c2df862b7d3e8e84dda1ddf7cd1b3c51 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_HTTPSConnection, 223, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_faef104ca649760f54933c4685471ba9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 101, const_tuple_str_plain_self_str_plain_args_str_plain_kw_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_6c2e598a12a14a69117ebc80a9746305 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 228, const_tuple_f7eebd37474e24363bd71b57049771f9_tuple, 10, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_aee2124ef0766b4c6f14903041560fcd = MAKE_CODEOBJ( module_filename_obj, const_str_plain__match_hostname, 428, const_tuple_str_plain_cert_str_plain_asserted_hostname_str_plain_e_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_a8dcef716500e1b9d9bd2b737d43eb95 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__new_conn, 143, const_tuple_str_plain_self_str_plain_e_str_plain_conn_str_plain_extra_kw_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_5e9da990dabbc1d22fe7f2ae3cbfedbc = MAKE_CODEOBJ( module_filename_obj, const_str_plain__prepare_conn, 174, const_tuple_str_plain_self_str_plain_conn_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_ad423f2fbbc65244e7096dafd1016932 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_connect, 183, const_tuple_str_plain_self_str_plain_conn_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_f860a615da997754f0ede999b15c16bd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_connect, 254, const_tuple_4f149d5dfda207819738a60f1cee0efb_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_b27a683314ce4bec0e50c8d2a7c7d6db = MAKE_CODEOBJ( module_filename_obj, const_str_plain_connect, 332, const_tuple_394c29d0170bb3b56b05d6545708fbe3_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_a9fea7cd2909b294443f21f18d9c2044 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_host, 114, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_68336967122696592b6fa3d6c3834b84 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_host, 133, const_tuple_str_plain_self_str_plain_value_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_0a2f9d2353479050301730992fc0ec2c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_request_chunked, 187, const_tuple_46883296661294fd3001b0890831f3c0_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_dfb0ad32cd22a77f747c1d0f58f412aa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_cert, 301, const_tuple_a6e06c7392f08177d18d8825f461da60_tuple, 9, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_6_complex_call_helper_pos_star_list_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_pos_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_9_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_10_set_cert( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_11_connect(  );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_12__match_hostname(  );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_2_host(  );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_3_host(  );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_4__new_conn(  );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_5__prepare_conn(  );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_6_connect(  );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_7_request_chunked( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_8___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_9_connect(  );


// The module function definitions.
static PyObject *impl_urllib3$connection$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kw = python_pars[ 2 ];
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
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_faef104ca649760f54933c4685471ba9 = NULL;

    struct Nuitka_FrameObject *frame_faef104ca649760f54933c4685471ba9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_faef104ca649760f54933c4685471ba9, codeobj_faef104ca649760f54933c4685471ba9, module_urllib3$connection, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_faef104ca649760f54933c4685471ba9 = cache_frame_faef104ca649760f54933c4685471ba9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_faef104ca649760f54933c4685471ba9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_faef104ca649760f54933c4685471ba9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_six );

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

        exception_lineno = 102;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_PY2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 102;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_called_instance_1 = par_kw;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_faef104ca649760f54933c4685471ba9->m_frame.f_lineno = 103;
    tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_strict_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_called_instance_2 = par_kw;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_faef104ca649760f54933c4685471ba9->m_frame.f_lineno = 106;
    tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_source_address_tuple, 0 ) );

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_source_address, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 106;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_source_name_2 = par_kw;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_pop );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_plain_socket_options;
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_default_socket_options );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 110;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_faef104ca649760f54933c4685471ba9->m_frame.f_lineno = 110;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assattr_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_socket_options, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 110;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain__HTTPConnection );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__HTTPConnection );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_HTTPConnection" );
        exception_tb = NULL;

        exception_lineno = 112;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___init__ );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_self;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = par_args;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    tmp_dircall_arg4_1 = par_kw;

    CHECK_OBJECT( tmp_dircall_arg4_1 );
    Py_INCREF( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_unused = impl___internal__$$$function_6_complex_call_helper_pos_star_list_star_dict( dir_call_args );
    }
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_faef104ca649760f54933c4685471ba9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_faef104ca649760f54933c4685471ba9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_faef104ca649760f54933c4685471ba9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_faef104ca649760f54933c4685471ba9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_faef104ca649760f54933c4685471ba9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_faef104ca649760f54933c4685471ba9,
        type_description_1,
        par_self,
        par_args,
        par_kw
    );


    // Release cached frame.
    if ( frame_faef104ca649760f54933c4685471ba9 == cache_frame_faef104ca649760f54933c4685471ba9 )
    {
        Py_DECREF( frame_faef104ca649760f54933c4685471ba9 );
    }
    cache_frame_faef104ca649760f54933c4685471ba9 = NULL;

    assertFrameObject( frame_faef104ca649760f54933c4685471ba9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kw );
    Py_DECREF( par_kw );
    par_kw = NULL;

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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kw );
    Py_DECREF( par_kw );
    par_kw = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_1___init__ );
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


static PyObject *impl_urllib3$connection$$$function_2_host( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_a9fea7cd2909b294443f21f18d9c2044 = NULL;

    struct Nuitka_FrameObject *frame_a9fea7cd2909b294443f21f18d9c2044;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a9fea7cd2909b294443f21f18d9c2044, codeobj_a9fea7cd2909b294443f21f18d9c2044, module_urllib3$connection, sizeof(void *) );
    frame_a9fea7cd2909b294443f21f18d9c2044 = cache_frame_a9fea7cd2909b294443f21f18d9c2044;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a9fea7cd2909b294443f21f18d9c2044 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a9fea7cd2909b294443f21f18d9c2044 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__dns_host );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_a9fea7cd2909b294443f21f18d9c2044->m_frame.f_lineno = 131;
    tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_rstrip, &PyTuple_GET_ITEM( const_tuple_str_dot_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a9fea7cd2909b294443f21f18d9c2044 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a9fea7cd2909b294443f21f18d9c2044 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a9fea7cd2909b294443f21f18d9c2044 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a9fea7cd2909b294443f21f18d9c2044, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a9fea7cd2909b294443f21f18d9c2044->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a9fea7cd2909b294443f21f18d9c2044, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a9fea7cd2909b294443f21f18d9c2044,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_a9fea7cd2909b294443f21f18d9c2044 == cache_frame_a9fea7cd2909b294443f21f18d9c2044 )
    {
        Py_DECREF( frame_a9fea7cd2909b294443f21f18d9c2044 );
    }
    cache_frame_a9fea7cd2909b294443f21f18d9c2044 = NULL;

    assertFrameObject( frame_a9fea7cd2909b294443f21f18d9c2044 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_2_host );
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
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_2_host );
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


static PyObject *impl_urllib3$connection$$$function_3_host( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
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
    static struct Nuitka_FrameObject *cache_frame_68336967122696592b6fa3d6c3834b84 = NULL;

    struct Nuitka_FrameObject *frame_68336967122696592b6fa3d6c3834b84;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_68336967122696592b6fa3d6c3834b84, codeobj_68336967122696592b6fa3d6c3834b84, module_urllib3$connection, sizeof(void *)+sizeof(void *) );
    frame_68336967122696592b6fa3d6c3834b84 = cache_frame_68336967122696592b6fa3d6c3834b84;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_68336967122696592b6fa3d6c3834b84 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_68336967122696592b6fa3d6c3834b84 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_value;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__dns_host, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_68336967122696592b6fa3d6c3834b84 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_68336967122696592b6fa3d6c3834b84 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_68336967122696592b6fa3d6c3834b84, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_68336967122696592b6fa3d6c3834b84->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_68336967122696592b6fa3d6c3834b84, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_68336967122696592b6fa3d6c3834b84,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame.
    if ( frame_68336967122696592b6fa3d6c3834b84 == cache_frame_68336967122696592b6fa3d6c3834b84 )
    {
        Py_DECREF( frame_68336967122696592b6fa3d6c3834b84 );
    }
    cache_frame_68336967122696592b6fa3d6c3834b84 = NULL;

    assertFrameObject( frame_68336967122696592b6fa3d6c3834b84 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_3_host );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

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

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_3_host );
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


static PyObject *impl_urllib3$connection$$$function_4__new_conn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_e = NULL;
    PyObject *var_conn = NULL;
    PyObject *var_extra_kw = NULL;
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
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    static struct Nuitka_FrameObject *cache_frame_a8dcef716500e1b9d9bd2b737d43eb95 = NULL;

    struct Nuitka_FrameObject *frame_a8dcef716500e1b9d9bd2b737d43eb95;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyDict_New();
    assert( var_extra_kw == NULL );
    var_extra_kw = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a8dcef716500e1b9d9bd2b737d43eb95, codeobj_a8dcef716500e1b9d9bd2b737d43eb95, module_urllib3$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a8dcef716500e1b9d9bd2b737d43eb95 = cache_frame_a8dcef716500e1b9d9bd2b737d43eb95;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a8dcef716500e1b9d9bd2b737d43eb95 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a8dcef716500e1b9d9bd2b737d43eb95 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_source_address );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 149;
        type_description_1 = "oooo";
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
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_dictset_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_source_address );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_dictset_dict = var_extra_kw;

    CHECK_OBJECT( tmp_dictset_dict );
    tmp_dictset_key = const_str_plain_source_address;
    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    branch_no_1:;
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_socket_options );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 152;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_dictset_value = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_socket_options );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_dictset_dict = var_extra_kw;

    CHECK_OBJECT( tmp_dictset_dict );
    tmp_dictset_key = const_str_plain_socket_options;
    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    branch_no_2:;
    // Tried code:
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_connection );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_connection );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "connection" );
        exception_tb = NULL;

        exception_lineno = 156;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_create_connection );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = PyTuple_New( 2 );
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__dns_host );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_tuple_element_1 );

        exception_lineno = 157;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
    tmp_source_name_7 = par_self;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_port );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_tuple_element_1 );

        exception_lineno = 157;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_source_name_8 = par_self;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_timeout );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );

        exception_lineno = 157;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = var_extra_kw;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_assign_source_2 = impl___internal__$$$function_4_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( var_conn == NULL );
    var_conn = tmp_assign_source_2;

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
    PRESERVE_FRAME_EXCEPTION( frame_a8dcef716500e1b9d9bd2b737d43eb95 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_a8dcef716500e1b9d9bd2b737d43eb95, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_a8dcef716500e1b9d9bd2b737d43eb95, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_SocketTimeout );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SocketTimeout );
    }

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SocketTimeout" );
        exception_tb = NULL;

        exception_lineno = 160;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        type_description_1 = "oooo";
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ConnectTimeoutError" );
        exception_tb = NULL;

        exception_lineno = 161;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_left_name_1 = const_str_digest_03224f9e3167cae45c1e00020c2975eb;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_source_name_9 = par_self;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_host );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 164;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
    tmp_source_name_10 = par_self;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_timeout );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 164;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
    tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_a8dcef716500e1b9d9bd2b737d43eb95->m_frame.f_lineno = 161;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 161;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_SocketError );

    if (unlikely( tmp_compare_right_2 == NULL ))
    {
        tmp_compare_right_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SocketError );
    }

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SocketError" );
        exception_tb = NULL;

        exception_lineno = 167;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description_1 = "oooo";
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
    tmp_assign_source_3 = PyThreadState_GET()->exc_value;
    assert( var_e == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_e = tmp_assign_source_3;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_NewConnectionError );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NewConnectionError );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NewConnectionError" );
        exception_tb = NULL;

        exception_lineno = 168;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_self;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_left_name_2 = const_str_digest_a93bc1dc732be398b86f8538baa37185;
    tmp_right_name_2 = var_e;

    CHECK_OBJECT( tmp_right_name_2 );
    tmp_args_element_name_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_a8dcef716500e1b9d9bd2b737d43eb95->m_frame.f_lineno = 168;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 168;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 155;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a8dcef716500e1b9d9bd2b737d43eb95->m_frame) frame_a8dcef716500e1b9d9bd2b737d43eb95->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_end_4:;
    branch_end_3:;
    // End of try:
    try_end_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_a8dcef716500e1b9d9bd2b737d43eb95 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_a8dcef716500e1b9d9bd2b737d43eb95 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a8dcef716500e1b9d9bd2b737d43eb95, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a8dcef716500e1b9d9bd2b737d43eb95->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a8dcef716500e1b9d9bd2b737d43eb95, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a8dcef716500e1b9d9bd2b737d43eb95,
        type_description_1,
        par_self,
        var_e,
        var_conn,
        var_extra_kw
    );


    // Release cached frame.
    if ( frame_a8dcef716500e1b9d9bd2b737d43eb95 == cache_frame_a8dcef716500e1b9d9bd2b737d43eb95 )
    {
        Py_DECREF( frame_a8dcef716500e1b9d9bd2b737d43eb95 );
    }
    cache_frame_a8dcef716500e1b9d9bd2b737d43eb95 = NULL;

    assertFrameObject( frame_a8dcef716500e1b9d9bd2b737d43eb95 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_conn;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_4__new_conn );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_conn );
    Py_DECREF( var_conn );
    var_conn = NULL;

    CHECK_OBJECT( (PyObject *)var_extra_kw );
    Py_DECREF( var_extra_kw );
    var_extra_kw = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    CHECK_OBJECT( (PyObject *)var_extra_kw );
    Py_DECREF( var_extra_kw );
    var_extra_kw = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_4__new_conn );
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


static PyObject *impl_urllib3$connection$$$function_5__prepare_conn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_conn = python_pars[ 1 ];
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
    PyObject *tmp_called_instance_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_5e9da990dabbc1d22fe7f2ae3cbfedbc = NULL;

    struct Nuitka_FrameObject *frame_5e9da990dabbc1d22fe7f2ae3cbfedbc;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5e9da990dabbc1d22fe7f2ae3cbfedbc, codeobj_5e9da990dabbc1d22fe7f2ae3cbfedbc, module_urllib3$connection, sizeof(void *)+sizeof(void *) );
    frame_5e9da990dabbc1d22fe7f2ae3cbfedbc = cache_frame_5e9da990dabbc1d22fe7f2ae3cbfedbc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5e9da990dabbc1d22fe7f2ae3cbfedbc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5e9da990dabbc1d22fe7f2ae3cbfedbc ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_conn;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_sock, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_getattr_target_1 = par_self;

    CHECK_OBJECT( tmp_getattr_target_1 );
    tmp_getattr_attr_1 = const_str_plain__tunnel_host;
    tmp_getattr_default_1 = Py_None;
    tmp_cond_value_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 177;
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
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_5e9da990dabbc1d22fe7f2ae3cbfedbc->m_frame.f_lineno = 179;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__tunnel );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_2 = const_int_0;
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_auto_open, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5e9da990dabbc1d22fe7f2ae3cbfedbc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5e9da990dabbc1d22fe7f2ae3cbfedbc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5e9da990dabbc1d22fe7f2ae3cbfedbc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5e9da990dabbc1d22fe7f2ae3cbfedbc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5e9da990dabbc1d22fe7f2ae3cbfedbc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5e9da990dabbc1d22fe7f2ae3cbfedbc,
        type_description_1,
        par_self,
        par_conn
    );


    // Release cached frame.
    if ( frame_5e9da990dabbc1d22fe7f2ae3cbfedbc == cache_frame_5e9da990dabbc1d22fe7f2ae3cbfedbc )
    {
        Py_DECREF( frame_5e9da990dabbc1d22fe7f2ae3cbfedbc );
    }
    cache_frame_5e9da990dabbc1d22fe7f2ae3cbfedbc = NULL;

    assertFrameObject( frame_5e9da990dabbc1d22fe7f2ae3cbfedbc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_5__prepare_conn );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_conn );
    Py_DECREF( par_conn );
    par_conn = NULL;

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

    CHECK_OBJECT( (PyObject *)par_conn );
    Py_DECREF( par_conn );
    par_conn = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_5__prepare_conn );
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


static PyObject *impl_urllib3$connection$$$function_6_connect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_conn = NULL;
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
    PyObject *tmp_called_instance_2;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ad423f2fbbc65244e7096dafd1016932 = NULL;

    struct Nuitka_FrameObject *frame_ad423f2fbbc65244e7096dafd1016932;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ad423f2fbbc65244e7096dafd1016932, codeobj_ad423f2fbbc65244e7096dafd1016932, module_urllib3$connection, sizeof(void *)+sizeof(void *) );
    frame_ad423f2fbbc65244e7096dafd1016932 = cache_frame_ad423f2fbbc65244e7096dafd1016932;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ad423f2fbbc65244e7096dafd1016932 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ad423f2fbbc65244e7096dafd1016932 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_ad423f2fbbc65244e7096dafd1016932->m_frame.f_lineno = 184;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__new_conn );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_conn == NULL );
    var_conn = tmp_assign_source_1;

    tmp_called_instance_2 = par_self;

    CHECK_OBJECT( tmp_called_instance_2 );
    tmp_args_element_name_1 = var_conn;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_ad423f2fbbc65244e7096dafd1016932->m_frame.f_lineno = 185;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__prepare_conn, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ad423f2fbbc65244e7096dafd1016932 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ad423f2fbbc65244e7096dafd1016932 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ad423f2fbbc65244e7096dafd1016932, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ad423f2fbbc65244e7096dafd1016932->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ad423f2fbbc65244e7096dafd1016932, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ad423f2fbbc65244e7096dafd1016932,
        type_description_1,
        par_self,
        var_conn
    );


    // Release cached frame.
    if ( frame_ad423f2fbbc65244e7096dafd1016932 == cache_frame_ad423f2fbbc65244e7096dafd1016932 )
    {
        Py_DECREF( frame_ad423f2fbbc65244e7096dafd1016932 );
    }
    cache_frame_ad423f2fbbc65244e7096dafd1016932 = NULL;

    assertFrameObject( frame_ad423f2fbbc65244e7096dafd1016932 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_6_connect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_conn );
    Py_DECREF( var_conn );
    var_conn = NULL;

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

    Py_XDECREF( var_conn );
    var_conn = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_6_connect );
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


static PyObject *impl_urllib3$connection$$$function_7_request_chunked( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *par_body = python_pars[ 3 ];
    PyObject *par_headers = python_pars[ 4 ];
    PyObject *var_chunk = NULL;
    PyObject *var_skip_host = NULL;
    PyObject *var_header = NULL;
    PyObject *var_value = NULL;
    PyObject *var_stringish_types = NULL;
    PyObject *var_len_str = NULL;
    PyObject *var_skip_accept_encoding = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_name_1;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_NotIn_1;
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
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_hex_arg_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    PyObject *tmp_value_name_2;
    static struct Nuitka_FrameObject *cache_frame_0a2f9d2353479050301730992fc0ec2c = NULL;

    struct Nuitka_FrameObject *frame_0a2f9d2353479050301730992fc0ec2c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0a2f9d2353479050301730992fc0ec2c, codeobj_0a2f9d2353479050301730992fc0ec2c, module_urllib3$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0a2f9d2353479050301730992fc0ec2c = cache_frame_0a2f9d2353479050301730992fc0ec2c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0a2f9d2353479050301730992fc0ec2c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0a2f9d2353479050301730992fc0ec2c ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPHeaderDict );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPHeaderDict );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "HTTPHeaderDict" );
        exception_tb = NULL;

        exception_lineno = 192;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = par_headers;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_args_element_name_1 = par_headers;

    CHECK_OBJECT( tmp_args_element_name_1 );
    Py_INCREF( tmp_args_element_name_1 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_args_element_name_1 = PyDict_New();
    condexpr_end_1:;
    frame_0a2f9d2353479050301730992fc0ec2c->m_frame.f_lineno = 192;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_headers;
        assert( old != NULL );
        par_headers = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_compexpr_left_1 = const_str_digest_f4cf83dd2e7e2f235646bf31dc9dfbff;
    tmp_compexpr_right_1 = par_headers;

    CHECK_OBJECT( tmp_compexpr_right_1 );
    tmp_assign_source_2 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_skip_accept_encoding == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_skip_accept_encoding = tmp_assign_source_2;

    tmp_compexpr_left_2 = const_str_plain_host;
    tmp_compexpr_right_2 = par_headers;

    CHECK_OBJECT( tmp_compexpr_right_2 );
    tmp_assign_source_3 = SEQUENCE_CONTAINS( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_skip_host == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_skip_host = tmp_assign_source_3;

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_putrequest );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_method;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_url;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = var_skip_accept_encoding;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_skip_accept_encoding;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = var_skip_host;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_skip_host;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_0a2f9d2353479050301730992fc0ec2c->m_frame.f_lineno = 195;
    tmp_unused = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_1 = par_headers;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_0a2f9d2353479050301730992fc0ec2c->m_frame.f_lineno = 198;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_items );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_4;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_5 = ITERATOR_NEXT( tmp_value_name_1 );
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


        type_description_1 = "oooooooooooo";
        exception_lineno = 198;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_5;
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

    tmp_compare_left_2 = exception_keeper_type_1;
    tmp_compare_right_2 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 198;
        type_description_1 = "oooooooooooo";
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
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_1, 0 );
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


        type_description_1 = "oooooooooooo";
        exception_lineno = 198;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_8 == NULL )
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


        type_description_1 = "oooooooooooo";
        exception_lineno = 198;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
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

                type_description_1 = "oooooooooooo";
                exception_lineno = 198;
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

        type_description_1 = "oooooooooooo";
        exception_lineno = 198;
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

    tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_9 );
    {
        PyObject *old = var_header;
        var_header = tmp_assign_source_9;
        Py_INCREF( var_header );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_10 );
    {
        PyObject *old = var_value;
        var_value = tmp_assign_source_10;
        Py_INCREF( var_value );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_called_instance_2 = par_self;

    CHECK_OBJECT( tmp_called_instance_2 );
    tmp_args_element_name_2 = var_header;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = var_value;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_0a2f9d2353479050301730992fc0ec2c->m_frame.f_lineno = 199;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_putheader, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        type_description_1 = "oooooooooooo";
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

    tmp_compare_left_3 = const_str_digest_80cf594c6b193676cb3f905f65b5d391;
    tmp_compare_right_3 = par_headers;

    CHECK_OBJECT( tmp_compare_right_3 );
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_instance_3 = par_self;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_0a2f9d2353479050301730992fc0ec2c->m_frame.f_lineno = 201;
    tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_putheader, &PyTuple_GET_ITEM( const_tuple_1bf7ec2364041a6038f313c34bc76226_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    tmp_called_instance_4 = par_self;

    CHECK_OBJECT( tmp_called_instance_4 );
    frame_0a2f9d2353479050301730992fc0ec2c->m_frame.f_lineno = 202;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_endheaders );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_compare_left_4 = par_body;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_4 != tmp_compare_right_4 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_six );

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

        exception_lineno = 205;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_string_types );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_tuple_type_str_tuple;
    tmp_assign_source_11 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_stringish_types == NULL );
    var_stringish_types = tmp_assign_source_11;

    tmp_isinstance_inst_1 = par_body;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = var_stringish_types;

    CHECK_OBJECT( tmp_isinstance_cls_1 );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_12 = PyTuple_New( 1 );
    tmp_tuple_element_2 = par_body;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_12, 0, tmp_tuple_element_2 );
    {
        PyObject *old = par_body;
        assert( old != NULL );
        par_body = tmp_assign_source_12;
        Py_DECREF( old );
    }

    branch_no_4:;
    tmp_iter_arg_3 = par_body;

    CHECK_OBJECT( tmp_iter_arg_3 );
    tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_13;

    // Tried code:
    loop_start_2:;
    // Tried code:
    tmp_value_name_2 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_value_name_2 );
    tmp_assign_source_14 = ITERATOR_NEXT( tmp_value_name_2 );
    if ( tmp_assign_source_14 == NULL )
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


        type_description_1 = "oooooooooooo";
        exception_lineno = 208;
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_5 = exception_keeper_type_5;
    tmp_compare_right_5 = PyExc_StopIteration;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_5 );
        Py_XDECREF( exception_keeper_value_5 );
        Py_XDECREF( exception_keeper_tb_5 );

        exception_lineno = 208;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_6;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    Py_DECREF( exception_keeper_type_5 );
    Py_XDECREF( exception_keeper_value_5 );
    Py_XDECREF( exception_keeper_tb_5 );
    goto loop_end_2;
    goto branch_end_5;
    branch_no_5:;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    branch_end_5:;
    // End of try:
    try_end_5:;
    tmp_assign_source_15 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_assign_source_15 );
    {
        PyObject *old = var_chunk;
        var_chunk = tmp_assign_source_15;
        Py_INCREF( var_chunk );
        Py_XDECREF( old );
    }

    tmp_cond_value_1 = var_chunk;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_6;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_6;
    }
    else
    {
        goto branch_yes_6;
    }
    branch_yes_6:;
    goto loop_start_2;
    branch_no_6:;
    tmp_isinstance_inst_2 = var_chunk;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_isinstance_cls_2 = (PyObject *)&PyString_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_6;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_7;
    }
    else
    {
        goto branch_yes_7;
    }
    branch_yes_7:;
    tmp_called_instance_5 = var_chunk;

    CHECK_OBJECT( tmp_called_instance_5 );
    frame_0a2f9d2353479050301730992fc0ec2c->m_frame.f_lineno = 212;
    tmp_assign_source_16 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_plain_utf8_tuple, 0 ) );

    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_6;
    }
    {
        PyObject *old = var_chunk;
        assert( old != NULL );
        var_chunk = tmp_assign_source_16;
        Py_DECREF( old );
    }

    branch_no_7:;
    tmp_sliceslicedel_index_lower_1 = 2;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_len_arg_1 = var_chunk;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_hex_arg_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_hex_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_6;
    }
    tmp_slice_source_1 = BUILTIN_HEX( tmp_hex_arg_1 );
    Py_DECREF( tmp_hex_arg_1 );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_6;
    }
    tmp_assign_source_17 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_6;
    }
    {
        PyObject *old = var_len_str;
        var_len_str = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_send );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_6;
    }
    tmp_called_instance_6 = var_len_str;

    CHECK_OBJECT( tmp_called_instance_6 );
    frame_0a2f9d2353479050301730992fc0ec2c->m_frame.f_lineno = 214;
    tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 214;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_6;
    }
    frame_0a2f9d2353479050301730992fc0ec2c->m_frame.f_lineno = 214;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_7 = par_self;

    CHECK_OBJECT( tmp_called_instance_7 );
    frame_0a2f9d2353479050301730992fc0ec2c->m_frame.f_lineno = 215;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_send, &PyTuple_GET_ITEM( const_tuple_str_digest_7ca129d2d421fe965ad48cbb290b579b_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_8 = par_self;

    CHECK_OBJECT( tmp_called_instance_8 );
    tmp_args_element_name_5 = var_chunk;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_0a2f9d2353479050301730992fc0ec2c->m_frame.f_lineno = 216;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_send, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_9 = par_self;

    CHECK_OBJECT( tmp_called_instance_9 );
    frame_0a2f9d2353479050301730992fc0ec2c->m_frame.f_lineno = 217;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_send, &PyTuple_GET_ITEM( const_tuple_str_digest_7ca129d2d421fe965ad48cbb290b579b_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    branch_no_3:;
    tmp_called_instance_10 = par_self;

    CHECK_OBJECT( tmp_called_instance_10 );
    frame_0a2f9d2353479050301730992fc0ec2c->m_frame.f_lineno = 220;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_send, &PyTuple_GET_ITEM( const_tuple_str_digest_0910c0c2f1750b2fe8203b1da8f91dfb_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0a2f9d2353479050301730992fc0ec2c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0a2f9d2353479050301730992fc0ec2c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0a2f9d2353479050301730992fc0ec2c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0a2f9d2353479050301730992fc0ec2c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0a2f9d2353479050301730992fc0ec2c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0a2f9d2353479050301730992fc0ec2c,
        type_description_1,
        par_self,
        par_method,
        par_url,
        par_body,
        par_headers,
        var_chunk,
        var_skip_host,
        var_header,
        var_value,
        var_stringish_types,
        var_len_str,
        var_skip_accept_encoding
    );


    // Release cached frame.
    if ( frame_0a2f9d2353479050301730992fc0ec2c == cache_frame_0a2f9d2353479050301730992fc0ec2c )
    {
        Py_DECREF( frame_0a2f9d2353479050301730992fc0ec2c );
    }
    cache_frame_0a2f9d2353479050301730992fc0ec2c = NULL;

    assertFrameObject( frame_0a2f9d2353479050301730992fc0ec2c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_7_request_chunked );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_body );
    par_body = NULL;

    Py_XDECREF( var_chunk );
    var_chunk = NULL;

    CHECK_OBJECT( (PyObject *)var_skip_host );
    Py_DECREF( var_skip_host );
    var_skip_host = NULL;

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_header );
    var_header = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_stringish_types );
    var_stringish_types = NULL;

    CHECK_OBJECT( (PyObject *)par_headers );
    Py_DECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( var_len_str );
    var_len_str = NULL;

    CHECK_OBJECT( (PyObject *)var_skip_accept_encoding );
    Py_DECREF( var_skip_accept_encoding );
    var_skip_accept_encoding = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_body );
    par_body = NULL;

    Py_XDECREF( var_chunk );
    var_chunk = NULL;

    Py_XDECREF( var_skip_host );
    var_skip_host = NULL;

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_header );
    var_header = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_stringish_types );
    var_stringish_types = NULL;

    CHECK_OBJECT( (PyObject *)par_headers );
    Py_DECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( var_len_str );
    var_len_str = NULL;

    Py_XDECREF( var_skip_accept_encoding );
    var_skip_accept_encoding = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_7_request_chunked );
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


static PyObject *impl_urllib3$connection$$$function_8___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_host = python_pars[ 1 ];
    PyObject *par_port = python_pars[ 2 ];
    PyObject *par_key_file = python_pars[ 3 ];
    PyObject *par_cert_file = python_pars[ 4 ];
    PyObject *par_key_password = python_pars[ 5 ];
    PyObject *par_strict = python_pars[ 6 ];
    PyObject *par_timeout = python_pars[ 7 ];
    PyObject *par_ssl_context = python_pars[ 8 ];
    PyObject *par_server_hostname = python_pars[ 9 ];
    PyObject *par_kw = python_pars[ 10 ];
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
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6c2e598a12a14a69117ebc80a9746305 = NULL;

    struct Nuitka_FrameObject *frame_6c2e598a12a14a69117ebc80a9746305;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6c2e598a12a14a69117ebc80a9746305, codeobj_6c2e598a12a14a69117ebc80a9746305, module_urllib3$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6c2e598a12a14a69117ebc80a9746305 = cache_frame_6c2e598a12a14a69117ebc80a9746305;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6c2e598a12a14a69117ebc80a9746305 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6c2e598a12a14a69117ebc80a9746305 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPConnection );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPConnection );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "HTTPConnection" );
        exception_tb = NULL;

        exception_lineno = 242;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = par_self;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_host;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_port;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 2, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_strict;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_strict;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_timeout;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_timeout;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_1 = par_kw;

    CHECK_OBJECT( tmp_dircall_arg4_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_unused = impl___internal__$$$function_9_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = par_key_file;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_key_file, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_cert_file;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_cert_file, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_key_password;

    CHECK_OBJECT( tmp_assattr_name_3 );
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_key_password, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = par_ssl_context;

    CHECK_OBJECT( tmp_assattr_name_4 );
    tmp_assattr_target_4 = par_self;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_ssl_context, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_5 = par_server_hostname;

    CHECK_OBJECT( tmp_assattr_name_5 );
    tmp_assattr_target_5 = par_self;

    CHECK_OBJECT( tmp_assattr_target_5 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_server_hostname, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 248;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_6 = const_str_plain_https;
    tmp_assattr_target_6 = par_self;

    CHECK_OBJECT( tmp_assattr_target_6 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain__protocol, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c2e598a12a14a69117ebc80a9746305 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c2e598a12a14a69117ebc80a9746305 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6c2e598a12a14a69117ebc80a9746305, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6c2e598a12a14a69117ebc80a9746305->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6c2e598a12a14a69117ebc80a9746305, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6c2e598a12a14a69117ebc80a9746305,
        type_description_1,
        par_self,
        par_host,
        par_port,
        par_key_file,
        par_cert_file,
        par_key_password,
        par_strict,
        par_timeout,
        par_ssl_context,
        par_server_hostname,
        par_kw
    );


    // Release cached frame.
    if ( frame_6c2e598a12a14a69117ebc80a9746305 == cache_frame_6c2e598a12a14a69117ebc80a9746305 )
    {
        Py_DECREF( frame_6c2e598a12a14a69117ebc80a9746305 );
    }
    cache_frame_6c2e598a12a14a69117ebc80a9746305 = NULL;

    assertFrameObject( frame_6c2e598a12a14a69117ebc80a9746305 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_8___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_server_hostname );
    Py_DECREF( par_server_hostname );
    par_server_hostname = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_ssl_context );
    Py_DECREF( par_ssl_context );
    par_ssl_context = NULL;

    CHECK_OBJECT( (PyObject *)par_port );
    Py_DECREF( par_port );
    par_port = NULL;

    CHECK_OBJECT( (PyObject *)par_strict );
    Py_DECREF( par_strict );
    par_strict = NULL;

    CHECK_OBJECT( (PyObject *)par_host );
    Py_DECREF( par_host );
    par_host = NULL;

    CHECK_OBJECT( (PyObject *)par_kw );
    Py_DECREF( par_kw );
    par_kw = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    CHECK_OBJECT( (PyObject *)par_key_file );
    Py_DECREF( par_key_file );
    par_key_file = NULL;

    CHECK_OBJECT( (PyObject *)par_cert_file );
    Py_DECREF( par_cert_file );
    par_cert_file = NULL;

    CHECK_OBJECT( (PyObject *)par_key_password );
    Py_DECREF( par_key_password );
    par_key_password = NULL;

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

    CHECK_OBJECT( (PyObject *)par_ssl_context );
    Py_DECREF( par_ssl_context );
    par_ssl_context = NULL;

    CHECK_OBJECT( (PyObject *)par_port );
    Py_DECREF( par_port );
    par_port = NULL;

    CHECK_OBJECT( (PyObject *)par_strict );
    Py_DECREF( par_strict );
    par_strict = NULL;

    CHECK_OBJECT( (PyObject *)par_host );
    Py_DECREF( par_host );
    par_host = NULL;

    CHECK_OBJECT( (PyObject *)par_kw );
    Py_DECREF( par_kw );
    par_kw = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    CHECK_OBJECT( (PyObject *)par_key_file );
    Py_DECREF( par_key_file );
    par_key_file = NULL;

    CHECK_OBJECT( (PyObject *)par_cert_file );
    Py_DECREF( par_cert_file );
    par_cert_file = NULL;

    CHECK_OBJECT( (PyObject *)par_key_password );
    Py_DECREF( par_key_password );
    par_key_password = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_8___init__ );
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


static PyObject *impl_urllib3$connection$$$function_9_connect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_context = NULL;
    PyObject *var_conn = NULL;
    PyObject *var_default_ssl_context = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_value_1;
    bool tmp_is_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
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
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f860a615da997754f0ede999b15c16bd = NULL;

    struct Nuitka_FrameObject *frame_f860a615da997754f0ede999b15c16bd;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f860a615da997754f0ede999b15c16bd, codeobj_f860a615da997754f0ede999b15c16bd, module_urllib3$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f860a615da997754f0ede999b15c16bd = cache_frame_f860a615da997754f0ede999b15c16bd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f860a615da997754f0ede999b15c16bd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f860a615da997754f0ede999b15c16bd ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_f860a615da997754f0ede999b15c16bd->m_frame.f_lineno = 255;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__new_conn );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_conn == NULL );
    var_conn = tmp_assign_source_1;

    tmp_called_instance_2 = par_self;

    CHECK_OBJECT( tmp_called_instance_2 );
    tmp_args_element_name_1 = var_conn;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_f860a615da997754f0ede999b15c16bd->m_frame.f_lineno = 256;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__prepare_conn, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_2 = Py_False;
    assert( var_default_ssl_context == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_default_ssl_context = tmp_assign_source_2;

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ssl_context );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 261;
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
    tmp_assign_source_3 = Py_True;
    {
        PyObject *old = var_default_ssl_context;
        assert( old != NULL );
        var_default_ssl_context = tmp_assign_source_3;
        Py_INCREF( var_default_ssl_context );
        Py_DECREF( old );
    }

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_create_urllib3_context );

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

        exception_lineno = 263;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_resolve_ssl_version );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_resolve_ssl_version );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "resolve_ssl_version" );
        exception_tb = NULL;

        exception_lineno = 264;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ssl_version );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 264;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_f860a615da997754f0ede999b15c16bd->m_frame.f_lineno = 264;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 264;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_ssl_version;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_resolve_cert_reqs );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_resolve_cert_reqs );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "resolve_cert_reqs" );
        exception_tb = NULL;

        exception_lineno = 265;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_cert_reqs );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 265;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_f860a615da997754f0ede999b15c16bd->m_frame.f_lineno = 265;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 265;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_cert_reqs;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_f860a615da997754f0ede999b15c16bd->m_frame.f_lineno = 263;
    tmp_assattr_name_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 263;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_ssl_context, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 263;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    branch_no_1:;
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ssl_context );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 270;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_context == NULL );
    var_context = tmp_assign_source_4;

    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ca_certs );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 275;
        type_description_1 = "oooo";
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
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_operand_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ca_cert_dir );
    if ( tmp_operand_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_2 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_2 );
    Py_DECREF( tmp_operand_name_2 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 275;
        type_description_1 = "oooo";
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
    tmp_and_left_value_3 = var_default_ssl_context;

    CHECK_OBJECT( tmp_and_left_value_3 );
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 275;
        type_description_1 = "oooo";
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
    tmp_hasattr_value_1 = var_context;

    CHECK_OBJECT( tmp_hasattr_value_1 );
    tmp_hasattr_attr_1 = const_str_plain_load_default_certs;
    tmp_and_right_value_3 = BUILTIN_HASATTR( tmp_hasattr_value_1, tmp_hasattr_attr_1 );
    if ( tmp_and_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 275;
        type_description_1 = "oooo";
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


        exception_lineno = 275;
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
    tmp_called_instance_3 = var_context;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_f860a615da997754f0ede999b15c16bd->m_frame.f_lineno = 277;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_load_default_certs );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ssl_wrap_socket );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl_wrap_socket );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ssl_wrap_socket" );
        exception_tb = NULL;

        exception_lineno = 279;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_2 = _PyDict_NewPresized( 6 );
    tmp_dict_value_3 = var_conn;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_sock;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_source_name_7 = par_self;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_key_file );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 281;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_4 = const_str_plain_keyfile;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_source_name_8 = par_self;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_cert_file );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 282;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_5 = const_str_plain_certfile;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_source_name_9 = par_self;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_key_password );
    if ( tmp_dict_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 283;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_6 = const_str_plain_key_password;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
    Py_DECREF( tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_source_name_10 = par_self;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_ssl_context );
    if ( tmp_dict_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 284;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_7 = const_str_plain_ssl_context;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_source_name_11 = par_self;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_dict_value_8 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_server_hostname );
    if ( tmp_dict_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 285;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_8 = const_str_plain_server_hostname;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_8, tmp_dict_value_8 );
    Py_DECREF( tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    frame_f860a615da997754f0ede999b15c16bd->m_frame.f_lineno = 279;
    tmp_assattr_name_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_4, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_sock, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 279;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f860a615da997754f0ede999b15c16bd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f860a615da997754f0ede999b15c16bd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f860a615da997754f0ede999b15c16bd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f860a615da997754f0ede999b15c16bd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f860a615da997754f0ede999b15c16bd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f860a615da997754f0ede999b15c16bd,
        type_description_1,
        par_self,
        var_context,
        var_conn,
        var_default_ssl_context
    );


    // Release cached frame.
    if ( frame_f860a615da997754f0ede999b15c16bd == cache_frame_f860a615da997754f0ede999b15c16bd )
    {
        Py_DECREF( frame_f860a615da997754f0ede999b15c16bd );
    }
    cache_frame_f860a615da997754f0ede999b15c16bd = NULL;

    assertFrameObject( frame_f860a615da997754f0ede999b15c16bd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_9_connect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_context );
    Py_DECREF( var_context );
    var_context = NULL;

    CHECK_OBJECT( (PyObject *)var_conn );
    Py_DECREF( var_conn );
    var_conn = NULL;

    CHECK_OBJECT( (PyObject *)var_default_ssl_context );
    Py_DECREF( var_default_ssl_context );
    var_default_ssl_context = NULL;

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

    Py_XDECREF( var_context );
    var_context = NULL;

    Py_XDECREF( var_conn );
    var_conn = NULL;

    Py_XDECREF( var_default_ssl_context );
    var_default_ssl_context = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_9_connect );
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


static PyObject *impl_urllib3$connection$$$function_10_set_cert( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key_file = python_pars[ 1 ];
    PyObject *par_cert_file = python_pars[ 2 ];
    PyObject *par_cert_reqs = python_pars[ 3 ];
    PyObject *par_key_password = python_pars[ 4 ];
    PyObject *par_ca_certs = python_pars[ 5 ];
    PyObject *par_assert_hostname = python_pars[ 6 ];
    PyObject *par_assert_fingerprint = python_pars[ 7 ];
    PyObject *par_ca_cert_dir = python_pars[ 8 ];
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
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    bool tmp_is_1;
    bool tmp_isnot_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    static struct Nuitka_FrameObject *cache_frame_dfb0ad32cd22a77f747c1d0f58f412aa = NULL;

    struct Nuitka_FrameObject *frame_dfb0ad32cd22a77f747c1d0f58f412aa;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dfb0ad32cd22a77f747c1d0f58f412aa, codeobj_dfb0ad32cd22a77f747c1d0f58f412aa, module_urllib3$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_dfb0ad32cd22a77f747c1d0f58f412aa = cache_frame_dfb0ad32cd22a77f747c1d0f58f412aa;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dfb0ad32cd22a77f747c1d0f58f412aa );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dfb0ad32cd22a77f747c1d0f58f412aa ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_cert_reqs;

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
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ssl_context );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ssl_context );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 319;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_verify_mode );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 319;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_cert_reqs;
        assert( old != NULL );
        par_cert_reqs = tmp_assign_source_1;
        Py_DECREF( old );
    }

    goto branch_end_2;
    branch_no_2:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_resolve_cert_reqs );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_resolve_cert_reqs );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "resolve_cert_reqs" );
        exception_tb = NULL;

        exception_lineno = 321;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_dfb0ad32cd22a77f747c1d0f58f412aa->m_frame.f_lineno = 321;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_none_tuple, 0 ) );

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_cert_reqs;
        assert( old != NULL );
        par_cert_reqs = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_end_2:;
    branch_no_1:;
    tmp_assattr_name_1 = par_key_file;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_key_file, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 323;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_cert_file;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_cert_file, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 324;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_cert_reqs;

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "cert_reqs" );
        exception_tb = NULL;

        exception_lineno = 325;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_cert_reqs, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 325;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = par_key_password;

    CHECK_OBJECT( tmp_assattr_name_4 );
    tmp_assattr_target_4 = par_self;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_key_password, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 326;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_5 = par_assert_hostname;

    CHECK_OBJECT( tmp_assattr_name_5 );
    tmp_assattr_target_5 = par_self;

    CHECK_OBJECT( tmp_assattr_target_5 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_assert_hostname, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 327;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_6 = par_assert_fingerprint;

    CHECK_OBJECT( tmp_assattr_name_6 );
    tmp_assattr_target_6 = par_self;

    CHECK_OBJECT( tmp_assattr_target_6 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_assert_fingerprint, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 328;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_1 = par_ca_certs;

    CHECK_OBJECT( tmp_and_left_value_1 );
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 329;
        type_description_1 = "ooooooooo";
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
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 329;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_path );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 329;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_ca_certs;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_dfb0ad32cd22a77f747c1d0f58f412aa->m_frame.f_lineno = 329;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_and_right_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_expanduser, call_args );
    }

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 329;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_7 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_assattr_name_7 = tmp_and_left_value_1;
    and_end_1:;
    tmp_assattr_target_7 = par_self;

    CHECK_OBJECT( tmp_assattr_target_7 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_ca_certs, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_7 );

        exception_lineno = 329;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_7 );
    tmp_and_left_value_2 = par_ca_cert_dir;

    CHECK_OBJECT( tmp_and_left_value_2 );
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 330;
        type_description_1 = "ooooooooo";
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
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 330;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_path );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 330;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_ca_cert_dir;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_dfb0ad32cd22a77f747c1d0f58f412aa->m_frame.f_lineno = 330;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_and_right_value_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_expanduser, call_args );
    }

    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 330;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_8 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    Py_INCREF( tmp_and_left_value_2 );
    tmp_assattr_name_8 = tmp_and_left_value_2;
    and_end_2:;
    tmp_assattr_target_8 = par_self;

    CHECK_OBJECT( tmp_assattr_target_8 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_ca_cert_dir, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_8 );

        exception_lineno = 330;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_8 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dfb0ad32cd22a77f747c1d0f58f412aa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dfb0ad32cd22a77f747c1d0f58f412aa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dfb0ad32cd22a77f747c1d0f58f412aa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dfb0ad32cd22a77f747c1d0f58f412aa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dfb0ad32cd22a77f747c1d0f58f412aa, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dfb0ad32cd22a77f747c1d0f58f412aa,
        type_description_1,
        par_self,
        par_key_file,
        par_cert_file,
        par_cert_reqs,
        par_key_password,
        par_ca_certs,
        par_assert_hostname,
        par_assert_fingerprint,
        par_ca_cert_dir
    );


    // Release cached frame.
    if ( frame_dfb0ad32cd22a77f747c1d0f58f412aa == cache_frame_dfb0ad32cd22a77f747c1d0f58f412aa )
    {
        Py_DECREF( frame_dfb0ad32cd22a77f747c1d0f58f412aa );
    }
    cache_frame_dfb0ad32cd22a77f747c1d0f58f412aa = NULL;

    assertFrameObject( frame_dfb0ad32cd22a77f747c1d0f58f412aa );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_10_set_cert );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_assert_hostname );
    Py_DECREF( par_assert_hostname );
    par_assert_hostname = NULL;

    CHECK_OBJECT( (PyObject *)par_assert_fingerprint );
    Py_DECREF( par_assert_fingerprint );
    par_assert_fingerprint = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_ca_cert_dir );
    Py_DECREF( par_ca_cert_dir );
    par_ca_cert_dir = NULL;

    Py_XDECREF( par_cert_reqs );
    par_cert_reqs = NULL;

    CHECK_OBJECT( (PyObject *)par_ca_certs );
    Py_DECREF( par_ca_certs );
    par_ca_certs = NULL;

    CHECK_OBJECT( (PyObject *)par_key_file );
    Py_DECREF( par_key_file );
    par_key_file = NULL;

    CHECK_OBJECT( (PyObject *)par_cert_file );
    Py_DECREF( par_cert_file );
    par_cert_file = NULL;

    CHECK_OBJECT( (PyObject *)par_key_password );
    Py_DECREF( par_key_password );
    par_key_password = NULL;

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

    CHECK_OBJECT( (PyObject *)par_assert_hostname );
    Py_DECREF( par_assert_hostname );
    par_assert_hostname = NULL;

    CHECK_OBJECT( (PyObject *)par_assert_fingerprint );
    Py_DECREF( par_assert_fingerprint );
    par_assert_fingerprint = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_ca_cert_dir );
    Py_DECREF( par_ca_cert_dir );
    par_ca_cert_dir = NULL;

    Py_XDECREF( par_cert_reqs );
    par_cert_reqs = NULL;

    CHECK_OBJECT( (PyObject *)par_ca_certs );
    Py_DECREF( par_ca_certs );
    par_ca_certs = NULL;

    CHECK_OBJECT( (PyObject *)par_key_file );
    Py_DECREF( par_key_file );
    par_key_file = NULL;

    CHECK_OBJECT( (PyObject *)par_cert_file );
    Py_DECREF( par_cert_file );
    par_cert_file = NULL;

    CHECK_OBJECT( (PyObject *)par_key_password );
    Py_DECREF( par_key_password );
    par_key_password = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_10_set_cert );
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


static PyObject *impl_urllib3$connection$$$function_11_connect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_server_hostname = NULL;
    PyObject *var_is_time_off = NULL;
    PyObject *var_hostname = NULL;
    PyObject *var_cert = NULL;
    PyObject *var_context = NULL;
    PyObject *var_default_ssl_context = NULL;
    PyObject *var_conn = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_instance_7;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
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
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_key_10;
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
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_default_2;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_value_1;
    bool tmp_is_1;
    bool tmp_isnot_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    PyObject *tmp_operand_name_3;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_b27a683314ce4bec0e50c8d2a7c7d6db = NULL;

    struct Nuitka_FrameObject *frame_b27a683314ce4bec0e50c8d2a7c7d6db;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b27a683314ce4bec0e50c8d2a7c7d6db, codeobj_b27a683314ce4bec0e50c8d2a7c7d6db, module_urllib3$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b27a683314ce4bec0e50c8d2a7c7d6db = cache_frame_b27a683314ce4bec0e50c8d2a7c7d6db;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b27a683314ce4bec0e50c8d2a7c7d6db );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b27a683314ce4bec0e50c8d2a7c7d6db ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_b27a683314ce4bec0e50c8d2a7c7d6db->m_frame.f_lineno = 334;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__new_conn );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_conn == NULL );
    var_conn = tmp_assign_source_1;

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_host );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_hostname == NULL );
    var_hostname = tmp_assign_source_2;

    tmp_getattr_target_1 = par_self;

    CHECK_OBJECT( tmp_getattr_target_1 );
    tmp_getattr_attr_1 = const_str_plain__tunnel_host;
    tmp_getattr_default_1 = Py_None;
    tmp_cond_value_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 338;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 338;
        type_description_1 = "oooooooo";
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
    tmp_assattr_name_1 = var_conn;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_sock, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 339;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_2 = par_self;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_b27a683314ce4bec0e50c8d2a7c7d6db->m_frame.f_lineno = 342;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain__tunnel );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 342;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_2 = const_int_0;
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_auto_open, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 344;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__tunnel_host );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_hostname;
        assert( old != NULL );
        var_hostname = tmp_assign_source_3;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_assign_source_4 = var_hostname;

    CHECK_OBJECT( tmp_assign_source_4 );
    assert( var_server_hostname == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_server_hostname = tmp_assign_source_4;

    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_server_hostname );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_server_hostname );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 351;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_server_hostname;
        assert( old != NULL );
        var_server_hostname = tmp_assign_source_5;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_datetime );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "datetime" );
        exception_tb = NULL;

        exception_lineno = 353;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_date );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 353;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_b27a683314ce4bec0e50c8d2a7c7d6db->m_frame.f_lineno = 353;
    tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_today );
    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 353;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_RECENT_DATE );

    if (unlikely( tmp_compexpr_right_1 == NULL ))
    {
        tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RECENT_DATE );
    }

    if ( tmp_compexpr_right_1 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "RECENT_DATE" );
        exception_tb = NULL;

        exception_lineno = 353;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_6 = RICH_COMPARE_LT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 353;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_is_time_off == NULL );
    var_is_time_off = tmp_assign_source_6;

    tmp_cond_value_2 = var_is_time_off;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 354;
        type_description_1 = "oooooooo";
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
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "warnings" );
        exception_tb = NULL;

        exception_lineno = 355;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_warn );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 355;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = const_str_digest_76770aa881e569a0306b7353925db341;
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_format );
    assert( tmp_called_name_2 != NULL );
    tmp_args_element_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_RECENT_DATE );

    if (unlikely( tmp_args_element_name_2 == NULL ))
    {
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RECENT_DATE );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "RECENT_DATE" );
        exception_tb = NULL;

        exception_lineno = 359;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_b27a683314ce4bec0e50c8d2a7c7d6db->m_frame.f_lineno = 357;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 357;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_SystemTimeWarning );

    if (unlikely( tmp_args_element_name_3 == NULL ))
    {
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SystemTimeWarning );
    }

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SystemTimeWarning" );
        exception_tb = NULL;

        exception_lineno = 360;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_b27a683314ce4bec0e50c8d2a7c7d6db->m_frame.f_lineno = 355;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 355;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    tmp_assign_source_7 = Py_False;
    assert( var_default_ssl_context == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_default_ssl_context = tmp_assign_source_7;

    tmp_source_name_8 = par_self;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_ssl_context );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 366;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = Py_None;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_is_1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_8 = Py_True;
    {
        PyObject *old = var_default_ssl_context;
        assert( old != NULL );
        var_default_ssl_context = tmp_assign_source_8;
        Py_INCREF( var_default_ssl_context );
        Py_DECREF( old );
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_create_urllib3_context );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_create_urllib3_context );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "create_urllib3_context" );
        exception_tb = NULL;

        exception_lineno = 368;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_resolve_ssl_version );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_resolve_ssl_version );
    }

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "resolve_ssl_version" );
        exception_tb = NULL;

        exception_lineno = 369;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_9 = par_self;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_ssl_version );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 369;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_b27a683314ce4bec0e50c8d2a7c7d6db->m_frame.f_lineno = 369;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 369;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_ssl_version;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_resolve_cert_reqs );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_resolve_cert_reqs );
    }

    if ( tmp_called_name_5 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "resolve_cert_reqs" );
        exception_tb = NULL;

        exception_lineno = 370;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = par_self;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_cert_reqs );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 370;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_b27a683314ce4bec0e50c8d2a7c7d6db->m_frame.f_lineno = 370;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 370;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_cert_reqs;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_b27a683314ce4bec0e50c8d2a7c7d6db->m_frame.f_lineno = 368;
    tmp_assattr_name_3 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 368;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_ssl_context, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 368;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    branch_no_4:;
    tmp_source_name_11 = par_self;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_ssl_context );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_context == NULL );
    var_context = tmp_assign_source_9;

    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_resolve_cert_reqs );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_resolve_cert_reqs );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "resolve_cert_reqs" );
        exception_tb = NULL;

        exception_lineno = 374;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_12 = par_self;

    CHECK_OBJECT( tmp_source_name_12 );
    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_cert_reqs );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 374;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_b27a683314ce4bec0e50c8d2a7c7d6db->m_frame.f_lineno = 374;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assattr_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 374;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_4 = var_context;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_verify_mode, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 374;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );
    tmp_source_name_13 = par_self;

    CHECK_OBJECT( tmp_source_name_13 );
    tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_ca_certs );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 379;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 379;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 382;
        type_description_1 = "oooooooo";
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
    tmp_source_name_14 = par_self;

    CHECK_OBJECT( tmp_source_name_14 );
    tmp_operand_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_ca_cert_dir );
    if ( tmp_operand_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 380;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_2 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_2 );
    Py_DECREF( tmp_operand_name_2 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 380;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 382;
        type_description_1 = "oooooooo";
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
    tmp_and_left_value_3 = var_default_ssl_context;

    CHECK_OBJECT( tmp_and_left_value_3 );
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 382;
        type_description_1 = "oooooooo";
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
    tmp_hasattr_value_1 = var_context;

    CHECK_OBJECT( tmp_hasattr_value_1 );
    tmp_hasattr_attr_1 = const_str_plain_load_default_certs;
    tmp_and_right_value_3 = BUILTIN_HASATTR( tmp_hasattr_value_1, tmp_hasattr_attr_1 );
    if ( tmp_and_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 382;
        type_description_1 = "oooooooo";
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
    tmp_cond_value_3 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_3 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 382;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_instance_4 = var_context;

    CHECK_OBJECT( tmp_called_instance_4 );
    frame_b27a683314ce4bec0e50c8d2a7c7d6db->m_frame.f_lineno = 384;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_load_default_certs );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 384;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_5:;
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ssl_wrap_socket );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl_wrap_socket );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ssl_wrap_socket" );
        exception_tb = NULL;

        exception_lineno = 386;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_2 = _PyDict_NewPresized( 8 );
    tmp_dict_value_3 = var_conn;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_sock;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_source_name_15 = par_self;

    CHECK_OBJECT( tmp_source_name_15 );
    tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_key_file );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 388;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_4 = const_str_plain_keyfile;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_source_name_16 = par_self;

    CHECK_OBJECT( tmp_source_name_16 );
    tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_cert_file );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 389;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_5 = const_str_plain_certfile;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_source_name_17 = par_self;

    CHECK_OBJECT( tmp_source_name_17 );
    tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_key_password );
    if ( tmp_dict_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 390;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_6 = const_str_plain_key_password;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
    Py_DECREF( tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_source_name_18 = par_self;

    CHECK_OBJECT( tmp_source_name_18 );
    tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_ca_certs );
    if ( tmp_dict_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 391;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_7 = const_str_plain_ca_certs;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_source_name_19 = par_self;

    CHECK_OBJECT( tmp_source_name_19 );
    tmp_dict_value_8 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_ca_cert_dir );
    if ( tmp_dict_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 392;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_8 = const_str_plain_ca_cert_dir;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_8, tmp_dict_value_8 );
    Py_DECREF( tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_9 = var_server_hostname;

    CHECK_OBJECT( tmp_dict_value_9 );
    tmp_dict_key_9 = const_str_plain_server_hostname;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_9, tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_10 = var_context;

    CHECK_OBJECT( tmp_dict_value_10 );
    tmp_dict_key_10 = const_str_plain_ssl_context;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_10, tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    frame_b27a683314ce4bec0e50c8d2a7c7d6db->m_frame.f_lineno = 386;
    tmp_assattr_name_5 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_7, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 386;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_5 = par_self;

    CHECK_OBJECT( tmp_assattr_target_5 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_sock, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 386;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    tmp_source_name_20 = par_self;

    CHECK_OBJECT( tmp_source_name_20 );
    tmp_cond_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_assert_fingerprint );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 397;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_assert_fingerprint );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_assert_fingerprint );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "assert_fingerprint" );
        exception_tb = NULL;

        exception_lineno = 398;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_22 = par_self;

    CHECK_OBJECT( tmp_source_name_22 );
    tmp_source_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_sock );
    if ( tmp_source_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 399;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_getpeercert );
    Py_DECREF( tmp_source_name_21 );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 399;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_3 = PyDict_Copy( const_dict_a6ff982bac01e8d0bcf997a792f16c84 );
    frame_b27a683314ce4bec0e50c8d2a7c7d6db->m_frame.f_lineno = 399;
    tmp_args_element_name_7 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_9, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 399;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_23 = par_self;

    CHECK_OBJECT( tmp_source_name_23 );
    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_assert_fingerprint );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_7 );

        exception_lineno = 399;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_b27a683314ce4bec0e50c8d2a7c7d6db->m_frame.f_lineno = 398;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_args_element_name_7 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 398;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_6;
    branch_no_6:;
    tmp_source_name_24 = var_context;

    CHECK_OBJECT( tmp_source_name_24 );
    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_verify_mode );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 402;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_25 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ssl );

    if (unlikely( tmp_source_name_25 == NULL ))
    {
        tmp_source_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
    }

    if ( tmp_source_name_25 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ssl" );
        exception_tb = NULL;

        exception_lineno = 402;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_CERT_NONE );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        exception_lineno = 402;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_4 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_and_left_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 402;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_4 = CHECK_IF_TRUE( tmp_and_left_value_4 );
    if ( tmp_and_left_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_4 );

        exception_lineno = 404;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_4 == 1 )
    {
        goto and_right_4;
    }
    else
    {
        goto and_left_4;
    }
    and_right_4:;
    Py_DECREF( tmp_and_left_value_4 );
    tmp_getattr_target_2 = var_context;

    CHECK_OBJECT( tmp_getattr_target_2 );
    tmp_getattr_attr_2 = const_str_plain_check_hostname;
    tmp_getattr_default_2 = Py_False;
    tmp_operand_name_3 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
    if ( tmp_operand_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 403;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_5 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_3 );
    Py_DECREF( tmp_operand_name_3 );
    if ( tmp_and_left_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 403;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_5 = CHECK_IF_TRUE( tmp_and_left_value_5 );
    if ( tmp_and_left_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 404;
        type_description_1 = "oooooooo";
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
    tmp_source_name_26 = par_self;

    CHECK_OBJECT( tmp_source_name_26 );
    tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_assert_hostname );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 404;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_3 = Py_False;
    tmp_and_right_value_5 = BOOL_FROM( tmp_compexpr_left_3 != tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    tmp_and_right_value_4 = tmp_and_right_value_5;
    goto and_end_5;
    and_left_5:;
    tmp_and_right_value_4 = tmp_and_left_value_5;
    and_end_5:;
    Py_INCREF( tmp_and_right_value_4 );
    tmp_cond_value_5 = tmp_and_right_value_4;
    goto and_end_4;
    and_left_4:;
    tmp_cond_value_5 = tmp_and_left_value_4;
    and_end_4:;
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 404;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_27 = par_self;

    CHECK_OBJECT( tmp_source_name_27 );
    tmp_called_instance_5 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_sock );
    if ( tmp_called_instance_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 409;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_b27a683314ce4bec0e50c8d2a7c7d6db->m_frame.f_lineno = 409;
    tmp_assign_source_10 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_getpeercert );
    Py_DECREF( tmp_called_instance_5 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 409;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_cert == NULL );
    var_cert = tmp_assign_source_10;

    tmp_called_instance_6 = var_cert;

    CHECK_OBJECT( tmp_called_instance_6 );
    frame_b27a683314ce4bec0e50c8d2a7c7d6db->m_frame.f_lineno = 410;
    tmp_cond_value_6 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_6, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_subjectAltName_tuple_empty_tuple, 0 ) );

    if ( tmp_cond_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 410;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        exception_lineno = 410;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_no_8;
    }
    else
    {
        goto branch_yes_8;
    }
    branch_yes_8:;
    tmp_source_name_28 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_28 == NULL ))
    {
        tmp_source_name_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_28 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "warnings" );
        exception_tb = NULL;

        exception_lineno = 411;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_warn );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 411;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_7 = const_str_digest_a1a5bf2862f29210f40238564b9bab29;
    tmp_args_element_name_10 = var_hostname;

    CHECK_OBJECT( tmp_args_element_name_10 );
    frame_b27a683314ce4bec0e50c8d2a7c7d6db->m_frame.f_lineno = 413;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_args_element_name_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_format, call_args );
    }

    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );

        exception_lineno = 413;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_11 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_SubjectAltNameWarning );

    if (unlikely( tmp_args_element_name_11 == NULL ))
    {
        tmp_args_element_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SubjectAltNameWarning );
    }

    if ( tmp_args_element_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SubjectAltNameWarning" );
        exception_tb = NULL;

        exception_lineno = 418;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_b27a683314ce4bec0e50c8d2a7c7d6db->m_frame.f_lineno = 411;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_11 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 411;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_8:;
    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain__match_hostname );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__match_hostname );
    }

    if ( tmp_called_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_match_hostname" );
        exception_tb = NULL;

        exception_lineno = 420;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = var_cert;

    CHECK_OBJECT( tmp_args_element_name_12 );
    tmp_source_name_29 = par_self;

    CHECK_OBJECT( tmp_source_name_29 );
    tmp_or_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_assert_hostname );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 420;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 420;
        type_description_1 = "oooooooo";
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
    tmp_or_right_value_1 = var_server_hostname;

    CHECK_OBJECT( tmp_or_right_value_1 );
    Py_INCREF( tmp_or_right_value_1 );
    tmp_args_element_name_13 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_args_element_name_13 = tmp_or_left_value_1;
    or_end_1:;
    frame_b27a683314ce4bec0e50c8d2a7c7d6db->m_frame.f_lineno = 420;
    {
        PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 420;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_7:;
    branch_end_6:;
    tmp_source_name_30 = var_context;

    CHECK_OBJECT( tmp_source_name_30 );
    tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_verify_mode );
    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 423;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_31 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ssl );

    if (unlikely( tmp_source_name_31 == NULL ))
    {
        tmp_source_name_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
    }

    if ( tmp_source_name_31 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ssl" );
        exception_tb = NULL;

        exception_lineno = 423;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_CERT_REQUIRED );
    if ( tmp_compexpr_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_4 );

        exception_lineno = 423;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_2 = RICH_COMPARE_EQ( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    Py_DECREF( tmp_compexpr_right_4 );
    if ( tmp_or_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 423;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_2 );

        exception_lineno = 424;
        type_description_1 = "oooooooo";
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
    Py_DECREF( tmp_or_left_value_2 );
    tmp_source_name_32 = par_self;

    CHECK_OBJECT( tmp_source_name_32 );
    tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_assert_fingerprint );
    if ( tmp_compexpr_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 424;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_5 = Py_None;
    tmp_or_right_value_2 = BOOL_FROM( tmp_compexpr_left_5 != tmp_compexpr_right_5 );
    Py_DECREF( tmp_compexpr_left_5 );
    Py_INCREF( tmp_or_right_value_2 );
    tmp_assattr_name_6 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_assattr_name_6 = tmp_or_left_value_2;
    or_end_2:;
    tmp_assattr_target_6 = par_self;

    CHECK_OBJECT( tmp_assattr_target_6 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_is_verified, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_6 );

        exception_lineno = 422;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_6 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b27a683314ce4bec0e50c8d2a7c7d6db );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b27a683314ce4bec0e50c8d2a7c7d6db );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b27a683314ce4bec0e50c8d2a7c7d6db, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b27a683314ce4bec0e50c8d2a7c7d6db->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b27a683314ce4bec0e50c8d2a7c7d6db, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b27a683314ce4bec0e50c8d2a7c7d6db,
        type_description_1,
        par_self,
        var_server_hostname,
        var_is_time_off,
        var_hostname,
        var_cert,
        var_context,
        var_default_ssl_context,
        var_conn
    );


    // Release cached frame.
    if ( frame_b27a683314ce4bec0e50c8d2a7c7d6db == cache_frame_b27a683314ce4bec0e50c8d2a7c7d6db )
    {
        Py_DECREF( frame_b27a683314ce4bec0e50c8d2a7c7d6db );
    }
    cache_frame_b27a683314ce4bec0e50c8d2a7c7d6db = NULL;

    assertFrameObject( frame_b27a683314ce4bec0e50c8d2a7c7d6db );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_11_connect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_server_hostname );
    Py_DECREF( var_server_hostname );
    var_server_hostname = NULL;

    CHECK_OBJECT( (PyObject *)var_is_time_off );
    Py_DECREF( var_is_time_off );
    var_is_time_off = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_hostname );
    Py_DECREF( var_hostname );
    var_hostname = NULL;

    Py_XDECREF( var_cert );
    var_cert = NULL;

    CHECK_OBJECT( (PyObject *)var_context );
    Py_DECREF( var_context );
    var_context = NULL;

    CHECK_OBJECT( (PyObject *)var_default_ssl_context );
    Py_DECREF( var_default_ssl_context );
    var_default_ssl_context = NULL;

    CHECK_OBJECT( (PyObject *)var_conn );
    Py_DECREF( var_conn );
    var_conn = NULL;

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

    Py_XDECREF( var_server_hostname );
    var_server_hostname = NULL;

    Py_XDECREF( var_is_time_off );
    var_is_time_off = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_hostname );
    var_hostname = NULL;

    Py_XDECREF( var_cert );
    var_cert = NULL;

    Py_XDECREF( var_context );
    var_context = NULL;

    Py_XDECREF( var_default_ssl_context );
    var_default_ssl_context = NULL;

    Py_XDECREF( var_conn );
    var_conn = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_11_connect );
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


static PyObject *impl_urllib3$connection$$$function_12__match_hostname( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cert = python_pars[ 0 ];
    PyObject *par_asserted_hostname = python_pars[ 1 ];
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_aee2124ef0766b4c6f14903041560fcd = NULL;

    struct Nuitka_FrameObject *frame_aee2124ef0766b4c6f14903041560fcd;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_aee2124ef0766b4c6f14903041560fcd, codeobj_aee2124ef0766b4c6f14903041560fcd, module_urllib3$connection, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_aee2124ef0766b4c6f14903041560fcd = cache_frame_aee2124ef0766b4c6f14903041560fcd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_aee2124ef0766b4c6f14903041560fcd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_aee2124ef0766b4c6f14903041560fcd ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_match_hostname );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_match_hostname );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "match_hostname" );
        exception_tb = NULL;

        exception_lineno = 430;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = par_cert;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_asserted_hostname;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_aee2124ef0766b4c6f14903041560fcd->m_frame.f_lineno = 430;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 430;
        type_description_1 = "ooo";
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
    PRESERVE_FRAME_EXCEPTION( frame_aee2124ef0766b4c6f14903041560fcd );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_aee2124ef0766b4c6f14903041560fcd, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_aee2124ef0766b4c6f14903041560fcd, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_CertificateError );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CertificateError );
    }

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "CertificateError" );
        exception_tb = NULL;

        exception_lineno = 431;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 431;
        type_description_1 = "ooo";
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
    tmp_assign_source_1 = PyThreadState_GET()->exc_value;
    assert( var_e == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_e = tmp_assign_source_1;

    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 432;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = const_str_digest_e8fecadf67c84324aa28152f08ceec4c;
    tmp_args_element_name_4 = par_asserted_hostname;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_args_element_name_5 = par_cert;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_aee2124ef0766b4c6f14903041560fcd->m_frame.f_lineno = 432;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_unused = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain_warning, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 432;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = par_cert;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = var_e;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__peer_cert, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 439;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 440;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_aee2124ef0766b4c6f14903041560fcd->m_frame) frame_aee2124ef0766b4c6f14903041560fcd->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 429;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_aee2124ef0766b4c6f14903041560fcd->m_frame) frame_aee2124ef0766b4c6f14903041560fcd->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_end_1:;
    // End of try:
    try_end_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_aee2124ef0766b4c6f14903041560fcd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_aee2124ef0766b4c6f14903041560fcd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_aee2124ef0766b4c6f14903041560fcd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_aee2124ef0766b4c6f14903041560fcd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_aee2124ef0766b4c6f14903041560fcd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_aee2124ef0766b4c6f14903041560fcd,
        type_description_1,
        par_cert,
        par_asserted_hostname,
        var_e
    );


    // Release cached frame.
    if ( frame_aee2124ef0766b4c6f14903041560fcd == cache_frame_aee2124ef0766b4c6f14903041560fcd )
    {
        Py_DECREF( frame_aee2124ef0766b4c6f14903041560fcd );
    }
    cache_frame_aee2124ef0766b4c6f14903041560fcd = NULL;

    assertFrameObject( frame_aee2124ef0766b4c6f14903041560fcd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_12__match_hostname );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    CHECK_OBJECT( (PyObject *)par_asserted_hostname );
    Py_DECREF( par_asserted_hostname );
    par_asserted_hostname = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    CHECK_OBJECT( (PyObject *)par_asserted_hostname );
    Py_DECREF( par_asserted_hostname );
    par_asserted_hostname = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_12__match_hostname );
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



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_10_set_cert( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_10_set_cert,
        const_str_plain_set_cert,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_dfb0ad32cd22a77f747c1d0f58f412aa,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$connection,
        const_str_digest_5e42e68968b4150e2b97070212311786,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_11_connect(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_11_connect,
        const_str_plain_connect,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b27a683314ce4bec0e50c8d2a7c7d6db,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$connection,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_12__match_hostname(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_12__match_hostname,
        const_str_plain__match_hostname,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_aee2124ef0766b4c6f14903041560fcd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$connection,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_faef104ca649760f54933c4685471ba9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$connection,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_2_host(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_2_host,
        const_str_plain_host,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a9fea7cd2909b294443f21f18d9c2044,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$connection,
        const_str_digest_413072d56f5b6cab90a6a564aa42b34d,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_3_host(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_3_host,
        const_str_plain_host,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_68336967122696592b6fa3d6c3834b84,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$connection,
        const_str_digest_feb167a80b64f9a6111c2ef450038b43,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_4__new_conn(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_4__new_conn,
        const_str_plain__new_conn,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a8dcef716500e1b9d9bd2b737d43eb95,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$connection,
        const_str_digest_e0fe92f188862ba1c4cac2ad70dff86d,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_5__prepare_conn(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_5__prepare_conn,
        const_str_plain__prepare_conn,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5e9da990dabbc1d22fe7f2ae3cbfedbc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$connection,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_6_connect(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_6_connect,
        const_str_plain_connect,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ad423f2fbbc65244e7096dafd1016932,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$connection,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_7_request_chunked( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_7_request_chunked,
        const_str_plain_request_chunked,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0a2f9d2353479050301730992fc0ec2c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$connection,
        const_str_digest_dc659baf5812ef509a1bfb99226d850c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_8___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6c2e598a12a14a69117ebc80a9746305,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$connection,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_9_connect(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_9_connect,
        const_str_plain_connect,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f860a615da997754f0ede999b15c16bd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$connection,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$connection =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.connection",   /* m_name */
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

MOD_INIT_DECL( urllib3$connection )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$connection );
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
    puts("urllib3.connection: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.connection: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.connection: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$connection" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$connection = Py_InitModule4(
        "urllib3.connection",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3$connection = PyModule_Create( &mdef_urllib3$connection );
#endif

    moduledict_urllib3$connection = MODULE_DICT( module_urllib3$connection );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3$connection,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$connection,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_urllib3$connection,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$connection,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3$connection );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_003800fb824e3437bbbf235acf31301c, module_urllib3$connection );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_class_creation_3__class = NULL;
    PyObject *tmp_class_creation_3__class_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class = NULL;
    PyObject *tmp_class_creation_4__class_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__class = NULL;
    PyObject *tmp_class_creation_5__class_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__class = NULL;
    PyObject *tmp_class_creation_6__class_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
    PyObject *tmp_select_metaclass_2__base = NULL;
    PyObject *tmp_select_metaclass_4__base = NULL;
    PyObject *tmp_select_metaclass_5__base = NULL;
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
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    int tmp_cmp_In_6;
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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
    PyObject *tmp_dict_name_6;
    PyObject *tmp_dictset_value;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
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
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_key_name_4;
    PyObject *tmp_key_name_5;
    PyObject *tmp_key_name_6;
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
    PyObject *tmp_list_element_1;
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
    int tmp_res;
    bool tmp_result;
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
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyObject *tmp_type_arg_3;
    PyObject *tmp_type_arg_4;
    PyObject *tmp_type_arg_5;
    static struct Nuitka_FrameObject *cache_frame_c36500281b0b9e6b8f226eddd531bcf9_2 = NULL;

    struct Nuitka_FrameObject *frame_c36500281b0b9e6b8f226eddd531bcf9_2;

    static struct Nuitka_FrameObject *cache_frame_c2df862b7d3e8e84dda1ddf7cd1b3c51_3 = NULL;

    struct Nuitka_FrameObject *frame_c2df862b7d3e8e84dda1ddf7cd1b3c51_3;

    struct Nuitka_FrameObject *frame_9d0ea5f4f81113907b4cc3172e52ad30;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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
    PyObject *locals_VerifiedHTTPSConnection_289 = NULL;
    PyObject *locals_ConnectionError_28 = NULL;
    PyObject *locals_HTTPSConnection_223 = NULL;
    PyObject *locals_BaseSSLError_19 = NULL;
    PyObject *locals_DummyConnection_62 = NULL;
    PyObject *locals_HTTPConnection_68 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_9d0ea5f4f81113907b4cc3172e52ad30 = MAKE_MODULE_FRAME( codeobj_9d0ea5f4f81113907b4cc3172e52ad30, module_urllib3$connection );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_9d0ea5f4f81113907b4cc3172e52ad30 );
    assert( Py_REFCNT( frame_9d0ea5f4f81113907b4cc3172e52ad30 ) == 2 );

    // Framed code:
    frame_9d0ea5f4f81113907b4cc3172e52ad30->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_3 );
    tmp_name_name_1 = const_str_plain_datetime;
    tmp_globals_name_1 = (PyObject *)moduledict_urllib3$connection;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_9d0ea5f4f81113907b4cc3172e52ad30->m_frame.f_lineno = 2;
    tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_datetime, tmp_assign_source_4 );
    tmp_name_name_2 = const_str_plain_logging;
    tmp_globals_name_2 = (PyObject *)moduledict_urllib3$connection;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_9d0ea5f4f81113907b4cc3172e52ad30->m_frame.f_lineno = 3;
    tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_5 );
    tmp_name_name_3 = const_str_plain_os;
    tmp_globals_name_3 = (PyObject *)moduledict_urllib3$connection;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    tmp_level_name_3 = const_int_0;
    frame_9d0ea5f4f81113907b4cc3172e52ad30->m_frame.f_lineno = 4;
    tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_6 );
    tmp_name_name_4 = const_str_plain_socket;
    tmp_globals_name_4 = (PyObject *)moduledict_urllib3$connection;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = Py_None;
    tmp_level_name_4 = const_int_0;
    frame_9d0ea5f4f81113907b4cc3172e52ad30->m_frame.f_lineno = 5;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_socket, tmp_assign_source_7 );
    tmp_name_name_5 = const_str_plain_socket;
    tmp_globals_name_5 = (PyObject *)moduledict_urllib3$connection;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_error_str_plain_timeout_tuple;
    tmp_level_name_5 = const_int_0;
    frame_9d0ea5f4f81113907b4cc3172e52ad30->m_frame.f_lineno = 6;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_8;

    // Tried code:
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_error );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_SocketError, tmp_assign_source_9 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_timeout );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_SocketTimeout, tmp_assign_source_10 );
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

    tmp_name_name_6 = const_str_plain_warnings;
    tmp_globals_name_6 = (PyObject *)moduledict_urllib3$connection;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = Py_None;
    tmp_level_name_6 = const_int_0;
    frame_9d0ea5f4f81113907b4cc3172e52ad30->m_frame.f_lineno = 7;
    tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_11 );
    tmp_name_name_7 = const_str_plain_packages;
    tmp_globals_name_7 = (PyObject *)moduledict_urllib3$connection;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_six_tuple;
    tmp_level_name_7 = const_int_pos_1;
    frame_9d0ea5f4f81113907b4cc3172e52ad30->m_frame.f_lineno = 8;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_six );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_12 );
    tmp_name_name_8 = const_str_digest_0f2eb9f71c85852d8e24437103b38cdd;
    tmp_globals_name_8 = (PyObject *)moduledict_urllib3$connection;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_str_plain_HTTPConnection_tuple;
    tmp_level_name_8 = const_int_pos_1;
    frame_9d0ea5f4f81113907b4cc3172e52ad30->m_frame.f_lineno = 9;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_HTTPConnection );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain__HTTPConnection, tmp_assign_source_13 );
    tmp_name_name_9 = const_str_digest_0f2eb9f71c85852d8e24437103b38cdd;
    tmp_globals_name_9 = (PyObject *)moduledict_urllib3$connection;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = const_tuple_str_plain_HTTPException_tuple;
    tmp_level_name_9 = const_int_pos_1;
    frame_9d0ea5f4f81113907b4cc3172e52ad30->m_frame.f_lineno = 10;
    tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_HTTPException );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPException, tmp_assign_source_14 );
    // Tried code:
    tmp_name_name_10 = const_str_plain_ssl;
    tmp_globals_name_10 = (PyObject *)moduledict_urllib3$connection;
    tmp_locals_name_10 = Py_None;
    tmp_fromlist_name_10 = Py_None;
    tmp_level_name_10 = const_int_0;
    frame_9d0ea5f4f81113907b4cc3172e52ad30->m_frame.f_lineno = 13;
    tmp_assign_source_15 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ssl, tmp_assign_source_15 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ssl );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
    }

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_16 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_SSLError );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_BaseSSLError, tmp_assign_source_16 );
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_9d0ea5f4f81113907b4cc3172e52ad30 );
    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_9d0ea5f4f81113907b4cc3172e52ad30, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != 0 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_9d0ea5f4f81113907b4cc3172e52ad30, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = PyExc_ImportError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyExc_AttributeError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 1, tmp_tuple_element_1 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_17 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ssl, tmp_assign_source_17 );
    tmp_assign_source_18 = PyTuple_New( 1 );
    tmp_tuple_element_2 = PyExc_BaseException;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_18, 0, tmp_tuple_element_2 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_18;

    tmp_set_locals = PyDict_New();
    locals_BaseSSLError_19 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_003800fb824e3437bbbf235acf31301c;
    tmp_res = PyDict_SetItem( locals_BaseSSLError_19, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_1 = locals_BaseSSLError_19;
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    Py_DECREF( locals_BaseSSLError_19 );
    locals_BaseSSLError_19 = NULL;
    goto outline_result_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    outline_result_1:;
    tmp_assign_source_19 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_19;

    // Tried code:
    tmp_compare_left_2 = const_str_plain___metaclass__;
    tmp_compare_right_2 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
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
    tmp_assign_source_20 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto try_except_handler_4;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_subscribed_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_21 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto try_except_handler_4;
    }
    assert( tmp_select_metaclass_1__base == NULL );
    tmp_select_metaclass_1__base = tmp_assign_source_21;

    // Tried code:
    // Tried code:
    tmp_source_name_2 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_outline_return_value_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_2 );
    if ( tmp_outline_return_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto try_except_handler_6;
    }
    goto try_return_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_3 );
    Py_XDECREF( exception_keeper_value_3 );
    Py_XDECREF( exception_keeper_tb_3 );
    tmp_type_arg_1 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_outline_return_value_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_outline_return_value_2 != NULL );
    goto try_return_handler_5;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_5:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
    Py_DECREF( tmp_select_metaclass_1__base );
    tmp_select_metaclass_1__base = NULL;

    goto outline_result_2;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
    Py_DECREF( tmp_select_metaclass_1__base );
    tmp_select_metaclass_1__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    outline_result_2:;
    tmp_assign_source_20 = tmp_outline_return_value_2;
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_20;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_BaseSSLError;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_9d0ea5f4f81113907b4cc3172e52ad30->m_frame.f_lineno = 19;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto try_except_handler_4;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_22;

    goto try_end_3;
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
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
    tmp_assign_source_23 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_23 );
    UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_BaseSSLError, tmp_assign_source_23 );
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

    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 12;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9d0ea5f4f81113907b4cc3172e52ad30->m_frame) frame_9d0ea5f4f81113907b4cc3172e52ad30->m_frame.f_lineno = exception_tb->tb_lineno;

    goto frame_exception_exit_1;
    branch_end_1:;
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_2:;
    // Tried code:
    tmp_assign_source_24 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ConnectionError );

    if (unlikely( tmp_assign_source_24 == NULL ))
    {
        tmp_assign_source_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectionError );
    }

    if ( tmp_assign_source_24 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ConnectionError" );
        exception_tb = NULL;

        exception_lineno = 25;

        goto try_except_handler_7;
    }

    UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ConnectionError, tmp_assign_source_24 );
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_9d0ea5f4f81113907b4cc3172e52ad30 );
    if ( exception_keeper_tb_5 == NULL )
    {
        exception_keeper_tb_5 = MAKE_TRACEBACK( frame_9d0ea5f4f81113907b4cc3172e52ad30, exception_keeper_lineno_5 );
    }
    else if ( exception_keeper_lineno_5 != 0 )
    {
        exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_9d0ea5f4f81113907b4cc3172e52ad30, exception_keeper_lineno_5 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_NameError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

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
    tmp_assign_source_25 = PyTuple_New( 1 );
    tmp_tuple_element_3 = PyExc_Exception;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_25, 0, tmp_tuple_element_3 );
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_25;

    tmp_set_locals = PyDict_New();
    locals_ConnectionError_28 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_003800fb824e3437bbbf235acf31301c;
    tmp_res = PyDict_SetItem( locals_ConnectionError_28, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_3 = locals_ConnectionError_28;
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_8;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_8:;
    Py_DECREF( locals_ConnectionError_28 );
    locals_ConnectionError_28 = NULL;
    goto outline_result_3;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    outline_result_3:;
    tmp_assign_source_26 = tmp_outline_return_value_3;
    assert( tmp_class_creation_2__class_dict == NULL );
    tmp_class_creation_2__class_dict = tmp_assign_source_26;

    // Tried code:
    tmp_compare_left_4 = const_str_plain___metaclass__;
    tmp_compare_right_4 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_compare_right_4 );
    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
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
    tmp_assign_source_27 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_9;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_subscribed_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_int_0;
    tmp_assign_source_28 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_9;
    }
    assert( tmp_select_metaclass_2__base == NULL );
    tmp_select_metaclass_2__base = tmp_assign_source_28;

    // Tried code:
    // Tried code:
    tmp_source_name_3 = tmp_select_metaclass_2__base;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_outline_return_value_4 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    if ( tmp_outline_return_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_11;
    }
    goto try_return_handler_10;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
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
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
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
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    outline_result_4:;
    tmp_assign_source_27 = tmp_outline_return_value_4;
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_27;

    tmp_called_name_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_args_element_name_4 = const_str_plain_ConnectionError;
    tmp_args_element_name_5 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_args_element_name_5 );
    tmp_args_element_name_6 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_9d0ea5f4f81113907b4cc3172e52ad30->m_frame.f_lineno = 28;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_9;
    }
    assert( tmp_class_creation_2__class == NULL );
    tmp_class_creation_2__class = tmp_assign_source_29;

    goto try_end_5;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
    Py_DECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_dict );
    Py_DECREF( tmp_class_creation_2__class_dict );
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
    tmp_assign_source_30 = tmp_class_creation_2__class;

    CHECK_OBJECT( tmp_assign_source_30 );
    UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ConnectionError, tmp_assign_source_30 );
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

    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 23;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9d0ea5f4f81113907b4cc3172e52ad30->m_frame) frame_9d0ea5f4f81113907b4cc3172e52ad30->m_frame.f_lineno = exception_tb->tb_lineno;

    goto frame_exception_exit_1;
    branch_end_2:;
    goto try_end_4;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_4:;
    tmp_name_name_11 = const_str_plain_exceptions;
    tmp_globals_name_11 = (PyObject *)moduledict_urllib3$connection;
    tmp_locals_name_11 = Py_None;
    tmp_fromlist_name_11 = const_tuple_e4d50c48f2ee1b6eb3ae021a15141bf1_tuple;
    tmp_level_name_11 = const_int_pos_1;
    frame_9d0ea5f4f81113907b4cc3172e52ad30->m_frame.f_lineno = 32;
    tmp_assign_source_31 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_31;

    // Tried code:
    tmp_import_name_from_7 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_NewConnectionError );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_12;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_NewConnectionError, tmp_assign_source_32 );
    tmp_import_name_from_8 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_ConnectTimeoutError );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_12;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError, tmp_assign_source_33 );
    tmp_import_name_from_9 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_34 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_SubjectAltNameWarning );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_12;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_SubjectAltNameWarning, tmp_assign_source_34 );
    tmp_import_name_from_10 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_35 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_SystemTimeWarning );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_12;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_SystemTimeWarning, tmp_assign_source_35 );
    goto try_end_6;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    tmp_name_name_12 = const_str_digest_0a2ea16757d4dad15d4c8e0ada40cd0c;
    tmp_globals_name_12 = (PyObject *)moduledict_urllib3$connection;
    tmp_locals_name_12 = Py_None;
    tmp_fromlist_name_12 = const_tuple_str_plain_match_hostname_str_plain_CertificateError_tuple;
    tmp_level_name_12 = const_int_pos_1;
    frame_9d0ea5f4f81113907b4cc3172e52ad30->m_frame.f_lineno = 38;
    tmp_assign_source_36 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_36;

    // Tried code:
    tmp_import_name_from_11 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    tmp_assign_source_37 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_match_hostname );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_13;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_match_hostname, tmp_assign_source_37 );
    tmp_import_name_from_12 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_12 );
    tmp_assign_source_38 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_CertificateError );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_13;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_CertificateError, tmp_assign_source_38 );
    goto try_end_7;
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    tmp_name_name_13 = const_str_digest_fbcb06792f2497ac6c7abd423e9e2d62;
    tmp_globals_name_13 = (PyObject *)moduledict_urllib3$connection;
    tmp_locals_name_13 = Py_None;
    tmp_fromlist_name_13 = const_tuple_659bcfd89e2a907d800ea69675ef86b4_tuple;
    tmp_level_name_13 = const_int_pos_1;
    frame_9d0ea5f4f81113907b4cc3172e52ad30->m_frame.f_lineno = 40;
    tmp_assign_source_39 = IMPORT_MODULE5( tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_4__module == NULL );
    tmp_import_from_4__module = tmp_assign_source_39;

    // Tried code:
    tmp_import_name_from_13 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_13 );
    tmp_assign_source_40 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_resolve_cert_reqs );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_14;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_resolve_cert_reqs, tmp_assign_source_40 );
    tmp_import_name_from_14 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_14 );
    tmp_assign_source_41 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_resolve_ssl_version );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_14;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_resolve_ssl_version, tmp_assign_source_41 );
    tmp_import_name_from_15 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_15 );
    tmp_assign_source_42 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_assert_fingerprint );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_14;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_assert_fingerprint, tmp_assign_source_42 );
    tmp_import_name_from_16 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_16 );
    tmp_assign_source_43 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_create_urllib3_context );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_14;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_create_urllib3_context, tmp_assign_source_43 );
    tmp_import_name_from_17 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_17 );
    tmp_assign_source_44 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_ssl_wrap_socket );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_14;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ssl_wrap_socket, tmp_assign_source_44 );
    goto try_end_8;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    tmp_name_name_14 = const_str_plain_util;
    tmp_globals_name_14 = (PyObject *)moduledict_urllib3$connection;
    tmp_locals_name_14 = Py_None;
    tmp_fromlist_name_14 = const_tuple_str_plain_connection_tuple;
    tmp_level_name_14 = const_int_pos_1;
    frame_9d0ea5f4f81113907b4cc3172e52ad30->m_frame.f_lineno = 49;
    tmp_import_name_from_18 = IMPORT_MODULE5( tmp_name_name_14, tmp_globals_name_14, tmp_locals_name_14, tmp_fromlist_name_14, tmp_level_name_14 );
    if ( tmp_import_name_from_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_45 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_connection );
    Py_DECREF( tmp_import_name_from_18 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_connection, tmp_assign_source_45 );
    tmp_name_name_15 = const_str_plain__collections;
    tmp_globals_name_15 = (PyObject *)moduledict_urllib3$connection;
    tmp_locals_name_15 = Py_None;
    tmp_fromlist_name_15 = const_tuple_str_plain_HTTPHeaderDict_tuple;
    tmp_level_name_15 = const_int_pos_1;
    frame_9d0ea5f4f81113907b4cc3172e52ad30->m_frame.f_lineno = 51;
    tmp_import_name_from_19 = IMPORT_MODULE5( tmp_name_name_15, tmp_globals_name_15, tmp_locals_name_15, tmp_fromlist_name_15, tmp_level_name_15 );
    if ( tmp_import_name_from_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_46 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_HTTPHeaderDict );
    Py_DECREF( tmp_import_name_from_19 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPHeaderDict, tmp_assign_source_46 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;

        exception_lineno = 53;

        goto frame_exception_exit_1;
    }

    frame_9d0ea5f4f81113907b4cc3172e52ad30->m_frame.f_lineno = 53;
    tmp_assign_source_47 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM( const_tuple_str_digest_003800fb824e3437bbbf235acf31301c_tuple, 0 ) );

    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_log, tmp_assign_source_47 );
    tmp_assign_source_48 = PyDict_Copy( const_dict_93916f845314fde3dc45a1c4d3d34ff8 );
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_port_by_scheme, tmp_assign_source_48 );
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_datetime );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "datetime" );
        exception_tb = NULL;

        exception_lineno = 59;

        goto frame_exception_exit_1;
    }

    frame_9d0ea5f4f81113907b4cc3172e52ad30->m_frame.f_lineno = 59;
    tmp_assign_source_49 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_2, const_str_plain_date, &PyTuple_GET_ITEM( const_tuple_int_pos_2019_int_pos_1_int_pos_1_tuple, 0 ) );

    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_RECENT_DATE, tmp_assign_source_49 );
    tmp_set_locals = PyDict_New();
    locals_DummyConnection_62 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_003800fb824e3437bbbf235acf31301c;
    tmp_res = PyDict_SetItem( locals_DummyConnection_62, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_df5958c87718dd50f2e0bfe7cc6ada5c;
    tmp_res = PyDict_SetItem( locals_DummyConnection_62, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_5 = locals_DummyConnection_62;
    Py_INCREF( tmp_outline_return_value_5 );
    goto try_return_handler_15;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_15:;
    Py_DECREF( locals_DummyConnection_62 );
    locals_DummyConnection_62 = NULL;
    goto outline_result_5;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    outline_result_5:;
    tmp_assign_source_50 = tmp_outline_return_value_5;
    assert( tmp_class_creation_3__class_dict == NULL );
    tmp_class_creation_3__class_dict = tmp_assign_source_50;

    // Tried code:
    tmp_compare_left_5 = const_str_plain___metaclass__;
    tmp_compare_right_5 = tmp_class_creation_3__class_dict;

    CHECK_OBJECT( tmp_compare_right_5 );
    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
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
    tmp_assign_source_51 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_16;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_51 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_51 );
    condexpr_end_3:;
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_51;

    tmp_called_name_3 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_args_element_name_7 = const_str_plain_DummyConnection;
    tmp_args_element_name_8 = const_tuple_type_object_tuple;
    tmp_args_element_name_9 = tmp_class_creation_3__class_dict;

    CHECK_OBJECT( tmp_args_element_name_9 );
    frame_9d0ea5f4f81113907b4cc3172e52ad30->m_frame.f_lineno = 62;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_assign_source_52 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_16;
    }
    assert( tmp_class_creation_3__class == NULL );
    tmp_class_creation_3__class = tmp_assign_source_52;

    goto try_end_9;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_dict );
    Py_DECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    tmp_assign_source_53 = tmp_class_creation_3__class;

    CHECK_OBJECT( tmp_assign_source_53 );
    UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_DummyConnection, tmp_assign_source_53 );
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
    tmp_assign_source_54 = PyTuple_New( 2 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain__HTTPConnection );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__HTTPConnection );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_54 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_HTTPConnection" );
        exception_tb = NULL;

        exception_lineno = 68;

        goto try_except_handler_17;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_54, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = (PyObject *)&PyBaseObject_Type;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_54, 1, tmp_tuple_element_4 );
    assert( tmp_class_creation_4__bases == NULL );
    tmp_class_creation_4__bases = tmp_assign_source_54;

    tmp_set_locals = PyDict_New();
    locals_HTTPConnection_68 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_003800fb824e3437bbbf235acf31301c;
    tmp_res = PyDict_SetItem( locals_HTTPConnection_68, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_a2ffa7a4a6da141b7e16370ced35175d;
    tmp_res = PyDict_SetItem( locals_HTTPConnection_68, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c36500281b0b9e6b8f226eddd531bcf9_2, codeobj_c36500281b0b9e6b8f226eddd531bcf9, module_urllib3$connection, 0 );
    frame_c36500281b0b9e6b8f226eddd531bcf9_2 = cache_frame_c36500281b0b9e6b8f226eddd531bcf9_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c36500281b0b9e6b8f226eddd531bcf9_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c36500281b0b9e6b8f226eddd531bcf9_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_subscribed_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_port_by_scheme );

    if (unlikely( tmp_subscribed_name_3 == NULL ))
    {
        tmp_subscribed_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_port_by_scheme );
    }

    if ( tmp_subscribed_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "port_by_scheme" );
        exception_tb = NULL;

        exception_lineno = 92;

        goto frame_exception_exit_2;
    }

    tmp_subscript_name_3 = const_str_plain_http;
    tmp_dictset_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_HTTPConnection_68, const_str_plain_default_port, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto frame_exception_exit_2;
    }
    tmp_dictset_value = PyList_New( 1 );
    tmp_list_element_1 = PyTuple_New( 3 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_dictset_value );
        Py_DECREF( tmp_list_element_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "socket" );
        exception_tb = NULL;

        exception_lineno = 96;

        goto frame_exception_exit_2;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_IPPROTO_TCP );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dictset_value );
        Py_DECREF( tmp_list_element_1 );

        exception_lineno = 96;

        goto frame_exception_exit_2;
    }
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_5 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_dictset_value );
        Py_DECREF( tmp_list_element_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "socket" );
        exception_tb = NULL;

        exception_lineno = 96;

        goto frame_exception_exit_2;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_TCP_NODELAY );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dictset_value );
        Py_DECREF( tmp_list_element_1 );

        exception_lineno = 96;

        goto frame_exception_exit_2;
    }
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_5 );
    tmp_tuple_element_5 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_list_element_1, 2, tmp_tuple_element_5 );
    PyList_SET_ITEM( tmp_dictset_value, 0, tmp_list_element_1 );
    tmp_res = PyDict_SetItem( locals_HTTPConnection_68, const_str_plain_default_socket_options, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto frame_exception_exit_2;
    }
    tmp_dictset_value = Py_False;
    tmp_res = PyDict_SetItem( locals_HTTPConnection_68, const_str_plain_is_verified, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$connection$$$function_1___init__(  );
    tmp_res = PyDict_SetItem( locals_HTTPConnection_68, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_called_name_4 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_10 = MAKE_FUNCTION_urllib3$connection$$$function_2_host(  );
    frame_c36500281b0b9e6b8f226eddd531bcf9_2->m_frame.f_lineno = 114;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_HTTPConnection_68, const_str_plain_host, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto frame_exception_exit_2;
    }
    tmp_called_instance_3 = PyDict_GetItem( locals_HTTPConnection_68, const_str_plain_host );

    if ( tmp_called_instance_3 == NULL )
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_host );

        if (unlikely( tmp_called_instance_3 == NULL ))
        {
            tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_host );
        }

        if ( tmp_called_instance_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "host" );
            exception_tb = NULL;

            exception_lineno = 133;

            goto frame_exception_exit_2;
        }

    }

    tmp_args_element_name_11 = MAKE_FUNCTION_urllib3$connection$$$function_3_host(  );
    frame_c36500281b0b9e6b8f226eddd531bcf9_2->m_frame.f_lineno = 133;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_setter, call_args );
    }

    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_HTTPConnection_68, const_str_plain_host, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c36500281b0b9e6b8f226eddd531bcf9_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c36500281b0b9e6b8f226eddd531bcf9_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c36500281b0b9e6b8f226eddd531bcf9_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c36500281b0b9e6b8f226eddd531bcf9_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c36500281b0b9e6b8f226eddd531bcf9_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c36500281b0b9e6b8f226eddd531bcf9_2,
        type_description_2
    );


    // Release cached frame.
    if ( frame_c36500281b0b9e6b8f226eddd531bcf9_2 == cache_frame_c36500281b0b9e6b8f226eddd531bcf9_2 )
    {
        Py_DECREF( frame_c36500281b0b9e6b8f226eddd531bcf9_2 );
    }
    cache_frame_c36500281b0b9e6b8f226eddd531bcf9_2 = NULL;

    assertFrameObject( frame_c36500281b0b9e6b8f226eddd531bcf9_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_18;
    skip_nested_handling_1:;
    tmp_dictset_value = MAKE_FUNCTION_urllib3$connection$$$function_4__new_conn(  );
    tmp_res = PyDict_SetItem( locals_HTTPConnection_68, const_str_plain__new_conn, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$connection$$$function_5__prepare_conn(  );
    tmp_res = PyDict_SetItem( locals_HTTPConnection_68, const_str_plain__prepare_conn, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$connection$$$function_6_connect(  );
    tmp_res = PyDict_SetItem( locals_HTTPConnection_68, const_str_plain_connect, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_defaults_1 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$connection$$$function_7_request_chunked( tmp_defaults_1 );
    tmp_res = PyDict_SetItem( locals_HTTPConnection_68, const_str_plain_request_chunked, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_outline_return_value_6 = locals_HTTPConnection_68;
    Py_INCREF( tmp_outline_return_value_6 );
    goto try_return_handler_18;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_18:;
    Py_DECREF( locals_HTTPConnection_68 );
    locals_HTTPConnection_68 = NULL;
    goto outline_result_6;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_HTTPConnection_68 );
    locals_HTTPConnection_68 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 68;
    goto try_except_handler_17;
    outline_result_6:;
    tmp_assign_source_55 = tmp_outline_return_value_6;
    assert( tmp_class_creation_4__class_dict == NULL );
    tmp_class_creation_4__class_dict = tmp_assign_source_55;

    tmp_compare_left_6 = const_str_plain___metaclass__;
    tmp_compare_right_6 = tmp_class_creation_4__class_dict;

    CHECK_OBJECT( tmp_compare_right_6 );
    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
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
    tmp_assign_source_56 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto try_except_handler_17;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_subscribed_name_4 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_subscribed_name_4 );
    tmp_subscript_name_4 = const_int_0;
    tmp_assign_source_57 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto try_except_handler_17;
    }
    assert( tmp_select_metaclass_4__base == NULL );
    tmp_select_metaclass_4__base = tmp_assign_source_57;

    // Tried code:
    // Tried code:
    tmp_source_name_6 = tmp_select_metaclass_4__base;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_outline_return_value_7 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_6 );
    if ( tmp_outline_return_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto try_except_handler_20;
    }
    goto try_return_handler_19;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_20:;
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
    tmp_type_arg_3 = tmp_select_metaclass_4__base;

    CHECK_OBJECT( tmp_type_arg_3 );
    tmp_outline_return_value_7 = BUILTIN_TYPE1( tmp_type_arg_3 );
    assert( tmp_outline_return_value_7 != NULL );
    goto try_return_handler_19;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_19:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_4__base );
    Py_DECREF( tmp_select_metaclass_4__base );
    tmp_select_metaclass_4__base = NULL;

    goto outline_result_7;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_4__base );
    Py_DECREF( tmp_select_metaclass_4__base );
    tmp_select_metaclass_4__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    outline_result_7:;
    tmp_assign_source_56 = tmp_outline_return_value_7;
    condexpr_end_4:;
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_56;

    tmp_called_name_5 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_called_name_5 );
    tmp_args_element_name_12 = const_str_plain_HTTPConnection;
    tmp_args_element_name_13 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_args_element_name_13 );
    tmp_args_element_name_14 = tmp_class_creation_4__class_dict;

    CHECK_OBJECT( tmp_args_element_name_14 );
    frame_9d0ea5f4f81113907b4cc3172e52ad30->m_frame.f_lineno = 68;
    {
        PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14 };
        tmp_assign_source_58 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto try_except_handler_17;
    }
    assert( tmp_class_creation_4__class == NULL );
    tmp_class_creation_4__class = tmp_assign_source_58;

    goto try_end_10;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_dict );
    tmp_class_creation_4__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    tmp_assign_source_59 = tmp_class_creation_4__class;

    CHECK_OBJECT( tmp_assign_source_59 );
    UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPConnection, tmp_assign_source_59 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class );
    Py_DECREF( tmp_class_creation_4__class );
    tmp_class_creation_4__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__bases );
    Py_DECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_dict );
    Py_DECREF( tmp_class_creation_4__class_dict );
    tmp_class_creation_4__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__metaclass );
    Py_DECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    // Tried code:
    tmp_assign_source_60 = PyTuple_New( 1 );
    tmp_tuple_element_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPConnection );

    if (unlikely( tmp_tuple_element_6 == NULL ))
    {
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPConnection );
    }

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_60 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPConnection" );
        exception_tb = NULL;

        exception_lineno = 223;

        goto try_except_handler_21;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_assign_source_60, 0, tmp_tuple_element_6 );
    assert( tmp_class_creation_5__bases == NULL );
    tmp_class_creation_5__bases = tmp_assign_source_60;

    tmp_set_locals = PyDict_New();
    locals_HTTPSConnection_223 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_003800fb824e3437bbbf235acf31301c;
    tmp_res = PyDict_SetItem( locals_HTTPSConnection_223, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c2df862b7d3e8e84dda1ddf7cd1b3c51_3, codeobj_c2df862b7d3e8e84dda1ddf7cd1b3c51, module_urllib3$connection, 0 );
    frame_c2df862b7d3e8e84dda1ddf7cd1b3c51_3 = cache_frame_c2df862b7d3e8e84dda1ddf7cd1b3c51_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c2df862b7d3e8e84dda1ddf7cd1b3c51_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c2df862b7d3e8e84dda1ddf7cd1b3c51_3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_subscribed_name_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_port_by_scheme );

    if (unlikely( tmp_subscribed_name_5 == NULL ))
    {
        tmp_subscribed_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_port_by_scheme );
    }

    if ( tmp_subscribed_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "port_by_scheme" );
        exception_tb = NULL;

        exception_lineno = 224;

        goto frame_exception_exit_3;
    }

    tmp_subscript_name_5 = const_str_plain_https;
    tmp_dictset_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;

        goto frame_exception_exit_3;
    }
    tmp_res = PyDict_SetItem( locals_HTTPSConnection_223, const_str_plain_default_port, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;

        goto frame_exception_exit_3;
    }
    tmp_dictset_value = Py_None;
    tmp_res = PyDict_SetItem( locals_HTTPSConnection_223, const_str_plain_ssl_version, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_defaults_2 = PyTuple_New( 8 );
    tmp_tuple_element_7 = Py_None;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = Py_None;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_defaults_2, 1, tmp_tuple_element_7 );
    tmp_tuple_element_7 = Py_None;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_defaults_2, 2, tmp_tuple_element_7 );
    tmp_tuple_element_7 = Py_None;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_defaults_2, 3, tmp_tuple_element_7 );
    tmp_tuple_element_7 = Py_None;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_defaults_2, 4, tmp_tuple_element_7 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_defaults_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "socket" );
        exception_tb = NULL;

        exception_lineno = 236;

        goto frame_exception_exit_3;
    }

    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__GLOBAL_DEFAULT_TIMEOUT );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_2 );

        exception_lineno = 236;

        goto frame_exception_exit_3;
    }
    PyTuple_SET_ITEM( tmp_defaults_2, 5, tmp_tuple_element_7 );
    tmp_tuple_element_7 = Py_None;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_defaults_2, 6, tmp_tuple_element_7 );
    tmp_tuple_element_7 = Py_None;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_defaults_2, 7, tmp_tuple_element_7 );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$connection$$$function_8___init__( tmp_defaults_2 );
    tmp_res = PyDict_SetItem( locals_HTTPSConnection_223, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;

        goto frame_exception_exit_3;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c2df862b7d3e8e84dda1ddf7cd1b3c51_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c2df862b7d3e8e84dda1ddf7cd1b3c51_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c2df862b7d3e8e84dda1ddf7cd1b3c51_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c2df862b7d3e8e84dda1ddf7cd1b3c51_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c2df862b7d3e8e84dda1ddf7cd1b3c51_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c2df862b7d3e8e84dda1ddf7cd1b3c51_3,
        type_description_2
    );


    // Release cached frame.
    if ( frame_c2df862b7d3e8e84dda1ddf7cd1b3c51_3 == cache_frame_c2df862b7d3e8e84dda1ddf7cd1b3c51_3 )
    {
        Py_DECREF( frame_c2df862b7d3e8e84dda1ddf7cd1b3c51_3 );
    }
    cache_frame_c2df862b7d3e8e84dda1ddf7cd1b3c51_3 = NULL;

    assertFrameObject( frame_c2df862b7d3e8e84dda1ddf7cd1b3c51_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_22;
    skip_nested_handling_2:;
    tmp_dictset_value = MAKE_FUNCTION_urllib3$connection$$$function_9_connect(  );
    tmp_res = PyDict_SetItem( locals_HTTPSConnection_223, const_str_plain_connect, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_outline_return_value_8 = locals_HTTPSConnection_223;
    Py_INCREF( tmp_outline_return_value_8 );
    goto try_return_handler_22;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_22:;
    Py_DECREF( locals_HTTPSConnection_223 );
    locals_HTTPSConnection_223 = NULL;
    goto outline_result_8;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_HTTPSConnection_223 );
    locals_HTTPSConnection_223 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 223;
    goto try_except_handler_21;
    outline_result_8:;
    tmp_assign_source_61 = tmp_outline_return_value_8;
    assert( tmp_class_creation_5__class_dict == NULL );
    tmp_class_creation_5__class_dict = tmp_assign_source_61;

    tmp_compare_left_7 = const_str_plain___metaclass__;
    tmp_compare_right_7 = tmp_class_creation_5__class_dict;

    CHECK_OBJECT( tmp_compare_right_7 );
    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
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
    tmp_assign_source_62 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;

        goto try_except_handler_21;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_subscribed_name_6 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_subscribed_name_6 );
    tmp_subscript_name_6 = const_int_0;
    tmp_assign_source_63 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;

        goto try_except_handler_21;
    }
    assert( tmp_select_metaclass_5__base == NULL );
    tmp_select_metaclass_5__base = tmp_assign_source_63;

    // Tried code:
    // Tried code:
    tmp_source_name_8 = tmp_select_metaclass_5__base;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_outline_return_value_9 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_8 );
    if ( tmp_outline_return_value_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;

        goto try_except_handler_24;
    }
    goto try_return_handler_23;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_16 );
    Py_XDECREF( exception_keeper_value_16 );
    Py_XDECREF( exception_keeper_tb_16 );
    tmp_type_arg_4 = tmp_select_metaclass_5__base;

    CHECK_OBJECT( tmp_type_arg_4 );
    tmp_outline_return_value_9 = BUILTIN_TYPE1( tmp_type_arg_4 );
    assert( tmp_outline_return_value_9 != NULL );
    goto try_return_handler_23;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_23:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_5__base );
    Py_DECREF( tmp_select_metaclass_5__base );
    tmp_select_metaclass_5__base = NULL;

    goto outline_result_9;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_5__base );
    Py_DECREF( tmp_select_metaclass_5__base );
    tmp_select_metaclass_5__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    outline_result_9:;
    tmp_assign_source_62 = tmp_outline_return_value_9;
    condexpr_end_5:;
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_62;

    tmp_called_name_6 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_called_name_6 );
    tmp_args_element_name_15 = const_str_plain_HTTPSConnection;
    tmp_args_element_name_16 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_args_element_name_16 );
    tmp_args_element_name_17 = tmp_class_creation_5__class_dict;

    CHECK_OBJECT( tmp_args_element_name_17 );
    frame_9d0ea5f4f81113907b4cc3172e52ad30->m_frame.f_lineno = 223;
    {
        PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17 };
        tmp_assign_source_64 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
    }

    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;

        goto try_except_handler_21;
    }
    assert( tmp_class_creation_5__class == NULL );
    tmp_class_creation_5__class = tmp_assign_source_64;

    goto try_end_11;
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

    Py_XDECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_class_creation_5__class_dict );
    tmp_class_creation_5__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    tmp_assign_source_65 = tmp_class_creation_5__class;

    CHECK_OBJECT( tmp_assign_source_65 );
    UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPSConnection, tmp_assign_source_65 );
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
    tmp_assign_source_66 = PyTuple_New( 1 );
    tmp_tuple_element_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPSConnection );

    if (unlikely( tmp_tuple_element_8 == NULL ))
    {
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPSConnection );
    }

    if ( tmp_tuple_element_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_66 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPSConnection" );
        exception_tb = NULL;

        exception_lineno = 289;

        goto try_except_handler_25;
    }

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_assign_source_66, 0, tmp_tuple_element_8 );
    assert( tmp_class_creation_6__bases == NULL );
    tmp_class_creation_6__bases = tmp_assign_source_66;

    tmp_set_locals = PyDict_New();
    locals_VerifiedHTTPSConnection_289 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_003800fb824e3437bbbf235acf31301c;
    tmp_res = PyDict_SetItem( locals_VerifiedHTTPSConnection_289, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_fa24e620292c5ddd664b0f39ae7cf5ea;
    tmp_res = PyDict_SetItem( locals_VerifiedHTTPSConnection_289, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = Py_None;
    tmp_res = PyDict_SetItem( locals_VerifiedHTTPSConnection_289, const_str_plain_cert_reqs, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = Py_None;
    tmp_res = PyDict_SetItem( locals_VerifiedHTTPSConnection_289, const_str_plain_ca_certs, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = Py_None;
    tmp_res = PyDict_SetItem( locals_VerifiedHTTPSConnection_289, const_str_plain_ca_cert_dir, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = Py_None;
    tmp_res = PyDict_SetItem( locals_VerifiedHTTPSConnection_289, const_str_plain_ssl_version, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = Py_None;
    tmp_res = PyDict_SetItem( locals_VerifiedHTTPSConnection_289, const_str_plain_assert_fingerprint, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_defaults_3 = const_tuple_none_none_none_none_none_none_none_none_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$connection$$$function_10_set_cert( tmp_defaults_3 );
    tmp_res = PyDict_SetItem( locals_VerifiedHTTPSConnection_289, const_str_plain_set_cert, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$connection$$$function_11_connect(  );
    tmp_res = PyDict_SetItem( locals_VerifiedHTTPSConnection_289, const_str_plain_connect, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_10 = locals_VerifiedHTTPSConnection_289;
    Py_INCREF( tmp_outline_return_value_10 );
    goto try_return_handler_26;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_26:;
    Py_DECREF( locals_VerifiedHTTPSConnection_289 );
    locals_VerifiedHTTPSConnection_289 = NULL;
    goto outline_result_10;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    outline_result_10:;
    tmp_assign_source_67 = tmp_outline_return_value_10;
    assert( tmp_class_creation_6__class_dict == NULL );
    tmp_class_creation_6__class_dict = tmp_assign_source_67;

    tmp_compare_left_8 = const_str_plain___metaclass__;
    tmp_compare_right_8 = tmp_class_creation_6__class_dict;

    CHECK_OBJECT( tmp_compare_right_8 );
    tmp_cmp_In_6 = PySequence_Contains( tmp_compare_right_8, tmp_compare_left_8 );
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
    tmp_assign_source_68 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_assign_source_68 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 289;

        goto try_except_handler_25;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_subscribed_name_7 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_subscribed_name_7 );
    tmp_subscript_name_7 = const_int_0;
    tmp_assign_source_69 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    if ( tmp_assign_source_69 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 289;

        goto try_except_handler_25;
    }
    assert( tmp_select_metaclass_6__base == NULL );
    tmp_select_metaclass_6__base = tmp_assign_source_69;

    // Tried code:
    // Tried code:
    tmp_source_name_9 = tmp_select_metaclass_6__base;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_outline_return_value_11 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_9 );
    if ( tmp_outline_return_value_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 289;

        goto try_except_handler_28;
    }
    goto try_return_handler_27;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_18 );
    Py_XDECREF( exception_keeper_value_18 );
    Py_XDECREF( exception_keeper_tb_18 );
    tmp_type_arg_5 = tmp_select_metaclass_6__base;

    CHECK_OBJECT( tmp_type_arg_5 );
    tmp_outline_return_value_11 = BUILTIN_TYPE1( tmp_type_arg_5 );
    assert( tmp_outline_return_value_11 != NULL );
    goto try_return_handler_27;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_27:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_6__base );
    Py_DECREF( tmp_select_metaclass_6__base );
    tmp_select_metaclass_6__base = NULL;

    goto outline_result_11;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_6__base );
    Py_DECREF( tmp_select_metaclass_6__base );
    tmp_select_metaclass_6__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    outline_result_11:;
    tmp_assign_source_68 = tmp_outline_return_value_11;
    condexpr_end_6:;
    assert( tmp_class_creation_6__metaclass == NULL );
    tmp_class_creation_6__metaclass = tmp_assign_source_68;

    tmp_called_name_7 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_called_name_7 );
    tmp_args_element_name_18 = const_str_plain_VerifiedHTTPSConnection;
    tmp_args_element_name_19 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_args_element_name_19 );
    tmp_args_element_name_20 = tmp_class_creation_6__class_dict;

    CHECK_OBJECT( tmp_args_element_name_20 );
    frame_9d0ea5f4f81113907b4cc3172e52ad30->m_frame.f_lineno = 289;
    {
        PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20 };
        tmp_assign_source_70 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
    }

    if ( tmp_assign_source_70 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 289;

        goto try_except_handler_25;
    }
    assert( tmp_class_creation_6__class == NULL );
    tmp_class_creation_6__class = tmp_assign_source_70;

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

    Py_XDECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_class_creation_6__class_dict );
    tmp_class_creation_6__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    tmp_assign_source_71 = tmp_class_creation_6__class;

    CHECK_OBJECT( tmp_assign_source_71 );
    UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_VerifiedHTTPSConnection, tmp_assign_source_71 );
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

    tmp_assign_source_72 = MAKE_FUNCTION_urllib3$connection$$$function_12__match_hostname(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain__match_hostname, tmp_assign_source_72 );
    tmp_cond_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ssl );

    if (unlikely( tmp_cond_value_1 == NULL ))
    {
        tmp_cond_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
    }

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ssl" );
        exception_tb = NULL;

        exception_lineno = 443;

        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 443;

        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_73 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPSConnection );

    if (unlikely( tmp_assign_source_73 == NULL ))
    {
        tmp_assign_source_73 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPSConnection );
    }

    if ( tmp_assign_source_73 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPSConnection" );
        exception_tb = NULL;

        exception_lineno = 445;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_UnverifiedHTTPSConnection, tmp_assign_source_73 );
    tmp_assign_source_74 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_VerifiedHTTPSConnection );

    if (unlikely( tmp_assign_source_74 == NULL ))
    {
        tmp_assign_source_74 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VerifiedHTTPSConnection );
    }

    if ( tmp_assign_source_74 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "VerifiedHTTPSConnection" );
        exception_tb = NULL;

        exception_lineno = 446;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPSConnection, tmp_assign_source_74 );
    goto branch_end_3;
    branch_no_3:;
    tmp_assign_source_75 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_DummyConnection );

    if (unlikely( tmp_assign_source_75 == NULL ))
    {
        tmp_assign_source_75 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DummyConnection );
    }

    if ( tmp_assign_source_75 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "DummyConnection" );
        exception_tb = NULL;

        exception_lineno = 448;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPSConnection, tmp_assign_source_75 );
    branch_end_3:;

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_9d0ea5f4f81113907b4cc3172e52ad30 );
#endif
    popFrameStack();

    assertFrameObject( frame_9d0ea5f4f81113907b4cc3172e52ad30 );

    goto frame_no_exception_3;
    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_9d0ea5f4f81113907b4cc3172e52ad30 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9d0ea5f4f81113907b4cc3172e52ad30, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9d0ea5f4f81113907b4cc3172e52ad30->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9d0ea5f4f81113907b4cc3172e52ad30, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_3:;

    return MOD_RETURN_VALUE( module_urllib3$connection );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
