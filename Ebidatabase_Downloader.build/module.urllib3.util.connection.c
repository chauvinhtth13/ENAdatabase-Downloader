/* Generated code for Python source for module 'urllib3.util.connection'
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

/* The _module_urllib3$util$connection is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$util$connection;
PyDictObject *moduledict_urllib3$util$connection;

/* The module constants used, if any. */
static PyObject *const_tuple_d6ff841a6ba76544c57bcb9789068307_tuple;
static PyObject *const_str_plain_af;
extern PyObject *const_str_plain_err;
static PyObject *const_tuple_str_plain_NoWayToWaitForSocketError_str_plain_wait_for_read_tuple;
static PyObject *const_str_plain_has_ipv6;
extern PyObject *const_str_plain_setsockopt;
static PyObject *const_str_digest_e055b71b959d7386600233cd6fd5936b;
static PyObject *const_str_digest_595445e1dc171ee3baa1f78d32383a82;
static PyObject *const_str_plain_socktype;
static PyObject *const_tuple_str_plain_sock_str_plain_options_str_plain_opt_tuple;
static PyObject *const_str_digest_bf7ea3c7e38d6b386518702b965c150a;
extern PyObject *const_str_plain_is_appengine_sandbox;
extern PyObject *const_str_plain_source_address;
static PyObject *const_tuple_str_plain__appengine_environ_tuple;
extern PyObject *const_str_plain_settimeout;
extern PyObject *const_str_plain_sock;
extern PyObject *const_str_plain_timeout;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain__GLOBAL_DEFAULT_TIMEOUT;
static PyObject *const_tuple_str_plain_family_tuple;
extern PyObject *const_str_plain_proto;
extern PyObject *const_str_plain_AF_INET;
extern PyObject *const_float_0_0;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_tuple_str_plain_conn_str_plain_sock_tuple;
static PyObject *const_str_digest_fd9e06b160161212aff03b5b4dc7aa13;
extern PyObject *const_str_plain_family;
extern PyObject *const_str_plain_create_connection;
static PyObject *const_dict_f0ddba86f2ff0b11c47720a0dc503699;
static PyObject *const_str_plain_sa;
static PyObject *const_tuple_str_digest_3f9fec55820f857461da4f1e12840da5_tuple;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_strip;
static PyObject *const_str_digest_debf9c9d34358798db48d27eeb44508b;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_SOCK_STREAM;
extern PyObject *const_str_plain_is_connection_dropped;
extern PyObject *const_int_0;
static PyObject *const_str_plain_allowed_gai_family;
extern PyObject *const_str_plain_e;
static PyObject *const_str_plain_canonname;
extern PyObject *const_str_plain_address;
extern PyObject *const_str_plain_port;
extern PyObject *const_str_plain_error;
extern PyObject *const_str_plain_bind;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_socket_options;
extern PyObject *const_str_plain_AF_INET6;
extern PyObject *const_tuple_str_chr_91_tuple;
static PyObject *const_str_plain__appengine_environ;
extern PyObject *const_str_plain_options;
static PyObject *const_str_plain__set_socket_options;
static PyObject *const_str_digest_9a8281a0cd80f856cf9186c57571aa88;
extern PyObject *const_int_pos_2;
static PyObject *const_tuple_str_digest_d3595e84d8b1645204321774ba0ba260_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_res;
extern PyObject *const_str_chr_91;
static PyObject *const_str_digest_3f9fec55820f857461da4f1e12840da5;
extern PyObject *const_str_plain_contrib;
extern PyObject *const_str_plain_wait_for_read;
static PyObject *const_str_plain__has_ipv6;
extern PyObject *const_str_plain_conn;
extern PyObject *const_str_plain_connect;
extern PyObject *const_str_plain_getaddrinfo;
extern PyObject *const_str_plain_close;
static PyObject *const_str_plain_HAS_IPV6;
extern PyObject *const_tuple_str_digest_9613c3fc04783ef5920752aa27696d66_tuple;
extern PyObject *const_str_plain_socket;
extern PyObject *const_str_digest_9613c3fc04783ef5920752aa27696d66;
extern PyObject *const_str_plain_AF_UNSPEC;
static PyObject *const_tuple_str_plain_host_str_plain_has_ipv6_str_plain_sock_tuple;
extern PyObject *const_str_plain_NoWayToWaitForSocketError;
extern PyObject *const_str_plain_host;
extern PyObject *const_str_plain_wait;
static PyObject *const_str_digest_d3595e84d8b1645204321774ba0ba260;
static PyObject *const_str_digest_7ae26a9ac4203d9df210c0bb52d7bd2e;
static PyObject *const_str_plain_opt;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_d6ff841a6ba76544c57bcb9789068307_tuple = PyTuple_New( 16 );
    PyTuple_SET_ITEM( const_tuple_d6ff841a6ba76544c57bcb9789068307_tuple, 0, const_str_plain_address ); Py_INCREF( const_str_plain_address );
    PyTuple_SET_ITEM( const_tuple_d6ff841a6ba76544c57bcb9789068307_tuple, 1, const_str_plain_timeout ); Py_INCREF( const_str_plain_timeout );
    PyTuple_SET_ITEM( const_tuple_d6ff841a6ba76544c57bcb9789068307_tuple, 2, const_str_plain_source_address ); Py_INCREF( const_str_plain_source_address );
    PyTuple_SET_ITEM( const_tuple_d6ff841a6ba76544c57bcb9789068307_tuple, 3, const_str_plain_socket_options ); Py_INCREF( const_str_plain_socket_options );
    const_str_plain_canonname = UNSTREAM_STRING( &constant_bin[ 998192 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_d6ff841a6ba76544c57bcb9789068307_tuple, 4, const_str_plain_canonname ); Py_INCREF( const_str_plain_canonname );
    PyTuple_SET_ITEM( const_tuple_d6ff841a6ba76544c57bcb9789068307_tuple, 5, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    PyTuple_SET_ITEM( const_tuple_d6ff841a6ba76544c57bcb9789068307_tuple, 6, const_str_plain_family ); Py_INCREF( const_str_plain_family );
    PyTuple_SET_ITEM( const_tuple_d6ff841a6ba76544c57bcb9789068307_tuple, 7, const_str_plain_err ); Py_INCREF( const_str_plain_err );
    const_str_plain_af = UNSTREAM_STRING( &constant_bin[ 5910 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_d6ff841a6ba76544c57bcb9789068307_tuple, 8, const_str_plain_af ); Py_INCREF( const_str_plain_af );
    const_str_plain_sa = UNSTREAM_STRING( &constant_bin[ 3867 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_d6ff841a6ba76544c57bcb9789068307_tuple, 9, const_str_plain_sa ); Py_INCREF( const_str_plain_sa );
    PyTuple_SET_ITEM( const_tuple_d6ff841a6ba76544c57bcb9789068307_tuple, 10, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    PyTuple_SET_ITEM( const_tuple_d6ff841a6ba76544c57bcb9789068307_tuple, 11, const_str_plain_proto ); Py_INCREF( const_str_plain_proto );
    PyTuple_SET_ITEM( const_tuple_d6ff841a6ba76544c57bcb9789068307_tuple, 12, const_str_plain_sock ); Py_INCREF( const_str_plain_sock );
    PyTuple_SET_ITEM( const_tuple_d6ff841a6ba76544c57bcb9789068307_tuple, 13, const_str_plain_host ); Py_INCREF( const_str_plain_host );
    const_str_plain_socktype = UNSTREAM_STRING( &constant_bin[ 1080807 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_d6ff841a6ba76544c57bcb9789068307_tuple, 14, const_str_plain_socktype ); Py_INCREF( const_str_plain_socktype );
    PyTuple_SET_ITEM( const_tuple_d6ff841a6ba76544c57bcb9789068307_tuple, 15, const_str_plain_port ); Py_INCREF( const_str_plain_port );
    const_tuple_str_plain_NoWayToWaitForSocketError_str_plain_wait_for_read_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_NoWayToWaitForSocketError_str_plain_wait_for_read_tuple, 0, const_str_plain_NoWayToWaitForSocketError ); Py_INCREF( const_str_plain_NoWayToWaitForSocketError );
    PyTuple_SET_ITEM( const_tuple_str_plain_NoWayToWaitForSocketError_str_plain_wait_for_read_tuple, 1, const_str_plain_wait_for_read ); Py_INCREF( const_str_plain_wait_for_read );
    const_str_plain_has_ipv6 = UNSTREAM_STRING( &constant_bin[ 1080815 ], 8, 1 );
    const_str_digest_e055b71b959d7386600233cd6fd5936b = UNSTREAM_STRING( &constant_bin[ 1080823 ], 23, 0 );
    const_str_digest_595445e1dc171ee3baa1f78d32383a82 = UNSTREAM_STRING( &constant_bin[ 1080846 ], 612, 0 );
    const_tuple_str_plain_sock_str_plain_options_str_plain_opt_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_sock_str_plain_options_str_plain_opt_tuple, 0, const_str_plain_sock ); Py_INCREF( const_str_plain_sock );
    PyTuple_SET_ITEM( const_tuple_str_plain_sock_str_plain_options_str_plain_opt_tuple, 1, const_str_plain_options ); Py_INCREF( const_str_plain_options );
    const_str_plain_opt = UNSTREAM_STRING( &constant_bin[ 2213 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_sock_str_plain_options_str_plain_opt_tuple, 2, const_str_plain_opt ); Py_INCREF( const_str_plain_opt );
    const_str_digest_bf7ea3c7e38d6b386518702b965c150a = UNSTREAM_STRING( &constant_bin[ 1081458 ], 54, 0 );
    const_tuple_str_plain__appengine_environ_tuple = PyTuple_New( 1 );
    const_str_plain__appengine_environ = UNSTREAM_STRING( &constant_bin[ 1046403 ], 18, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__appengine_environ_tuple, 0, const_str_plain__appengine_environ ); Py_INCREF( const_str_plain__appengine_environ );
    const_tuple_str_plain_family_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_family_tuple, 0, const_str_plain_family ); Py_INCREF( const_str_plain_family );
    const_tuple_str_plain_conn_str_plain_sock_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_conn_str_plain_sock_tuple, 0, const_str_plain_conn ); Py_INCREF( const_str_plain_conn );
    PyTuple_SET_ITEM( const_tuple_str_plain_conn_str_plain_sock_tuple, 1, const_str_plain_sock ); Py_INCREF( const_str_plain_sock );
    const_str_digest_fd9e06b160161212aff03b5b4dc7aa13 = UNSTREAM_STRING( &constant_bin[ 1081512 ], 179, 0 );
    const_dict_f0ddba86f2ff0b11c47720a0dc503699 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_f0ddba86f2ff0b11c47720a0dc503699, const_str_plain_timeout, const_float_0_0 );
    assert( PyDict_Size( const_dict_f0ddba86f2ff0b11c47720a0dc503699 ) == 1 );
    const_tuple_str_digest_3f9fec55820f857461da4f1e12840da5_tuple = PyTuple_New( 1 );
    const_str_digest_3f9fec55820f857461da4f1e12840da5 = UNSTREAM_STRING( &constant_bin[ 906020 ], 3, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_3f9fec55820f857461da4f1e12840da5_tuple, 0, const_str_digest_3f9fec55820f857461da4f1e12840da5 ); Py_INCREF( const_str_digest_3f9fec55820f857461da4f1e12840da5 );
    const_str_digest_debf9c9d34358798db48d27eeb44508b = UNSTREAM_STRING( &constant_bin[ 1081691 ], 26, 0 );
    const_str_plain_allowed_gai_family = UNSTREAM_STRING( &constant_bin[ 1081717 ], 18, 1 );
    const_str_plain__set_socket_options = UNSTREAM_STRING( &constant_bin[ 1081735 ], 19, 1 );
    const_str_digest_9a8281a0cd80f856cf9186c57571aa88 = UNSTREAM_STRING( &constant_bin[ 1081754 ], 288, 0 );
    const_tuple_str_digest_d3595e84d8b1645204321774ba0ba260_tuple = PyTuple_New( 1 );
    const_str_digest_d3595e84d8b1645204321774ba0ba260 = UNSTREAM_STRING( &constant_bin[ 1082042 ], 33, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_d3595e84d8b1645204321774ba0ba260_tuple, 0, const_str_digest_d3595e84d8b1645204321774ba0ba260 ); Py_INCREF( const_str_digest_d3595e84d8b1645204321774ba0ba260 );
    const_str_plain__has_ipv6 = UNSTREAM_STRING( &constant_bin[ 1082075 ], 9, 1 );
    const_str_plain_HAS_IPV6 = UNSTREAM_STRING( &constant_bin[ 1082084 ], 8, 1 );
    const_tuple_str_plain_host_str_plain_has_ipv6_str_plain_sock_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_host_str_plain_has_ipv6_str_plain_sock_tuple, 0, const_str_plain_host ); Py_INCREF( const_str_plain_host );
    PyTuple_SET_ITEM( const_tuple_str_plain_host_str_plain_has_ipv6_str_plain_sock_tuple, 1, const_str_plain_has_ipv6 ); Py_INCREF( const_str_plain_has_ipv6 );
    PyTuple_SET_ITEM( const_tuple_str_plain_host_str_plain_has_ipv6_str_plain_sock_tuple, 2, const_str_plain_sock ); Py_INCREF( const_str_plain_sock );
    const_str_digest_7ae26a9ac4203d9df210c0bb52d7bd2e = UNSTREAM_STRING( &constant_bin[ 1082092 ], 32, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$util$connection( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_84006f76df6922dfc4e63a49702c51c0;
static PyCodeObject *codeobj_5568ee902ac4c6426ea5846ff0bf0f22;
static PyCodeObject *codeobj_67d6fdbd8fa9a89a32a90958e51a57e6;
static PyCodeObject *codeobj_48f145c254e878a7c012ae693c439fc5;
static PyCodeObject *codeobj_70f4319007344ecedc8dc3d11363a286;
static PyCodeObject *codeobj_a72755371a668fd8fa412386b2c98552;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_debf9c9d34358798db48d27eeb44508b );
    codeobj_84006f76df6922dfc4e63a49702c51c0 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_7ae26a9ac4203d9df210c0bb52d7bd2e, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_5568ee902ac4c6426ea5846ff0bf0f22 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__has_ipv6, 108, const_tuple_str_plain_host_str_plain_has_ipv6_str_plain_sock_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_67d6fdbd8fa9a89a32a90958e51a57e6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__set_socket_options, 89, const_tuple_str_plain_sock_str_plain_options_str_plain_opt_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_48f145c254e878a7c012ae693c439fc5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_allowed_gai_family, 97, const_tuple_str_plain_family_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_70f4319007344ecedc8dc3d11363a286 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_create_connection, 33, const_tuple_d6ff841a6ba76544c57bcb9789068307_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_a72755371a668fd8fa412386b2c98552 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_connection_dropped, 7, const_tuple_str_plain_conn_str_plain_sock_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function_1_is_connection_dropped(  );


static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function_2_create_connection( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function_3__set_socket_options(  );


static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function_4_allowed_gai_family(  );


static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function_5__has_ipv6(  );


// The module function definitions.
static PyObject *impl_urllib3$util$connection$$$function_1_is_connection_dropped( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_conn = python_pars[ 0 ];
    PyObject *var_sock = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_a72755371a668fd8fa412386b2c98552 = NULL;

    struct Nuitka_FrameObject *frame_a72755371a668fd8fa412386b2c98552;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a72755371a668fd8fa412386b2c98552, codeobj_a72755371a668fd8fa412386b2c98552, module_urllib3$util$connection, sizeof(void *)+sizeof(void *) );
    frame_a72755371a668fd8fa412386b2c98552 = cache_frame_a72755371a668fd8fa412386b2c98552;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a72755371a668fd8fa412386b2c98552 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a72755371a668fd8fa412386b2c98552 ) == 2 ); // Frame stack

    // Framed code:
    tmp_getattr_target_1 = par_conn;

    CHECK_OBJECT( tmp_getattr_target_1 );
    tmp_getattr_attr_1 = const_str_plain_sock;
    tmp_getattr_default_1 = Py_False;
    tmp_assign_source_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_sock == NULL );
    var_sock = tmp_assign_source_1;

    tmp_compare_left_1 = var_sock;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_False;
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
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_compare_left_2 = var_sock;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
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
    // Tried code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_wait_for_read );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wait_for_read );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "wait_for_read" );
        exception_tb = NULL;

        exception_lineno = 24;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_sock;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_f0ddba86f2ff0b11c47720a0dc503699 );
    frame_a72755371a668fd8fa412386b2c98552->m_frame.f_lineno = 24;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$connection$$$function_1_is_connection_dropped );
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
    PRESERVE_FRAME_EXCEPTION( frame_a72755371a668fd8fa412386b2c98552 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_a72755371a668fd8fa412386b2c98552, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_a72755371a668fd8fa412386b2c98552, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_NoWayToWaitForSocketError );

    if (unlikely( tmp_compare_right_3 == NULL ))
    {
        tmp_compare_right_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NoWayToWaitForSocketError );
    }

    if ( tmp_compare_right_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NoWayToWaitForSocketError" );
        exception_tb = NULL;

        exception_lineno = 25;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "oo";
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
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 22;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a72755371a668fd8fa412386b2c98552->m_frame) frame_a72755371a668fd8fa412386b2c98552->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_end_3:;
    // End of try:

