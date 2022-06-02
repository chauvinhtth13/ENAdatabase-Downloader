/* Generated code for Python source for module 'urllib3.util.retry'
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

/* The _module_urllib3$util$retry is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$util$retry;
PyDictObject *moduledict_urllib3$util$retry;

/* The module constants used, if any. */
static PyObject *const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple;
static PyObject *const_str_plain_backoff_value;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_tuple_type_object_tuple;
static PyObject *const_str_digest_9db0c4e907a20455d898e46f602427d6;
extern PyObject *const_str_plain_ConnectTimeoutError;
extern PyObject *const_str_plain_Retry;
extern PyObject *const_str_plain_InvalidHeader;
static PyObject *const_str_plain_retry_after;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_GENERIC_ERROR;
extern PyObject *const_str_plain_cls;
static PyObject *const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple;
static PyObject *const_str_plain_parsedate;
extern PyObject *const_str_plain_SPECIFIC_ERROR;
extern PyObject *const_str_plain_get_redirect_location;
static PyObject *const_str_plain_cause;
static PyObject *const_str_digest_3d8456b692ba12d694b1345117db0cc2;
extern PyObject *const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd;
static PyObject *const_tuple_bc17066e627dae9bde3aa710dab0fecf_tuple;
static PyObject *const_str_plain_backoff_factor;
extern PyObject *const_str_plain_read;
extern PyObject *const_str_plain___repr__;
static PyObject *const_str_digest_52dc615064dbc739578d7b66bd4357d4;
extern PyObject *const_str_plain_ResponseError;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_RequestHistory;
static PyObject *const_frozenset_faddbefdbc5f932eb173a00af9a27af9;
static PyObject *const_str_digest_d43b7afa583ad163d56ae0bbfdcdb575;
extern PyObject *const_str_plain_debug;
static PyObject *const_str_digest_adf0407d4b5f2535bca90601d487b350;
static PyObject *const_str_plain__is_read_error;
static PyObject *const_str_plain_new_retry;
extern PyObject *const_str_plain_re;
static PyObject *const_str_plain_get_backoff_time;
extern PyObject *const_str_plain_raise_on_status;
static PyObject *const_str_plain_retry_date_tuple;
extern PyObject *const_str_plain_from_int;
extern PyObject *const_str_plain__stacktrace;
extern PyObject *const_str_plain_method;
extern PyObject *const_int_pos_120;
extern PyObject *const_str_plain_email;
extern PyObject *const_str_plain_PUT;
extern PyObject *const_str_plain_itertools;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_plain_upper;
static PyObject *const_str_plain_RETRY_AFTER_STATUS_CODES;
extern PyObject *const_int_pos_10;
static PyObject *const_tuple_1de5649d3881ba16da011d3ba77ccb73_tuple;
static PyObject *const_str_digest_541aafc09da4591a658272cb389856a5;
extern PyObject *const_str_plain_err;
extern PyObject *const_str_plain_error;
static PyObject *const_str_plain_new_retries;
extern PyObject *const_tuple_str_plain_x_tuple;
extern PyObject *const_str_plain__pool;
extern PyObject *const_str_plain_is_retry;
static PyObject *const_str_plain_has_retry_after;
static PyObject *const_str_plain_retry_date;
static PyObject *const_str_digest_02862dad88b03d79d6c3df8ba5e79ff6;
extern PyObject *const_str_plain_DEFAULT;
extern PyObject *const_tuple_none_none_none_none_none_none_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_backoff;
extern PyObject *const_str_plain_MaxRetryError;
extern PyObject *const_str_plain_Authorization;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_update;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_raise_on_redirect;
extern PyObject *const_tuple_str_digest_53eb1bcf3283c3fcccb95b51de02ce94_tuple;
extern PyObject *const_str_plain_getheader;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain_status_code;
extern PyObject *const_str_plain_seconds;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_digest_c2155b49a66aad63fc0d89ad0f0f495b;
static PyObject *const_str_plain_mktime;
static PyObject *const_frozenset_1a0f32928f8873f1725a0613d7667aec;
static PyObject *const_str_digest_3ff146bf2cbf06e10d34294d9109668e;
static PyObject *const_str_digest_7fb2c7a5424e28db1a201939b12c8399;
static PyObject *const_tuple_80578890cd3d11905b4f16ab6b1fdff8_tuple;
static PyObject *const_str_digest_fc514c378d42c4c0744f71a520936e98;
static PyObject *const_tuple_str_plain_self_str_plain_err_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_retry_counts_tuple;
static PyObject *const_str_plain_slept;
static PyObject *const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_method_tuple;
extern PyObject *const_str_plain_utils;
extern PyObject *const_str_plain_retries;
extern PyObject *const_str_plain_increment;
extern PyObject *const_str_plain_params;
extern PyObject *const_str_plain_new;
extern PyObject *const_str_plain_total;
static PyObject *const_tuple_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd_tuple;
extern PyObject *const_str_plain_OPTIONS;
static PyObject *const_str_digest_25ded409e041cb7d54dbe844ec9f890e;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_time;
extern PyObject *const_str_plain_url;
extern PyObject *const_str_plain_self;
static PyObject *const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple;
static PyObject *const_tuple_d89ea0d58dee45bf496acb8235cc5908_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple;
static PyObject *const_int_pos_429;
static PyObject *const_str_plain_retry_counts;
extern PyObject *const_str_plain_redirect;
extern PyObject *const_str_plain_connect;
static PyObject *const_str_plain_get_retry_after;
extern PyObject *const_str_plain_sleep;
static PyObject *const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple;
extern PyObject *const_str_plain_collections;
static PyObject *const_tuple_str_plain_takewhile_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_backoff_tuple;
extern PyObject *const_str_plain_redirect_location;
static PyObject *const_str_digest_61e2520c56b660178d4348ecd9080d8c;
static PyObject *const_str_plain__is_connection_error;
static PyObject *const_str_plain_respect_retry_after_header;
static PyObject *const_str_plain_status_count;
extern PyObject *const_str_plain_h;
extern PyObject *const_str_plain_GET;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_str_plain_status;
static PyObject *const_str_plain_unknown;
extern PyObject *const_str_plain_remove_headers_on_redirect;
extern PyObject *const_str_plain_ReadTimeoutError;
extern PyObject *const_str_plain_x;
static PyObject *const_tuple_true_none_tuple;
extern PyObject *const_str_plain_match;
extern PyObject *const_str_plain_log;
static PyObject *const_str_digest_55857326d6523e3f76c12c271f391764;
extern PyObject *const_str_digest_53eb1bcf3283c3fcccb95b51de02ce94;
extern PyObject *const_tuple_str_plain_namedtuple_tuple;
extern PyObject *const_tuple_int_pos_3_tuple;
extern PyObject *const_str_plain_logging;
static PyObject *const_str_plain_BACKOFF_MAX;
extern PyObject *const_str_plain_HEAD;
static PyObject *const_str_digest_be3c2e7a479fa0076df719ca5a930f72;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_plain_takewhile;
static PyObject *const_str_plain_DEFAULT_REDIRECT_HEADERS_BLACKLIST;
static PyObject *const_frozenset_231df93ff344aab3fe166a4d2164e861;
static PyObject *const_str_plain_method_whitelist;
extern PyObject *const_str_plain_exceptions;
extern PyObject *const_str_plain_packages;
static PyObject *const_str_plain_consecutive_errors_len;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_ProtocolError;
extern PyObject *const_str_plain_DELETE;
extern PyObject *const_str_plain_six;
static PyObject *const_str_plain_parse_retry_after;
extern PyObject *const_tuple_str_plain_six_tuple;
static PyObject *const_str_plain_is_exhausted;
extern PyObject *const_str_plain_sleep_for_retry;
static PyObject *const_int_pos_503;
static PyObject *const_str_plain_status_forcelist;
extern PyObject *const_str_plain_namedtuple;
static PyObject *const_str_digest_ed2c0b12f2250d745518387535c4958e;
extern PyObject *const_str_plain___init__;
static PyObject *const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list;
static PyObject *const_str_plain__sleep_backoff;
extern PyObject *const_str_plain_history;
extern PyObject *const_str_plain_reraise;
static PyObject *const_str_digest_54874c179a81b955e41d4fd1580cddd0;
static PyObject *const_str_digest_93b5718dbdad50e34931a5c649b12b14;
extern PyObject *const_str_plain_filter;
extern PyObject *const_str_plain_kw;
extern PyObject *const_str_plain_default;
static PyObject *const_str_plain__is_method_retryable;
extern PyObject *const_str_plain_response;
static PyObject *const_str_digest_cfc303935f94cd9bd4759913289d5001;
extern PyObject *const_tuple_false_tuple;
static PyObject *const_str_plain_DEFAULT_METHOD_WHITELIST;
static PyObject *const_int_pos_413;
static PyObject *const_str_plain_TRACE;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_angle_lambda;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple, 1, const_str_plain_retries ); Py_INCREF( const_str_plain_retries );
    PyTuple_SET_ITEM( const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple, 2, const_str_plain_redirect ); Py_INCREF( const_str_plain_redirect );
    PyTuple_SET_ITEM( const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple, 3, const_str_plain_default ); Py_INCREF( const_str_plain_default );
    const_str_plain_new_retries = UNSTREAM_STRING( &constant_bin[ 1084798 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple, 4, const_str_plain_new_retries ); Py_INCREF( const_str_plain_new_retries );
    const_str_plain_backoff_value = UNSTREAM_STRING( &constant_bin[ 1084809 ], 13, 1 );
    const_str_digest_9db0c4e907a20455d898e46f602427d6 = UNSTREAM_STRING( &constant_bin[ 1084822 ], 42, 0 );
    const_str_plain_retry_after = UNSTREAM_STRING( &constant_bin[ 1039089 ], 11, 1 );
    const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple, 1, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple, 2, const_str_plain_retry_after ); Py_INCREF( const_str_plain_retry_after );
    const_str_plain_parsedate = UNSTREAM_STRING( &constant_bin[ 1084864 ], 9, 1 );
    const_str_plain_cause = UNSTREAM_STRING( &constant_bin[ 32543 ], 5, 1 );
    const_str_digest_3d8456b692ba12d694b1345117db0cc2 = UNSTREAM_STRING( &constant_bin[ 1084873 ], 27, 0 );
    const_tuple_bc17066e627dae9bde3aa710dab0fecf_tuple = PyTuple_New( 17 );
    PyTuple_SET_ITEM( const_tuple_bc17066e627dae9bde3aa710dab0fecf_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_bc17066e627dae9bde3aa710dab0fecf_tuple, 1, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_bc17066e627dae9bde3aa710dab0fecf_tuple, 2, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_bc17066e627dae9bde3aa710dab0fecf_tuple, 3, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    PyTuple_SET_ITEM( const_tuple_bc17066e627dae9bde3aa710dab0fecf_tuple, 4, const_str_plain_error ); Py_INCREF( const_str_plain_error );
    PyTuple_SET_ITEM( const_tuple_bc17066e627dae9bde3aa710dab0fecf_tuple, 5, const_str_plain__pool ); Py_INCREF( const_str_plain__pool );
    PyTuple_SET_ITEM( const_tuple_bc17066e627dae9bde3aa710dab0fecf_tuple, 6, const_str_plain__stacktrace ); Py_INCREF( const_str_plain__stacktrace );
    PyTuple_SET_ITEM( const_tuple_bc17066e627dae9bde3aa710dab0fecf_tuple, 7, const_str_plain_redirect ); Py_INCREF( const_str_plain_redirect );
    PyTuple_SET_ITEM( const_tuple_bc17066e627dae9bde3aa710dab0fecf_tuple, 8, const_str_plain_status ); Py_INCREF( const_str_plain_status );
    const_str_plain_new_retry = UNSTREAM_STRING( &constant_bin[ 1084900 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_bc17066e627dae9bde3aa710dab0fecf_tuple, 9, const_str_plain_new_retry ); Py_INCREF( const_str_plain_new_retry );
    PyTuple_SET_ITEM( const_tuple_bc17066e627dae9bde3aa710dab0fecf_tuple, 10, const_str_plain_read ); Py_INCREF( const_str_plain_read );
    PyTuple_SET_ITEM( const_tuple_bc17066e627dae9bde3aa710dab0fecf_tuple, 11, const_str_plain_redirect_location ); Py_INCREF( const_str_plain_redirect_location );
    PyTuple_SET_ITEM( const_tuple_bc17066e627dae9bde3aa710dab0fecf_tuple, 12, const_str_plain_connect ); Py_INCREF( const_str_plain_connect );
    const_str_plain_status_count = UNSTREAM_STRING( &constant_bin[ 1084909 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_bc17066e627dae9bde3aa710dab0fecf_tuple, 13, const_str_plain_status_count ); Py_INCREF( const_str_plain_status_count );
    PyTuple_SET_ITEM( const_tuple_bc17066e627dae9bde3aa710dab0fecf_tuple, 14, const_str_plain_total ); Py_INCREF( const_str_plain_total );
    PyTuple_SET_ITEM( const_tuple_bc17066e627dae9bde3aa710dab0fecf_tuple, 15, const_str_plain_cause ); Py_INCREF( const_str_plain_cause );
    PyTuple_SET_ITEM( const_tuple_bc17066e627dae9bde3aa710dab0fecf_tuple, 16, const_str_plain_history ); Py_INCREF( const_str_plain_history );
    const_str_plain_backoff_factor = UNSTREAM_STRING( &constant_bin[ 1084921 ], 14, 1 );
    const_str_digest_52dc615064dbc739578d7b66bd4357d4 = UNSTREAM_STRING( &constant_bin[ 1084935 ], 30, 0 );
    const_str_plain_RequestHistory = UNSTREAM_STRING( &constant_bin[ 1084965 ], 14, 1 );
    const_frozenset_faddbefdbc5f932eb173a00af9a27af9 = PyFrozenSet_New( NULL );
    const_int_pos_503 = PyInt_FromLong( 503l );
    PySet_Add( const_frozenset_faddbefdbc5f932eb173a00af9a27af9, const_int_pos_503 );
    const_int_pos_413 = PyInt_FromLong( 413l );
    PySet_Add( const_frozenset_faddbefdbc5f932eb173a00af9a27af9, const_int_pos_413 );
    const_int_pos_429 = PyInt_FromLong( 429l );
    PySet_Add( const_frozenset_faddbefdbc5f932eb173a00af9a27af9, const_int_pos_429 );
    assert( PySet_Size( const_frozenset_faddbefdbc5f932eb173a00af9a27af9 ) == 3 );
    const_str_digest_d43b7afa583ad163d56ae0bbfdcdb575 = UNSTREAM_STRING( &constant_bin[ 1084979 ], 14, 0 );
    const_str_digest_adf0407d4b5f2535bca90601d487b350 = UNSTREAM_STRING( &constant_bin[ 1084993 ], 36, 0 );
    const_str_plain__is_read_error = UNSTREAM_STRING( &constant_bin[ 1085029 ], 14, 1 );
    const_str_plain_get_backoff_time = UNSTREAM_STRING( &constant_bin[ 1085043 ], 16, 1 );
    const_str_plain_retry_date_tuple = UNSTREAM_STRING( &constant_bin[ 1085059 ], 16, 1 );
    const_str_plain_RETRY_AFTER_STATUS_CODES = UNSTREAM_STRING( &constant_bin[ 1085075 ], 24, 1 );
    const_tuple_1de5649d3881ba16da011d3ba77ccb73_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_1de5649d3881ba16da011d3ba77ccb73_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_1de5649d3881ba16da011d3ba77ccb73_tuple, 1, const_str_plain_total ); Py_INCREF( const_str_plain_total );
    PyTuple_SET_ITEM( const_tuple_1de5649d3881ba16da011d3ba77ccb73_tuple, 2, const_str_plain_connect ); Py_INCREF( const_str_plain_connect );
    PyTuple_SET_ITEM( const_tuple_1de5649d3881ba16da011d3ba77ccb73_tuple, 3, const_str_plain_read ); Py_INCREF( const_str_plain_read );
    PyTuple_SET_ITEM( const_tuple_1de5649d3881ba16da011d3ba77ccb73_tuple, 4, const_str_plain_redirect ); Py_INCREF( const_str_plain_redirect );
    PyTuple_SET_ITEM( const_tuple_1de5649d3881ba16da011d3ba77ccb73_tuple, 5, const_str_plain_status ); Py_INCREF( const_str_plain_status );
    const_str_plain_method_whitelist = UNSTREAM_STRING( &constant_bin[ 1085099 ], 16, 1 );
    PyTuple_SET_ITEM( const_tuple_1de5649d3881ba16da011d3ba77ccb73_tuple, 6, const_str_plain_method_whitelist ); Py_INCREF( const_str_plain_method_whitelist );
    const_str_plain_status_forcelist = UNSTREAM_STRING( &constant_bin[ 1085115 ], 16, 1 );
    PyTuple_SET_ITEM( const_tuple_1de5649d3881ba16da011d3ba77ccb73_tuple, 7, const_str_plain_status_forcelist ); Py_INCREF( const_str_plain_status_forcelist );
    PyTuple_SET_ITEM( const_tuple_1de5649d3881ba16da011d3ba77ccb73_tuple, 8, const_str_plain_backoff_factor ); Py_INCREF( const_str_plain_backoff_factor );
    PyTuple_SET_ITEM( const_tuple_1de5649d3881ba16da011d3ba77ccb73_tuple, 9, const_str_plain_raise_on_redirect ); Py_INCREF( const_str_plain_raise_on_redirect );
    PyTuple_SET_ITEM( const_tuple_1de5649d3881ba16da011d3ba77ccb73_tuple, 10, const_str_plain_raise_on_status ); Py_INCREF( const_str_plain_raise_on_status );
    PyTuple_SET_ITEM( const_tuple_1de5649d3881ba16da011d3ba77ccb73_tuple, 11, const_str_plain_history ); Py_INCREF( const_str_plain_history );
    const_str_plain_respect_retry_after_header = UNSTREAM_STRING( &constant_bin[ 1085131 ], 26, 1 );
    PyTuple_SET_ITEM( const_tuple_1de5649d3881ba16da011d3ba77ccb73_tuple, 12, const_str_plain_respect_retry_after_header ); Py_INCREF( const_str_plain_respect_retry_after_header );
    PyTuple_SET_ITEM( const_tuple_1de5649d3881ba16da011d3ba77ccb73_tuple, 13, const_str_plain_remove_headers_on_redirect ); Py_INCREF( const_str_plain_remove_headers_on_redirect );
    PyTuple_SET_ITEM( const_tuple_1de5649d3881ba16da011d3ba77ccb73_tuple, 14, const_str_plain_h ); Py_INCREF( const_str_plain_h );
    const_str_digest_541aafc09da4591a658272cb389856a5 = UNSTREAM_STRING( &constant_bin[ 1085157 ], 124, 0 );
    const_str_plain_has_retry_after = UNSTREAM_STRING( &constant_bin[ 1039085 ], 15, 1 );
    const_str_plain_retry_date = UNSTREAM_STRING( &constant_bin[ 1085059 ], 10, 1 );
    const_str_digest_02862dad88b03d79d6c3df8ba5e79ff6 = UNSTREAM_STRING( &constant_bin[ 1085281 ], 24, 0 );
    const_str_plain_backoff = UNSTREAM_STRING( &constant_bin[ 1084809 ], 7, 1 );
    const_str_digest_c2155b49a66aad63fc0d89ad0f0f495b = UNSTREAM_STRING( &constant_bin[ 1085305 ], 21, 0 );
    const_str_plain_mktime = UNSTREAM_STRING( &constant_bin[ 1085326 ], 6, 1 );
    const_frozenset_1a0f32928f8873f1725a0613d7667aec = PyFrozenSet_New( NULL );
    PySet_Add( const_frozenset_1a0f32928f8873f1725a0613d7667aec, const_str_plain_HEAD );
    const_str_plain_TRACE = UNSTREAM_STRING( &constant_bin[ 1085332 ], 5, 1 );
    PySet_Add( const_frozenset_1a0f32928f8873f1725a0613d7667aec, const_str_plain_TRACE );
    PySet_Add( const_frozenset_1a0f32928f8873f1725a0613d7667aec, const_str_plain_GET );
    PySet_Add( const_frozenset_1a0f32928f8873f1725a0613d7667aec, const_str_plain_PUT );
    PySet_Add( const_frozenset_1a0f32928f8873f1725a0613d7667aec, const_str_plain_OPTIONS );
    PySet_Add( const_frozenset_1a0f32928f8873f1725a0613d7667aec, const_str_plain_DELETE );
    assert( PySet_Size( const_frozenset_1a0f32928f8873f1725a0613d7667aec ) == 6 );
    const_str_digest_3ff146bf2cbf06e10d34294d9109668e = UNSTREAM_STRING( &constant_bin[ 1085337 ], 33, 0 );
    const_str_digest_7fb2c7a5424e28db1a201939b12c8399 = UNSTREAM_STRING( &constant_bin[ 1085370 ], 123, 0 );
    const_tuple_80578890cd3d11905b4f16ab6b1fdff8_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_80578890cd3d11905b4f16ab6b1fdff8_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_80578890cd3d11905b4f16ab6b1fdff8_tuple, 1, const_str_plain_backoff_value ); Py_INCREF( const_str_plain_backoff_value );
    const_str_plain_consecutive_errors_len = UNSTREAM_STRING( &constant_bin[ 1085493 ], 22, 1 );
    PyTuple_SET_ITEM( const_tuple_80578890cd3d11905b4f16ab6b1fdff8_tuple, 2, const_str_plain_consecutive_errors_len ); Py_INCREF( const_str_plain_consecutive_errors_len );
    const_str_digest_fc514c378d42c4c0744f71a520936e98 = UNSTREAM_STRING( &constant_bin[ 1085515 ], 74, 0 );
    const_tuple_str_plain_self_str_plain_err_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_err_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_err_tuple, 1, const_str_plain_err ); Py_INCREF( const_str_plain_err );
    const_tuple_str_plain_self_str_plain_retry_counts_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_retry_counts_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_retry_counts = UNSTREAM_STRING( &constant_bin[ 1085589 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_retry_counts_tuple, 1, const_str_plain_retry_counts ); Py_INCREF( const_str_plain_retry_counts );
    const_str_plain_slept = UNSTREAM_STRING( &constant_bin[ 1085601 ], 5, 1 );
    const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple, 1, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple, 2, const_str_plain_status_code ); Py_INCREF( const_str_plain_status_code );
    PyTuple_SET_ITEM( const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple, 3, const_str_plain_has_retry_after ); Py_INCREF( const_str_plain_has_retry_after );
    const_tuple_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd_tuple, 0, const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd ); Py_INCREF( const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd );
    const_str_digest_25ded409e041cb7d54dbe844ec9f890e = UNSTREAM_STRING( &constant_bin[ 1085606 ], 376, 0 );
    const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple, 0, const_str_plain_ConnectTimeoutError ); Py_INCREF( const_str_plain_ConnectTimeoutError );
    PyTuple_SET_ITEM( const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple, 1, const_str_plain_MaxRetryError ); Py_INCREF( const_str_plain_MaxRetryError );
    PyTuple_SET_ITEM( const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple, 2, const_str_plain_ProtocolError ); Py_INCREF( const_str_plain_ProtocolError );
    PyTuple_SET_ITEM( const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple, 3, const_str_plain_ReadTimeoutError ); Py_INCREF( const_str_plain_ReadTimeoutError );
    PyTuple_SET_ITEM( const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple, 4, const_str_plain_ResponseError ); Py_INCREF( const_str_plain_ResponseError );
    PyTuple_SET_ITEM( const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple, 5, const_str_plain_InvalidHeader ); Py_INCREF( const_str_plain_InvalidHeader );
    const_tuple_d89ea0d58dee45bf496acb8235cc5908_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_d89ea0d58dee45bf496acb8235cc5908_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_d89ea0d58dee45bf496acb8235cc5908_tuple, 1, const_str_plain_retry_after ); Py_INCREF( const_str_plain_retry_after );
    PyTuple_SET_ITEM( const_tuple_d89ea0d58dee45bf496acb8235cc5908_tuple, 2, const_str_plain_seconds ); Py_INCREF( const_str_plain_seconds );
    PyTuple_SET_ITEM( const_tuple_d89ea0d58dee45bf496acb8235cc5908_tuple, 3, const_str_plain_retry_date ); Py_INCREF( const_str_plain_retry_date );
    PyTuple_SET_ITEM( const_tuple_d89ea0d58dee45bf496acb8235cc5908_tuple, 4, const_str_plain_retry_date_tuple ); Py_INCREF( const_str_plain_retry_date_tuple );
    const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple, 1, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple, 2, const_str_plain_slept ); Py_INCREF( const_str_plain_slept );
    const_str_plain_get_retry_after = UNSTREAM_STRING( &constant_bin[ 1085982 ], 15, 1 );
    const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple, 1, const_str_plain_kw ); Py_INCREF( const_str_plain_kw );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple, 2, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    const_tuple_str_plain_takewhile_tuple = PyTuple_New( 1 );
    const_str_plain_takewhile = UNSTREAM_STRING( &constant_bin[ 1085997 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_takewhile_tuple, 0, const_str_plain_takewhile ); Py_INCREF( const_str_plain_takewhile );
    const_tuple_str_plain_self_str_plain_backoff_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_backoff_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_backoff_tuple, 1, const_str_plain_backoff ); Py_INCREF( const_str_plain_backoff );
    const_str_digest_61e2520c56b660178d4348ecd9080d8c = UNSTREAM_STRING( &constant_bin[ 1086006 ], 4659, 0 );
    const_str_plain__is_connection_error = UNSTREAM_STRING( &constant_bin[ 1090665 ], 20, 1 );
    const_str_plain_unknown = UNSTREAM_STRING( &constant_bin[ 18439 ], 7, 1 );
    const_tuple_true_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_true_none_tuple, 0, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_true_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_digest_55857326d6523e3f76c12c271f391764 = UNSTREAM_STRING( &constant_bin[ 1090685 ], 417, 0 );
    const_str_plain_BACKOFF_MAX = UNSTREAM_STRING( &constant_bin[ 1089551 ], 11, 1 );
    const_str_digest_be3c2e7a479fa0076df719ca5a930f72 = UNSTREAM_STRING( &constant_bin[ 1091102 ], 128, 0 );
    const_str_plain_DEFAULT_REDIRECT_HEADERS_BLACKLIST = UNSTREAM_STRING( &constant_bin[ 1091230 ], 34, 1 );
    const_frozenset_231df93ff344aab3fe166a4d2164e861 = PyFrozenSet_New( NULL );
    PySet_Add( const_frozenset_231df93ff344aab3fe166a4d2164e861, const_str_plain_Authorization );
    assert( PySet_Size( const_frozenset_231df93ff344aab3fe166a4d2164e861 ) == 1 );
    const_str_plain_parse_retry_after = UNSTREAM_STRING( &constant_bin[ 1091264 ], 17, 1 );
    const_str_plain_is_exhausted = UNSTREAM_STRING( &constant_bin[ 1091281 ], 12, 1 );
    const_str_digest_ed2c0b12f2250d745518387535c4958e = UNSTREAM_STRING( &constant_bin[ 1091293 ], 323, 0 );
    const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list = PyList_New( 5 );
    PyList_SET_ITEM( const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list, 0, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyList_SET_ITEM( const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list, 1, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyList_SET_ITEM( const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list, 2, const_str_plain_error ); Py_INCREF( const_str_plain_error );
    PyList_SET_ITEM( const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list, 3, const_str_plain_status ); Py_INCREF( const_str_plain_status );
    PyList_SET_ITEM( const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list, 4, const_str_plain_redirect_location ); Py_INCREF( const_str_plain_redirect_location );
    const_str_plain__sleep_backoff = UNSTREAM_STRING( &constant_bin[ 1091616 ], 14, 1 );
    const_str_digest_54874c179a81b955e41d4fd1580cddd0 = UNSTREAM_STRING( &constant_bin[ 1091630 ], 52, 0 );
    const_str_digest_93b5718dbdad50e34931a5c649b12b14 = UNSTREAM_STRING( &constant_bin[ 1091682 ], 18, 0 );
    const_str_plain__is_method_retryable = UNSTREAM_STRING( &constant_bin[ 1091700 ], 20, 1 );
    const_str_digest_cfc303935f94cd9bd4759913289d5001 = UNSTREAM_STRING( &constant_bin[ 1091720 ], 124, 0 );
    const_str_plain_DEFAULT_METHOD_WHITELIST = UNSTREAM_STRING( &constant_bin[ 1088685 ], 24, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$util$retry( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_294ad7f55665ac659eb2bef0f65c6a8b;
static PyCodeObject *codeobj_18423b4a4fc7edfe29af4ebd1505456a;
static PyCodeObject *codeobj_b32bebd9e7a464ebcb5245aa0ec564c8;
static PyCodeObject *codeobj_7e34eade0be174bb2e5653c6ede7f96b;
static PyCodeObject *codeobj_f643665557390489191f36518cc053ae;
static PyCodeObject *codeobj_86c1f4c46122c48f7dc102e991f06ee4;
static PyCodeObject *codeobj_1985cb0e4460226e1d6e50538c5c789c;
static PyCodeObject *codeobj_e3d3264e4852b9ff6312a484aeb14a34;
static PyCodeObject *codeobj_5e4d1287ab116fc1e31653164aebc650;
static PyCodeObject *codeobj_9d3b0a23108e65e56258ca582838dde3;
static PyCodeObject *codeobj_c1d1bfbcac640d98cac8d0f6a2d1d675;
static PyCodeObject *codeobj_942d938520f532c57cb2fbf54f07cb37;
static PyCodeObject *codeobj_7bcb743f023f7206f81d79fe3b6948a5;
static PyCodeObject *codeobj_295cb65ffa295e5fda72c0f806f15990;
static PyCodeObject *codeobj_a0b5630f592dabaf40d43b29ec5e41b9;
static PyCodeObject *codeobj_c03bd9bb95ed6edf0cf936e76b585027;
static PyCodeObject *codeobj_51c4e754bfdc16e60d974ecf1e836802;
static PyCodeObject *codeobj_b5a4ae67334a9f831279692b99cc45a0;
static PyCodeObject *codeobj_aab5f1347fdcc23e625f7c7379404f49;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_c2155b49a66aad63fc0d89ad0f0f495b );
    codeobj_294ad7f55665ac659eb2bef0f65c6a8b = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 240, const_tuple_str_plain_x_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_18423b4a4fc7edfe29af4ebd1505456a = MAKE_CODEOBJ( module_filename_obj, const_str_digest_3d8456b692ba12d694b1345117db0cc2, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_b32bebd9e7a464ebcb5245aa0ec564c8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Retry, 29, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_7e34eade0be174bb2e5653c6ede7f96b = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 161, const_tuple_1de5649d3881ba16da011d3ba77ccb73_tuple, 14, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_f643665557390489191f36518cc053ae = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr__, 442, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_86c1f4c46122c48f7dc102e991f06ee4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__is_connection_error, 305, const_tuple_str_plain_self_str_plain_err_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_1985cb0e4460226e1d6e50538c5c789c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__is_method_retryable, 317, const_tuple_str_plain_self_str_plain_method_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_e3d3264e4852b9ff6312a484aeb14a34 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__is_read_error, 311, const_tuple_str_plain_self_str_plain_err_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_5e4d1287ab116fc1e31653164aebc650 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__sleep_backoff, 283, const_tuple_str_plain_self_str_plain_backoff_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_9d3b0a23108e65e56258ca582838dde3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_from_int, 218, const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_c1d1bfbcac640d98cac8d0f6a2d1d675 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_backoff_time, 232, const_tuple_80578890cd3d11905b4f16ab6b1fdff8_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_942d938520f532c57cb2fbf54f07cb37 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_retry_after, 265, const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_7bcb743f023f7206f81d79fe3b6948a5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_increment, 355, const_tuple_bc17066e627dae9bde3aa710dab0fecf_tuple, 7, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_295cb65ffa295e5fda72c0f806f15990 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_exhausted, 346, const_tuple_str_plain_self_str_plain_retry_counts_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_a0b5630f592dabaf40d43b29ec5e41b9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_retry, 326, const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_c03bd9bb95ed6edf0cf936e76b585027 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_new, 199, const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_51c4e754bfdc16e60d974ecf1e836802 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parse_retry_after, 249, const_tuple_d89ea0d58dee45bf496acb8235cc5908_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_b5a4ae67334a9f831279692b99cc45a0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sleep, 289, const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_aab5f1347fdcc23e625f7c7379404f49 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sleep_for_retry, 275, const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3_complex_call_helper_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_10__is_connection_error(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_11__is_read_error(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_12__is_method_retryable(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_13_is_retry( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_14_is_exhausted(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_15_increment( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_16___repr__(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_2_new(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_3_from_int( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_4_get_backoff_time(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_4_get_backoff_time$$$function_1_lambda(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_5_parse_retry_after(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_6_get_retry_after(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_7_sleep_for_retry( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_8__sleep_backoff(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_9_sleep( PyObject *defaults );


// The module function definitions.
static PyObject *impl_urllib3$util$retry$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_total = python_pars[ 1 ];
    PyObject *par_connect = python_pars[ 2 ];
    PyObject *par_read = python_pars[ 3 ];
    PyObject *par_redirect = python_pars[ 4 ];
    PyObject *par_status = python_pars[ 5 ];
    PyObject *par_method_whitelist = python_pars[ 6 ];
    PyObject *par_status_forcelist = python_pars[ 7 ];
    PyObject *par_backoff_factor = python_pars[ 8 ];
    PyObject *par_raise_on_redirect = python_pars[ 9 ];
    PyObject *par_raise_on_status = python_pars[ 10 ];
    PyObject *par_history = python_pars[ 11 ];
    PyObject *par_respect_retry_after_header = python_pars[ 12 ];
    PyObject *par_remove_headers_on_redirect = python_pars[ 13 ];
    PyObject *var_h = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
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
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_name_9;
    PyObject *tmp_assattr_name_10;
    PyObject *tmp_assattr_name_11;
    PyObject *tmp_assattr_name_12;
    PyObject *tmp_assattr_name_13;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
    PyObject *tmp_assattr_target_9;
    PyObject *tmp_assattr_target_10;
    PyObject *tmp_assattr_target_11;
    PyObject *tmp_assattr_target_12;
    PyObject *tmp_assattr_target_13;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frozenset_arg_1;
    PyObject *tmp_iter_arg_1;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    int tmp_or_left_truth_3;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_left_value_3;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_or_right_value_3;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_7e34eade0be174bb2e5653c6ede7f96b = NULL;

    struct Nuitka_FrameObject *frame_7e34eade0be174bb2e5653c6ede7f96b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7e34eade0be174bb2e5653c6ede7f96b, codeobj_7e34eade0be174bb2e5653c6ede7f96b, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7e34eade0be174bb2e5653c6ede7f96b = cache_frame_7e34eade0be174bb2e5653c6ede7f96b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7e34eade0be174bb2e5653c6ede7f96b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7e34eade0be174bb2e5653c6ede7f96b ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_total;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_total, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_connect;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_connect, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_read;

    CHECK_OBJECT( tmp_assattr_name_3 );
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_read, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = par_status;

    CHECK_OBJECT( tmp_assattr_name_4 );
    tmp_assattr_target_4 = par_self;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_status, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_1 = par_redirect;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = Py_False;
    tmp_or_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    assert( !(tmp_or_left_truth_1 == -1) );
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_compexpr_left_2 = par_total;

    CHECK_OBJECT( tmp_compexpr_left_2 );
    tmp_compexpr_right_2 = Py_False;
    tmp_or_right_value_1 = BOOL_FROM( tmp_compexpr_left_2 == tmp_compexpr_right_2 );
    tmp_cond_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    assert( !(tmp_cond_truth_1 == -1) );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_1 = const_int_0;
    {
        PyObject *old = par_redirect;
        assert( old != NULL );
        par_redirect = tmp_assign_source_1;
        Py_INCREF( par_redirect );
        Py_DECREF( old );
    }

    tmp_assign_source_2 = Py_False;
    {
        PyObject *old = par_raise_on_redirect;
        assert( old != NULL );
        par_raise_on_redirect = tmp_assign_source_2;
        Py_INCREF( par_raise_on_redirect );
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_assattr_name_5 = par_redirect;

    CHECK_OBJECT( tmp_assattr_name_5 );
    tmp_assattr_target_5 = par_self;

    CHECK_OBJECT( tmp_assattr_target_5 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_redirect, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_2 = par_status_forcelist;

    CHECK_OBJECT( tmp_or_left_value_2 );
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description_1 = "ooooooooooooooo";
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
    tmp_or_right_value_2 = PySet_New( NULL );
    tmp_assattr_name_6 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    Py_INCREF( tmp_or_left_value_2 );
    tmp_assattr_name_6 = tmp_or_left_value_2;
    or_end_2:;
    tmp_assattr_target_6 = par_self;

    CHECK_OBJECT( tmp_assattr_target_6 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_status_forcelist, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_6 );

        exception_lineno = 188;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_6 );
    tmp_assattr_name_7 = par_method_whitelist;

    CHECK_OBJECT( tmp_assattr_name_7 );
    tmp_assattr_target_7 = par_self;

    CHECK_OBJECT( tmp_assattr_target_7 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_method_whitelist, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_8 = par_backoff_factor;

    CHECK_OBJECT( tmp_assattr_name_8 );
    tmp_assattr_target_8 = par_self;

    CHECK_OBJECT( tmp_assattr_target_8 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_backoff_factor, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_9 = par_raise_on_redirect;

    CHECK_OBJECT( tmp_assattr_name_9 );
    tmp_assattr_target_9 = par_self;

    CHECK_OBJECT( tmp_assattr_target_9 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_raise_on_redirect, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_10 = par_raise_on_status;

    CHECK_OBJECT( tmp_assattr_name_10 );
    tmp_assattr_target_10 = par_self;

    CHECK_OBJECT( tmp_assattr_target_10 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_raise_on_status, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_3 = par_history;

    CHECK_OBJECT( tmp_or_left_value_3 );
    tmp_or_left_truth_3 = CHECK_IF_TRUE( tmp_or_left_value_3 );
    if ( tmp_or_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        type_description_1 = "ooooooooooooooo";
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
    tmp_or_right_value_3 = const_tuple_empty;
    tmp_assattr_name_11 = tmp_or_right_value_3;
    goto or_end_3;
    or_left_3:;
    tmp_assattr_name_11 = tmp_or_left_value_3;
    or_end_3:;
    tmp_assattr_target_11 = par_self;

    CHECK_OBJECT( tmp_assattr_target_11 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_history, tmp_assattr_name_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_12 = par_respect_retry_after_header;

    CHECK_OBJECT( tmp_assattr_name_12 );
    tmp_assattr_target_12 = par_self;

    CHECK_OBJECT( tmp_assattr_target_12 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_respect_retry_after_header, tmp_assattr_name_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    // Tried code:
    tmp_iter_arg_1 = par_remove_headers_on_redirect;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        type_description_1 = "ooooooooooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_3;

    tmp_assign_source_4 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_4;

    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_list_contraction_1__$0;

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


        type_description_1 = "ooooooooooooooo";
        exception_lineno = 196;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_5;
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

        exception_lineno = 196;
        type_description_1 = "ooooooooooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_2;
    branch_no_2:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    branch_end_2:;
    // End of try:
    try_end_1:;
    tmp_assign_source_6 = tmp_list_contraction_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_6 );
    {
        PyObject *old = var_h;
        var_h = tmp_assign_source_6;
        Py_INCREF( var_h );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_called_instance_1 = var_h;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_7e34eade0be174bb2e5653c6ede7f96b->m_frame.f_lineno = 196;
    tmp_append_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_lower );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        type_description_1 = "ooooooooooooooo";
        goto try_except_handler_2;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        type_description_1 = "ooooooooooooooo";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        type_description_1 = "ooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__$0 );
    Py_DECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__contraction_result );
    Py_DECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    goto outline_result_1;
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

    Py_XDECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    Py_XDECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_1___init__ );
    return NULL;
    outline_result_1:;
    tmp_frozenset_arg_1 = tmp_outline_return_value_1;
    tmp_assattr_name_13 = PyFrozenSet_New( tmp_frozenset_arg_1 );
    Py_DECREF( tmp_frozenset_arg_1 );
    if ( tmp_assattr_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_13 = par_self;

    CHECK_OBJECT( tmp_assattr_target_13 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_remove_headers_on_redirect, tmp_assattr_name_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_13 );

        exception_lineno = 195;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_13 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7e34eade0be174bb2e5653c6ede7f96b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7e34eade0be174bb2e5653c6ede7f96b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7e34eade0be174bb2e5653c6ede7f96b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7e34eade0be174bb2e5653c6ede7f96b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7e34eade0be174bb2e5653c6ede7f96b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7e34eade0be174bb2e5653c6ede7f96b,
        type_description_1,
        par_self,
        par_total,
        par_connect,
        par_read,
        par_redirect,
        par_status,
        par_method_whitelist,
        par_status_forcelist,
        par_backoff_factor,
        par_raise_on_redirect,
        par_raise_on_status,
        par_history,
        par_respect_retry_after_header,
        par_remove_headers_on_redirect,
        var_h
    );


    // Release cached frame.
    if ( frame_7e34eade0be174bb2e5653c6ede7f96b == cache_frame_7e34eade0be174bb2e5653c6ede7f96b )
    {
        Py_DECREF( frame_7e34eade0be174bb2e5653c6ede7f96b );
    }
    cache_frame_7e34eade0be174bb2e5653c6ede7f96b = NULL;

    assertFrameObject( frame_7e34eade0be174bb2e5653c6ede7f96b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_redirect );
    Py_DECREF( par_redirect );
    par_redirect = NULL;

    CHECK_OBJECT( (PyObject *)par_status );
    Py_DECREF( par_status );
    par_status = NULL;

    CHECK_OBJECT( (PyObject *)par_remove_headers_on_redirect );
    Py_DECREF( par_remove_headers_on_redirect );
    par_remove_headers_on_redirect = NULL;

    CHECK_OBJECT( (PyObject *)par_read );
    Py_DECREF( par_read );
    par_read = NULL;

    Py_XDECREF( var_h );
    var_h = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_backoff_factor );
    Py_DECREF( par_backoff_factor );
    par_backoff_factor = NULL;

    CHECK_OBJECT( (PyObject *)par_respect_retry_after_header );
    Py_DECREF( par_respect_retry_after_header );
    par_respect_retry_after_header = NULL;

    CHECK_OBJECT( (PyObject *)par_history );
    Py_DECREF( par_history );
    par_history = NULL;

    CHECK_OBJECT( (PyObject *)par_raise_on_status );
    Py_DECREF( par_raise_on_status );
    par_raise_on_status = NULL;

    CHECK_OBJECT( (PyObject *)par_connect );
    Py_DECREF( par_connect );
    par_connect = NULL;

    CHECK_OBJECT( (PyObject *)par_status_forcelist );
    Py_DECREF( par_status_forcelist );
    par_status_forcelist = NULL;

    CHECK_OBJECT( (PyObject *)par_total );
    Py_DECREF( par_total );
    par_total = NULL;

    CHECK_OBJECT( (PyObject *)par_raise_on_redirect );
    Py_DECREF( par_raise_on_redirect );
    par_raise_on_redirect = NULL;

    CHECK_OBJECT( (PyObject *)par_method_whitelist );
    Py_DECREF( par_method_whitelist );
    par_method_whitelist = NULL;

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

    Py_XDECREF( par_redirect );
    par_redirect = NULL;

    CHECK_OBJECT( (PyObject *)par_status );
    Py_DECREF( par_status );
    par_status = NULL;

    CHECK_OBJECT( (PyObject *)par_remove_headers_on_redirect );
    Py_DECREF( par_remove_headers_on_redirect );
    par_remove_headers_on_redirect = NULL;

    CHECK_OBJECT( (PyObject *)par_read );
    Py_DECREF( par_read );
    par_read = NULL;

    Py_XDECREF( var_h );
    var_h = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_backoff_factor );
    Py_DECREF( par_backoff_factor );
    par_backoff_factor = NULL;

    CHECK_OBJECT( (PyObject *)par_respect_retry_after_header );
    Py_DECREF( par_respect_retry_after_header );
    par_respect_retry_after_header = NULL;

    CHECK_OBJECT( (PyObject *)par_history );
    Py_DECREF( par_history );
    par_history = NULL;

    CHECK_OBJECT( (PyObject *)par_raise_on_status );
    Py_DECREF( par_raise_on_status );
    par_raise_on_status = NULL;

    CHECK_OBJECT( (PyObject *)par_connect );
    Py_DECREF( par_connect );
    par_connect = NULL;

    CHECK_OBJECT( (PyObject *)par_status_forcelist );
    Py_DECREF( par_status_forcelist );
    par_status_forcelist = NULL;

    CHECK_OBJECT( (PyObject *)par_total );
    Py_DECREF( par_total );
    par_total = NULL;

    Py_XDECREF( par_raise_on_redirect );
    par_raise_on_redirect = NULL;

    CHECK_OBJECT( (PyObject *)par_method_whitelist );
    Py_DECREF( par_method_whitelist );
    par_method_whitelist = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_1___init__ );
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


static PyObject *impl_urllib3$util$retry$$$function_2_new( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_kw = python_pars[ 1 ];
    PyObject *var_params = NULL;
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
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
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
    PyObject *tmp_source_name_13;
    PyObject *tmp_type_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c03bd9bb95ed6edf0cf936e76b585027 = NULL;

    struct Nuitka_FrameObject *frame_c03bd9bb95ed6edf0cf936e76b585027;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c03bd9bb95ed6edf0cf936e76b585027, codeobj_c03bd9bb95ed6edf0cf936e76b585027, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c03bd9bb95ed6edf0cf936e76b585027 = cache_frame_c03bd9bb95ed6edf0cf936e76b585027;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c03bd9bb95ed6edf0cf936e76b585027 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c03bd9bb95ed6edf0cf936e76b585027 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assign_source_1 = _PyDict_NewPresized( 13 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_total );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 201;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_total;
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_connect );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 202;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_connect;
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_read );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 203;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_3 = const_str_plain_read;
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_redirect );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 204;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_4 = const_str_plain_redirect;
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_status );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 205;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_5 = const_str_plain_status;
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_method_whitelist );
    if ( tmp_dict_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 206;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_6 = const_str_plain_method_whitelist;
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_6, tmp_dict_value_6 );
    Py_DECREF( tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_source_name_7 = par_self;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_status_forcelist );
    if ( tmp_dict_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 207;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_7 = const_str_plain_status_forcelist;
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_source_name_8 = par_self;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_dict_value_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_backoff_factor );
    if ( tmp_dict_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 208;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_8 = const_str_plain_backoff_factor;
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_8, tmp_dict_value_8 );
    Py_DECREF( tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_source_name_9 = par_self;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_dict_value_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_raise_on_redirect );
    if ( tmp_dict_value_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 209;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_9 = const_str_plain_raise_on_redirect;
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_9, tmp_dict_value_9 );
    Py_DECREF( tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_source_name_10 = par_self;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_dict_value_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_raise_on_status );
    if ( tmp_dict_value_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 210;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_10 = const_str_plain_raise_on_status;
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_10, tmp_dict_value_10 );
    Py_DECREF( tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    tmp_source_name_11 = par_self;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_dict_value_11 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_history );
    if ( tmp_dict_value_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 211;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_11 = const_str_plain_history;
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_11, tmp_dict_value_11 );
    Py_DECREF( tmp_dict_value_11 );
    assert( !(tmp_res != 0) );
    tmp_source_name_12 = par_self;

    CHECK_OBJECT( tmp_source_name_12 );
    tmp_dict_value_12 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_remove_headers_on_redirect );
    if ( tmp_dict_value_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 212;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_12 = const_str_plain_remove_headers_on_redirect;
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_12, tmp_dict_value_12 );
    Py_DECREF( tmp_dict_value_12 );
    assert( !(tmp_res != 0) );
    tmp_source_name_13 = par_self;

    CHECK_OBJECT( tmp_source_name_13 );
    tmp_dict_value_13 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_respect_retry_after_header );
    if ( tmp_dict_value_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 213;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_13 = const_str_plain_respect_retry_after_header;
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_13, tmp_dict_value_13 );
    Py_DECREF( tmp_dict_value_13 );
    assert( !(tmp_res != 0) );
    assert( var_params == NULL );
    var_params = tmp_assign_source_1;

    tmp_called_instance_1 = var_params;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_kw;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_c03bd9bb95ed6edf0cf936e76b585027->m_frame.f_lineno = 215;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_update, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_type_arg_1 = par_self;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_dircall_arg1_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_dircall_arg1_1 != NULL );
    tmp_dircall_arg2_1 = var_params;

    CHECK_OBJECT( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg2_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
        tmp_return_value = impl___internal__$$$function_3_complex_call_helper_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c03bd9bb95ed6edf0cf936e76b585027 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c03bd9bb95ed6edf0cf936e76b585027 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c03bd9bb95ed6edf0cf936e76b585027 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c03bd9bb95ed6edf0cf936e76b585027, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c03bd9bb95ed6edf0cf936e76b585027->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c03bd9bb95ed6edf0cf936e76b585027, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c03bd9bb95ed6edf0cf936e76b585027,
        type_description_1,
        par_self,
        par_kw,
        var_params
    );


    // Release cached frame.
    if ( frame_c03bd9bb95ed6edf0cf936e76b585027 == cache_frame_c03bd9bb95ed6edf0cf936e76b585027 )
    {
        Py_DECREF( frame_c03bd9bb95ed6edf0cf936e76b585027 );
    }
    cache_frame_c03bd9bb95ed6edf0cf936e76b585027 = NULL;

    assertFrameObject( frame_c03bd9bb95ed6edf0cf936e76b585027 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_2_new );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_params );
    Py_DECREF( var_params );
    var_params = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    Py_XDECREF( var_params );
    var_params = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_2_new );
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


static PyObject *impl_urllib3$util$retry$$$function_3_from_int( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_retries = python_pars[ 1 ];
    PyObject *par_redirect = python_pars[ 2 ];
    PyObject *par_default = python_pars[ 3 ];
    PyObject *var_new_retries = NULL;
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
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_bool_arg_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    bool tmp_isnot_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_9d3b0a23108e65e56258ca582838dde3 = NULL;

    struct Nuitka_FrameObject *frame_9d3b0a23108e65e56258ca582838dde3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9d3b0a23108e65e56258ca582838dde3, codeobj_9d3b0a23108e65e56258ca582838dde3, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9d3b0a23108e65e56258ca582838dde3 = cache_frame_9d3b0a23108e65e56258ca582838dde3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9d3b0a23108e65e56258ca582838dde3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9d3b0a23108e65e56258ca582838dde3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_retries;

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
    tmp_compare_left_2 = par_default;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_assign_source_1 = par_default;

    CHECK_OBJECT( tmp_assign_source_1 );
    Py_INCREF( tmp_assign_source_1 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_source_name_1 = par_cls;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_DEFAULT );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    condexpr_end_1:;
    {
        PyObject *old = par_retries;
        assert( old != NULL );
        par_retries = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_isinstance_inst_1 = par_retries;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_Retry );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Retry );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Retry" );
        exception_tb = NULL;

        exception_lineno = 224;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        type_description_1 = "ooooo";
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
    tmp_return_value = par_retries;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_bool_arg_1 = par_redirect;

    CHECK_OBJECT( tmp_bool_arg_1 );
    tmp_and_left_value_1 = TO_BOOL( tmp_bool_arg_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
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
    tmp_and_right_value_1 = Py_None;
    tmp_assign_source_2 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_assign_source_2 = tmp_and_left_value_1;
    and_end_1:;
    {
        PyObject *old = par_redirect;
        assert( old != NULL );
        par_redirect = tmp_assign_source_2;
        Py_INCREF( par_redirect );
        Py_DECREF( old );
    }

    tmp_called_name_1 = par_cls;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_retries;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_redirect;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_redirect;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_9d3b0a23108e65e56258ca582838dde3->m_frame.f_lineno = 228;
    tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_new_retries == NULL );
    var_new_retries = tmp_assign_source_3;

    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_log );

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

        exception_lineno = 229;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_digest_3ff146bf2cbf06e10d34294d9109668e;
    tmp_args_element_name_2 = par_retries;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = var_new_retries;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_9d3b0a23108e65e56258ca582838dde3->m_frame.f_lineno = 229;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_unused = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain_debug, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 229;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d3b0a23108e65e56258ca582838dde3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d3b0a23108e65e56258ca582838dde3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d3b0a23108e65e56258ca582838dde3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9d3b0a23108e65e56258ca582838dde3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9d3b0a23108e65e56258ca582838dde3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9d3b0a23108e65e56258ca582838dde3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9d3b0a23108e65e56258ca582838dde3,
        type_description_1,
        par_cls,
        par_retries,
        par_redirect,
        par_default,
        var_new_retries
    );


    // Release cached frame.
    if ( frame_9d3b0a23108e65e56258ca582838dde3 == cache_frame_9d3b0a23108e65e56258ca582838dde3 )
    {
        Py_DECREF( frame_9d3b0a23108e65e56258ca582838dde3 );
    }
    cache_frame_9d3b0a23108e65e56258ca582838dde3 = NULL;

    assertFrameObject( frame_9d3b0a23108e65e56258ca582838dde3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_new_retries;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_3_from_int );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_redirect );
    Py_DECREF( par_redirect );
    par_redirect = NULL;

    CHECK_OBJECT( (PyObject *)par_retries );
    Py_DECREF( par_retries );
    par_retries = NULL;

    CHECK_OBJECT( (PyObject *)par_default );
    Py_DECREF( par_default );
    par_default = NULL;

    Py_XDECREF( var_new_retries );
    var_new_retries = NULL;

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

    CHECK_OBJECT( (PyObject *)par_redirect );
    Py_DECREF( par_redirect );
    par_redirect = NULL;

    Py_XDECREF( par_retries );
    par_retries = NULL;

    CHECK_OBJECT( (PyObject *)par_default );
    Py_DECREF( par_default );
    par_default = NULL;

    Py_XDECREF( var_new_retries );
    var_new_retries = NULL;

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
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_3_from_int );
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


static PyObject *impl_urllib3$util$retry$$$function_4_get_backoff_time( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_backoff_value = NULL;
    PyObject *var_consecutive_errors_len = NULL;
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
    PyObject *tmp_called_name_3;
    int tmp_cmp_LtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_c1d1bfbcac640d98cac8d0f6a2d1d675 = NULL;

    struct Nuitka_FrameObject *frame_c1d1bfbcac640d98cac8d0f6a2d1d675;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c1d1bfbcac640d98cac8d0f6a2d1d675, codeobj_c1d1bfbcac640d98cac8d0f6a2d1d675, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c1d1bfbcac640d98cac8d0f6a2d1d675 = cache_frame_c1d1bfbcac640d98cac8d0f6a2d1d675;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c1d1bfbcac640d98cac8d0f6a2d1d675 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c1d1bfbcac640d98cac8d0f6a2d1d675 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_takewhile );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_takewhile );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "takewhile" );
        exception_tb = NULL;

        exception_lineno = 240;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = MAKE_FUNCTION_urllib3$util$retry$$$function_4_get_backoff_time$$$function_1_lambda(  );
    tmp_called_name_2 = (PyObject *)&PyReversed_Type;
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_history );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 240;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_c1d1bfbcac640d98cac8d0f6a2d1d675->m_frame.f_lineno = 240;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 240;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_c1d1bfbcac640d98cac8d0f6a2d1d675->m_frame.f_lineno = 240;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_1 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_consecutive_errors_len == NULL );
    var_consecutive_errors_len = tmp_assign_source_1;

    tmp_compare_left_1 = var_consecutive_errors_len;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_pos_1;
    tmp_cmp_LtE_1 = RICH_COMPARE_BOOL_LE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_LtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 243;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_LtE_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = const_int_0;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_backoff_factor );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = const_int_pos_2;
    tmp_left_name_3 = var_consecutive_errors_len;

    CHECK_OBJECT( tmp_left_name_3 );
    tmp_right_name_3 = const_int_pos_1;
    tmp_right_name_2 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 246;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = POWER_OPERATION( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 246;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_backoff_value == NULL );
    var_backoff_value = tmp_assign_source_2;

    tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_min );
    assert( tmp_called_name_3 != NULL );
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_BACKOFF_MAX );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = var_backoff_value;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_c1d1bfbcac640d98cac8d0f6a2d1d675->m_frame.f_lineno = 247;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c1d1bfbcac640d98cac8d0f6a2d1d675 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c1d1bfbcac640d98cac8d0f6a2d1d675 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c1d1bfbcac640d98cac8d0f6a2d1d675 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c1d1bfbcac640d98cac8d0f6a2d1d675, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c1d1bfbcac640d98cac8d0f6a2d1d675->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c1d1bfbcac640d98cac8d0f6a2d1d675, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c1d1bfbcac640d98cac8d0f6a2d1d675,
        type_description_1,
        par_self,
        var_backoff_value,
        var_consecutive_errors_len
    );


    // Release cached frame.
    if ( frame_c1d1bfbcac640d98cac8d0f6a2d1d675 == cache_frame_c1d1bfbcac640d98cac8d0f6a2d1d675 )
    {
        Py_DECREF( frame_c1d1bfbcac640d98cac8d0f6a2d1d675 );
    }
    cache_frame_c1d1bfbcac640d98cac8d0f6a2d1d675 = NULL;

    assertFrameObject( frame_c1d1bfbcac640d98cac8d0f6a2d1d675 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_4_get_backoff_time );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_backoff_value );
    var_backoff_value = NULL;

    CHECK_OBJECT( (PyObject *)var_consecutive_errors_len );
    Py_DECREF( var_consecutive_errors_len );
    var_consecutive_errors_len = NULL;

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

    Py_XDECREF( var_backoff_value );
    var_backoff_value = NULL;

    Py_XDECREF( var_consecutive_errors_len );
    var_consecutive_errors_len = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_4_get_backoff_time );
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