#if 1
    RESTORE_FRAME_EXCEPTION( frame_a72755371a668fd8fa412386b2c98552 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_a72755371a668fd8fa412386b2c98552 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_a72755371a668fd8fa412386b2c98552 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a72755371a668fd8fa412386b2c98552, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a72755371a668fd8fa412386b2c98552->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a72755371a668fd8fa412386b2c98552, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a72755371a668fd8fa412386b2c98552,
        type_description_1,
        par_conn,
        var_sock
    );


    // Release cached frame.
    if ( frame_a72755371a668fd8fa412386b2c98552 == cache_frame_a72755371a668fd8fa412386b2c98552 )
    {
        Py_DECREF( frame_a72755371a668fd8fa412386b2c98552 );
    }
    cache_frame_a72755371a668fd8fa412386b2c98552 = NULL;

    assertFrameObject( frame_a72755371a668fd8fa412386b2c98552 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$connection$$$function_1_is_connection_dropped );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_sock );
    Py_DECREF( var_sock );
    var_sock = NULL;

    CHECK_OBJECT( (PyObject *)par_conn );
    Py_DECREF( par_conn );
    par_conn = NULL;

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

    Py_XDECREF( var_sock );
    var_sock = NULL;

    CHECK_OBJECT( (PyObject *)par_conn );
    Py_DECREF( par_conn );
    par_conn = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$connection$$$function_1_is_connection_dropped );
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