static PyObject *impl_urllib3$util$retry$$$function_4_get_backoff_time$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
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
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_294ad7f55665ac659eb2bef0f65c6a8b = NULL;

    struct Nuitka_FrameObject *frame_294ad7f55665ac659eb2bef0f65c6a8b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_294ad7f55665ac659eb2bef0f65c6a8b, codeobj_294ad7f55665ac659eb2bef0f65c6a8b, module_urllib3$util$retry, sizeof(void *) );
    frame_294ad7f55665ac659eb2bef0f65c6a8b = cache_frame_294ad7f55665ac659eb2bef0f65c6a8b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_294ad7f55665ac659eb2bef0f65c6a8b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_294ad7f55665ac659eb2bef0f65c6a8b ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_x;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_redirect_location );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = Py_None;
    tmp_return_value = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_294ad7f55665ac659eb2bef0f65c6a8b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_294ad7f55665ac659eb2bef0f65c6a8b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_294ad7f55665ac659eb2bef0f65c6a8b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_294ad7f55665ac659eb2bef0f65c6a8b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_294ad7f55665ac659eb2bef0f65c6a8b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_294ad7f55665ac659eb2bef0f65c6a8b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_294ad7f55665ac659eb2bef0f65c6a8b,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_294ad7f55665ac659eb2bef0f65c6a8b == cache_frame_294ad7f55665ac659eb2bef0f65c6a8b )
    {
        Py_DECREF( frame_294ad7f55665ac659eb2bef0f65c6a8b );
    }
    cache_frame_294ad7f55665ac659eb2bef0f65c6a8b = NULL;

    assertFrameObject( frame_294ad7f55665ac659eb2bef0f65c6a8b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_4_get_backoff_time$$$function_1_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_4_get_backoff_time$$$function_1_lambda );
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


static PyObject *impl_urllib3$util$retry$$$function_5_parse_retry_after( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_retry_after = python_pars[ 1 ];
    PyObject *var_seconds = NULL;
    PyObject *var_retry_date = NULL;
    PyObject *var_retry_date_tuple = NULL;
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
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_name_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_int_arg_1;
    bool tmp_is_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_51c4e754bfdc16e60d974ecf1e836802 = NULL;

    struct Nuitka_FrameObject *frame_51c4e754bfdc16e60d974ecf1e836802;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_51c4e754bfdc16e60d974ecf1e836802, codeobj_51c4e754bfdc16e60d974ecf1e836802, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_51c4e754bfdc16e60d974ecf1e836802 = cache_frame_51c4e754bfdc16e60d974ecf1e836802;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_51c4e754bfdc16e60d974ecf1e836802 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_51c4e754bfdc16e60d974ecf1e836802 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 251;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_digest_d43b7afa583ad163d56ae0bbfdcdb575;
    tmp_args_element_name_2 = par_retry_after;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_51c4e754bfdc16e60d974ecf1e836802->m_frame.f_lineno = 251;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_cond_value_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_match, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 251;
        type_description_1 = "ooooo";
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
    tmp_int_arg_1 = par_retry_after;

    CHECK_OBJECT( tmp_int_arg_1 );
    tmp_assign_source_1 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_seconds == NULL );
    var_seconds = tmp_assign_source_1;

    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_email );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_email );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "email" );
        exception_tb = NULL;

        exception_lineno = 254;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_utils );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_retry_after;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_51c4e754bfdc16e60d974ecf1e836802->m_frame.f_lineno = 254;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_parsedate, call_args );
    }

    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_retry_date_tuple == NULL );
    var_retry_date_tuple = tmp_assign_source_2;

    tmp_compare_left_1 = var_retry_date_tuple;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_InvalidHeader );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InvalidHeader );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "InvalidHeader" );
        exception_tb = NULL;

        exception_lineno = 256;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = const_str_digest_52dc615064dbc739578d7b66bd4357d4;
    tmp_right_name_1 = par_retry_after;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_args_element_name_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_51c4e754bfdc16e60d974ecf1e836802->m_frame.f_lineno = 256;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 256;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "time" );
        exception_tb = NULL;

        exception_lineno = 257;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = var_retry_date_tuple;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_51c4e754bfdc16e60d974ecf1e836802->m_frame.f_lineno = 257;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_mktime, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_retry_date == NULL );
    var_retry_date = tmp_assign_source_3;

    tmp_left_name_2 = var_retry_date;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_called_instance_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_called_instance_4 == NULL ))
    {
        tmp_called_instance_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "time" );
        exception_tb = NULL;

        exception_lineno = 258;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_51c4e754bfdc16e60d974ecf1e836802->m_frame.f_lineno = 258;
    tmp_right_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_time );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 258;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 258;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_seconds == NULL );
    var_seconds = tmp_assign_source_4;

    branch_end_1:;
    tmp_compare_left_2 = var_seconds;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        type_description_1 = "ooooo";
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
    tmp_assign_source_5 = const_int_0;
    {
        PyObject *old = var_seconds;
        assert( old != NULL );
        var_seconds = tmp_assign_source_5;
        Py_INCREF( var_seconds );
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_return_value = var_seconds;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "seconds" );
        exception_tb = NULL;

        exception_lineno = 263;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_51c4e754bfdc16e60d974ecf1e836802 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_51c4e754bfdc16e60d974ecf1e836802 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_51c4e754bfdc16e60d974ecf1e836802 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_51c4e754bfdc16e60d974ecf1e836802, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_51c4e754bfdc16e60d974ecf1e836802->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_51c4e754bfdc16e60d974ecf1e836802, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_51c4e754bfdc16e60d974ecf1e836802,
        type_description_1,
        par_self,
        par_retry_after,
        var_seconds,
        var_retry_date,
        var_retry_date_tuple
    );


    // Release cached frame.
    if ( frame_51c4e754bfdc16e60d974ecf1e836802 == cache_frame_51c4e754bfdc16e60d974ecf1e836802 )
    {
        Py_DECREF( frame_51c4e754bfdc16e60d974ecf1e836802 );
    }
    cache_frame_51c4e754bfdc16e60d974ecf1e836802 = NULL;

    assertFrameObject( frame_51c4e754bfdc16e60d974ecf1e836802 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_5_parse_retry_after );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_seconds );
    var_seconds = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_retry_date );
    var_retry_date = NULL;

    Py_XDECREF( var_retry_date_tuple );
    var_retry_date_tuple = NULL;

    CHECK_OBJECT( (PyObject *)par_retry_after );
    Py_DECREF( par_retry_after );
    par_retry_after = NULL;

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

    Py_XDECREF( var_seconds );
    var_seconds = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_retry_date );
    var_retry_date = NULL;

    Py_XDECREF( var_retry_date_tuple );
    var_retry_date_tuple = NULL;

    CHECK_OBJECT( (PyObject *)par_retry_after );
    Py_DECREF( par_retry_after );
    par_retry_after = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_5_parse_retry_after );
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