static PyObject *impl_urllib3$util$connection$$$function_2_create_connection( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_address = python_pars[ 0 ];
    PyObject *par_timeout = python_pars[ 1 ];
    PyObject *par_source_address = python_pars[ 2 ];
    PyObject *par_socket_options = python_pars[ 3 ];
    PyObject *var_canonname = NULL;
    PyObject *var_e = NULL;
    PyObject *var_family = NULL;
    PyObject *var_err = NULL;
    PyObject *var_af = NULL;
    PyObject *var_sa = NULL;
    PyObject *var_res = NULL;
    PyObject *var_proto = NULL;
    PyObject *var_sock = NULL;
    PyObject *var_host = NULL;
    PyObject *var_socktype = NULL;
    PyObject *var_port = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__element_4 = NULL;
    PyObject *tmp_tuple_unpack_2__element_5 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_instance_7;
    PyObject *tmp_called_instance_8;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
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
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_isnot_3;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    PyObject *tmp_unpack_6;
    PyObject *tmp_unpack_7;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_70f4319007344ecedc8dc3d11363a286 = NULL;

    struct Nuitka_FrameObject *frame_70f4319007344ecedc8dc3d11363a286;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_70f4319007344ecedc8dc3d11363a286, codeobj_70f4319007344ecedc8dc3d11363a286, module_urllib3$util$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_70f4319007344ecedc8dc3d11363a286 = cache_frame_70f4319007344ecedc8dc3d11363a286;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_70f4319007344ecedc8dc3d11363a286 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_70f4319007344ecedc8dc3d11363a286 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_iter_arg_1 = par_address;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_2 == NULL )
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


        type_description_1 = "oooooooooooooooo";
        exception_lineno = 51;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


        type_description_1 = "oooooooooooooooo";
        exception_lineno = 51;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

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

                type_description_1 = "oooooooooooooooo";
                exception_lineno = 51;
                goto try_except_handler_3;
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

        type_description_1 = "oooooooooooooooo";
        exception_lineno = 51;
        goto try_except_handler_3;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_4 );
    assert( var_host == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_host = tmp_assign_source_4;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_5 );
    assert( var_port == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_port = tmp_assign_source_5;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_called_instance_1 = var_host;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_70f4319007344ecedc8dc3d11363a286->m_frame.f_lineno = 52;
    tmp_cond_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_chr_91_tuple, 0 ) );

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 52;
        type_description_1 = "oooooooooooooooo";
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
    tmp_called_instance_2 = var_host;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_70f4319007344ecedc8dc3d11363a286->m_frame.f_lineno = 53;
    tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_strip, &PyTuple_GET_ITEM( const_tuple_str_digest_9613c3fc04783ef5920752aa27696d66_tuple, 0 ) );

    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_host;
        assert( old != NULL );
        var_host = tmp_assign_source_6;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_assign_source_7 = Py_None;
    assert( var_err == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_err = tmp_assign_source_7;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_allowed_gai_family );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_allowed_gai_family );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "allowed_gai_family" );
        exception_tb = NULL;

        exception_lineno = 59;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_70f4319007344ecedc8dc3d11363a286->m_frame.f_lineno = 59;
    tmp_assign_source_8 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_family == NULL );
    var_family = tmp_assign_source_8;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "socket" );
        exception_tb = NULL;

        exception_lineno = 61;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_getaddrinfo );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_host;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = var_port;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = var_family;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "socket" );
        exception_tb = NULL;

        exception_lineno = 61;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_SOCK_STREAM );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 61;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_70f4319007344ecedc8dc3d11363a286->m_frame.f_lineno = 61;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_9;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_10 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_10 == NULL )
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


        type_description_1 = "oooooooooooooooo";
        exception_lineno = 61;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_1 = exception_keeper_type_3;
    tmp_compare_right_1 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_3 );
        Py_XDECREF( exception_keeper_value_3 );
        Py_XDECREF( exception_keeper_tb_3 );

        exception_lineno = 61;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_4;
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
    Py_DECREF( exception_keeper_type_3 );
    Py_XDECREF( exception_keeper_value_3 );
    Py_XDECREF( exception_keeper_tb_3 );
    goto loop_end_1;
    goto branch_end_2;
    branch_no_2:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    branch_end_2:;
    // End of try:
    try_end_3:;
    tmp_assign_source_11 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_11 );
    {
        PyObject *old = var_res;
        var_res = tmp_assign_source_11;
        Py_INCREF( var_res );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_3 = var_res;

    CHECK_OBJECT( tmp_iter_arg_3 );
    tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter;
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_3, 0 );
    if ( tmp_assign_source_13 == NULL )
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


        type_description_1 = "oooooooooooooooo";
        exception_lineno = 62;
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_1;
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_14 = UNPACK_NEXT( tmp_unpack_4, 1 );
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


        type_description_1 = "oooooooooooooooo";
        exception_lineno = 62;
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_2;
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_5 );
    tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_5, 2 );
    if ( tmp_assign_source_15 == NULL )
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


        type_description_1 = "oooooooooooooooo";
        exception_lineno = 62;
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_3;
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_6 );
    tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_6, 3 );
    if ( tmp_assign_source_16 == NULL )
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


        type_description_1 = "oooooooooooooooo";
        exception_lineno = 62;
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_4;
        tmp_tuple_unpack_2__element_4 = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_7 );
    tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_7, 4 );
    if ( tmp_assign_source_17 == NULL )
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


        type_description_1 = "oooooooooooooooo";
        exception_lineno = 62;
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_5;
        tmp_tuple_unpack_2__element_5 = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_iterator_name_2 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

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

                type_description_1 = "oooooooooooooooo";
                exception_lineno = 62;
                goto try_except_handler_7;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 5)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "oooooooooooooooo";
        exception_lineno = 62;
        goto try_except_handler_7;
    }
    goto try_end_4;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_6;
    // End of try:
    try_end_4:;
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

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_4 );
    tmp_tuple_unpack_2__element_4 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_5 );
    tmp_tuple_unpack_2__element_5 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_4;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    tmp_assign_source_18 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_18 );
    {
        PyObject *old = var_af;
        var_af = tmp_assign_source_18;
        Py_INCREF( var_af );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_assign_source_19 = tmp_tuple_unpack_2__element_2;

    CHECK_OBJECT( tmp_assign_source_19 );
    {
        PyObject *old = var_socktype;
        var_socktype = tmp_assign_source_19;
        Py_INCREF( var_socktype );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    tmp_assign_source_20 = tmp_tuple_unpack_2__element_3;

    CHECK_OBJECT( tmp_assign_source_20 );
    {
        PyObject *old = var_proto;
        var_proto = tmp_assign_source_20;
        Py_INCREF( var_proto );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    tmp_assign_source_21 = tmp_tuple_unpack_2__element_4;

    CHECK_OBJECT( tmp_assign_source_21 );
    {
        PyObject *old = var_canonname;
        var_canonname = tmp_assign_source_21;
        Py_INCREF( var_canonname );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_4 );
    tmp_tuple_unpack_2__element_4 = NULL;

    tmp_assign_source_22 = tmp_tuple_unpack_2__element_5;

    CHECK_OBJECT( tmp_assign_source_22 );
    {
        PyObject *old = var_sa;
        var_sa = tmp_assign_source_22;
        Py_INCREF( var_sa );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_5 );
    tmp_tuple_unpack_2__element_5 = NULL;

    tmp_assign_source_23 = Py_None;
    {
        PyObject *old = var_sock;
        var_sock = tmp_assign_source_23;
        Py_INCREF( var_sock );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "socket" );
        exception_tb = NULL;

        exception_lineno = 65;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_args_element_name_5 = var_af;

    CHECK_OBJECT( tmp_args_element_name_5 );
    tmp_args_element_name_6 = var_socktype;

    CHECK_OBJECT( tmp_args_element_name_6 );
    tmp_args_element_name_7 = var_proto;

    CHECK_OBJECT( tmp_args_element_name_7 );
    frame_70f4319007344ecedc8dc3d11363a286->m_frame.f_lineno = 65;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_assign_source_24 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_3, const_str_plain_socket, call_args );
    }

    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_8;
    }
    {
        PyObject *old = var_sock;
        assert( old != NULL );
        var_sock = tmp_assign_source_24;
        Py_DECREF( old );
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain__set_socket_options );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__set_socket_options );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_set_socket_options" );
        exception_tb = NULL;

        exception_lineno = 68;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_args_element_name_8 = var_sock;

    CHECK_OBJECT( tmp_args_element_name_8 );
    tmp_args_element_name_9 = par_socket_options;

    CHECK_OBJECT( tmp_args_element_name_9 );
    frame_70f4319007344ecedc8dc3d11363a286->m_frame.f_lineno = 68;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_unused );
    tmp_compare_left_2 = par_timeout;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "socket" );
        exception_tb = NULL;

        exception_lineno = 70;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__GLOBAL_DEFAULT_TIMEOUT );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_isnot_1 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_instance_4 = var_sock;

    CHECK_OBJECT( tmp_called_instance_4 );
    tmp_args_element_name_10 = par_timeout;

    CHECK_OBJECT( tmp_args_element_name_10 );
    frame_70f4319007344ecedc8dc3d11363a286->m_frame.f_lineno = 71;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_settimeout, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    tmp_cond_value_2 = par_source_address;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_8;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_instance_5 = var_sock;

    CHECK_OBJECT( tmp_called_instance_5 );
    tmp_args_element_name_11 = par_source_address;

    CHECK_OBJECT( tmp_args_element_name_11 );
    frame_70f4319007344ecedc8dc3d11363a286->m_frame.f_lineno = 73;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_bind, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_unused );
    branch_no_4:;
    tmp_called_instance_6 = var_sock;

    CHECK_OBJECT( tmp_called_instance_6 );
    tmp_args_element_name_12 = var_sa;

    CHECK_OBJECT( tmp_args_element_name_12 );
    frame_70f4319007344ecedc8dc3d11363a286->m_frame.f_lineno = 74;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_connect, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = var_sock;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$connection$$$function_2_create_connection );
    return NULL;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_70f4319007344ecedc8dc3d11363a286 );
    if ( exception_keeper_tb_6 == NULL )
    {
        exception_keeper_tb_6 = MAKE_TRACEBACK( frame_70f4319007344ecedc8dc3d11363a286, exception_keeper_lineno_6 );
    }
    else if ( exception_keeper_lineno_6 != 0 )
    {
        exception_keeper_tb_6 = ADD_TRACEBACK( exception_keeper_tb_6, frame_70f4319007344ecedc8dc3d11363a286, exception_keeper_lineno_6 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    PUBLISH_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "socket" );
        exception_tb = NULL;

        exception_lineno = 77;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_4;
    }

    tmp_compare_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_error );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_4;
    }
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_3 );

        exception_lineno = 77;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_25 = PyThreadState_GET()->exc_value;
    {
        PyObject *old = var_e;
        var_e = tmp_assign_source_25;
        Py_INCREF( var_e );
        Py_XDECREF( old );
    }

    tmp_assign_source_26 = var_e;

    CHECK_OBJECT( tmp_assign_source_26 );
    {
        PyObject *old = var_err;
        var_err = tmp_assign_source_26;
        Py_INCREF( var_err );
        Py_XDECREF( old );
    }

    tmp_compare_left_4 = var_sock;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_4 != tmp_compare_right_4 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_called_instance_7 = var_sock;

    CHECK_OBJECT( tmp_called_instance_7 );
    frame_70f4319007344ecedc8dc3d11363a286->m_frame.f_lineno = 80;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_27 = Py_None;
    {
        PyObject *old = var_sock;
        assert( old != NULL );
        var_sock = tmp_assign_source_27;
        Py_INCREF( var_sock );
        Py_DECREF( old );
    }

    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 64;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_70f4319007344ecedc8dc3d11363a286->m_frame) frame_70f4319007344ecedc8dc3d11363a286->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooo";
    goto try_except_handler_4;
    branch_end_5:;
    goto try_end_6;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$connection$$$function_2_create_connection );
    return NULL;
    // End of try:
    try_end_6:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_7;
    // Return handler code:
    try_return_handler_4:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__iter_value );
    Py_DECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_compare_left_5 = var_err;

    if ( tmp_compare_left_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "err" );
        exception_tb = NULL;

        exception_lineno = 83;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_5 = Py_None;
    tmp_isnot_3 = ( tmp_compare_left_5 != tmp_compare_right_5 );
    if ( tmp_isnot_3 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_raise_type_1 = var_err;

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "err" );
        exception_tb = NULL;

        exception_lineno = 84;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 84;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_7:;
    tmp_called_instance_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_called_instance_8 == NULL ))
    {
        tmp_called_instance_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_called_instance_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "socket" );
        exception_tb = NULL;

        exception_lineno = 86;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_70f4319007344ecedc8dc3d11363a286->m_frame.f_lineno = 86;
    tmp_raise_type_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_error, &PyTuple_GET_ITEM( const_tuple_str_digest_d3595e84d8b1645204321774ba0ba260_tuple, 0 ) );

    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 86;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_70f4319007344ecedc8dc3d11363a286 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_70f4319007344ecedc8dc3d11363a286 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_70f4319007344ecedc8dc3d11363a286 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_70f4319007344ecedc8dc3d11363a286, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_70f4319007344ecedc8dc3d11363a286->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_70f4319007344ecedc8dc3d11363a286, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_70f4319007344ecedc8dc3d11363a286,
        type_description_1,
        par_address,
        par_timeout,
        par_source_address,
        par_socket_options,
        var_canonname,
        var_e,
        var_family,
        var_err,
        var_af,
        var_sa,
        var_res,
        var_proto,
        var_sock,
        var_host,
        var_socktype,
        var_port
    );


    // Release cached frame.
    if ( frame_70f4319007344ecedc8dc3d11363a286 == cache_frame_70f4319007344ecedc8dc3d11363a286 )
    {
        Py_DECREF( frame_70f4319007344ecedc8dc3d11363a286 );
    }
    cache_frame_70f4319007344ecedc8dc3d11363a286 = NULL;

    assertFrameObject( frame_70f4319007344ecedc8dc3d11363a286 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$connection$$$function_2_create_connection );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_canonname );
    Py_DECREF( var_canonname );
    var_canonname = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    CHECK_OBJECT( (PyObject *)var_family );
    Py_DECREF( var_family );
    var_family = NULL;

    Py_XDECREF( var_err );
    var_err = NULL;

    CHECK_OBJECT( (PyObject *)var_af );
    Py_DECREF( var_af );
    var_af = NULL;

    CHECK_OBJECT( (PyObject *)var_sa );
    Py_DECREF( var_sa );
    var_sa = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)var_proto );
    Py_DECREF( var_proto );
    var_proto = NULL;

    CHECK_OBJECT( (PyObject *)var_sock );
    Py_DECREF( var_sock );
    var_sock = NULL;

    CHECK_OBJECT( (PyObject *)var_host );
    Py_DECREF( var_host );
    var_host = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    CHECK_OBJECT( (PyObject *)par_address );
    Py_DECREF( par_address );
    par_address = NULL;

    CHECK_OBJECT( (PyObject *)var_socktype );
    Py_DECREF( var_socktype );
    var_socktype = NULL;

    CHECK_OBJECT( (PyObject *)par_socket_options );
    Py_DECREF( par_socket_options );
    par_socket_options = NULL;

    CHECK_OBJECT( (PyObject *)par_source_address );
    Py_DECREF( par_source_address );
    par_source_address = NULL;

    CHECK_OBJECT( (PyObject *)var_port );
    Py_DECREF( var_port );
    var_port = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_canonname );
    var_canonname = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_family );
    var_family = NULL;

    Py_XDECREF( var_err );
    var_err = NULL;

    Py_XDECREF( var_af );
    var_af = NULL;

    Py_XDECREF( var_sa );
    var_sa = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_proto );
    var_proto = NULL;

    Py_XDECREF( var_sock );
    var_sock = NULL;

    Py_XDECREF( var_host );
    var_host = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    CHECK_OBJECT( (PyObject *)par_address );
    Py_DECREF( par_address );
    par_address = NULL;

    Py_XDECREF( var_socktype );
    var_socktype = NULL;

    CHECK_OBJECT( (PyObject *)par_socket_options );
    Py_DECREF( par_socket_options );
    par_socket_options = NULL;

    CHECK_OBJECT( (PyObject *)par_source_address );
    Py_DECREF( par_source_address );
    par_source_address = NULL;

    Py_XDECREF( var_port );
    var_port = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$connection$$$function_2_create_connection );
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