static PyObject *impl_urllib3$util$retry$$$function_6_get_retry_after( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_response = python_pars[ 1 ];
    PyObject *var_retry_after = NULL;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_is_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_942d938520f532c57cb2fbf54f07cb37 = NULL;

    struct Nuitka_FrameObject *frame_942d938520f532c57cb2fbf54f07cb37;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_942d938520f532c57cb2fbf54f07cb37, codeobj_942d938520f532c57cb2fbf54f07cb37, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_942d938520f532c57cb2fbf54f07cb37 = cache_frame_942d938520f532c57cb2fbf54f07cb37;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_942d938520f532c57cb2fbf54f07cb37 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_942d938520f532c57cb2fbf54f07cb37 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_response;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_942d938520f532c57cb2fbf54f07cb37->m_frame.f_lineno = 268;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getheader, &PyTuple_GET_ITEM( const_tuple_str_digest_53eb1bcf3283c3fcccb95b51de02ce94_tuple, 0 ) );

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_retry_after == NULL );
    var_retry_after = tmp_assign_source_1;

    tmp_compare_left_1 = var_retry_after;

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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_instance_2 = par_self;

    CHECK_OBJECT( tmp_called_instance_2 );
    tmp_args_element_name_1 = var_retry_after;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_942d938520f532c57cb2fbf54f07cb37->m_frame.f_lineno = 273;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_parse_retry_after, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_942d938520f532c57cb2fbf54f07cb37 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_942d938520f532c57cb2fbf54f07cb37 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_942d938520f532c57cb2fbf54f07cb37 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_942d938520f532c57cb2fbf54f07cb37, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_942d938520f532c57cb2fbf54f07cb37->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_942d938520f532c57cb2fbf54f07cb37, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_942d938520f532c57cb2fbf54f07cb37,
        type_description_1,
        par_self,
        par_response,
        var_retry_after
    );


    // Release cached frame.
    if ( frame_942d938520f532c57cb2fbf54f07cb37 == cache_frame_942d938520f532c57cb2fbf54f07cb37 )
    {
        Py_DECREF( frame_942d938520f532c57cb2fbf54f07cb37 );
    }
    cache_frame_942d938520f532c57cb2fbf54f07cb37 = NULL;

    assertFrameObject( frame_942d938520f532c57cb2fbf54f07cb37 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_6_get_retry_after );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_response );
    Py_DECREF( par_response );
    par_response = NULL;

    CHECK_OBJECT( (PyObject *)var_retry_after );
    Py_DECREF( var_retry_after );
    var_retry_after = NULL;

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

    CHECK_OBJECT( (PyObject *)par_response );
    Py_DECREF( par_response );
    par_response = NULL;

    Py_XDECREF( var_retry_after );
    var_retry_after = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_6_get_retry_after );
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