static PyObject *impl_urllib3$util$connection$$$function_3__set_socket_options( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sock = python_pars[ 0 ];
    PyObject *par_options = python_pars[ 1 ];
    PyObject *var_opt = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
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
    PyObject *tmp_assign_source_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    int tmp_exc_match_exception_match_1;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_67d6fdbd8fa9a89a32a90958e51a57e6 = NULL;

    struct Nuitka_FrameObject *frame_67d6fdbd8fa9a89a32a90958e51a57e6;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_compare_left_1 = par_options;

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
    goto try_return_handler_1;
    branch_no_1:;
    MAKE_OR_REUSE_FRAME( cache_frame_67d6fdbd8fa9a89a32a90958e51a57e6, codeobj_67d6fdbd8fa9a89a32a90958e51a57e6, module_urllib3$util$connection, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_67d6fdbd8fa9a89a32a90958e51a57e6 = cache_frame_67d6fdbd8fa9a89a32a90958e51a57e6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_67d6fdbd8fa9a89a32a90958e51a57e6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_67d6fdbd8fa9a89a32a90958e51a57e6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_iter_arg_1 = par_options;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_2 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_2 == NULL )
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
        exception_lineno = 93;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
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

        exception_lineno = 93;
        type_description_1 = "ooo";
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
    tmp_assign_source_3 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_3 );
    {
        PyObject *old = var_opt;
        var_opt = tmp_assign_source_3;
        Py_INCREF( var_opt );
        Py_XDECREF( old );
    }

    tmp_source_name_1 = par_sock;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_setsockopt );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    tmp_dircall_arg2_1 = var_opt;

    CHECK_OBJECT( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg2_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
        tmp_unused = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
    }
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "ooo";
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_67d6fdbd8fa9a89a32a90958e51a57e6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_67d6fdbd8fa9a89a32a90958e51a57e6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_67d6fdbd8fa9a89a32a90958e51a57e6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_67d6fdbd8fa9a89a32a90958e51a57e6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_67d6fdbd8fa9a89a32a90958e51a57e6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_67d6fdbd8fa9a89a32a90958e51a57e6,
        type_description_1,
        par_sock,
        par_options,
        var_opt
    );


    // Release cached frame.
    if ( frame_67d6fdbd8fa9a89a32a90958e51a57e6 == cache_frame_67d6fdbd8fa9a89a32a90958e51a57e6 )
    {
        Py_DECREF( frame_67d6fdbd8fa9a89a32a90958e51a57e6 );
    }
    cache_frame_67d6fdbd8fa9a89a32a90958e51a57e6 = NULL;

    assertFrameObject( frame_67d6fdbd8fa9a89a32a90958e51a57e6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$connection$$$function_3__set_socket_options );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_opt );
    var_opt = NULL;

    CHECK_OBJECT( (PyObject *)par_sock );
    Py_DECREF( par_sock );
    par_sock = NULL;

    CHECK_OBJECT( (PyObject *)par_options );
    Py_DECREF( par_options );
    par_options = NULL;

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

    Py_XDECREF( var_opt );
    var_opt = NULL;

    CHECK_OBJECT( (PyObject *)par_sock );
    Py_DECREF( par_sock );
    par_sock = NULL;

    CHECK_OBJECT( (PyObject *)par_options );
    Py_DECREF( par_options );
    par_options = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$connection$$$function_3__set_socket_options );
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