static PyObject *impl_urllib3$util$retry$$$function_7_sleep_for_retry( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_response = python_pars[ 1 ];
    PyObject *var_retry_after = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_aab5f1347fdcc23e625f7c7379404f49 = NULL;

    struct Nuitka_FrameObject *frame_aab5f1347fdcc23e625f7c7379404f49;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_aab5f1347fdcc23e625f7c7379404f49, codeobj_aab5f1347fdcc23e625f7c7379404f49, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_aab5f1347fdcc23e625f7c7379404f49 = cache_frame_aab5f1347fdcc23e625f7c7379404f49;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_aab5f1347fdcc23e625f7c7379404f49 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_aab5f1347fdcc23e625f7c7379404f49 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_response;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_aab5f1347fdcc23e625f7c7379404f49->m_frame.f_lineno = 276;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get_retry_after, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_retry_after == NULL );
    var_retry_after = tmp_assign_source_1;

    tmp_cond_value_1 = var_retry_after;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        type_description_1 = "ooo";
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
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "time" );
        exception_tb = NULL;

        exception_lineno = 278;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = var_retry_after;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_aab5f1347fdcc23e625f7c7379404f49->m_frame.f_lineno = 278;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_sleep, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aab5f1347fdcc23e625f7c7379404f49 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_aab5f1347fdcc23e625f7c7379404f49 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aab5f1347fdcc23e625f7c7379404f49 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_aab5f1347fdcc23e625f7c7379404f49, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_aab5f1347fdcc23e625f7c7379404f49->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_aab5f1347fdcc23e625f7c7379404f49, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_aab5f1347fdcc23e625f7c7379404f49,
        type_description_1,
        par_self,
        par_response,
        var_retry_after
    );


    // Release cached frame.
    if ( frame_aab5f1347fdcc23e625f7c7379404f49 == cache_frame_aab5f1347fdcc23e625f7c7379404f49 )
    {
        Py_DECREF( frame_aab5f1347fdcc23e625f7c7379404f49 );
    }
    cache_frame_aab5f1347fdcc23e625f7c7379404f49 = NULL;

    assertFrameObject( frame_aab5f1347fdcc23e625f7c7379404f49 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_7_sleep_for_retry );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_response );
    Py_DECREF( par_response );
    par_response = NULL;

    CHECK_OBJECT( (PyObject *)var_retry_after );
    Py_DECREF( var_retry_after );
    var_retry_after = NULL;

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

    CHECK_OBJECT( (PyObject *)par_response );
    Py_DECREF( par_response );
    par_response = NULL;

    Py_XDECREF( var_retry_after );
    var_retry_after = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_7_sleep_for_retry );
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


static PyObject *impl_urllib3$util$retry$$$function_8__sleep_backoff( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_backoff = NULL;
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
    int tmp_cmp_LtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_5e4d1287ab116fc1e31653164aebc650 = NULL;

    struct Nuitka_FrameObject *frame_5e4d1287ab116fc1e31653164aebc650;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5e4d1287ab116fc1e31653164aebc650, codeobj_5e4d1287ab116fc1e31653164aebc650, module_urllib3$util$retry, sizeof(void *)+sizeof(void *) );
    frame_5e4d1287ab116fc1e31653164aebc650 = cache_frame_5e4d1287ab116fc1e31653164aebc650;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5e4d1287ab116fc1e31653164aebc650 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5e4d1287ab116fc1e31653164aebc650 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_5e4d1287ab116fc1e31653164aebc650->m_frame.f_lineno = 284;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_backoff_time );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_backoff == NULL );
    var_backoff = tmp_assign_source_1;

    tmp_compare_left_1 = var_backoff;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_LtE_1 = RICH_COMPARE_BOOL_LE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_LtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_LtE_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "time" );
        exception_tb = NULL;

        exception_lineno = 287;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = var_backoff;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_5e4d1287ab116fc1e31653164aebc650->m_frame.f_lineno = 287;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_sleep, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5e4d1287ab116fc1e31653164aebc650 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5e4d1287ab116fc1e31653164aebc650 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5e4d1287ab116fc1e31653164aebc650 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5e4d1287ab116fc1e31653164aebc650, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5e4d1287ab116fc1e31653164aebc650->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5e4d1287ab116fc1e31653164aebc650, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5e4d1287ab116fc1e31653164aebc650,
        type_description_1,
        par_self,
        var_backoff
    );


    // Release cached frame.
    if ( frame_5e4d1287ab116fc1e31653164aebc650 == cache_frame_5e4d1287ab116fc1e31653164aebc650 )
    {
        Py_DECREF( frame_5e4d1287ab116fc1e31653164aebc650 );
    }
    cache_frame_5e4d1287ab116fc1e31653164aebc650 = NULL;

    assertFrameObject( frame_5e4d1287ab116fc1e31653164aebc650 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_8__sleep_backoff );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_backoff );
    Py_DECREF( var_backoff );
    var_backoff = NULL;

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

    Py_XDECREF( var_backoff );
    var_backoff = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_8__sleep_backoff );
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


static PyObject *impl_urllib3$util$retry$$$function_9_sleep( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_response = python_pars[ 1 ];
    PyObject *var_slept = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_b5a4ae67334a9f831279692b99cc45a0 = NULL;

    struct Nuitka_FrameObject *frame_b5a4ae67334a9f831279692b99cc45a0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b5a4ae67334a9f831279692b99cc45a0, codeobj_b5a4ae67334a9f831279692b99cc45a0, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b5a4ae67334a9f831279692b99cc45a0 = cache_frame_b5a4ae67334a9f831279692b99cc45a0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b5a4ae67334a9f831279692b99cc45a0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b5a4ae67334a9f831279692b99cc45a0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_and_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_respect_retry_after_header );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 298;
        type_description_1 = "ooo";
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
    tmp_and_right_value_1 = par_response;

    CHECK_OBJECT( tmp_and_right_value_1 );
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

        exception_lineno = 298;
        type_description_1 = "ooo";
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
    tmp_args_element_name_1 = par_response;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_b5a4ae67334a9f831279692b99cc45a0->m_frame.f_lineno = 299;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_sleep_for_retry, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 299;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_slept == NULL );
    var_slept = tmp_assign_source_1;

    tmp_cond_value_2 = var_slept;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        type_description_1 = "ooo";
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    branch_no_1:;
    tmp_called_instance_2 = par_self;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_b5a4ae67334a9f831279692b99cc45a0->m_frame.f_lineno = 303;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain__sleep_backoff );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b5a4ae67334a9f831279692b99cc45a0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b5a4ae67334a9f831279692b99cc45a0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b5a4ae67334a9f831279692b99cc45a0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b5a4ae67334a9f831279692b99cc45a0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b5a4ae67334a9f831279692b99cc45a0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b5a4ae67334a9f831279692b99cc45a0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b5a4ae67334a9f831279692b99cc45a0,
        type_description_1,
        par_self,
        par_response,
        var_slept
    );


    // Release cached frame.
    if ( frame_b5a4ae67334a9f831279692b99cc45a0 == cache_frame_b5a4ae67334a9f831279692b99cc45a0 )
    {
        Py_DECREF( frame_b5a4ae67334a9f831279692b99cc45a0 );
    }
    cache_frame_b5a4ae67334a9f831279692b99cc45a0 = NULL;

    assertFrameObject( frame_b5a4ae67334a9f831279692b99cc45a0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_9_sleep );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_slept );
    var_slept = NULL;

    CHECK_OBJECT( (PyObject *)par_response );
    Py_DECREF( par_response );
    par_response = NULL;

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

    Py_XDECREF( var_slept );
    var_slept = NULL;

    CHECK_OBJECT( (PyObject *)par_response );
    Py_DECREF( par_response );
    par_response = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_9_sleep );
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


static PyObject *impl_urllib3$util$retry$$$function_10__is_connection_error( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_err = python_pars[ 1 ];
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
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_86c1f4c46122c48f7dc102e991f06ee4 = NULL;

    struct Nuitka_FrameObject *frame_86c1f4c46122c48f7dc102e991f06ee4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_86c1f4c46122c48f7dc102e991f06ee4, codeobj_86c1f4c46122c48f7dc102e991f06ee4, module_urllib3$util$retry, sizeof(void *)+sizeof(void *) );
    frame_86c1f4c46122c48f7dc102e991f06ee4 = cache_frame_86c1f4c46122c48f7dc102e991f06ee4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_86c1f4c46122c48f7dc102e991f06ee4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_86c1f4c46122c48f7dc102e991f06ee4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_err;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ConnectTimeoutError" );
        exception_tb = NULL;

        exception_lineno = 309;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 309;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_86c1f4c46122c48f7dc102e991f06ee4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_86c1f4c46122c48f7dc102e991f06ee4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_86c1f4c46122c48f7dc102e991f06ee4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_86c1f4c46122c48f7dc102e991f06ee4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_86c1f4c46122c48f7dc102e991f06ee4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_86c1f4c46122c48f7dc102e991f06ee4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_86c1f4c46122c48f7dc102e991f06ee4,
        type_description_1,
        par_self,
        par_err
    );


    // Release cached frame.
    if ( frame_86c1f4c46122c48f7dc102e991f06ee4 == cache_frame_86c1f4c46122c48f7dc102e991f06ee4 )
    {
        Py_DECREF( frame_86c1f4c46122c48f7dc102e991f06ee4 );
    }
    cache_frame_86c1f4c46122c48f7dc102e991f06ee4 = NULL;

    assertFrameObject( frame_86c1f4c46122c48f7dc102e991f06ee4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_10__is_connection_error );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_err );
    Py_DECREF( par_err );
    par_err = NULL;

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

    CHECK_OBJECT( (PyObject *)par_err );
    Py_DECREF( par_err );
    par_err = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_10__is_connection_error );
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


static PyObject *impl_urllib3$util$retry$$$function_11__is_read_error( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_err = python_pars[ 1 ];
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
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_e3d3264e4852b9ff6312a484aeb14a34 = NULL;

    struct Nuitka_FrameObject *frame_e3d3264e4852b9ff6312a484aeb14a34;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e3d3264e4852b9ff6312a484aeb14a34, codeobj_e3d3264e4852b9ff6312a484aeb14a34, module_urllib3$util$retry, sizeof(void *)+sizeof(void *) );
    frame_e3d3264e4852b9ff6312a484aeb14a34 = cache_frame_e3d3264e4852b9ff6312a484aeb14a34;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e3d3264e4852b9ff6312a484aeb14a34 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e3d3264e4852b9ff6312a484aeb14a34 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_err;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_isinstance_cls_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ReadTimeoutError" );
        exception_tb = NULL;

        exception_lineno = 315;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ProtocolError );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProtocolError );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_isinstance_cls_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ProtocolError" );
        exception_tb = NULL;

        exception_lineno = 315;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 1, tmp_tuple_element_1 );
    tmp_return_value = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 315;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e3d3264e4852b9ff6312a484aeb14a34 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e3d3264e4852b9ff6312a484aeb14a34 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e3d3264e4852b9ff6312a484aeb14a34 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e3d3264e4852b9ff6312a484aeb14a34, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e3d3264e4852b9ff6312a484aeb14a34->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e3d3264e4852b9ff6312a484aeb14a34, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e3d3264e4852b9ff6312a484aeb14a34,
        type_description_1,
        par_self,
        par_err
    );


    // Release cached frame.
    if ( frame_e3d3264e4852b9ff6312a484aeb14a34 == cache_frame_e3d3264e4852b9ff6312a484aeb14a34 )
    {
        Py_DECREF( frame_e3d3264e4852b9ff6312a484aeb14a34 );
    }
    cache_frame_e3d3264e4852b9ff6312a484aeb14a34 = NULL;

    assertFrameObject( frame_e3d3264e4852b9ff6312a484aeb14a34 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_11__is_read_error );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_err );
    Py_DECREF( par_err );
    par_err = NULL;

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

    CHECK_OBJECT( (PyObject *)par_err );
    Py_DECREF( par_err );
    par_err = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_11__is_read_error );
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


static PyObject *impl_urllib3$util$retry$$$function_12__is_method_retryable( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_1985cb0e4460226e1d6e50538c5c789c = NULL;

    struct Nuitka_FrameObject *frame_1985cb0e4460226e1d6e50538c5c789c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1985cb0e4460226e1d6e50538c5c789c, codeobj_1985cb0e4460226e1d6e50538c5c789c, module_urllib3$util$retry, sizeof(void *)+sizeof(void *) );
    frame_1985cb0e4460226e1d6e50538c5c789c = cache_frame_1985cb0e4460226e1d6e50538c5c789c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1985cb0e4460226e1d6e50538c5c789c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1985cb0e4460226e1d6e50538c5c789c ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_and_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_method_whitelist );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 321;
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
    tmp_called_instance_1 = par_method;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_1985cb0e4460226e1d6e50538c5c789c->m_frame.f_lineno = 321;
    tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_upper );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_method_whitelist );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 321;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = SEQUENCE_CONTAINS_NOT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
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

        exception_lineno = 321;
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
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1985cb0e4460226e1d6e50538c5c789c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1985cb0e4460226e1d6e50538c5c789c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1985cb0e4460226e1d6e50538c5c789c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1985cb0e4460226e1d6e50538c5c789c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1985cb0e4460226e1d6e50538c5c789c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1985cb0e4460226e1d6e50538c5c789c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1985cb0e4460226e1d6e50538c5c789c,
        type_description_1,
        par_self,
        par_method
    );


    // Release cached frame.
    if ( frame_1985cb0e4460226e1d6e50538c5c789c == cache_frame_1985cb0e4460226e1d6e50538c5c789c )
    {
        Py_DECREF( frame_1985cb0e4460226e1d6e50538c5c789c );
    }
    cache_frame_1985cb0e4460226e1d6e50538c5c789c = NULL;

    assertFrameObject( frame_1985cb0e4460226e1d6e50538c5c789c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_12__is_method_retryable );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

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

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_12__is_method_retryable );
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


static PyObject *impl_urllib3$util$retry$$$function_13_is_retry( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
    PyObject *par_status_code = python_pars[ 2 ];
    PyObject *par_has_retry_after = python_pars[ 3 ];
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
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_left_value_4;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
    PyObject *tmp_and_right_value_4;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    static struct Nuitka_FrameObject *cache_frame_a0b5630f592dabaf40d43b29ec5e41b9 = NULL;

    struct Nuitka_FrameObject *frame_a0b5630f592dabaf40d43b29ec5e41b9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a0b5630f592dabaf40d43b29ec5e41b9, codeobj_a0b5630f592dabaf40d43b29ec5e41b9, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a0b5630f592dabaf40d43b29ec5e41b9 = cache_frame_a0b5630f592dabaf40d43b29ec5e41b9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a0b5630f592dabaf40d43b29ec5e41b9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a0b5630f592dabaf40d43b29ec5e41b9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_method;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_a0b5630f592dabaf40d43b29ec5e41b9->m_frame.f_lineno = 333;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__is_method_retryable, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 333;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 333;
        type_description_1 = "oooo";
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
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_and_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_status_forcelist );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 336;
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
    Py_DECREF( tmp_and_left_value_1 );
    tmp_compexpr_left_1 = par_status_code;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_status_forcelist );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_and_right_value_1 );
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
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 336;
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
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_and_left_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_total );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 340;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 343;
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
    Py_DECREF( tmp_and_left_value_2 );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_and_left_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_respect_retry_after_header );
    if ( tmp_and_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 341;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_3 );

        exception_lineno = 343;
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
    Py_DECREF( tmp_and_left_value_3 );
    tmp_and_left_value_4 = par_has_retry_after;

    CHECK_OBJECT( tmp_and_left_value_4 );
    tmp_and_left_truth_4 = CHECK_IF_TRUE( tmp_and_left_value_4 );
    if ( tmp_and_left_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;
        type_description_1 = "oooo";
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
    tmp_compexpr_left_2 = par_status_code;

    CHECK_OBJECT( tmp_compexpr_left_2 );
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_RETRY_AFTER_STATUS_CODES );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_4 = SEQUENCE_CONTAINS( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_and_right_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_3 = tmp_and_right_value_4;
    goto and_end_4;
    and_left_4:;
    tmp_and_right_value_3 = tmp_and_left_value_4;
    and_end_4:;
    Py_INCREF( tmp_and_right_value_3 );
    tmp_and_right_value_2 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    tmp_and_right_value_2 = tmp_and_left_value_3;
    and_end_3:;
    tmp_return_value = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_return_value = tmp_and_left_value_2;
    and_end_2:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a0b5630f592dabaf40d43b29ec5e41b9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a0b5630f592dabaf40d43b29ec5e41b9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a0b5630f592dabaf40d43b29ec5e41b9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a0b5630f592dabaf40d43b29ec5e41b9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a0b5630f592dabaf40d43b29ec5e41b9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a0b5630f592dabaf40d43b29ec5e41b9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a0b5630f592dabaf40d43b29ec5e41b9,
        type_description_1,
        par_self,
        par_method,
        par_status_code,
        par_has_retry_after
    );


    // Release cached frame.
    if ( frame_a0b5630f592dabaf40d43b29ec5e41b9 == cache_frame_a0b5630f592dabaf40d43b29ec5e41b9 )
    {
        Py_DECREF( frame_a0b5630f592dabaf40d43b29ec5e41b9 );
    }
    cache_frame_a0b5630f592dabaf40d43b29ec5e41b9 = NULL;

    assertFrameObject( frame_a0b5630f592dabaf40d43b29ec5e41b9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_13_is_retry );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_status_code );
    Py_DECREF( par_status_code );
    par_status_code = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_has_retry_after );
    Py_DECREF( par_has_retry_after );
    par_has_retry_after = NULL;

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

    CHECK_OBJECT( (PyObject *)par_status_code );
    Py_DECREF( par_status_code );
    par_status_code = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_has_retry_after );
    Py_DECREF( par_has_retry_after );
    par_has_retry_after = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_13_is_retry );
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


static PyObject *impl_urllib3$util$retry$$$function_14_is_exhausted( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_retry_counts = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_295cb65ffa295e5fda72c0f806f15990 = NULL;

    struct Nuitka_FrameObject *frame_295cb65ffa295e5fda72c0f806f15990;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_295cb65ffa295e5fda72c0f806f15990, codeobj_295cb65ffa295e5fda72c0f806f15990, module_urllib3$util$retry, sizeof(void *)+sizeof(void *) );
    frame_295cb65ffa295e5fda72c0f806f15990 = cache_frame_295cb65ffa295e5fda72c0f806f15990;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_295cb65ffa295e5fda72c0f806f15990 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_295cb65ffa295e5fda72c0f806f15990 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assign_source_1 = PyTuple_New( 5 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_total );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 348;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_1, 0, tmp_tuple_element_1 );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_connect );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 348;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_1, 1, tmp_tuple_element_1 );
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_read );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 348;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_1, 2, tmp_tuple_element_1 );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_redirect );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 348;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_1, 3, tmp_tuple_element_1 );
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_status );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 348;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_1, 4, tmp_tuple_element_1 );
    assert( var_retry_counts == NULL );
    var_retry_counts = tmp_assign_source_1;

    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_filter );
    assert( tmp_called_name_1 != NULL );
    tmp_args_element_name_1 = Py_None;
    tmp_args_element_name_2 = var_retry_counts;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_295cb65ffa295e5fda72c0f806f15990->m_frame.f_lineno = 349;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 349;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 349;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_retry_counts;
        assert( old != NULL );
        var_retry_counts = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_cond_value_1 = var_retry_counts;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;
        type_description_1 = "oo";
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
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_min );
    assert( tmp_called_name_2 != NULL );
    tmp_args_element_name_3 = var_retry_counts;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_295cb65ffa295e5fda72c0f806f15990->m_frame.f_lineno = 353;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 353;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_return_value = RICH_COMPARE_LT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 353;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_295cb65ffa295e5fda72c0f806f15990 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_295cb65ffa295e5fda72c0f806f15990 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_295cb65ffa295e5fda72c0f806f15990 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_295cb65ffa295e5fda72c0f806f15990, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_295cb65ffa295e5fda72c0f806f15990->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_295cb65ffa295e5fda72c0f806f15990, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_295cb65ffa295e5fda72c0f806f15990,
        type_description_1,
        par_self,
        var_retry_counts
    );


    // Release cached frame.
    if ( frame_295cb65ffa295e5fda72c0f806f15990 == cache_frame_295cb65ffa295e5fda72c0f806f15990 )
    {
        Py_DECREF( frame_295cb65ffa295e5fda72c0f806f15990 );
    }
    cache_frame_295cb65ffa295e5fda72c0f806f15990 = NULL;

    assertFrameObject( frame_295cb65ffa295e5fda72c0f806f15990 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_14_is_exhausted );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_retry_counts );
    Py_DECREF( var_retry_counts );
    var_retry_counts = NULL;

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

    Py_XDECREF( var_retry_counts );
    var_retry_counts = NULL;

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
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_14_is_exhausted );
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