static PyObject *impl_urllib3$util$connection$$$function_4_allowed_gai_family( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_family = NULL;
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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_48f145c254e878a7c012ae693c439fc5 = NULL;

    struct Nuitka_FrameObject *frame_48f145c254e878a7c012ae693c439fc5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_48f145c254e878a7c012ae693c439fc5, codeobj_48f145c254e878a7c012ae693c439fc5, module_urllib3$util$connection, sizeof(void *) );
    frame_48f145c254e878a7c012ae693c439fc5 = cache_frame_48f145c254e878a7c012ae693c439fc5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_48f145c254e878a7c012ae693c439fc5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_48f145c254e878a7c012ae693c439fc5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "socket" );
        exception_tb = NULL;

        exception_lineno = 102;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_AF_INET );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    assert( var_family == NULL );
    var_family = tmp_assign_source_1;

    tmp_cond_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_HAS_IPV6 );

    if (unlikely( tmp_cond_value_1 == NULL ))
    {
        tmp_cond_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HAS_IPV6 );
    }

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "HAS_IPV6" );
        exception_tb = NULL;

        exception_lineno = 103;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "socket" );
        exception_tb = NULL;

        exception_lineno = 104;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_AF_UNSPEC );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_family;
        assert( old != NULL );
        var_family = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_48f145c254e878a7c012ae693c439fc5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_48f145c254e878a7c012ae693c439fc5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_48f145c254e878a7c012ae693c439fc5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_48f145c254e878a7c012ae693c439fc5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_48f145c254e878a7c012ae693c439fc5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_48f145c254e878a7c012ae693c439fc5,
        type_description_1,
        var_family
    );


    // Release cached frame.
    if ( frame_48f145c254e878a7c012ae693c439fc5 == cache_frame_48f145c254e878a7c012ae693c439fc5 )
    {
        Py_DECREF( frame_48f145c254e878a7c012ae693c439fc5 );
    }
    cache_frame_48f145c254e878a7c012ae693c439fc5 = NULL;

    assertFrameObject( frame_48f145c254e878a7c012ae693c439fc5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_family;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$connection$$$function_4_allowed_gai_family );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_family );
    Py_DECREF( var_family );
    var_family = NULL;

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

    Py_XDECREF( var_family );
    var_family = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$connection$$$function_4_allowed_gai_family );
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