static PyObject *impl_urllib3$util$retry$$$function_15_increment( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *par_response = python_pars[ 3 ];
    PyObject *par_error = python_pars[ 4 ];
    PyObject *par__pool = python_pars[ 5 ];
    PyObject *par__stacktrace = python_pars[ 6 ];
    PyObject *var_redirect = NULL;
    PyObject *var_status = NULL;
    PyObject *var_new_retry = NULL;
    PyObject *var_read = NULL;
    PyObject *var_redirect_location = NULL;
    PyObject *var_connect = NULL;
    PyObject *var_status_count = NULL;
    PyObject *var_total = NULL;
    PyObject *var_cause = NULL;
    PyObject *var_history = NULL;
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
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
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
    bool tmp_is_1;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_isnot_3;
    bool tmp_isnot_4;
    bool tmp_isnot_5;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
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
    PyObject *tmp_raise_type_4;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyObject *tmp_type_arg_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_7bcb743f023f7206f81d79fe3b6948a5 = NULL;

    struct Nuitka_FrameObject *frame_7bcb743f023f7206f81d79fe3b6948a5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7bcb743f023f7206f81d79fe3b6948a5, codeobj_7bcb743f023f7206f81d79fe3b6948a5, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7bcb743f023f7206f81d79fe3b6948a5 = cache_frame_7bcb743f023f7206f81d79fe3b6948a5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7bcb743f023f7206f81d79fe3b6948a5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7bcb743f023f7206f81d79fe3b6948a5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_total );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 374;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = Py_False;
    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
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
    tmp_and_right_value_1 = par_error;

    CHECK_OBJECT( tmp_and_right_value_1 );
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


        exception_lineno = 374;
        type_description_1 = "ooooooooooooooooo";
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
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "six" );
        exception_tb = NULL;

        exception_lineno = 376;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_type_arg_1 = par_error;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_args_element_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_args_element_name_1 != NULL );
    tmp_args_element_name_2 = par_error;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par__stacktrace;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_7bcb743f023f7206f81d79fe3b6948a5->m_frame.f_lineno = 376;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_raise_type_1 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain_reraise, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 376;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 376;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_total );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_total == NULL );
    var_total = tmp_assign_source_1;

    tmp_compare_left_1 = var_total;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_left_name_1 = var_total;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_2 = tmp_left_name_1;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 380;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    var_total = tmp_assign_source_2;

    branch_no_2:;
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_connect );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 382;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_connect == NULL );
    var_connect = tmp_assign_source_3;

    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_read );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_read == NULL );
    var_read = tmp_assign_source_4;

    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_redirect );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 384;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_redirect == NULL );
    var_redirect = tmp_assign_source_5;

    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_status );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 385;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_status_count == NULL );
    var_status_count = tmp_assign_source_6;

    tmp_assign_source_7 = const_str_plain_unknown;
    assert( var_cause == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_cause = tmp_assign_source_7;

    tmp_assign_source_8 = Py_None;
    assert( var_status == NULL );
    Py_INCREF( tmp_assign_source_8 );
    var_status = tmp_assign_source_8;

    tmp_assign_source_9 = Py_None;
    assert( var_redirect_location == NULL );
    Py_INCREF( tmp_assign_source_9 );
    var_redirect_location = tmp_assign_source_9;

    tmp_and_left_value_2 = par_error;

    CHECK_OBJECT( tmp_and_left_value_2 );
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;
        type_description_1 = "ooooooooooooooooo";
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
    tmp_called_instance_2 = par_self;

    CHECK_OBJECT( tmp_called_instance_2 );
    tmp_args_element_name_4 = par_error;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_7bcb743f023f7206f81d79fe3b6948a5->m_frame.f_lineno = 390;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_and_right_value_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__is_connection_error, call_args );
    }

    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    Py_INCREF( tmp_and_left_value_2 );
    tmp_cond_value_2 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 390;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_compare_left_2 = var_connect;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_False;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "six" );
        exception_tb = NULL;

        exception_lineno = 393;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_type_arg_2 = par_error;

    CHECK_OBJECT( tmp_type_arg_2 );
    tmp_args_element_name_5 = BUILTIN_TYPE1( tmp_type_arg_2 );
    assert( tmp_args_element_name_5 != NULL );
    tmp_args_element_name_6 = par_error;

    CHECK_OBJECT( tmp_args_element_name_6 );
    tmp_args_element_name_7 = par__stacktrace;

    CHECK_OBJECT( tmp_args_element_name_7 );
    frame_7bcb743f023f7206f81d79fe3b6948a5->m_frame.f_lineno = 393;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_raise_type_2 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_3, const_str_plain_reraise, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 393;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
    goto branch_end_4;
    branch_no_4:;
    tmp_compare_left_3 = var_connect;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_left_name_2 = var_connect;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_right_name_2 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_10 = tmp_left_name_2;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 395;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    var_connect = tmp_assign_source_10;

    branch_no_5:;
    branch_end_4:;
    goto branch_end_3;
    branch_no_3:;
    tmp_and_left_value_3 = par_error;

    CHECK_OBJECT( tmp_and_left_value_3 );
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        type_description_1 = "ooooooooooooooooo";
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
    tmp_called_instance_4 = par_self;

    CHECK_OBJECT( tmp_called_instance_4 );
    tmp_args_element_name_8 = par_error;

    CHECK_OBJECT( tmp_args_element_name_8 );
    frame_7bcb743f023f7206f81d79fe3b6948a5->m_frame.f_lineno = 397;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_and_right_value_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain__is_read_error, call_args );
    }

    if ( tmp_and_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_3 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    Py_INCREF( tmp_and_left_value_3 );
    tmp_cond_value_3 = tmp_and_left_value_3;
    and_end_3:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 397;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_compexpr_left_2 = var_read;

    CHECK_OBJECT( tmp_compexpr_left_2 );
    tmp_compexpr_right_2 = Py_False;
    tmp_or_left_value_1 = BOOL_FROM( tmp_compexpr_left_2 == tmp_compexpr_right_2 );
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    assert( !(tmp_or_left_truth_1 == -1) );
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_called_instance_5 = par_self;

    CHECK_OBJECT( tmp_called_instance_5 );
    tmp_args_element_name_9 = par_method;

    CHECK_OBJECT( tmp_args_element_name_9 );
    frame_7bcb743f023f7206f81d79fe3b6948a5->m_frame.f_lineno = 399;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_operand_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain__is_method_retryable, call_args );
    }

    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 399;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 399;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_4 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_4 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 399;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_instance_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_called_instance_6 == NULL ))
    {
        tmp_called_instance_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "six" );
        exception_tb = NULL;

        exception_lineno = 400;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_type_arg_3 = par_error;

    CHECK_OBJECT( tmp_type_arg_3 );
    tmp_args_element_name_10 = BUILTIN_TYPE1( tmp_type_arg_3 );
    assert( tmp_args_element_name_10 != NULL );
    tmp_args_element_name_11 = par_error;

    CHECK_OBJECT( tmp_args_element_name_11 );
    tmp_args_element_name_12 = par__stacktrace;

    CHECK_OBJECT( tmp_args_element_name_12 );
    frame_7bcb743f023f7206f81d79fe3b6948a5->m_frame.f_lineno = 400;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_raise_type_3 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_6, const_str_plain_reraise, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 400;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    exception_lineno = 400;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
    goto branch_end_7;
    branch_no_7:;
    tmp_compare_left_4 = var_read;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = Py_None;
    tmp_isnot_3 = ( tmp_compare_left_4 != tmp_compare_right_4 );
    if ( tmp_isnot_3 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_left_name_3 = var_read;

    CHECK_OBJECT( tmp_left_name_3 );
    tmp_right_name_3 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_3, tmp_right_name_3 );
    tmp_assign_source_11 = tmp_left_name_3;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 402;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    var_read = tmp_assign_source_11;

    branch_no_8:;
    branch_end_7:;
    goto branch_end_6;
    branch_no_6:;
    tmp_and_left_value_4 = par_response;

    CHECK_OBJECT( tmp_and_left_value_4 );
    tmp_and_left_truth_4 = CHECK_IF_TRUE( tmp_and_left_value_4 );
    if ( tmp_and_left_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 404;
        type_description_1 = "ooooooooooooooooo";
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
    tmp_called_instance_7 = par_response;

    CHECK_OBJECT( tmp_called_instance_7 );
    frame_7bcb743f023f7206f81d79fe3b6948a5->m_frame.f_lineno = 404;
    tmp_and_right_value_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_get_redirect_location );
    if ( tmp_and_right_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 404;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_5 = tmp_and_right_value_4;
    goto and_end_4;
    and_left_4:;
    Py_INCREF( tmp_and_left_value_4 );
    tmp_cond_value_5 = tmp_and_left_value_4;
    and_end_4:;
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 404;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_compare_left_5 = var_redirect;

    CHECK_OBJECT( tmp_compare_left_5 );
    tmp_compare_right_5 = Py_None;
    tmp_isnot_4 = ( tmp_compare_left_5 != tmp_compare_right_5 );
    if ( tmp_isnot_4 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_left_name_4 = var_redirect;

    CHECK_OBJECT( tmp_left_name_4 );
    tmp_right_name_4 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_4, tmp_right_name_4 );
    tmp_assign_source_12 = tmp_left_name_4;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 407;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    var_redirect = tmp_assign_source_12;

    branch_no_10:;
    tmp_assign_source_13 = const_str_digest_93b5718dbdad50e34931a5c649b12b14;
    {
        PyObject *old = var_cause;
        assert( old != NULL );
        var_cause = tmp_assign_source_13;
        Py_INCREF( var_cause );
        Py_DECREF( old );
    }

    tmp_called_instance_8 = par_response;

    CHECK_OBJECT( tmp_called_instance_8 );
    frame_7bcb743f023f7206f81d79fe3b6948a5->m_frame.f_lineno = 409;
    tmp_assign_source_14 = CALL_METHOD_NO_ARGS( tmp_called_instance_8, const_str_plain_get_redirect_location );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 409;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_redirect_location;
        assert( old != NULL );
        var_redirect_location = tmp_assign_source_14;
        Py_DECREF( old );
    }

    tmp_source_name_7 = par_response;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_assign_source_15 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_status );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 410;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_status;
        assert( old != NULL );
        var_status = tmp_assign_source_15;
        Py_DECREF( old );
    }

    goto branch_end_9;
    branch_no_9:;
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ResponseError );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ResponseError );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ResponseError" );
        exception_tb = NULL;

        exception_lineno = 415;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_16 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_GENERIC_ERROR );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 415;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_cause;
        assert( old != NULL );
        var_cause = tmp_assign_source_16;
        Py_DECREF( old );
    }

    tmp_and_left_value_5 = par_response;

    CHECK_OBJECT( tmp_and_left_value_5 );
    tmp_and_left_truth_5 = CHECK_IF_TRUE( tmp_and_left_value_5 );
    if ( tmp_and_left_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 416;
        type_description_1 = "ooooooooooooooooo";
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
    tmp_source_name_9 = par_response;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_and_right_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_status );
    if ( tmp_and_right_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 416;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_6 = tmp_and_right_value_5;
    goto and_end_5;
    and_left_5:;
    Py_INCREF( tmp_and_left_value_5 );
    tmp_cond_value_6 = tmp_and_left_value_5;
    and_end_5:;
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        exception_lineno = 416;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_compare_left_6 = var_status_count;

    CHECK_OBJECT( tmp_compare_left_6 );
    tmp_compare_right_6 = Py_None;
    tmp_isnot_5 = ( tmp_compare_left_6 != tmp_compare_right_6 );
    if ( tmp_isnot_5 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_left_name_5 = var_status_count;

    CHECK_OBJECT( tmp_left_name_5 );
    tmp_right_name_5 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_5, tmp_right_name_5 );
    tmp_assign_source_17 = tmp_left_name_5;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 418;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    var_status_count = tmp_assign_source_17;

    branch_no_12:;
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ResponseError );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ResponseError );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ResponseError" );
        exception_tb = NULL;

        exception_lineno = 419;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_SPECIFIC_ERROR );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 419;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_format );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 419;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_12 = par_response;

    CHECK_OBJECT( tmp_source_name_12 );
    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_status );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 419;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_status_code;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_7bcb743f023f7206f81d79fe3b6948a5->m_frame.f_lineno = 419;
    tmp_assign_source_18 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 419;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_cause;
        assert( old != NULL );
        var_cause = tmp_assign_source_18;
        Py_DECREF( old );
    }

    tmp_source_name_13 = par_response;

    CHECK_OBJECT( tmp_source_name_13 );
    tmp_assign_source_19 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_status );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 420;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_status;
        assert( old != NULL );
        var_status = tmp_assign_source_19;
        Py_DECREF( old );
    }

    branch_no_11:;
    branch_end_9:;
    branch_end_6:;
    branch_end_3:;
    tmp_source_name_14 = par_self;

    CHECK_OBJECT( tmp_source_name_14 );
    tmp_left_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_history );
    if ( tmp_left_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 422;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_6 = PyTuple_New( 1 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_RequestHistory );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestHistory );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "RequestHistory" );
        exception_tb = NULL;

        exception_lineno = 423;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_13 = par_method;

    CHECK_OBJECT( tmp_args_element_name_13 );
    tmp_args_element_name_14 = par_url;

    CHECK_OBJECT( tmp_args_element_name_14 );
    tmp_args_element_name_15 = par_error;

    CHECK_OBJECT( tmp_args_element_name_15 );
    tmp_args_element_name_16 = var_status;

    if ( tmp_args_element_name_16 == NULL )
    {
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "status" );
        exception_tb = NULL;

        exception_lineno = 423;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_17 = var_redirect_location;

    if ( tmp_args_element_name_17 == NULL )
    {
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "redirect_location" );
        exception_tb = NULL;

        exception_lineno = 423;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_7bcb743f023f7206f81d79fe3b6948a5->m_frame.f_lineno = 423;
    {
        PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_2, call_args );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_6 );

        exception_lineno = 423;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_6, 0, tmp_tuple_element_1 );
    tmp_assign_source_20 = BINARY_OPERATION_ADD( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_left_name_6 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 422;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_history == NULL );
    var_history = tmp_assign_source_20;

    tmp_source_name_15 = par_self;

    CHECK_OBJECT( tmp_source_name_15 );
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_new );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 426;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_2 = _PyDict_NewPresized( 6 );
    tmp_dict_value_2 = var_total;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_total;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = var_connect;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "connect" );
        exception_tb = NULL;

        exception_lineno = 428;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = const_str_plain_connect;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = var_read;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "read" );
        exception_tb = NULL;

        exception_lineno = 429;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = const_str_plain_read;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_5 = var_redirect;

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "redirect" );
        exception_tb = NULL;

        exception_lineno = 430;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_5 = const_str_plain_redirect;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = var_status_count;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "status_count" );
        exception_tb = NULL;

        exception_lineno = 431;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_6 = const_str_plain_status;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_7 = var_history;

    CHECK_OBJECT( tmp_dict_value_7 );
    tmp_dict_key_7 = const_str_plain_history;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    frame_7bcb743f023f7206f81d79fe3b6948a5->m_frame.f_lineno = 426;
    tmp_assign_source_21 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 426;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_new_retry == NULL );
    var_new_retry = tmp_assign_source_21;

    tmp_called_instance_9 = var_new_retry;

    CHECK_OBJECT( tmp_called_instance_9 );
    frame_7bcb743f023f7206f81d79fe3b6948a5->m_frame.f_lineno = 435;
    tmp_cond_value_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_9, const_str_plain_is_exhausted );
    if ( tmp_cond_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 435;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_7 );

        exception_lineno = 435;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_MaxRetryError );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MaxRetryError );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "MaxRetryError" );
        exception_tb = NULL;

        exception_lineno = 436;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_18 = par__pool;

    CHECK_OBJECT( tmp_args_element_name_18 );
    tmp_args_element_name_19 = par_url;

    CHECK_OBJECT( tmp_args_element_name_19 );
    tmp_or_left_value_2 = par_error;

    CHECK_OBJECT( tmp_or_left_value_2 );
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 436;
        type_description_1 = "ooooooooooooooooo";
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
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ResponseError );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ResponseError );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ResponseError" );
        exception_tb = NULL;

        exception_lineno = 436;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_21 = var_cause;

    if ( tmp_args_element_name_21 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "cause" );
        exception_tb = NULL;

        exception_lineno = 436;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_7bcb743f023f7206f81d79fe3b6948a5->m_frame.f_lineno = 436;
    {
        PyObject *call_args[] = { tmp_args_element_name_21 };
        tmp_or_right_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_or_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 436;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_20 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    Py_INCREF( tmp_or_left_value_2 );
    tmp_args_element_name_20 = tmp_or_left_value_2;
    or_end_2:;
    frame_7bcb743f023f7206f81d79fe3b6948a5->m_frame.f_lineno = 436;
    {
        PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20 };
        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_20 );
    if ( tmp_raise_type_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 436;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_4;
    exception_lineno = 436;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_13:;
    tmp_called_instance_10 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_called_instance_10 == NULL ))
    {
        tmp_called_instance_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_called_instance_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 438;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_22 = const_str_digest_adf0407d4b5f2535bca90601d487b350;
    tmp_args_element_name_23 = par_url;

    CHECK_OBJECT( tmp_args_element_name_23 );
    tmp_args_element_name_24 = var_new_retry;

    CHECK_OBJECT( tmp_args_element_name_24 );
    frame_7bcb743f023f7206f81d79fe3b6948a5->m_frame.f_lineno = 438;
    {
        PyObject *call_args[] = { tmp_args_element_name_22, tmp_args_element_name_23, tmp_args_element_name_24 };
        tmp_unused = CALL_METHOD_WITH_ARGS3( tmp_called_instance_10, const_str_plain_debug, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 438;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7bcb743f023f7206f81d79fe3b6948a5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7bcb743f023f7206f81d79fe3b6948a5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7bcb743f023f7206f81d79fe3b6948a5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7bcb743f023f7206f81d79fe3b6948a5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7bcb743f023f7206f81d79fe3b6948a5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7bcb743f023f7206f81d79fe3b6948a5,
        type_description_1,
        par_self,
        par_method,
        par_url,
        par_response,
        par_error,
        par__pool,
        par__stacktrace,
        var_redirect,
        var_status,
        var_new_retry,
        var_read,
        var_redirect_location,
        var_connect,
        var_status_count,
        var_total,
        var_cause,
        var_history
    );


    // Release cached frame.
    if ( frame_7bcb743f023f7206f81d79fe3b6948a5 == cache_frame_7bcb743f023f7206f81d79fe3b6948a5 )
    {
        Py_DECREF( frame_7bcb743f023f7206f81d79fe3b6948a5 );
    }
    cache_frame_7bcb743f023f7206f81d79fe3b6948a5 = NULL;

    assertFrameObject( frame_7bcb743f023f7206f81d79fe3b6948a5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_new_retry;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_15_increment );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_redirect );
    var_redirect = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par__stacktrace );
    Py_DECREF( par__stacktrace );
    par__stacktrace = NULL;

    CHECK_OBJECT( (PyObject *)par__pool );
    Py_DECREF( par__pool );
    par__pool = NULL;

    CHECK_OBJECT( (PyObject *)par_response );
    Py_DECREF( par_response );
    par_response = NULL;

    CHECK_OBJECT( (PyObject *)var_new_retry );
    Py_DECREF( var_new_retry );
    var_new_retry = NULL;

    Py_XDECREF( var_read );
    var_read = NULL;

    Py_XDECREF( var_redirect_location );
    var_redirect_location = NULL;

    Py_XDECREF( var_connect );
    var_connect = NULL;

    Py_XDECREF( var_status_count );
    var_status_count = NULL;

    CHECK_OBJECT( (PyObject *)par_error );
    Py_DECREF( par_error );
    par_error = NULL;

    CHECK_OBJECT( (PyObject *)var_total );
    Py_DECREF( var_total );
    var_total = NULL;

    Py_XDECREF( var_cause );
    var_cause = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)var_history );
    Py_DECREF( var_history );
    var_history = NULL;

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

    Py_XDECREF( var_redirect );
    var_redirect = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par__stacktrace );
    Py_DECREF( par__stacktrace );
    par__stacktrace = NULL;

    CHECK_OBJECT( (PyObject *)par__pool );
    Py_DECREF( par__pool );
    par__pool = NULL;

    CHECK_OBJECT( (PyObject *)par_response );
    Py_DECREF( par_response );
    par_response = NULL;

    Py_XDECREF( var_new_retry );
    var_new_retry = NULL;

    Py_XDECREF( var_read );
    var_read = NULL;

    Py_XDECREF( var_redirect_location );
    var_redirect_location = NULL;

    Py_XDECREF( var_connect );
    var_connect = NULL;

    Py_XDECREF( var_status_count );
    var_status_count = NULL;

    CHECK_OBJECT( (PyObject *)par_error );
    Py_DECREF( par_error );
    par_error = NULL;

    Py_XDECREF( var_total );
    var_total = NULL;

    Py_XDECREF( var_cause );
    var_cause = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    Py_XDECREF( var_history );
    var_history = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_15_increment );
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