static PyObject *impl_urllib3$util$connection$$$function_5__has_ipv6( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_host = python_pars[ 0 ];
    PyObject *var_has_ipv6 = NULL;
    PyObject *var_sock = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    int tmp_exc_match_exception_match_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_5568ee902ac4c6426ea5846ff0bf0f22 = NULL;

    struct Nuitka_FrameObject *frame_5568ee902ac4c6426ea5846ff0bf0f22;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_None;
    assert( var_sock == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_sock = tmp_assign_source_1;

    tmp_assign_source_2 = Py_False;
    assert( var_has_ipv6 == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_has_ipv6 = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5568ee902ac4c6426ea5846ff0bf0f22, codeobj_5568ee902ac4c6426ea5846ff0bf0f22, module_urllib3$util$connection, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5568ee902ac4c6426ea5846ff0bf0f22 = cache_frame_5568ee902ac4c6426ea5846ff0bf0f22;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5568ee902ac4c6426ea5846ff0bf0f22 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5568ee902ac4c6426ea5846ff0bf0f22 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain__appengine_environ );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__appengine_environ );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_appengine_environ" );
        exception_tb = NULL;

        exception_lineno = 117;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_5568ee902ac4c6426ea5846ff0bf0f22->m_frame.f_lineno = 117;
    tmp_cond_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_is_appengine_sandbox );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 117;
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
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "socket" );
        exception_tb = NULL;

        exception_lineno = 120;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_has_ipv6 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 120;
        type_description_1 = "ooo";
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
    // Tried code:
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "socket" );
        exception_tb = NULL;

        exception_lineno = 127;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_socket );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "socket" );
        exception_tb = NULL;

        exception_lineno = 127;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_AF_INET6 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 127;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    frame_5568ee902ac4c6426ea5846ff0bf0f22->m_frame.f_lineno = 127;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_sock;
        assert( old != NULL );
        var_sock = tmp_assign_source_3;
        Py_DECREF( old );
    }

    tmp_called_instance_2 = var_sock;

    CHECK_OBJECT( tmp_called_instance_2 );
    tmp_args_element_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_host;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_0;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_1 );
    frame_5568ee902ac4c6426ea5846ff0bf0f22->m_frame.f_lineno = 128;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_bind, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_4 = Py_True;
    {
        PyObject *old = var_has_ipv6;
        assert( old != NULL );
        var_has_ipv6 = tmp_assign_source_4;
        Py_INCREF( var_has_ipv6 );
        Py_DECREF( old );
    }

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
    PRESERVE_FRAME_EXCEPTION( frame_5568ee902ac4c6426ea5846ff0bf0f22 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_5568ee902ac4c6426ea5846ff0bf0f22, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_5568ee902ac4c6426ea5846ff0bf0f22, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_Exception;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 126;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5568ee902ac4c6426ea5846ff0bf0f22->m_frame) frame_5568ee902ac4c6426ea5846ff0bf0f22->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_3:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$connection$$$function_5__has_ipv6 );
    return NULL;
    // End of try:
    try_end_1:;
    branch_no_2:;
    tmp_cond_value_3 = var_sock;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "sock" );
        exception_tb = NULL;

        exception_lineno = 133;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_instance_3 = var_sock;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "sock" );
        exception_tb = NULL;

        exception_lineno = 134;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_5568ee902ac4c6426ea5846ff0bf0f22->m_frame.f_lineno = 134;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_4:;
    tmp_return_value = var_has_ipv6;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "has_ipv6" );
        exception_tb = NULL;

        exception_lineno = 135;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_5568ee902ac4c6426ea5846ff0bf0f22 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_5568ee902ac4c6426ea5846ff0bf0f22 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_5568ee902ac4c6426ea5846ff0bf0f22 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5568ee902ac4c6426ea5846ff0bf0f22, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5568ee902ac4c6426ea5846ff0bf0f22->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5568ee902ac4c6426ea5846ff0bf0f22, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5568ee902ac4c6426ea5846ff0bf0f22,
        type_description_1,
        par_host,
        var_has_ipv6,
        var_sock
    );


    // Release cached frame.
    if ( frame_5568ee902ac4c6426ea5846ff0bf0f22 == cache_frame_5568ee902ac4c6426ea5846ff0bf0f22 )
    {
        Py_DECREF( frame_5568ee902ac4c6426ea5846ff0bf0f22 );
    }
    cache_frame_5568ee902ac4c6426ea5846ff0bf0f22 = NULL;

    assertFrameObject( frame_5568ee902ac4c6426ea5846ff0bf0f22 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$connection$$$function_5__has_ipv6 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_has_ipv6 );
    var_has_ipv6 = NULL;

    CHECK_OBJECT( (PyObject *)par_host );
    Py_DECREF( par_host );
    par_host = NULL;

    Py_XDECREF( var_sock );
    var_sock = NULL;

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

    Py_XDECREF( var_has_ipv6 );
    var_has_ipv6 = NULL;

    CHECK_OBJECT( (PyObject *)par_host );
    Py_DECREF( par_host );
    par_host = NULL;

    Py_XDECREF( var_sock );
    var_sock = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$connection$$$function_5__has_ipv6 );
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



static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function_1_is_connection_dropped(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$connection$$$function_1_is_connection_dropped,
        const_str_plain_is_connection_dropped,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a72755371a668fd8fa412386b2c98552,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$connection,
        const_str_digest_9a8281a0cd80f856cf9186c57571aa88,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function_2_create_connection( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$connection$$$function_2_create_connection,
        const_str_plain_create_connection,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_70f4319007344ecedc8dc3d11363a286,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$connection,
        const_str_digest_595445e1dc171ee3baa1f78d32383a82,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function_3__set_socket_options(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$connection$$$function_3__set_socket_options,
        const_str_plain__set_socket_options,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_67d6fdbd8fa9a89a32a90958e51a57e6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$connection,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function_4_allowed_gai_family(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$connection$$$function_4_allowed_gai_family,
        const_str_plain_allowed_gai_family,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_48f145c254e878a7c012ae693c439fc5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$connection,
        const_str_digest_fd9e06b160161212aff03b5b4dc7aa13,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function_5__has_ipv6(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$connection$$$function_5__has_ipv6,
        const_str_plain__has_ipv6,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5568ee902ac4c6426ea5846ff0bf0f22,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$connection,
        const_str_digest_bf7ea3c7e38d6b386518702b965c150a,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$util$connection =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.util.connection",   /* m_name */
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

MOD_INIT_DECL( urllib3$util$connection )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$util$connection );
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
    puts("urllib3.util.connection: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.util.connection: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.util.connection: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$util$connection" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$util$connection = Py_InitModule4(
        "urllib3.util.connection",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3$util$connection = PyModule_Create( &mdef_urllib3$util$connection );
#endif

    moduledict_urllib3$util$connection = MODULE_DICT( module_urllib3$util$connection );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3$util$connection,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$connection,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_urllib3$util$connection,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$connection,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3$util$connection );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_e055b71b959d7386600233cd6fd5936b, module_urllib3$util$connection );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_called_name_1;
    PyObject *tmp_defaults_1;
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
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    struct Nuitka_FrameObject *frame_84006f76df6922dfc4e63a49702c51c0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_84006f76df6922dfc4e63a49702c51c0 = MAKE_MODULE_FRAME( codeobj_84006f76df6922dfc4e63a49702c51c0, module_urllib3$util$connection );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_84006f76df6922dfc4e63a49702c51c0 );
    assert( Py_REFCNT( frame_84006f76df6922dfc4e63a49702c51c0 ) == 2 );

    // Framed code:
    frame_84006f76df6922dfc4e63a49702c51c0->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_3 );
    tmp_name_name_1 = const_str_plain_socket;
    tmp_globals_name_1 = (PyObject *)moduledict_urllib3$util$connection;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_84006f76df6922dfc4e63a49702c51c0->m_frame.f_lineno = 2;
    tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket, tmp_assign_source_4 );
    tmp_name_name_2 = const_str_plain_wait;
    tmp_globals_name_2 = (PyObject *)moduledict_urllib3$util$connection;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_NoWayToWaitForSocketError_str_plain_wait_for_read_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_84006f76df6922dfc4e63a49702c51c0->m_frame.f_lineno = 3;
    tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_5;

    // Tried code:
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_NoWayToWaitForSocketError );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_NoWayToWaitForSocketError, tmp_assign_source_6 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_wait_for_read );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_wait_for_read, tmp_assign_source_7 );
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

    tmp_name_name_3 = const_str_plain_contrib;
    tmp_globals_name_3 = (PyObject *)moduledict_urllib3$util$connection;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain__appengine_environ_tuple;
    tmp_level_name_3 = const_int_pos_2;
    frame_84006f76df6922dfc4e63a49702c51c0->m_frame.f_lineno = 4;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain__appengine_environ );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain__appengine_environ, tmp_assign_source_8 );
    tmp_assign_source_9 = MAKE_FUNCTION_urllib3$util$connection$$$function_1_is_connection_dropped(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_is_connection_dropped, tmp_assign_source_9 );
    tmp_defaults_1 = PyTuple_New( 3 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_defaults_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "socket" );
        exception_tb = NULL;

        exception_lineno = 35;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__GLOBAL_DEFAULT_TIMEOUT );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_1 );

        exception_lineno = 35;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 2, tmp_tuple_element_1 );
    tmp_assign_source_10 = MAKE_FUNCTION_urllib3$util$connection$$$function_2_create_connection( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_create_connection, tmp_assign_source_10 );
    tmp_assign_source_11 = MAKE_FUNCTION_urllib3$util$connection$$$function_3__set_socket_options(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain__set_socket_options, tmp_assign_source_11 );
    tmp_assign_source_12 = MAKE_FUNCTION_urllib3$util$connection$$$function_4_allowed_gai_family(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_allowed_gai_family, tmp_assign_source_12 );
    tmp_assign_source_13 = MAKE_FUNCTION_urllib3$util$connection$$$function_5__has_ipv6(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain__has_ipv6, tmp_assign_source_13 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain__has_ipv6 );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__has_ipv6 );
    }

    CHECK_OBJECT( tmp_called_name_1 );
    frame_84006f76df6922dfc4e63a49702c51c0->m_frame.f_lineno = 138;
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_3f9fec55820f857461da4f1e12840da5_tuple, 0 ) );

    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_HAS_IPV6, tmp_assign_source_14 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_84006f76df6922dfc4e63a49702c51c0 );
#endif
    popFrameStack();

    assertFrameObject( frame_84006f76df6922dfc4e63a49702c51c0 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_84006f76df6922dfc4e63a49702c51c0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_84006f76df6922dfc4e63a49702c51c0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_84006f76df6922dfc4e63a49702c51c0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_84006f76df6922dfc4e63a49702c51c0, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_urllib3$util$connection );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