static PyObject *impl_urllib3$util$retry$$$function_16___repr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_type_arg_1;
    static struct Nuitka_FrameObject *cache_frame_f643665557390489191f36518cc053ae = NULL;

    struct Nuitka_FrameObject *frame_f643665557390489191f36518cc053ae;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f643665557390489191f36518cc053ae, codeobj_f643665557390489191f36518cc053ae, module_urllib3$util$retry, sizeof(void *) );
    frame_f643665557390489191f36518cc053ae = cache_frame_f643665557390489191f36518cc053ae;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f643665557390489191f36518cc053ae );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f643665557390489191f36518cc053ae ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = const_str_digest_541aafc09da4591a658272cb389856a5;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
    assert( tmp_called_name_1 != NULL );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_type_arg_1 = par_self;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_dict_value_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_dict_value_1 != NULL );
    tmp_dict_key_1 = const_str_plain_cls;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_self;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_self;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_f643665557390489191f36518cc053ae->m_frame.f_lineno = 444;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 444;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f643665557390489191f36518cc053ae );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f643665557390489191f36518cc053ae );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f643665557390489191f36518cc053ae );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f643665557390489191f36518cc053ae, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f643665557390489191f36518cc053ae->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f643665557390489191f36518cc053ae, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f643665557390489191f36518cc053ae,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_f643665557390489191f36518cc053ae == cache_frame_f643665557390489191f36518cc053ae )
    {
        Py_DECREF( frame_f643665557390489191f36518cc053ae );
    }
    cache_frame_f643665557390489191f36518cc053ae = NULL;

    assertFrameObject( frame_f643665557390489191f36518cc053ae );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_16___repr__ );
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
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_16___repr__ );
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



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_10__is_connection_error(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_10__is_connection_error,
        const_str_plain__is_connection_error,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_86c1f4c46122c48f7dc102e991f06ee4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        const_str_digest_7fb2c7a5424e28db1a201939b12c8399,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_11__is_read_error(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_11__is_read_error,
        const_str_plain__is_read_error,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e3d3264e4852b9ff6312a484aeb14a34,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        const_str_digest_be3c2e7a479fa0076df719ca5a930f72,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_12__is_method_retryable(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_12__is_method_retryable,
        const_str_plain__is_method_retryable,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1985cb0e4460226e1d6e50538c5c789c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        const_str_digest_cfc303935f94cd9bd4759913289d5001,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_13_is_retry( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_13_is_retry,
        const_str_plain_is_retry,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a0b5630f592dabaf40d43b29ec5e41b9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        const_str_digest_25ded409e041cb7d54dbe844ec9f890e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_14_is_exhausted(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_14_is_exhausted,
        const_str_plain_is_exhausted,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_295cb65ffa295e5fda72c0f806f15990,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        const_str_digest_02862dad88b03d79d6c3df8ba5e79ff6,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_15_increment( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_15_increment,
        const_str_plain_increment,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7bcb743f023f7206f81d79fe3b6948a5,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        const_str_digest_55857326d6523e3f76c12c271f391764,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_16___repr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_16___repr__,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f643665557390489191f36518cc053ae,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_1___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7e34eade0be174bb2e5653c6ede7f96b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_2_new(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_2_new,
        const_str_plain_new,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c03bd9bb95ed6edf0cf936e76b585027,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_3_from_int( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_3_from_int,
        const_str_plain_from_int,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9d3b0a23108e65e56258ca582838dde3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        const_str_digest_54874c179a81b955e41d4fd1580cddd0,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_4_get_backoff_time(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_4_get_backoff_time,
        const_str_plain_get_backoff_time,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c1d1bfbcac640d98cac8d0f6a2d1d675,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        const_str_digest_fc514c378d42c4c0744f71a520936e98,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_4_get_backoff_time$$$function_1_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_4_get_backoff_time$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_294ad7f55665ac659eb2bef0f65c6a8b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_5_parse_retry_after(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_5_parse_retry_after,
        const_str_plain_parse_retry_after,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_51c4e754bfdc16e60d974ecf1e836802,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_6_get_retry_after(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_6_get_retry_after,
        const_str_plain_get_retry_after,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_942d938520f532c57cb2fbf54f07cb37,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        const_str_digest_9db0c4e907a20455d898e46f602427d6,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_7_sleep_for_retry( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_7_sleep_for_retry,
        const_str_plain_sleep_for_retry,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_aab5f1347fdcc23e625f7c7379404f49,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_8__sleep_backoff(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_8__sleep_backoff,
        const_str_plain__sleep_backoff,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5e4d1287ab116fc1e31653164aebc650,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_9_sleep( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_9_sleep,
        const_str_plain_sleep,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b5a4ae67334a9f831279692b99cc45a0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        const_str_digest_ed2c0b12f2250d745518387535c4958e,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$util$retry =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.util.retry",   /* m_name */
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

MOD_INIT_DECL( urllib3$util$retry )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$util$retry );
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
    puts("urllib3.util.retry: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.util.retry: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.util.retry: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$util$retry" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$util$retry = Py_InitModule4(
        "urllib3.util.retry",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3$util$retry = PyModule_Create( &mdef_urllib3$util$retry );
#endif

    moduledict_urllib3$util$retry = MODULE_DICT( module_urllib3$util$retry );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3$util$retry,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$retry,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_urllib3$util$retry,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$retry,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3$util$retry );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd, module_urllib3$util$retry );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_classmethod_arg_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_defaults_6;
    PyObject *tmp_dict_name_1;
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
    PyObject *tmp_key_name_1;
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
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_b32bebd9e7a464ebcb5245aa0ec564c8_2 = NULL;

    struct Nuitka_FrameObject *frame_b32bebd9e7a464ebcb5245aa0ec564c8_2;

    struct Nuitka_FrameObject *frame_18423b4a4fc7edfe29af4ebd1505456a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;
    PyObject *locals_Retry_29 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_18423b4a4fc7edfe29af4ebd1505456a = MAKE_MODULE_FRAME( codeobj_18423b4a4fc7edfe29af4ebd1505456a, module_urllib3$util$retry );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_18423b4a4fc7edfe29af4ebd1505456a );
    assert( Py_REFCNT( frame_18423b4a4fc7edfe29af4ebd1505456a ) == 2 );

    // Framed code:
    frame_18423b4a4fc7edfe29af4ebd1505456a->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_3 );
    tmp_name_name_1 = const_str_plain_time;
    tmp_globals_name_1 = (PyObject *)moduledict_urllib3$util$retry;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_18423b4a4fc7edfe29af4ebd1505456a->m_frame.f_lineno = 2;
    tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_4 );
    tmp_name_name_2 = const_str_plain_logging;
    tmp_globals_name_2 = (PyObject *)moduledict_urllib3$util$retry;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_18423b4a4fc7edfe29af4ebd1505456a->m_frame.f_lineno = 3;
    tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_5 );
    tmp_name_name_3 = const_str_plain_collections;
    tmp_globals_name_3 = (PyObject *)moduledict_urllib3$util$retry;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_namedtuple_tuple;
    tmp_level_name_3 = const_int_0;
    frame_18423b4a4fc7edfe29af4ebd1505456a->m_frame.f_lineno = 4;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_namedtuple );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_namedtuple, tmp_assign_source_6 );
    tmp_name_name_4 = const_str_plain_itertools;
    tmp_globals_name_4 = (PyObject *)moduledict_urllib3$util$retry;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_takewhile_tuple;
    tmp_level_name_4 = const_int_0;
    frame_18423b4a4fc7edfe29af4ebd1505456a->m_frame.f_lineno = 5;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_takewhile );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_takewhile, tmp_assign_source_7 );
    tmp_name_name_5 = const_str_plain_email;
    tmp_globals_name_5 = (PyObject *)moduledict_urllib3$util$retry;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = Py_None;
    tmp_level_name_5 = const_int_0;
    frame_18423b4a4fc7edfe29af4ebd1505456a->m_frame.f_lineno = 6;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_email, tmp_assign_source_8 );
    tmp_name_name_6 = const_str_plain_re;
    tmp_globals_name_6 = (PyObject *)moduledict_urllib3$util$retry;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = Py_None;
    tmp_level_name_6 = const_int_0;
    frame_18423b4a4fc7edfe29af4ebd1505456a->m_frame.f_lineno = 7;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_9 );
    tmp_name_name_7 = const_str_plain_exceptions;
    tmp_globals_name_7 = (PyObject *)moduledict_urllib3$util$retry;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple;
    tmp_level_name_7 = const_int_pos_2;
    frame_18423b4a4fc7edfe29af4ebd1505456a->m_frame.f_lineno = 9;
    tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_10;

    // Tried code:
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_ConnectTimeoutError );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError, tmp_assign_source_11 );
    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_MaxRetryError );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_MaxRetryError, tmp_assign_source_12 );
    tmp_import_name_from_6 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_ProtocolError );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ProtocolError, tmp_assign_source_13 );
    tmp_import_name_from_7 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_ReadTimeoutError );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError, tmp_assign_source_14 );
    tmp_import_name_from_8 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_ResponseError );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ResponseError, tmp_assign_source_15 );
    tmp_import_name_from_9 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_InvalidHeader );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_InvalidHeader, tmp_assign_source_16 );
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

    tmp_name_name_8 = const_str_plain_packages;
    tmp_globals_name_8 = (PyObject *)moduledict_urllib3$util$retry;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_str_plain_six_tuple;
    tmp_level_name_8 = const_int_pos_2;
    frame_18423b4a4fc7edfe29af4ebd1505456a->m_frame.f_lineno = 17;
    tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_six );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_17 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_logging );

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

        exception_lineno = 20;

        goto frame_exception_exit_1;
    }

    frame_18423b4a4fc7edfe29af4ebd1505456a->m_frame.f_lineno = 20;
    tmp_assign_source_18 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM( const_tuple_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd_tuple, 0 ) );

    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_log, tmp_assign_source_18 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_namedtuple );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_namedtuple );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "namedtuple" );
        exception_tb = NULL;

        exception_lineno = 24;

        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = const_str_plain_RequestHistory;
    tmp_call_arg_element_2 = LIST_COPY( const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list );
    frame_18423b4a4fc7edfe29af4ebd1505456a->m_frame.f_lineno = 24;
    {
        PyObject *call_args[] = { tmp_call_arg_element_1, tmp_call_arg_element_2 };
        tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_RequestHistory, tmp_assign_source_19 );
    // Tried code:
    tmp_set_locals = PyDict_New();
    locals_Retry_29 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd;
    tmp_res = PyDict_SetItem( locals_Retry_29, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_61e2520c56b660178d4348ecd9080d8c;
    tmp_res = PyDict_SetItem( locals_Retry_29, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_frozenset_1a0f32928f8873f1725a0613d7667aec;
    tmp_res = PyDict_SetItem( locals_Retry_29, const_str_plain_DEFAULT_METHOD_WHITELIST, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_frozenset_faddbefdbc5f932eb173a00af9a27af9;
    tmp_res = PyDict_SetItem( locals_Retry_29, const_str_plain_RETRY_AFTER_STATUS_CODES, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_frozenset_231df93ff344aab3fe166a4d2164e861;
    tmp_res = PyDict_SetItem( locals_Retry_29, const_str_plain_DEFAULT_REDIRECT_HEADERS_BLACKLIST, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_int_pos_120;
    tmp_res = PyDict_SetItem( locals_Retry_29, const_str_plain_BACKOFF_MAX, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b32bebd9e7a464ebcb5245aa0ec564c8_2, codeobj_b32bebd9e7a464ebcb5245aa0ec564c8, module_urllib3$util$retry, 0 );
    frame_b32bebd9e7a464ebcb5245aa0ec564c8_2 = cache_frame_b32bebd9e7a464ebcb5245aa0ec564c8_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b32bebd9e7a464ebcb5245aa0ec564c8_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b32bebd9e7a464ebcb5245aa0ec564c8_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_defaults_1 = PyTuple_New( 13 );
    tmp_tuple_element_1 = const_int_pos_10;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 2, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 3, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 4, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyDict_GetItem( locals_Retry_29, const_str_plain_DEFAULT_METHOD_WHITELIST );

    if ( tmp_tuple_element_1 == NULL )
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_DEFAULT_METHOD_WHITELIST );

        if (unlikely( tmp_tuple_element_1 == NULL ))
        {
            tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_METHOD_WHITELIST );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            Py_DECREF( tmp_defaults_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "DEFAULT_METHOD_WHITELIST" );
            exception_tb = NULL;

            exception_lineno = 168;

            goto frame_exception_exit_2;
        }

    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 5, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 6, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_0;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 7, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_True;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 8, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_True;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 9, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 10, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_True;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 11, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyDict_GetItem( locals_Retry_29, const_str_plain_DEFAULT_REDIRECT_HEADERS_BLACKLIST );

    if ( tmp_tuple_element_1 == NULL )
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_DEFAULT_REDIRECT_HEADERS_BLACKLIST );

        if (unlikely( tmp_tuple_element_1 == NULL ))
        {
            tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_REDIRECT_HEADERS_BLACKLIST );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            Py_DECREF( tmp_defaults_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "DEFAULT_REDIRECT_HEADERS_BLACKLIST" );
            exception_tb = NULL;

            exception_lineno = 175;

            goto frame_exception_exit_2;
        }

    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 12, tmp_tuple_element_1 );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_1___init__( tmp_defaults_1 );
    tmp_res = PyDict_SetItem( locals_Retry_29, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;

        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_2_new(  );
    tmp_res = PyDict_SetItem( locals_Retry_29, const_str_plain_new, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_defaults_2 = const_tuple_true_none_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_classmethod_arg_1 = MAKE_FUNCTION_urllib3$util$retry$$$function_3_from_int( tmp_defaults_2 );
    tmp_dictset_value = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_1 );
    Py_DECREF( tmp_classmethod_arg_1 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_Retry_29, const_str_plain_from_int, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;

        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b32bebd9e7a464ebcb5245aa0ec564c8_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b32bebd9e7a464ebcb5245aa0ec564c8_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b32bebd9e7a464ebcb5245aa0ec564c8_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b32bebd9e7a464ebcb5245aa0ec564c8_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b32bebd9e7a464ebcb5245aa0ec564c8_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b32bebd9e7a464ebcb5245aa0ec564c8_2,
        type_description_2
    );


    // Release cached frame.
    if ( frame_b32bebd9e7a464ebcb5245aa0ec564c8_2 == cache_frame_b32bebd9e7a464ebcb5245aa0ec564c8_2 )
    {
        Py_DECREF( frame_b32bebd9e7a464ebcb5245aa0ec564c8_2 );
    }
    cache_frame_b32bebd9e7a464ebcb5245aa0ec564c8_2 = NULL;

    assertFrameObject( frame_b32bebd9e7a464ebcb5245aa0ec564c8_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_3;
    skip_nested_handling_1:;
    tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_4_get_backoff_time(  );
    tmp_res = PyDict_SetItem( locals_Retry_29, const_str_plain_get_backoff_time, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_5_parse_retry_after(  );
    tmp_res = PyDict_SetItem( locals_Retry_29, const_str_plain_parse_retry_after, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_6_get_retry_after(  );
    tmp_res = PyDict_SetItem( locals_Retry_29, const_str_plain_get_retry_after, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_defaults_3 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_7_sleep_for_retry( tmp_defaults_3 );
    tmp_res = PyDict_SetItem( locals_Retry_29, const_str_plain_sleep_for_retry, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_8__sleep_backoff(  );
    tmp_res = PyDict_SetItem( locals_Retry_29, const_str_plain__sleep_backoff, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_defaults_4 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_9_sleep( tmp_defaults_4 );
    tmp_res = PyDict_SetItem( locals_Retry_29, const_str_plain_sleep, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_10__is_connection_error(  );
    tmp_res = PyDict_SetItem( locals_Retry_29, const_str_plain__is_connection_error, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_11__is_read_error(  );
    tmp_res = PyDict_SetItem( locals_Retry_29, const_str_plain__is_read_error, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_12__is_method_retryable(  );
    tmp_res = PyDict_SetItem( locals_Retry_29, const_str_plain__is_method_retryable, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_defaults_5 = const_tuple_false_tuple;
    Py_INCREF( tmp_defaults_5 );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_13_is_retry( tmp_defaults_5 );
    tmp_res = PyDict_SetItem( locals_Retry_29, const_str_plain_is_retry, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_14_is_exhausted(  );
    tmp_res = PyDict_SetItem( locals_Retry_29, const_str_plain_is_exhausted, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_defaults_6 = const_tuple_none_none_none_none_none_none_tuple;
    Py_INCREF( tmp_defaults_6 );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_15_increment( tmp_defaults_6 );
    tmp_res = PyDict_SetItem( locals_Retry_29, const_str_plain_increment, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_16___repr__(  );
    tmp_res = PyDict_SetItem( locals_Retry_29, const_str_plain___repr__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_outline_return_value_1 = locals_Retry_29;
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    Py_DECREF( locals_Retry_29 );
    locals_Retry_29 = NULL;
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

    Py_DECREF( locals_Retry_29 );
    locals_Retry_29 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 29;
    goto try_except_handler_2;
    outline_result_1:;
    tmp_assign_source_20 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_20;

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
    tmp_assign_source_21 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_2;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_21 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_21 );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_21;

    tmp_called_name_2 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_args_element_name_1 = const_str_plain_Retry;
    tmp_args_element_name_2 = const_tuple_type_object_tuple;
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_18423b4a4fc7edfe29af4ebd1505456a->m_frame.f_lineno = 29;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_22;

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
    tmp_assign_source_23 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_23 );
    UPDATE_STRING_DICT0( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_Retry, tmp_assign_source_23 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_Retry );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Retry );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Retry" );
        exception_tb = NULL;

        exception_lineno = 450;

        goto frame_exception_exit_1;
    }

    frame_18423b4a4fc7edfe29af4ebd1505456a->m_frame.f_lineno = 450;
    tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_int_pos_3_tuple, 0 ) );

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 450;

        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_Retry );

    if (unlikely( tmp_assattr_target_1 == NULL ))
    {
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Retry );
    }

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Retry" );
        exception_tb = NULL;

        exception_lineno = 450;

        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_DEFAULT, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 450;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_18423b4a4fc7edfe29af4ebd1505456a );
#endif
    popFrameStack();

    assertFrameObject( frame_18423b4a4fc7edfe29af4ebd1505456a );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_18423b4a4fc7edfe29af4ebd1505456a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_18423b4a4fc7edfe29af4ebd1505456a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_18423b4a4fc7edfe29af4ebd1505456a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_18423b4a4fc7edfe29af4ebd1505456a, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;

    return MOD_RETURN_VALUE( module_urllib3$util$retry );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
