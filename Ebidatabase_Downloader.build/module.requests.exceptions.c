/* Generated code for Python source for module 'requests.exceptions'
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

/* The _module_requests$exceptions is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$exceptions;
PyDictObject *moduledict_requests$exceptions;

/* The module constants used, if any. */
extern PyObject *const_str_plain_ProxyError;
static PyObject *const_str_digest_2ad78bd49ece92478753ce0fc79a6e93;
extern PyObject *const_str_plain_Timeout;
extern PyObject *const_str_plain_TooManyRedirects;
extern PyObject *const_str_plain_RetryError;
static PyObject *const_str_digest_cb488f69655ce887e5155c9a2e164928;
static PyObject *const_str_digest_2ad499ae41fa3b0d80a6c53a6b0dd390;
static PyObject *const_str_plain_RequestsWarning;
static PyObject *const_str_digest_34a451307fc6aab1649478fed3307568;
extern PyObject *const_str_plain_InvalidHeader;
static PyObject *const_str_digest_35d6e09b700b272e1f4429814168031d;
static PyObject *const_str_digest_ade7d7a167d988b8081c48c9a0bed8e8;
static PyObject *const_tuple_str_plain_response_none_tuple;
extern PyObject *const_str_plain_ReadTimeout;
static PyObject *const_str_digest_c5ea8ff3c07b97205cc4ec7f24ad27a2;
static PyObject *const_str_digest_c7a80113e8376f2f52f7ee120f1360d2;
extern PyObject *const_dict_empty;
static PyObject *const_str_digest_8b54d81d400c0da933dfb8e36e1ac1f0;
static PyObject *const_str_digest_b8f960a38723097fb701d7986528073c;
static PyObject *const_str_digest_0689849403be684eb33eb3512cfc2389;
extern PyObject *const_tuple_str_plain_HTTPError_tuple;
extern PyObject *const_str_plain_ConnectionError;
extern PyObject *const_str_plain_InvalidURL;
static PyObject *const_str_digest_3a035decbb1d48c6b204b28e42512076;
extern PyObject *const_str_plain_FileModeWarning;
extern PyObject *const_str_plain_MissingSchema;
extern PyObject *const_str_plain_URLRequired;
static PyObject *const_str_digest_4aae44da769befc767278be58ddca255;
extern PyObject *const_str_plain_InvalidProxyURL;
extern PyObject *const_str_plain_RequestException;
static PyObject *const_str_digest_3cf9f3c16d293dcd967c7ed140034453;
static PyObject *const_str_digest_62b56f407a05bf4c50ea2ebf5d0c7b8a;
extern PyObject *const_str_plain_StreamConsumedError;
extern PyObject *const_str_plain_request;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_Warning;
extern PyObject *const_str_plain_InvalidSchema;
extern PyObject *const_int_0;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_ddf19d9bbf2d99a7777bfd3dcc1db8dc;
static PyObject *const_str_digest_f0f7e3ca1b6404dc7867b8c8d275ec0c;
extern PyObject *const_str_plain_args;
static PyObject *const_str_digest_833081d40a005ce68a8b3dabbf073958;
static PyObject *const_str_digest_183e1365483754a66afafc5046591b5f;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_HTTPError;
static PyObject *const_str_digest_30cf8cedfeac36936c731ede1cc0ad0e;
static PyObject *const_str_digest_b3f79f0ff88ef53ddf2012488144e436;
extern PyObject *const_str_plain_SSLError;
static PyObject *const_str_digest_231982acca444de8f23c0288db53eaef;
extern PyObject *const_str_plain_ConnectTimeout;
extern PyObject *const_str_plain_pop;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_841f485de6d4157389a41ea63dc14155;
static PyObject *const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
extern PyObject *const_str_plain_ContentDecodingError;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_UnrewindableBodyError;
extern PyObject *const_str_digest_c8562bbff9d721153deb2fdd066393d0;
static PyObject *const_str_digest_b2c98825348c9fcd71a85ac1bfc67cf8;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_DeprecationWarning;
extern PyObject *const_str_plain_ChunkedEncodingError;
static PyObject *const_tuple_str_plain_request_none_tuple;
extern PyObject *const_str_plain_RequestsDependencyWarning;
static PyObject *const_tuple_d72518de2df0408e06529d45ae68a282_tuple;
static PyObject *const_str_digest_225332b778bf59fe5fff32593da4030a;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_digest_3b2add8be5d440c36ae0b41135415fa9;
static PyObject *const_str_digest_3aedd4c9c88f311ca62d0cad34678af2;
extern PyObject *const_str_plain_response;
static PyObject *const_str_plain_BaseHTTPError;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_2ad78bd49ece92478753ce0fc79a6e93 = UNSTREAM_STRING( &constant_bin[ 958926 ], 84, 0 );
    const_str_digest_cb488f69655ce887e5155c9a2e164928 = UNSTREAM_STRING( &constant_bin[ 959010 ], 66, 0 );
    const_str_digest_2ad499ae41fa3b0d80a6c53a6b0dd390 = UNSTREAM_STRING( &constant_bin[ 959076 ], 59, 0 );
    const_str_plain_RequestsWarning = UNSTREAM_STRING( &constant_bin[ 959135 ], 15, 1 );
    const_str_digest_34a451307fc6aab1649478fed3307568 = UNSTREAM_STRING( &constant_bin[ 959150 ], 171, 0 );
    const_str_digest_35d6e09b700b272e1f4429814168031d = UNSTREAM_STRING( &constant_bin[ 959321 ], 22, 0 );
    const_str_digest_ade7d7a167d988b8081c48c9a0bed8e8 = UNSTREAM_STRING( &constant_bin[ 959343 ], 130, 0 );
    const_tuple_str_plain_response_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_response_none_tuple, 0, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    PyTuple_SET_ITEM( const_tuple_str_plain_response_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_digest_c5ea8ff3c07b97205cc4ec7f24ad27a2 = UNSTREAM_STRING( &constant_bin[ 959473 ], 74, 0 );
    const_str_digest_c7a80113e8376f2f52f7ee120f1360d2 = UNSTREAM_STRING( &constant_bin[ 959547 ], 47, 0 );
    const_str_digest_8b54d81d400c0da933dfb8e36e1ac1f0 = UNSTREAM_STRING( &constant_bin[ 959594 ], 28, 0 );
    const_str_digest_b8f960a38723097fb701d7986528073c = UNSTREAM_STRING( &constant_bin[ 959622 ], 64, 0 );
    const_str_digest_0689849403be684eb33eb3512cfc2389 = UNSTREAM_STRING( &constant_bin[ 959686 ], 34, 0 );
    const_str_digest_3a035decbb1d48c6b204b28e42512076 = UNSTREAM_STRING( &constant_bin[ 959720 ], 64, 0 );
    const_str_digest_4aae44da769befc767278be58ddca255 = UNSTREAM_STRING( &constant_bin[ 959784 ], 46, 0 );
    const_str_digest_3cf9f3c16d293dcd967c7ed140034453 = UNSTREAM_STRING( &constant_bin[ 959830 ], 51, 0 );
    const_str_digest_62b56f407a05bf4c50ea2ebf5d0c7b8a = UNSTREAM_STRING( &constant_bin[ 959881 ], 63, 0 );
    const_str_digest_ddf19d9bbf2d99a7777bfd3dcc1db8dc = UNSTREAM_STRING( &constant_bin[ 959944 ], 23, 0 );
    const_str_digest_f0f7e3ca1b6404dc7867b8c8d275ec0c = UNSTREAM_STRING( &constant_bin[ 959967 ], 34, 0 );
    const_str_digest_833081d40a005ce68a8b3dabbf073958 = UNSTREAM_STRING( &constant_bin[ 960001 ], 22, 0 );
    const_str_digest_183e1365483754a66afafc5046591b5f = UNSTREAM_STRING( &constant_bin[ 960023 ], 28, 0 );
    const_str_digest_30cf8cedfeac36936c731ede1cc0ad0e = UNSTREAM_STRING( &constant_bin[ 960051 ], 19, 0 );
    const_str_digest_b3f79f0ff88ef53ddf2012488144e436 = UNSTREAM_STRING( &constant_bin[ 960070 ], 27, 0 );
    const_str_digest_231982acca444de8f23c0288db53eaef = UNSTREAM_STRING( &constant_bin[ 960097 ], 26, 0 );
    const_str_digest_841f485de6d4157389a41ea63dc14155 = UNSTREAM_STRING( &constant_bin[ 960123 ], 42, 0 );
    const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2 = UNSTREAM_STRING( &constant_bin[ 959225 ], 19, 0 );
    const_str_digest_b2c98825348c9fcd71a85ac1bfc67cf8 = UNSTREAM_STRING( &constant_bin[ 960165 ], 96, 0 );
    const_tuple_str_plain_request_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_request_none_tuple, 0, const_str_plain_request ); Py_INCREF( const_str_plain_request );
    PyTuple_SET_ITEM( const_tuple_str_plain_request_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_tuple_d72518de2df0408e06529d45ae68a282_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_d72518de2df0408e06529d45ae68a282_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_d72518de2df0408e06529d45ae68a282_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_d72518de2df0408e06529d45ae68a282_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_d72518de2df0408e06529d45ae68a282_tuple, 3, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    const_str_digest_225332b778bf59fe5fff32593da4030a = UNSTREAM_STRING( &constant_bin[ 960261 ], 37, 0 );
    const_str_digest_3b2add8be5d440c36ae0b41135415fa9 = UNSTREAM_STRING( &constant_bin[ 960298 ], 34, 0 );
    const_str_digest_3aedd4c9c88f311ca62d0cad34678af2 = UNSTREAM_STRING( &constant_bin[ 960332 ], 23, 0 );
    const_str_plain_BaseHTTPError = UNSTREAM_STRING( &constant_bin[ 960355 ], 13, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_requests$exceptions( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_8e7ffb0d279fbe0b2e22a10ee8610395;
static PyCodeObject *codeobj_8b79c3c99fdcc3346b53e79d37afac53;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_833081d40a005ce68a8b3dabbf073958 );
    codeobj_8e7ffb0d279fbe0b2e22a10ee8610395 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_183e1365483754a66afafc5046591b5f, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_8b79c3c99fdcc3346b53e79d37afac53 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 17, const_tuple_d72518de2df0408e06529d45ae68a282_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_requests$exceptions$$$function_1___init__(  );


// The module function definitions.
static PyObject *impl_requests$exceptions$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *var_response = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_value_1;
    PyObject *tmp_object_name_1;
    PyObject *tmp_operand_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_8b79c3c99fdcc3346b53e79d37afac53 = NULL;

    struct Nuitka_FrameObject *frame_8b79c3c99fdcc3346b53e79d37afac53;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8b79c3c99fdcc3346b53e79d37afac53, codeobj_8b79c3c99fdcc3346b53e79d37afac53, module_requests$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8b79c3c99fdcc3346b53e79d37afac53 = cache_frame_8b79c3c99fdcc3346b53e79d37afac53;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8b79c3c99fdcc3346b53e79d37afac53 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8b79c3c99fdcc3346b53e79d37afac53 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_kwargs;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_8b79c3c99fdcc3346b53e79d37afac53->m_frame.f_lineno = 19;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_response_none_tuple, 0 ) );

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_response == NULL );
    var_response = tmp_assign_source_1;

    tmp_assattr_name_1 = var_response;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_response, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_2 = par_kwargs;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_8b79c3c99fdcc3346b53e79d37afac53->m_frame.f_lineno = 21;
    tmp_assattr_name_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_request_none_tuple, 0 ) );

    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_request, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 21;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_compexpr_left_1 = var_response;

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
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_request );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_2 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
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
    tmp_hasattr_value_1 = var_response;

    CHECK_OBJECT( tmp_hasattr_value_1 );
    tmp_hasattr_attr_1 = const_str_plain_request;
    tmp_and_right_value_2 = BUILTIN_HASATTR( tmp_hasattr_value_1, tmp_hasattr_attr_1 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
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


        exception_lineno = 23;
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
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_response );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_request );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_request, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 24;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    branch_no_1:;
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "RequestException" );
        exception_tb = NULL;

        exception_lineno = 25;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_self;

    CHECK_OBJECT( tmp_object_name_1 );
    tmp_source_name_4 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = par_args;

    CHECK_OBJECT( tmp_dircall_arg2_1 );
    tmp_dircall_arg3_1 = par_kwargs;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_unused = impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( dir_call_args );
    }
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8b79c3c99fdcc3346b53e79d37afac53 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8b79c3c99fdcc3346b53e79d37afac53 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8b79c3c99fdcc3346b53e79d37afac53, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8b79c3c99fdcc3346b53e79d37afac53->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8b79c3c99fdcc3346b53e79d37afac53, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8b79c3c99fdcc3346b53e79d37afac53,
        type_description_1,
        par_self,
        par_args,
        par_kwargs,
        var_response
    );


    // Release cached frame.
    if ( frame_8b79c3c99fdcc3346b53e79d37afac53 == cache_frame_8b79c3c99fdcc3346b53e79d37afac53 )
    {
        Py_DECREF( frame_8b79c3c99fdcc3346b53e79d37afac53 );
    }
    cache_frame_8b79c3c99fdcc3346b53e79d37afac53 = NULL;

    assertFrameObject( frame_8b79c3c99fdcc3346b53e79d37afac53 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)var_response );
    Py_DECREF( var_response );
    var_response = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

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

    Py_XDECREF( var_response );
    var_response = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions$$$function_1___init__ );
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



static PyObject *MAKE_FUNCTION_requests$exceptions$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$exceptions$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8b79c3c99fdcc3346b53e79d37afac53,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$exceptions,
        const_str_digest_cb488f69655ce887e5155c9a2e164928,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_requests$exceptions =
{
    PyModuleDef_HEAD_INIT,
    "requests.exceptions",   /* m_name */
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

MOD_INIT_DECL( requests$exceptions )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_requests$exceptions );
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
    puts("requests.exceptions: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.exceptions: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.exceptions: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initrequests$exceptions" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_requests$exceptions = Py_InitModule4(
        "requests.exceptions",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_requests$exceptions = PyModule_Create( &mdef_requests$exceptions );
#endif

    moduledict_requests$exceptions = MODULE_DICT( module_requests$exceptions );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_requests$exceptions,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_requests$exceptions,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_requests$exceptions );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2, module_requests$exceptions );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_class_creation_10__bases = NULL;
    PyObject *tmp_class_creation_10__class = NULL;
    PyObject *tmp_class_creation_10__class_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_11__bases = NULL;
    PyObject *tmp_class_creation_11__class = NULL;
    PyObject *tmp_class_creation_11__class_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_12__bases = NULL;
    PyObject *tmp_class_creation_12__class = NULL;
    PyObject *tmp_class_creation_12__class_dict = NULL;
    PyObject *tmp_class_creation_12__metaclass = NULL;
    PyObject *tmp_class_creation_13__bases = NULL;
    PyObject *tmp_class_creation_13__class = NULL;
    PyObject *tmp_class_creation_13__class_dict = NULL;
    PyObject *tmp_class_creation_13__metaclass = NULL;
    PyObject *tmp_class_creation_14__bases = NULL;
    PyObject *tmp_class_creation_14__class = NULL;
    PyObject *tmp_class_creation_14__class_dict = NULL;
    PyObject *tmp_class_creation_14__metaclass = NULL;
    PyObject *tmp_class_creation_15__bases = NULL;
    PyObject *tmp_class_creation_15__class = NULL;
    PyObject *tmp_class_creation_15__class_dict = NULL;
    PyObject *tmp_class_creation_15__metaclass = NULL;
    PyObject *tmp_class_creation_16__bases = NULL;
    PyObject *tmp_class_creation_16__class = NULL;
    PyObject *tmp_class_creation_16__class_dict = NULL;
    PyObject *tmp_class_creation_16__metaclass = NULL;
    PyObject *tmp_class_creation_17__bases = NULL;
    PyObject *tmp_class_creation_17__class = NULL;
    PyObject *tmp_class_creation_17__class_dict = NULL;
    PyObject *tmp_class_creation_17__metaclass = NULL;
    PyObject *tmp_class_creation_18__bases = NULL;
    PyObject *tmp_class_creation_18__class = NULL;
    PyObject *tmp_class_creation_18__class_dict = NULL;
    PyObject *tmp_class_creation_18__metaclass = NULL;
    PyObject *tmp_class_creation_19__bases = NULL;
    PyObject *tmp_class_creation_19__class = NULL;
    PyObject *tmp_class_creation_19__class_dict = NULL;
    PyObject *tmp_class_creation_19__metaclass = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_20__bases = NULL;
    PyObject *tmp_class_creation_20__class = NULL;
    PyObject *tmp_class_creation_20__class_dict = NULL;
    PyObject *tmp_class_creation_20__metaclass = NULL;
    PyObject *tmp_class_creation_21__bases = NULL;
    PyObject *tmp_class_creation_21__class = NULL;
    PyObject *tmp_class_creation_21__class_dict = NULL;
    PyObject *tmp_class_creation_21__metaclass = NULL;
    PyObject *tmp_class_creation_22__bases = NULL;
    PyObject *tmp_class_creation_22__class = NULL;
    PyObject *tmp_class_creation_22__class_dict = NULL;
    PyObject *tmp_class_creation_22__metaclass = NULL;
    PyObject *tmp_class_creation_23__bases = NULL;
    PyObject *tmp_class_creation_23__class = NULL;
    PyObject *tmp_class_creation_23__class_dict = NULL;
    PyObject *tmp_class_creation_23__metaclass = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
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
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__class = NULL;
    PyObject *tmp_class_creation_7__class_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__class = NULL;
    PyObject *tmp_class_creation_8__class_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__class = NULL;
    PyObject *tmp_class_creation_9__class_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_select_metaclass_10__base = NULL;
    PyObject *tmp_select_metaclass_11__base = NULL;
    PyObject *tmp_select_metaclass_12__base = NULL;
    PyObject *tmp_select_metaclass_13__base = NULL;
    PyObject *tmp_select_metaclass_14__base = NULL;
    PyObject *tmp_select_metaclass_15__base = NULL;
    PyObject *tmp_select_metaclass_16__base = NULL;
    PyObject *tmp_select_metaclass_17__base = NULL;
    PyObject *tmp_select_metaclass_18__base = NULL;
    PyObject *tmp_select_metaclass_19__base = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
    PyObject *tmp_select_metaclass_20__base = NULL;
    PyObject *tmp_select_metaclass_21__base = NULL;
    PyObject *tmp_select_metaclass_22__base = NULL;
    PyObject *tmp_select_metaclass_23__base = NULL;
    PyObject *tmp_select_metaclass_2__base = NULL;
    PyObject *tmp_select_metaclass_3__base = NULL;
    PyObject *tmp_select_metaclass_4__base = NULL;
    PyObject *tmp_select_metaclass_5__base = NULL;
    PyObject *tmp_select_metaclass_6__base = NULL;
    PyObject *tmp_select_metaclass_7__base = NULL;
    PyObject *tmp_select_metaclass_8__base = NULL;
    PyObject *tmp_select_metaclass_9__base = NULL;
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
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
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
    PyObject *tmp_dictset_value;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
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
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
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
    PyObject *tmp_outline_return_value_31;
    PyObject *tmp_outline_return_value_32;
    PyObject *tmp_outline_return_value_33;
    PyObject *tmp_outline_return_value_34;
    PyObject *tmp_outline_return_value_35;
    PyObject *tmp_outline_return_value_36;
    PyObject *tmp_outline_return_value_37;
    PyObject *tmp_outline_return_value_38;
    PyObject *tmp_outline_return_value_39;
    PyObject *tmp_outline_return_value_40;
    PyObject *tmp_outline_return_value_41;
    PyObject *tmp_outline_return_value_42;
    PyObject *tmp_outline_return_value_43;
    PyObject *tmp_outline_return_value_44;
    PyObject *tmp_outline_return_value_45;
    PyObject *tmp_outline_return_value_46;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscribed_name_8;
    PyObject *tmp_subscribed_name_9;
    PyObject *tmp_subscribed_name_10;
    PyObject *tmp_subscribed_name_11;
    PyObject *tmp_subscribed_name_12;
    PyObject *tmp_subscribed_name_13;
    PyObject *tmp_subscribed_name_14;
    PyObject *tmp_subscribed_name_15;
    PyObject *tmp_subscribed_name_16;
    PyObject *tmp_subscribed_name_17;
    PyObject *tmp_subscribed_name_18;
    PyObject *tmp_subscribed_name_19;
    PyObject *tmp_subscribed_name_20;
    PyObject *tmp_subscribed_name_21;
    PyObject *tmp_subscribed_name_22;
    PyObject *tmp_subscribed_name_23;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_subscript_name_8;
    PyObject *tmp_subscript_name_9;
    PyObject *tmp_subscript_name_10;
    PyObject *tmp_subscript_name_11;
    PyObject *tmp_subscript_name_12;
    PyObject *tmp_subscript_name_13;
    PyObject *tmp_subscript_name_14;
    PyObject *tmp_subscript_name_15;
    PyObject *tmp_subscript_name_16;
    PyObject *tmp_subscript_name_17;
    PyObject *tmp_subscript_name_18;
    PyObject *tmp_subscript_name_19;
    PyObject *tmp_subscript_name_20;
    PyObject *tmp_subscript_name_21;
    PyObject *tmp_subscript_name_22;
    PyObject *tmp_subscript_name_23;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_tuple_element_9;
    PyObject *tmp_tuple_element_10;
    PyObject *tmp_tuple_element_11;
    PyObject *tmp_tuple_element_12;
    PyObject *tmp_tuple_element_13;
    PyObject *tmp_tuple_element_14;
    PyObject *tmp_tuple_element_15;
    PyObject *tmp_tuple_element_16;
    PyObject *tmp_tuple_element_17;
    PyObject *tmp_tuple_element_18;
    PyObject *tmp_tuple_element_19;
    PyObject *tmp_tuple_element_20;
    PyObject *tmp_tuple_element_21;
    PyObject *tmp_tuple_element_22;
    PyObject *tmp_tuple_element_23;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyObject *tmp_type_arg_3;
    PyObject *tmp_type_arg_4;
    PyObject *tmp_type_arg_5;
    PyObject *tmp_type_arg_6;
    PyObject *tmp_type_arg_7;
    PyObject *tmp_type_arg_8;
    PyObject *tmp_type_arg_9;
    PyObject *tmp_type_arg_10;
    PyObject *tmp_type_arg_11;
    PyObject *tmp_type_arg_12;
    PyObject *tmp_type_arg_13;
    PyObject *tmp_type_arg_14;
    PyObject *tmp_type_arg_15;
    PyObject *tmp_type_arg_16;
    PyObject *tmp_type_arg_17;
    PyObject *tmp_type_arg_18;
    PyObject *tmp_type_arg_19;
    PyObject *tmp_type_arg_20;
    PyObject *tmp_type_arg_21;
    PyObject *tmp_type_arg_22;
    PyObject *tmp_type_arg_23;
    struct Nuitka_FrameObject *frame_8e7ffb0d279fbe0b2e22a10ee8610395;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    tmp_outline_return_value_31 = NULL;
    tmp_outline_return_value_32 = NULL;
    tmp_outline_return_value_33 = NULL;
    tmp_outline_return_value_34 = NULL;
    tmp_outline_return_value_35 = NULL;
    tmp_outline_return_value_36 = NULL;
    tmp_outline_return_value_37 = NULL;
    tmp_outline_return_value_38 = NULL;
    tmp_outline_return_value_39 = NULL;
    tmp_outline_return_value_40 = NULL;
    tmp_outline_return_value_41 = NULL;
    tmp_outline_return_value_42 = NULL;
    tmp_outline_return_value_43 = NULL;
    tmp_outline_return_value_44 = NULL;
    tmp_outline_return_value_45 = NULL;
    tmp_outline_return_value_46 = NULL;
    PyObject *locals_Timeout_44 = NULL;
    PyObject *locals_InvalidHeader_84 = NULL;
    PyObject *locals_InvalidURL_80 = NULL;
    PyObject *locals_SSLError_40 = NULL;
    PyObject *locals_HTTPError_28 = NULL;
    PyObject *locals_TooManyRedirects_68 = NULL;
    PyObject *locals_ChunkedEncodingError_92 = NULL;
    PyObject *locals_RequestsDependencyWarning_122 = NULL;
    PyObject *locals_ConnectTimeout_53 = NULL;
    PyObject *locals_ReadTimeout_60 = NULL;
    PyObject *locals_ConnectionError_32 = NULL;
    PyObject *locals_StreamConsumedError_100 = NULL;
    PyObject *locals_ContentDecodingError_96 = NULL;
    PyObject *locals_FileModeWarning_118 = NULL;
    PyObject *locals_InvalidProxyURL_88 = NULL;
    PyObject *locals_RequestsWarning_114 = NULL;
    PyObject *locals_UnrewindableBodyError_108 = NULL;
    PyObject *locals_RetryError_104 = NULL;
    PyObject *locals_ProxyError_36 = NULL;
    PyObject *locals_URLRequired_64 = NULL;
    PyObject *locals_InvalidSchema_76 = NULL;
    PyObject *locals_MissingSchema_72 = NULL;
    PyObject *locals_RequestException_12 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_b2c98825348c9fcd71a85ac1bfc67cf8;
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_8e7ffb0d279fbe0b2e22a10ee8610395 = MAKE_MODULE_FRAME( codeobj_8e7ffb0d279fbe0b2e22a10ee8610395, module_requests$exceptions );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_8e7ffb0d279fbe0b2e22a10ee8610395 );
    assert( Py_REFCNT( frame_8e7ffb0d279fbe0b2e22a10ee8610395 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_globals_name_1 = (PyObject *)moduledict_requests$exceptions;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_HTTPError_tuple;
    frame_8e7ffb0d279fbe0b2e22a10ee8610395->m_frame.f_lineno = 9;
    tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_HTTPError );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_BaseHTTPError, tmp_assign_source_3 );
    tmp_assign_source_4 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyExc_IOError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_4, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_4;

    tmp_set_locals = PyDict_New();
    locals_RequestException_12 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyDict_SetItem( locals_RequestException_12, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_2ad78bd49ece92478753ce0fc79a6e93;
    tmp_res = PyDict_SetItem( locals_RequestException_12, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_requests$exceptions$$$function_1___init__(  );
    tmp_res = PyDict_SetItem( locals_RequestException_12, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_1 = locals_RequestException_12;
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_1:;
    Py_DECREF( locals_RequestException_12 );
    locals_RequestException_12 = NULL;
    goto outline_result_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_1:;
    tmp_assign_source_5 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_5;

    // Tried code:
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
    tmp_assign_source_6 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_2;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_subscribed_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_2;
    }
    assert( tmp_select_metaclass_1__base == NULL );
    tmp_select_metaclass_1__base = tmp_assign_source_7;

    // Tried code:
    // Tried code:
    tmp_source_name_1 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_outline_return_value_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_outline_return_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_4;
    }
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    tmp_type_arg_1 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_outline_return_value_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_outline_return_value_2 != NULL );
    goto try_return_handler_3;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
    Py_DECREF( tmp_select_metaclass_1__base );
    tmp_select_metaclass_1__base = NULL;

    goto outline_result_2;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
    Py_DECREF( tmp_select_metaclass_1__base );
    tmp_select_metaclass_1__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_2:;
    tmp_assign_source_6 = tmp_outline_return_value_2;
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_6;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_RequestException;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_8e7ffb0d279fbe0b2e22a10ee8610395->m_frame.f_lineno = 12;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_8;

    goto try_end_1;
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_9 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_9 );
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException, tmp_assign_source_9 );
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
    tmp_assign_source_10 = PyTuple_New( 1 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestException" );
        exception_tb = NULL;

        exception_lineno = 28;

        goto try_except_handler_5;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_10, 0, tmp_tuple_element_2 );
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_10;

    tmp_set_locals = PyDict_New();
    locals_HTTPError_28 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyDict_SetItem( locals_HTTPError_28, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_ddf19d9bbf2d99a7777bfd3dcc1db8dc;
    tmp_res = PyDict_SetItem( locals_HTTPError_28, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_3 = locals_HTTPError_28;
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_6:;
    Py_DECREF( locals_HTTPError_28 );
    locals_HTTPError_28 = NULL;
    goto outline_result_3;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_3:;
    tmp_assign_source_11 = tmp_outline_return_value_3;
    assert( tmp_class_creation_2__class_dict == NULL );
    tmp_class_creation_2__class_dict = tmp_assign_source_11;

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
    tmp_assign_source_12 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_5;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_subscribed_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_int_0;
    tmp_assign_source_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_5;
    }
    assert( tmp_select_metaclass_2__base == NULL );
    tmp_select_metaclass_2__base = tmp_assign_source_13;

    // Tried code:
    // Tried code:
    tmp_source_name_2 = tmp_select_metaclass_2__base;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_outline_return_value_4 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_2 );
    if ( tmp_outline_return_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_8;
    }
    goto try_return_handler_7;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_8:;
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
    tmp_type_arg_2 = tmp_select_metaclass_2__base;

    CHECK_OBJECT( tmp_type_arg_2 );
    tmp_outline_return_value_4 = BUILTIN_TYPE1( tmp_type_arg_2 );
    assert( tmp_outline_return_value_4 != NULL );
    goto try_return_handler_7;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_7:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
    Py_DECREF( tmp_select_metaclass_2__base );
    tmp_select_metaclass_2__base = NULL;

    goto outline_result_4;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
    Py_DECREF( tmp_select_metaclass_2__base );
    tmp_select_metaclass_2__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_4:;
    tmp_assign_source_12 = tmp_outline_return_value_4;
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_12;

    tmp_called_name_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_args_element_name_4 = const_str_plain_HTTPError;
    tmp_args_element_name_5 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_args_element_name_5 );
    tmp_args_element_name_6 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_8e7ffb0d279fbe0b2e22a10ee8610395->m_frame.f_lineno = 28;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_5;
    }
    assert( tmp_class_creation_2__class == NULL );
    tmp_class_creation_2__class = tmp_assign_source_14;

    goto try_end_2;
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

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    tmp_assign_source_15 = tmp_class_creation_2__class;

    CHECK_OBJECT( tmp_assign_source_15 );
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError, tmp_assign_source_15 );
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

    // Tried code:
    tmp_assign_source_16 = PyTuple_New( 1 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestException" );
        exception_tb = NULL;

        exception_lineno = 32;

        goto try_except_handler_9;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_16, 0, tmp_tuple_element_3 );
    assert( tmp_class_creation_3__bases == NULL );
    tmp_class_creation_3__bases = tmp_assign_source_16;

    tmp_set_locals = PyDict_New();
    locals_ConnectionError_32 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyDict_SetItem( locals_ConnectionError_32, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_8b54d81d400c0da933dfb8e36e1ac1f0;
    tmp_res = PyDict_SetItem( locals_ConnectionError_32, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_5 = locals_ConnectionError_32;
    Py_INCREF( tmp_outline_return_value_5 );
    goto try_return_handler_10;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_10:;
    Py_DECREF( locals_ConnectionError_32 );
    locals_ConnectionError_32 = NULL;
    goto outline_result_5;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_5:;
    tmp_assign_source_17 = tmp_outline_return_value_5;
    assert( tmp_class_creation_3__class_dict == NULL );
    tmp_class_creation_3__class_dict = tmp_assign_source_17;

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
    tmp_assign_source_18 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_9;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_subscribed_name_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_subscribed_name_3 );
    tmp_subscript_name_3 = const_int_0;
    tmp_assign_source_19 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_9;
    }
    assert( tmp_select_metaclass_3__base == NULL );
    tmp_select_metaclass_3__base = tmp_assign_source_19;

    // Tried code:
    // Tried code:
    tmp_source_name_3 = tmp_select_metaclass_3__base;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_outline_return_value_6 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    if ( tmp_outline_return_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_12;
    }
    goto try_return_handler_11;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_5 );
    Py_XDECREF( exception_keeper_value_5 );
    Py_XDECREF( exception_keeper_tb_5 );
    tmp_type_arg_3 = tmp_select_metaclass_3__base;

    CHECK_OBJECT( tmp_type_arg_3 );
    tmp_outline_return_value_6 = BUILTIN_TYPE1( tmp_type_arg_3 );
    assert( tmp_outline_return_value_6 != NULL );
    goto try_return_handler_11;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_11:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_3__base );
    Py_DECREF( tmp_select_metaclass_3__base );
    tmp_select_metaclass_3__base = NULL;

    goto outline_result_6;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_3__base );
    Py_DECREF( tmp_select_metaclass_3__base );
    tmp_select_metaclass_3__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_6:;
    tmp_assign_source_18 = tmp_outline_return_value_6;
    condexpr_end_3:;
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_18;

    tmp_called_name_3 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_args_element_name_7 = const_str_plain_ConnectionError;
    tmp_args_element_name_8 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_args_element_name_8 );
    tmp_args_element_name_9 = tmp_class_creation_3__class_dict;

    CHECK_OBJECT( tmp_args_element_name_9 );
    frame_8e7ffb0d279fbe0b2e22a10ee8610395->m_frame.f_lineno = 32;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_9;
    }
    assert( tmp_class_creation_3__class == NULL );
    tmp_class_creation_3__class = tmp_assign_source_20;

    goto try_end_3;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    tmp_assign_source_21 = tmp_class_creation_3__class;

    CHECK_OBJECT( tmp_assign_source_21 );
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectionError, tmp_assign_source_21 );
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

    // Tried code:
    tmp_assign_source_22 = PyTuple_New( 1 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectionError );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectionError );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_22 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ConnectionError" );
        exception_tb = NULL;

        exception_lineno = 36;

        goto try_except_handler_13;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_22, 0, tmp_tuple_element_4 );
    assert( tmp_class_creation_4__bases == NULL );
    tmp_class_creation_4__bases = tmp_assign_source_22;

    tmp_set_locals = PyDict_New();
    locals_ProxyError_36 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyDict_SetItem( locals_ProxyError_36, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_3aedd4c9c88f311ca62d0cad34678af2;
    tmp_res = PyDict_SetItem( locals_ProxyError_36, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_7 = locals_ProxyError_36;
    Py_INCREF( tmp_outline_return_value_7 );
    goto try_return_handler_14;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_14:;
    Py_DECREF( locals_ProxyError_36 );
    locals_ProxyError_36 = NULL;
    goto outline_result_7;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_7:;
    tmp_assign_source_23 = tmp_outline_return_value_7;
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


        exception_lineno = 36;

        goto try_except_handler_13;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_subscribed_name_4 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_subscribed_name_4 );
    tmp_subscript_name_4 = const_int_0;
    tmp_assign_source_25 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_13;
    }
    assert( tmp_select_metaclass_4__base == NULL );
    tmp_select_metaclass_4__base = tmp_assign_source_25;

    // Tried code:
    // Tried code:
    tmp_source_name_4 = tmp_select_metaclass_4__base;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_outline_return_value_8 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_4 );
    if ( tmp_outline_return_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_16;
    }
    goto try_return_handler_15;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_7 );
    Py_XDECREF( exception_keeper_value_7 );
    Py_XDECREF( exception_keeper_tb_7 );
    tmp_type_arg_4 = tmp_select_metaclass_4__base;

    CHECK_OBJECT( tmp_type_arg_4 );
    tmp_outline_return_value_8 = BUILTIN_TYPE1( tmp_type_arg_4 );
    assert( tmp_outline_return_value_8 != NULL );
    goto try_return_handler_15;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_15:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_4__base );
    Py_DECREF( tmp_select_metaclass_4__base );
    tmp_select_metaclass_4__base = NULL;

    goto outline_result_8;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_4__base );
    Py_DECREF( tmp_select_metaclass_4__base );
    tmp_select_metaclass_4__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_8:;
    tmp_assign_source_24 = tmp_outline_return_value_8;
    condexpr_end_4:;
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_24;

    tmp_called_name_4 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_args_element_name_10 = const_str_plain_ProxyError;
    tmp_args_element_name_11 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_args_element_name_11 );
    tmp_args_element_name_12 = tmp_class_creation_4__class_dict;

    CHECK_OBJECT( tmp_args_element_name_12 );
    frame_8e7ffb0d279fbe0b2e22a10ee8610395->m_frame.f_lineno = 36;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_13;
    }
    assert( tmp_class_creation_4__class == NULL );
    tmp_class_creation_4__class = tmp_assign_source_26;

    goto try_end_4;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    tmp_assign_source_27 = tmp_class_creation_4__class;

    CHECK_OBJECT( tmp_assign_source_27 );
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ProxyError, tmp_assign_source_27 );
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
    tmp_assign_source_28 = PyTuple_New( 1 );
    tmp_tuple_element_5 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectionError );

    if (unlikely( tmp_tuple_element_5 == NULL ))
    {
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectionError );
    }

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_28 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ConnectionError" );
        exception_tb = NULL;

        exception_lineno = 40;

        goto try_except_handler_17;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_assign_source_28, 0, tmp_tuple_element_5 );
    assert( tmp_class_creation_5__bases == NULL );
    tmp_class_creation_5__bases = tmp_assign_source_28;

    tmp_set_locals = PyDict_New();
    locals_SSLError_40 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyDict_SetItem( locals_SSLError_40, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_35d6e09b700b272e1f4429814168031d;
    tmp_res = PyDict_SetItem( locals_SSLError_40, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_9 = locals_SSLError_40;
    Py_INCREF( tmp_outline_return_value_9 );
    goto try_return_handler_18;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_18:;
    Py_DECREF( locals_SSLError_40 );
    locals_SSLError_40 = NULL;
    goto outline_result_9;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_9:;
    tmp_assign_source_29 = tmp_outline_return_value_9;
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


        exception_lineno = 40;

        goto try_except_handler_17;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_subscribed_name_5 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_subscribed_name_5 );
    tmp_subscript_name_5 = const_int_0;
    tmp_assign_source_31 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_17;
    }
    assert( tmp_select_metaclass_5__base == NULL );
    tmp_select_metaclass_5__base = tmp_assign_source_31;

    // Tried code:
    // Tried code:
    tmp_source_name_5 = tmp_select_metaclass_5__base;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_outline_return_value_10 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_5 );
    if ( tmp_outline_return_value_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_20;
    }
    goto try_return_handler_19;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_9 );
    Py_XDECREF( exception_keeper_value_9 );
    Py_XDECREF( exception_keeper_tb_9 );
    tmp_type_arg_5 = tmp_select_metaclass_5__base;

    CHECK_OBJECT( tmp_type_arg_5 );
    tmp_outline_return_value_10 = BUILTIN_TYPE1( tmp_type_arg_5 );
    assert( tmp_outline_return_value_10 != NULL );
    goto try_return_handler_19;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_19:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_5__base );
    Py_DECREF( tmp_select_metaclass_5__base );
    tmp_select_metaclass_5__base = NULL;

    goto outline_result_10;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_5__base );
    Py_DECREF( tmp_select_metaclass_5__base );
    tmp_select_metaclass_5__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_10:;
    tmp_assign_source_30 = tmp_outline_return_value_10;
    condexpr_end_5:;
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_30;

    tmp_called_name_5 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_called_name_5 );
    tmp_args_element_name_13 = const_str_plain_SSLError;
    tmp_args_element_name_14 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_args_element_name_14 );
    tmp_args_element_name_15 = tmp_class_creation_5__class_dict;

    CHECK_OBJECT( tmp_args_element_name_15 );
    frame_8e7ffb0d279fbe0b2e22a10ee8610395->m_frame.f_lineno = 40;
    {
        PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_17;
    }
    assert( tmp_class_creation_5__class == NULL );
    tmp_class_creation_5__class = tmp_assign_source_32;

    goto try_end_5;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
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
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    tmp_assign_source_33 = tmp_class_creation_5__class;

    CHECK_OBJECT( tmp_assign_source_33 );
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_SSLError, tmp_assign_source_33 );
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
    tmp_assign_source_34 = PyTuple_New( 1 );
    tmp_tuple_element_6 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_6 == NULL ))
    {
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_34 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestException" );
        exception_tb = NULL;

        exception_lineno = 44;

        goto try_except_handler_21;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_assign_source_34, 0, tmp_tuple_element_6 );
    assert( tmp_class_creation_6__bases == NULL );
    tmp_class_creation_6__bases = tmp_assign_source_34;

    tmp_set_locals = PyDict_New();
    locals_Timeout_44 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyDict_SetItem( locals_Timeout_44, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_34a451307fc6aab1649478fed3307568;
    tmp_res = PyDict_SetItem( locals_Timeout_44, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_11 = locals_Timeout_44;
    Py_INCREF( tmp_outline_return_value_11 );
    goto try_return_handler_22;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_22:;
    Py_DECREF( locals_Timeout_44 );
    locals_Timeout_44 = NULL;
    goto outline_result_11;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_11:;
    tmp_assign_source_35 = tmp_outline_return_value_11;
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


        exception_lineno = 44;

        goto try_except_handler_21;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_subscribed_name_6 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_subscribed_name_6 );
    tmp_subscript_name_6 = const_int_0;
    tmp_assign_source_37 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_21;
    }
    assert( tmp_select_metaclass_6__base == NULL );
    tmp_select_metaclass_6__base = tmp_assign_source_37;

    // Tried code:
    // Tried code:
    tmp_source_name_6 = tmp_select_metaclass_6__base;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_outline_return_value_12 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_6 );
    if ( tmp_outline_return_value_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_24;
    }
    goto try_return_handler_23;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_24:;
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
    tmp_type_arg_6 = tmp_select_metaclass_6__base;

    CHECK_OBJECT( tmp_type_arg_6 );
    tmp_outline_return_value_12 = BUILTIN_TYPE1( tmp_type_arg_6 );
    assert( tmp_outline_return_value_12 != NULL );
    goto try_return_handler_23;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_23:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_6__base );
    Py_DECREF( tmp_select_metaclass_6__base );
    tmp_select_metaclass_6__base = NULL;

    goto outline_result_12;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_6__base );
    Py_DECREF( tmp_select_metaclass_6__base );
    tmp_select_metaclass_6__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_12:;
    tmp_assign_source_36 = tmp_outline_return_value_12;
    condexpr_end_6:;
    assert( tmp_class_creation_6__metaclass == NULL );
    tmp_class_creation_6__metaclass = tmp_assign_source_36;

    tmp_called_name_6 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_called_name_6 );
    tmp_args_element_name_16 = const_str_plain_Timeout;
    tmp_args_element_name_17 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_args_element_name_17 );
    tmp_args_element_name_18 = tmp_class_creation_6__class_dict;

    CHECK_OBJECT( tmp_args_element_name_18 );
    frame_8e7ffb0d279fbe0b2e22a10ee8610395->m_frame.f_lineno = 44;
    {
        PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18 };
        tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
    }

    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_21;
    }
    assert( tmp_class_creation_6__class == NULL );
    tmp_class_creation_6__class = tmp_assign_source_38;

    goto try_end_6;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
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
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    tmp_assign_source_39 = tmp_class_creation_6__class;

    CHECK_OBJECT( tmp_assign_source_39 );
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_Timeout, tmp_assign_source_39 );
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
    tmp_assign_source_40 = PyTuple_New( 2 );
    tmp_tuple_element_7 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectionError );

    if (unlikely( tmp_tuple_element_7 == NULL ))
    {
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectionError );
    }

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_40 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ConnectionError" );
        exception_tb = NULL;

        exception_lineno = 53;

        goto try_except_handler_25;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_assign_source_40, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_Timeout );

    if (unlikely( tmp_tuple_element_7 == NULL ))
    {
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Timeout );
    }

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_40 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Timeout" );
        exception_tb = NULL;

        exception_lineno = 53;

        goto try_except_handler_25;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_assign_source_40, 1, tmp_tuple_element_7 );
    assert( tmp_class_creation_7__bases == NULL );
    tmp_class_creation_7__bases = tmp_assign_source_40;

    tmp_set_locals = PyDict_New();
    locals_ConnectTimeout_53 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyDict_SetItem( locals_ConnectTimeout_53, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_ade7d7a167d988b8081c48c9a0bed8e8;
    tmp_res = PyDict_SetItem( locals_ConnectTimeout_53, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_13 = locals_ConnectTimeout_53;
    Py_INCREF( tmp_outline_return_value_13 );
    goto try_return_handler_26;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_26:;
    Py_DECREF( locals_ConnectTimeout_53 );
    locals_ConnectTimeout_53 = NULL;
    goto outline_result_13;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_13:;
    tmp_assign_source_41 = tmp_outline_return_value_13;
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


        exception_lineno = 53;

        goto try_except_handler_25;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_subscribed_name_7 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_subscribed_name_7 );
    tmp_subscript_name_7 = const_int_0;
    tmp_assign_source_43 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_25;
    }
    assert( tmp_select_metaclass_7__base == NULL );
    tmp_select_metaclass_7__base = tmp_assign_source_43;

    // Tried code:
    // Tried code:
    tmp_source_name_7 = tmp_select_metaclass_7__base;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_outline_return_value_14 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_7 );
    if ( tmp_outline_return_value_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_28;
    }
    goto try_return_handler_27;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_28:;
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
    tmp_type_arg_7 = tmp_select_metaclass_7__base;

    CHECK_OBJECT( tmp_type_arg_7 );
    tmp_outline_return_value_14 = BUILTIN_TYPE1( tmp_type_arg_7 );
    assert( tmp_outline_return_value_14 != NULL );
    goto try_return_handler_27;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_27:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_7__base );
    Py_DECREF( tmp_select_metaclass_7__base );
    tmp_select_metaclass_7__base = NULL;

    goto outline_result_14;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_7__base );
    Py_DECREF( tmp_select_metaclass_7__base );
    tmp_select_metaclass_7__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_14:;
    tmp_assign_source_42 = tmp_outline_return_value_14;
    condexpr_end_7:;
    assert( tmp_class_creation_7__metaclass == NULL );
    tmp_class_creation_7__metaclass = tmp_assign_source_42;

    tmp_called_name_7 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_called_name_7 );
    tmp_args_element_name_19 = const_str_plain_ConnectTimeout;
    tmp_args_element_name_20 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_args_element_name_20 );
    tmp_args_element_name_21 = tmp_class_creation_7__class_dict;

    CHECK_OBJECT( tmp_args_element_name_21 );
    frame_8e7ffb0d279fbe0b2e22a10ee8610395->m_frame.f_lineno = 53;
    {
        PyObject *call_args[] = { tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21 };
        tmp_assign_source_44 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
    }

    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_25;
    }
    assert( tmp_class_creation_7__class == NULL );
    tmp_class_creation_7__class = tmp_assign_source_44;

    goto try_end_7;
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

    Py_XDECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    Py_XDECREF( tmp_class_creation_7__class_dict );
    tmp_class_creation_7__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    tmp_assign_source_45 = tmp_class_creation_7__class;

    CHECK_OBJECT( tmp_assign_source_45 );
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectTimeout, tmp_assign_source_45 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class );
    Py_DECREF( tmp_class_creation_7__class );
    tmp_class_creation_7__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__bases );
    Py_DECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class_dict );
    Py_DECREF( tmp_class_creation_7__class_dict );
    tmp_class_creation_7__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__metaclass );
    Py_DECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    // Tried code:
    tmp_assign_source_46 = PyTuple_New( 1 );
    tmp_tuple_element_8 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_Timeout );

    if (unlikely( tmp_tuple_element_8 == NULL ))
    {
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Timeout );
    }

    if ( tmp_tuple_element_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_46 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Timeout" );
        exception_tb = NULL;

        exception_lineno = 60;

        goto try_except_handler_29;
    }

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_assign_source_46, 0, tmp_tuple_element_8 );
    assert( tmp_class_creation_8__bases == NULL );
    tmp_class_creation_8__bases = tmp_assign_source_46;

    tmp_set_locals = PyDict_New();
    locals_ReadTimeout_60 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyDict_SetItem( locals_ReadTimeout_60, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_b8f960a38723097fb701d7986528073c;
    tmp_res = PyDict_SetItem( locals_ReadTimeout_60, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_15 = locals_ReadTimeout_60;
    Py_INCREF( tmp_outline_return_value_15 );
    goto try_return_handler_30;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_30:;
    Py_DECREF( locals_ReadTimeout_60 );
    locals_ReadTimeout_60 = NULL;
    goto outline_result_15;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_15:;
    tmp_assign_source_47 = tmp_outline_return_value_15;
    assert( tmp_class_creation_8__class_dict == NULL );
    tmp_class_creation_8__class_dict = tmp_assign_source_47;

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
    tmp_assign_source_48 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_29;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_subscribed_name_8 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_subscribed_name_8 );
    tmp_subscript_name_8 = const_int_0;
    tmp_assign_source_49 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_29;
    }
    assert( tmp_select_metaclass_8__base == NULL );
    tmp_select_metaclass_8__base = tmp_assign_source_49;

    // Tried code:
    // Tried code:
    tmp_source_name_8 = tmp_select_metaclass_8__base;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_outline_return_value_16 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_8 );
    if ( tmp_outline_return_value_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_32;
    }
    goto try_return_handler_31;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_15 );
    Py_XDECREF( exception_keeper_value_15 );
    Py_XDECREF( exception_keeper_tb_15 );
    tmp_type_arg_8 = tmp_select_metaclass_8__base;

    CHECK_OBJECT( tmp_type_arg_8 );
    tmp_outline_return_value_16 = BUILTIN_TYPE1( tmp_type_arg_8 );
    assert( tmp_outline_return_value_16 != NULL );
    goto try_return_handler_31;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_31:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_8__base );
    Py_DECREF( tmp_select_metaclass_8__base );
    tmp_select_metaclass_8__base = NULL;

    goto outline_result_16;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_8__base );
    Py_DECREF( tmp_select_metaclass_8__base );
    tmp_select_metaclass_8__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_16:;
    tmp_assign_source_48 = tmp_outline_return_value_16;
    condexpr_end_8:;
    assert( tmp_class_creation_8__metaclass == NULL );
    tmp_class_creation_8__metaclass = tmp_assign_source_48;

    tmp_called_name_8 = tmp_class_creation_8__metaclass;

    CHECK_OBJECT( tmp_called_name_8 );
    tmp_args_element_name_22 = const_str_plain_ReadTimeout;
    tmp_args_element_name_23 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_args_element_name_23 );
    tmp_args_element_name_24 = tmp_class_creation_8__class_dict;

    CHECK_OBJECT( tmp_args_element_name_24 );
    frame_8e7ffb0d279fbe0b2e22a10ee8610395->m_frame.f_lineno = 60;
    {
        PyObject *call_args[] = { tmp_args_element_name_22, tmp_args_element_name_23, tmp_args_element_name_24 };
        tmp_assign_source_50 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_8, call_args );
    }

    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_29;
    }
    assert( tmp_class_creation_8__class == NULL );
    tmp_class_creation_8__class = tmp_assign_source_50;

    goto try_end_8;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_8__bases );
    tmp_class_creation_8__bases = NULL;

    Py_XDECREF( tmp_class_creation_8__class_dict );
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
    try_end_8:;
    tmp_assign_source_51 = tmp_class_creation_8__class;

    CHECK_OBJECT( tmp_assign_source_51 );
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ReadTimeout, tmp_assign_source_51 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__class );
    Py_DECREF( tmp_class_creation_8__class );
    tmp_class_creation_8__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__bases );
    Py_DECREF( tmp_class_creation_8__bases );
    tmp_class_creation_8__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__class_dict );
    Py_DECREF( tmp_class_creation_8__class_dict );
    tmp_class_creation_8__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__metaclass );
    Py_DECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    // Tried code:
    tmp_assign_source_52 = PyTuple_New( 1 );
    tmp_tuple_element_9 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_9 == NULL ))
    {
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_52 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestException" );
        exception_tb = NULL;

        exception_lineno = 64;

        goto try_except_handler_33;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_assign_source_52, 0, tmp_tuple_element_9 );
    assert( tmp_class_creation_9__bases == NULL );
    tmp_class_creation_9__bases = tmp_assign_source_52;

    tmp_set_locals = PyDict_New();
    locals_URLRequired_64 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyDict_SetItem( locals_URLRequired_64, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_841f485de6d4157389a41ea63dc14155;
    tmp_res = PyDict_SetItem( locals_URLRequired_64, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_17 = locals_URLRequired_64;
    Py_INCREF( tmp_outline_return_value_17 );
    goto try_return_handler_34;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_34:;
    Py_DECREF( locals_URLRequired_64 );
    locals_URLRequired_64 = NULL;
    goto outline_result_17;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_17:;
    tmp_assign_source_53 = tmp_outline_return_value_17;
    assert( tmp_class_creation_9__class_dict == NULL );
    tmp_class_creation_9__class_dict = tmp_assign_source_53;

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
    tmp_assign_source_54 = DICT_GET_ITEM( tmp_dict_name_9, tmp_key_name_9 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_33;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_subscribed_name_9 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_subscribed_name_9 );
    tmp_subscript_name_9 = const_int_0;
    tmp_assign_source_55 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_33;
    }
    assert( tmp_select_metaclass_9__base == NULL );
    tmp_select_metaclass_9__base = tmp_assign_source_55;

    // Tried code:
    // Tried code:
    tmp_source_name_9 = tmp_select_metaclass_9__base;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_outline_return_value_18 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_9 );
    if ( tmp_outline_return_value_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_36;
    }
    goto try_return_handler_35;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_36:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_17 );
    Py_XDECREF( exception_keeper_value_17 );
    Py_XDECREF( exception_keeper_tb_17 );
    tmp_type_arg_9 = tmp_select_metaclass_9__base;

    CHECK_OBJECT( tmp_type_arg_9 );
    tmp_outline_return_value_18 = BUILTIN_TYPE1( tmp_type_arg_9 );
    assert( tmp_outline_return_value_18 != NULL );
    goto try_return_handler_35;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_35:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_9__base );
    Py_DECREF( tmp_select_metaclass_9__base );
    tmp_select_metaclass_9__base = NULL;

    goto outline_result_18;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_9__base );
    Py_DECREF( tmp_select_metaclass_9__base );
    tmp_select_metaclass_9__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_18:;
    tmp_assign_source_54 = tmp_outline_return_value_18;
    condexpr_end_9:;
    assert( tmp_class_creation_9__metaclass == NULL );
    tmp_class_creation_9__metaclass = tmp_assign_source_54;

    tmp_called_name_9 = tmp_class_creation_9__metaclass;

    CHECK_OBJECT( tmp_called_name_9 );
    tmp_args_element_name_25 = const_str_plain_URLRequired;
    tmp_args_element_name_26 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_args_element_name_26 );
    tmp_args_element_name_27 = tmp_class_creation_9__class_dict;

    CHECK_OBJECT( tmp_args_element_name_27 );
    frame_8e7ffb0d279fbe0b2e22a10ee8610395->m_frame.f_lineno = 64;
    {
        PyObject *call_args[] = { tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27 };
        tmp_assign_source_56 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_9, call_args );
    }

    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_33;
    }
    assert( tmp_class_creation_9__class == NULL );
    tmp_class_creation_9__class = tmp_assign_source_56;

    goto try_end_9;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_9__bases );
    tmp_class_creation_9__bases = NULL;

    Py_XDECREF( tmp_class_creation_9__class_dict );
    tmp_class_creation_9__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    tmp_assign_source_57 = tmp_class_creation_9__class;

    CHECK_OBJECT( tmp_assign_source_57 );
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_URLRequired, tmp_assign_source_57 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__class );
    Py_DECREF( tmp_class_creation_9__class );
    tmp_class_creation_9__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__bases );
    Py_DECREF( tmp_class_creation_9__bases );
    tmp_class_creation_9__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__class_dict );
    Py_DECREF( tmp_class_creation_9__class_dict );
    tmp_class_creation_9__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__metaclass );
    Py_DECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    // Tried code:
    tmp_assign_source_58 = PyTuple_New( 1 );
    tmp_tuple_element_10 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_10 == NULL ))
    {
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_58 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestException" );
        exception_tb = NULL;

        exception_lineno = 68;

        goto try_except_handler_37;
    }

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_assign_source_58, 0, tmp_tuple_element_10 );
    assert( tmp_class_creation_10__bases == NULL );
    tmp_class_creation_10__bases = tmp_assign_source_58;

    tmp_set_locals = PyDict_New();
    locals_TooManyRedirects_68 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyDict_SetItem( locals_TooManyRedirects_68, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_30cf8cedfeac36936c731ede1cc0ad0e;
    tmp_res = PyDict_SetItem( locals_TooManyRedirects_68, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_19 = locals_TooManyRedirects_68;
    Py_INCREF( tmp_outline_return_value_19 );
    goto try_return_handler_38;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_38:;
    Py_DECREF( locals_TooManyRedirects_68 );
    locals_TooManyRedirects_68 = NULL;
    goto outline_result_19;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_19:;
    tmp_assign_source_59 = tmp_outline_return_value_19;
    assert( tmp_class_creation_10__class_dict == NULL );
    tmp_class_creation_10__class_dict = tmp_assign_source_59;

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


        exception_lineno = 68;

        goto try_except_handler_37;
    }
    goto condexpr_end_10;
    condexpr_false_10:;
    tmp_subscribed_name_10 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_subscribed_name_10 );
    tmp_subscript_name_10 = const_int_0;
    tmp_assign_source_61 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto try_except_handler_37;
    }
    assert( tmp_select_metaclass_10__base == NULL );
    tmp_select_metaclass_10__base = tmp_assign_source_61;

    // Tried code:
    // Tried code:
    tmp_source_name_10 = tmp_select_metaclass_10__base;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_outline_return_value_20 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_10 );
    if ( tmp_outline_return_value_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto try_except_handler_40;
    }
    goto try_return_handler_39;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_40:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_19 );
    Py_XDECREF( exception_keeper_value_19 );
    Py_XDECREF( exception_keeper_tb_19 );
    tmp_type_arg_10 = tmp_select_metaclass_10__base;

    CHECK_OBJECT( tmp_type_arg_10 );
    tmp_outline_return_value_20 = BUILTIN_TYPE1( tmp_type_arg_10 );
    assert( tmp_outline_return_value_20 != NULL );
    goto try_return_handler_39;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_39:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_10__base );
    Py_DECREF( tmp_select_metaclass_10__base );
    tmp_select_metaclass_10__base = NULL;

    goto outline_result_20;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_10__base );
    Py_DECREF( tmp_select_metaclass_10__base );
    tmp_select_metaclass_10__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_20:;
    tmp_assign_source_60 = tmp_outline_return_value_20;
    condexpr_end_10:;
    assert( tmp_class_creation_10__metaclass == NULL );
    tmp_class_creation_10__metaclass = tmp_assign_source_60;

    tmp_called_name_10 = tmp_class_creation_10__metaclass;

    CHECK_OBJECT( tmp_called_name_10 );
    tmp_args_element_name_28 = const_str_plain_TooManyRedirects;
    tmp_args_element_name_29 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_args_element_name_29 );
    tmp_args_element_name_30 = tmp_class_creation_10__class_dict;

    CHECK_OBJECT( tmp_args_element_name_30 );
    frame_8e7ffb0d279fbe0b2e22a10ee8610395->m_frame.f_lineno = 68;
    {
        PyObject *call_args[] = { tmp_args_element_name_28, tmp_args_element_name_29, tmp_args_element_name_30 };
        tmp_assign_source_62 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, call_args );
    }

    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto try_except_handler_37;
    }
    assert( tmp_class_creation_10__class == NULL );
    tmp_class_creation_10__class = tmp_assign_source_62;

    goto try_end_10;
    // Exception handler code:
    try_except_handler_37:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_10__bases );
    tmp_class_creation_10__bases = NULL;

    Py_XDECREF( tmp_class_creation_10__class_dict );
    tmp_class_creation_10__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_10__metaclass );
    tmp_class_creation_10__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    tmp_assign_source_63 = tmp_class_creation_10__class;

    CHECK_OBJECT( tmp_assign_source_63 );
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_TooManyRedirects, tmp_assign_source_63 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__class );
    Py_DECREF( tmp_class_creation_10__class );
    tmp_class_creation_10__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__bases );
    Py_DECREF( tmp_class_creation_10__bases );
    tmp_class_creation_10__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__class_dict );
    Py_DECREF( tmp_class_creation_10__class_dict );
    tmp_class_creation_10__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__metaclass );
    Py_DECREF( tmp_class_creation_10__metaclass );
    tmp_class_creation_10__metaclass = NULL;

    // Tried code:
    tmp_assign_source_64 = PyTuple_New( 2 );
    tmp_tuple_element_11 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_11 == NULL ))
    {
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_64 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestException" );
        exception_tb = NULL;

        exception_lineno = 72;

        goto try_except_handler_41;
    }

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_assign_source_64, 0, tmp_tuple_element_11 );
    tmp_tuple_element_11 = PyExc_ValueError;
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_assign_source_64, 1, tmp_tuple_element_11 );
    assert( tmp_class_creation_11__bases == NULL );
    tmp_class_creation_11__bases = tmp_assign_source_64;

    tmp_set_locals = PyDict_New();
    locals_MissingSchema_72 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyDict_SetItem( locals_MissingSchema_72, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_c7a80113e8376f2f52f7ee120f1360d2;
    tmp_res = PyDict_SetItem( locals_MissingSchema_72, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_21 = locals_MissingSchema_72;
    Py_INCREF( tmp_outline_return_value_21 );
    goto try_return_handler_42;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_42:;
    Py_DECREF( locals_MissingSchema_72 );
    locals_MissingSchema_72 = NULL;
    goto outline_result_21;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_21:;
    tmp_assign_source_65 = tmp_outline_return_value_21;
    assert( tmp_class_creation_11__class_dict == NULL );
    tmp_class_creation_11__class_dict = tmp_assign_source_65;

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
    tmp_assign_source_66 = DICT_GET_ITEM( tmp_dict_name_11, tmp_key_name_11 );
    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto try_except_handler_41;
    }
    goto condexpr_end_11;
    condexpr_false_11:;
    tmp_subscribed_name_11 = tmp_class_creation_11__bases;

    CHECK_OBJECT( tmp_subscribed_name_11 );
    tmp_subscript_name_11 = const_int_0;
    tmp_assign_source_67 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
    if ( tmp_assign_source_67 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto try_except_handler_41;
    }
    assert( tmp_select_metaclass_11__base == NULL );
    tmp_select_metaclass_11__base = tmp_assign_source_67;

    // Tried code:
    // Tried code:
    tmp_source_name_11 = tmp_select_metaclass_11__base;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_outline_return_value_22 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_11 );
    if ( tmp_outline_return_value_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto try_except_handler_44;
    }
    goto try_return_handler_43;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_44:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_21 );
    Py_XDECREF( exception_keeper_value_21 );
    Py_XDECREF( exception_keeper_tb_21 );
    tmp_type_arg_11 = tmp_select_metaclass_11__base;

    CHECK_OBJECT( tmp_type_arg_11 );
    tmp_outline_return_value_22 = BUILTIN_TYPE1( tmp_type_arg_11 );
    assert( tmp_outline_return_value_22 != NULL );
    goto try_return_handler_43;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_43:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_11__base );
    Py_DECREF( tmp_select_metaclass_11__base );
    tmp_select_metaclass_11__base = NULL;

    goto outline_result_22;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_11__base );
    Py_DECREF( tmp_select_metaclass_11__base );
    tmp_select_metaclass_11__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_22:;
    tmp_assign_source_66 = tmp_outline_return_value_22;
    condexpr_end_11:;
    assert( tmp_class_creation_11__metaclass == NULL );
    tmp_class_creation_11__metaclass = tmp_assign_source_66;

    tmp_called_name_11 = tmp_class_creation_11__metaclass;

    CHECK_OBJECT( tmp_called_name_11 );
    tmp_args_element_name_31 = const_str_plain_MissingSchema;
    tmp_args_element_name_32 = tmp_class_creation_11__bases;

    CHECK_OBJECT( tmp_args_element_name_32 );
    tmp_args_element_name_33 = tmp_class_creation_11__class_dict;

    CHECK_OBJECT( tmp_args_element_name_33 );
    frame_8e7ffb0d279fbe0b2e22a10ee8610395->m_frame.f_lineno = 72;
    {
        PyObject *call_args[] = { tmp_args_element_name_31, tmp_args_element_name_32, tmp_args_element_name_33 };
        tmp_assign_source_68 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_11, call_args );
    }

    if ( tmp_assign_source_68 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto try_except_handler_41;
    }
    assert( tmp_class_creation_11__class == NULL );
    tmp_class_creation_11__class = tmp_assign_source_68;

    goto try_end_11;
    // Exception handler code:
    try_except_handler_41:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_11__bases );
    tmp_class_creation_11__bases = NULL;

    Py_XDECREF( tmp_class_creation_11__class_dict );
    tmp_class_creation_11__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_11__metaclass );
    tmp_class_creation_11__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    tmp_assign_source_69 = tmp_class_creation_11__class;

    CHECK_OBJECT( tmp_assign_source_69 );
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_MissingSchema, tmp_assign_source_69 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__class );
    Py_DECREF( tmp_class_creation_11__class );
    tmp_class_creation_11__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__bases );
    Py_DECREF( tmp_class_creation_11__bases );
    tmp_class_creation_11__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__class_dict );
    Py_DECREF( tmp_class_creation_11__class_dict );
    tmp_class_creation_11__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__metaclass );
    Py_DECREF( tmp_class_creation_11__metaclass );
    tmp_class_creation_11__metaclass = NULL;

    // Tried code:
    tmp_assign_source_70 = PyTuple_New( 2 );
    tmp_tuple_element_12 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_12 == NULL ))
    {
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_12 == NULL )
    {
        Py_DECREF( tmp_assign_source_70 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestException" );
        exception_tb = NULL;

        exception_lineno = 76;

        goto try_except_handler_45;
    }

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_assign_source_70, 0, tmp_tuple_element_12 );
    tmp_tuple_element_12 = PyExc_ValueError;
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_assign_source_70, 1, tmp_tuple_element_12 );
    assert( tmp_class_creation_12__bases == NULL );
    tmp_class_creation_12__bases = tmp_assign_source_70;

    tmp_set_locals = PyDict_New();
    locals_InvalidSchema_76 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyDict_SetItem( locals_InvalidSchema_76, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_0689849403be684eb33eb3512cfc2389;
    tmp_res = PyDict_SetItem( locals_InvalidSchema_76, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_23 = locals_InvalidSchema_76;
    Py_INCREF( tmp_outline_return_value_23 );
    goto try_return_handler_46;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_46:;
    Py_DECREF( locals_InvalidSchema_76 );
    locals_InvalidSchema_76 = NULL;
    goto outline_result_23;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_23:;
    tmp_assign_source_71 = tmp_outline_return_value_23;
    assert( tmp_class_creation_12__class_dict == NULL );
    tmp_class_creation_12__class_dict = tmp_assign_source_71;

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
    tmp_assign_source_72 = DICT_GET_ITEM( tmp_dict_name_12, tmp_key_name_12 );
    if ( tmp_assign_source_72 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_45;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_subscribed_name_12 = tmp_class_creation_12__bases;

    CHECK_OBJECT( tmp_subscribed_name_12 );
    tmp_subscript_name_12 = const_int_0;
    tmp_assign_source_73 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
    if ( tmp_assign_source_73 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_45;
    }
    assert( tmp_select_metaclass_12__base == NULL );
    tmp_select_metaclass_12__base = tmp_assign_source_73;

    // Tried code:
    // Tried code:
    tmp_source_name_12 = tmp_select_metaclass_12__base;

    CHECK_OBJECT( tmp_source_name_12 );
    tmp_outline_return_value_24 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_12 );
    if ( tmp_outline_return_value_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_48;
    }
    goto try_return_handler_47;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_48:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_23 );
    Py_XDECREF( exception_keeper_value_23 );
    Py_XDECREF( exception_keeper_tb_23 );
    tmp_type_arg_12 = tmp_select_metaclass_12__base;

    CHECK_OBJECT( tmp_type_arg_12 );
    tmp_outline_return_value_24 = BUILTIN_TYPE1( tmp_type_arg_12 );
    assert( tmp_outline_return_value_24 != NULL );
    goto try_return_handler_47;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_47:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_12__base );
    Py_DECREF( tmp_select_metaclass_12__base );
    tmp_select_metaclass_12__base = NULL;

    goto outline_result_24;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_12__base );
    Py_DECREF( tmp_select_metaclass_12__base );
    tmp_select_metaclass_12__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_24:;
    tmp_assign_source_72 = tmp_outline_return_value_24;
    condexpr_end_12:;
    assert( tmp_class_creation_12__metaclass == NULL );
    tmp_class_creation_12__metaclass = tmp_assign_source_72;

    tmp_called_name_12 = tmp_class_creation_12__metaclass;

    CHECK_OBJECT( tmp_called_name_12 );
    tmp_args_element_name_34 = const_str_plain_InvalidSchema;
    tmp_args_element_name_35 = tmp_class_creation_12__bases;

    CHECK_OBJECT( tmp_args_element_name_35 );
    tmp_args_element_name_36 = tmp_class_creation_12__class_dict;

    CHECK_OBJECT( tmp_args_element_name_36 );
    frame_8e7ffb0d279fbe0b2e22a10ee8610395->m_frame.f_lineno = 76;
    {
        PyObject *call_args[] = { tmp_args_element_name_34, tmp_args_element_name_35, tmp_args_element_name_36 };
        tmp_assign_source_74 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_12, call_args );
    }

    if ( tmp_assign_source_74 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_45;
    }
    assert( tmp_class_creation_12__class == NULL );
    tmp_class_creation_12__class = tmp_assign_source_74;

    goto try_end_12;
    // Exception handler code:
    try_except_handler_45:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_12__bases );
    tmp_class_creation_12__bases = NULL;

    Py_XDECREF( tmp_class_creation_12__class_dict );
    tmp_class_creation_12__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_12__metaclass );
    tmp_class_creation_12__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    tmp_assign_source_75 = tmp_class_creation_12__class;

    CHECK_OBJECT( tmp_assign_source_75 );
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_InvalidSchema, tmp_assign_source_75 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__class );
    Py_DECREF( tmp_class_creation_12__class );
    tmp_class_creation_12__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__bases );
    Py_DECREF( tmp_class_creation_12__bases );
    tmp_class_creation_12__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__class_dict );
    Py_DECREF( tmp_class_creation_12__class_dict );
    tmp_class_creation_12__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__metaclass );
    Py_DECREF( tmp_class_creation_12__metaclass );
    tmp_class_creation_12__metaclass = NULL;

    // Tried code:
    tmp_assign_source_76 = PyTuple_New( 2 );
    tmp_tuple_element_13 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_13 == NULL ))
    {
        tmp_tuple_element_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_13 == NULL )
    {
        Py_DECREF( tmp_assign_source_76 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestException" );
        exception_tb = NULL;

        exception_lineno = 80;

        goto try_except_handler_49;
    }

    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_assign_source_76, 0, tmp_tuple_element_13 );
    tmp_tuple_element_13 = PyExc_ValueError;
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_assign_source_76, 1, tmp_tuple_element_13 );
    assert( tmp_class_creation_13__bases == NULL );
    tmp_class_creation_13__bases = tmp_assign_source_76;

    tmp_set_locals = PyDict_New();
    locals_InvalidURL_80 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyDict_SetItem( locals_InvalidURL_80, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_225332b778bf59fe5fff32593da4030a;
    tmp_res = PyDict_SetItem( locals_InvalidURL_80, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_25 = locals_InvalidURL_80;
    Py_INCREF( tmp_outline_return_value_25 );
    goto try_return_handler_50;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_50:;
    Py_DECREF( locals_InvalidURL_80 );
    locals_InvalidURL_80 = NULL;
    goto outline_result_25;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_25:;
    tmp_assign_source_77 = tmp_outline_return_value_25;
    assert( tmp_class_creation_13__class_dict == NULL );
    tmp_class_creation_13__class_dict = tmp_assign_source_77;

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
    tmp_assign_source_78 = DICT_GET_ITEM( tmp_dict_name_13, tmp_key_name_13 );
    if ( tmp_assign_source_78 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_49;
    }
    goto condexpr_end_13;
    condexpr_false_13:;
    tmp_subscribed_name_13 = tmp_class_creation_13__bases;

    CHECK_OBJECT( tmp_subscribed_name_13 );
    tmp_subscript_name_13 = const_int_0;
    tmp_assign_source_79 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
    if ( tmp_assign_source_79 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_49;
    }
    assert( tmp_select_metaclass_13__base == NULL );
    tmp_select_metaclass_13__base = tmp_assign_source_79;

    // Tried code:
    // Tried code:
    tmp_source_name_13 = tmp_select_metaclass_13__base;

    CHECK_OBJECT( tmp_source_name_13 );
    tmp_outline_return_value_26 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_13 );
    if ( tmp_outline_return_value_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_52;
    }
    goto try_return_handler_51;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_52:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_25 );
    Py_XDECREF( exception_keeper_value_25 );
    Py_XDECREF( exception_keeper_tb_25 );
    tmp_type_arg_13 = tmp_select_metaclass_13__base;

    CHECK_OBJECT( tmp_type_arg_13 );
    tmp_outline_return_value_26 = BUILTIN_TYPE1( tmp_type_arg_13 );
    assert( tmp_outline_return_value_26 != NULL );
    goto try_return_handler_51;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_51:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_13__base );
    Py_DECREF( tmp_select_metaclass_13__base );
    tmp_select_metaclass_13__base = NULL;

    goto outline_result_26;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_13__base );
    Py_DECREF( tmp_select_metaclass_13__base );
    tmp_select_metaclass_13__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_26:;
    tmp_assign_source_78 = tmp_outline_return_value_26;
    condexpr_end_13:;
    assert( tmp_class_creation_13__metaclass == NULL );
    tmp_class_creation_13__metaclass = tmp_assign_source_78;

    tmp_called_name_13 = tmp_class_creation_13__metaclass;

    CHECK_OBJECT( tmp_called_name_13 );
    tmp_args_element_name_37 = const_str_plain_InvalidURL;
    tmp_args_element_name_38 = tmp_class_creation_13__bases;

    CHECK_OBJECT( tmp_args_element_name_38 );
    tmp_args_element_name_39 = tmp_class_creation_13__class_dict;

    CHECK_OBJECT( tmp_args_element_name_39 );
    frame_8e7ffb0d279fbe0b2e22a10ee8610395->m_frame.f_lineno = 80;
    {
        PyObject *call_args[] = { tmp_args_element_name_37, tmp_args_element_name_38, tmp_args_element_name_39 };
        tmp_assign_source_80 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_13, call_args );
    }

    if ( tmp_assign_source_80 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_49;
    }
    assert( tmp_class_creation_13__class == NULL );
    tmp_class_creation_13__class = tmp_assign_source_80;

    goto try_end_13;
    // Exception handler code:
    try_except_handler_49:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_13__bases );
    tmp_class_creation_13__bases = NULL;

    Py_XDECREF( tmp_class_creation_13__class_dict );
    tmp_class_creation_13__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_13__metaclass );
    tmp_class_creation_13__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    tmp_assign_source_81 = tmp_class_creation_13__class;

    CHECK_OBJECT( tmp_assign_source_81 );
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_InvalidURL, tmp_assign_source_81 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__class );
    Py_DECREF( tmp_class_creation_13__class );
    tmp_class_creation_13__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__bases );
    Py_DECREF( tmp_class_creation_13__bases );
    tmp_class_creation_13__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__class_dict );
    Py_DECREF( tmp_class_creation_13__class_dict );
    tmp_class_creation_13__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__metaclass );
    Py_DECREF( tmp_class_creation_13__metaclass );
    tmp_class_creation_13__metaclass = NULL;

    // Tried code:
    tmp_assign_source_82 = PyTuple_New( 2 );
    tmp_tuple_element_14 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_14 == NULL ))
    {
        tmp_tuple_element_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_14 == NULL )
    {
        Py_DECREF( tmp_assign_source_82 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestException" );
        exception_tb = NULL;

        exception_lineno = 84;

        goto try_except_handler_53;
    }

    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_assign_source_82, 0, tmp_tuple_element_14 );
    tmp_tuple_element_14 = PyExc_ValueError;
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_assign_source_82, 1, tmp_tuple_element_14 );
    assert( tmp_class_creation_14__bases == NULL );
    tmp_class_creation_14__bases = tmp_assign_source_82;

    tmp_set_locals = PyDict_New();
    locals_InvalidHeader_84 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyDict_SetItem( locals_InvalidHeader_84, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_4aae44da769befc767278be58ddca255;
    tmp_res = PyDict_SetItem( locals_InvalidHeader_84, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_27 = locals_InvalidHeader_84;
    Py_INCREF( tmp_outline_return_value_27 );
    goto try_return_handler_54;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_54:;
    Py_DECREF( locals_InvalidHeader_84 );
    locals_InvalidHeader_84 = NULL;
    goto outline_result_27;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_27:;
    tmp_assign_source_83 = tmp_outline_return_value_27;
    assert( tmp_class_creation_14__class_dict == NULL );
    tmp_class_creation_14__class_dict = tmp_assign_source_83;

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
    tmp_assign_source_84 = DICT_GET_ITEM( tmp_dict_name_14, tmp_key_name_14 );
    if ( tmp_assign_source_84 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_53;
    }
    goto condexpr_end_14;
    condexpr_false_14:;
    tmp_subscribed_name_14 = tmp_class_creation_14__bases;

    CHECK_OBJECT( tmp_subscribed_name_14 );
    tmp_subscript_name_14 = const_int_0;
    tmp_assign_source_85 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_14, tmp_subscript_name_14 );
    if ( tmp_assign_source_85 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_53;
    }
    assert( tmp_select_metaclass_14__base == NULL );
    tmp_select_metaclass_14__base = tmp_assign_source_85;

    // Tried code:
    // Tried code:
    tmp_source_name_14 = tmp_select_metaclass_14__base;

    CHECK_OBJECT( tmp_source_name_14 );
    tmp_outline_return_value_28 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_14 );
    if ( tmp_outline_return_value_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_56;
    }
    goto try_return_handler_55;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_56:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_27 );
    Py_XDECREF( exception_keeper_value_27 );
    Py_XDECREF( exception_keeper_tb_27 );
    tmp_type_arg_14 = tmp_select_metaclass_14__base;

    CHECK_OBJECT( tmp_type_arg_14 );
    tmp_outline_return_value_28 = BUILTIN_TYPE1( tmp_type_arg_14 );
    assert( tmp_outline_return_value_28 != NULL );
    goto try_return_handler_55;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_55:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_14__base );
    Py_DECREF( tmp_select_metaclass_14__base );
    tmp_select_metaclass_14__base = NULL;

    goto outline_result_28;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_14__base );
    Py_DECREF( tmp_select_metaclass_14__base );
    tmp_select_metaclass_14__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_28:;
    tmp_assign_source_84 = tmp_outline_return_value_28;
    condexpr_end_14:;
    assert( tmp_class_creation_14__metaclass == NULL );
    tmp_class_creation_14__metaclass = tmp_assign_source_84;

    tmp_called_name_14 = tmp_class_creation_14__metaclass;

    CHECK_OBJECT( tmp_called_name_14 );
    tmp_args_element_name_40 = const_str_plain_InvalidHeader;
    tmp_args_element_name_41 = tmp_class_creation_14__bases;

    CHECK_OBJECT( tmp_args_element_name_41 );
    tmp_args_element_name_42 = tmp_class_creation_14__class_dict;

    CHECK_OBJECT( tmp_args_element_name_42 );
    frame_8e7ffb0d279fbe0b2e22a10ee8610395->m_frame.f_lineno = 84;
    {
        PyObject *call_args[] = { tmp_args_element_name_40, tmp_args_element_name_41, tmp_args_element_name_42 };
        tmp_assign_source_86 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_14, call_args );
    }

    if ( tmp_assign_source_86 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_53;
    }
    assert( tmp_class_creation_14__class == NULL );
    tmp_class_creation_14__class = tmp_assign_source_86;

    goto try_end_14;
    // Exception handler code:
    try_except_handler_53:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_14__bases );
    tmp_class_creation_14__bases = NULL;

    Py_XDECREF( tmp_class_creation_14__class_dict );
    tmp_class_creation_14__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_14__metaclass );
    tmp_class_creation_14__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    tmp_assign_source_87 = tmp_class_creation_14__class;

    CHECK_OBJECT( tmp_assign_source_87 );
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_InvalidHeader, tmp_assign_source_87 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__class );
    Py_DECREF( tmp_class_creation_14__class );
    tmp_class_creation_14__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__bases );
    Py_DECREF( tmp_class_creation_14__bases );
    tmp_class_creation_14__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__class_dict );
    Py_DECREF( tmp_class_creation_14__class_dict );
    tmp_class_creation_14__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__metaclass );
    Py_DECREF( tmp_class_creation_14__metaclass );
    tmp_class_creation_14__metaclass = NULL;

    // Tried code:
    tmp_assign_source_88 = PyTuple_New( 1 );
    tmp_tuple_element_15 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_InvalidURL );

    if (unlikely( tmp_tuple_element_15 == NULL ))
    {
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InvalidURL );
    }

    if ( tmp_tuple_element_15 == NULL )
    {
        Py_DECREF( tmp_assign_source_88 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "InvalidURL" );
        exception_tb = NULL;

        exception_lineno = 88;

        goto try_except_handler_57;
    }

    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_assign_source_88, 0, tmp_tuple_element_15 );
    assert( tmp_class_creation_15__bases == NULL );
    tmp_class_creation_15__bases = tmp_assign_source_88;

    tmp_set_locals = PyDict_New();
    locals_InvalidProxyURL_88 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyDict_SetItem( locals_InvalidProxyURL_88, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_3b2add8be5d440c36ae0b41135415fa9;
    tmp_res = PyDict_SetItem( locals_InvalidProxyURL_88, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_29 = locals_InvalidProxyURL_88;
    Py_INCREF( tmp_outline_return_value_29 );
    goto try_return_handler_58;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_58:;
    Py_DECREF( locals_InvalidProxyURL_88 );
    locals_InvalidProxyURL_88 = NULL;
    goto outline_result_29;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_29:;
    tmp_assign_source_89 = tmp_outline_return_value_29;
    assert( tmp_class_creation_15__class_dict == NULL );
    tmp_class_creation_15__class_dict = tmp_assign_source_89;

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
    tmp_assign_source_90 = DICT_GET_ITEM( tmp_dict_name_15, tmp_key_name_15 );
    if ( tmp_assign_source_90 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;

        goto try_except_handler_57;
    }
    goto condexpr_end_15;
    condexpr_false_15:;
    tmp_subscribed_name_15 = tmp_class_creation_15__bases;

    CHECK_OBJECT( tmp_subscribed_name_15 );
    tmp_subscript_name_15 = const_int_0;
    tmp_assign_source_91 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_15, tmp_subscript_name_15 );
    if ( tmp_assign_source_91 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;

        goto try_except_handler_57;
    }
    assert( tmp_select_metaclass_15__base == NULL );
    tmp_select_metaclass_15__base = tmp_assign_source_91;

    // Tried code:
    // Tried code:
    tmp_source_name_15 = tmp_select_metaclass_15__base;

    CHECK_OBJECT( tmp_source_name_15 );
    tmp_outline_return_value_30 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_15 );
    if ( tmp_outline_return_value_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;

        goto try_except_handler_60;
    }
    goto try_return_handler_59;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_60:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_29 );
    Py_XDECREF( exception_keeper_value_29 );
    Py_XDECREF( exception_keeper_tb_29 );
    tmp_type_arg_15 = tmp_select_metaclass_15__base;

    CHECK_OBJECT( tmp_type_arg_15 );
    tmp_outline_return_value_30 = BUILTIN_TYPE1( tmp_type_arg_15 );
    assert( tmp_outline_return_value_30 != NULL );
    goto try_return_handler_59;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_59:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_15__base );
    Py_DECREF( tmp_select_metaclass_15__base );
    tmp_select_metaclass_15__base = NULL;

    goto outline_result_30;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_15__base );
    Py_DECREF( tmp_select_metaclass_15__base );
    tmp_select_metaclass_15__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_30:;
    tmp_assign_source_90 = tmp_outline_return_value_30;
    condexpr_end_15:;
    assert( tmp_class_creation_15__metaclass == NULL );
    tmp_class_creation_15__metaclass = tmp_assign_source_90;

    tmp_called_name_15 = tmp_class_creation_15__metaclass;

    CHECK_OBJECT( tmp_called_name_15 );
    tmp_args_element_name_43 = const_str_plain_InvalidProxyURL;
    tmp_args_element_name_44 = tmp_class_creation_15__bases;

    CHECK_OBJECT( tmp_args_element_name_44 );
    tmp_args_element_name_45 = tmp_class_creation_15__class_dict;

    CHECK_OBJECT( tmp_args_element_name_45 );
    frame_8e7ffb0d279fbe0b2e22a10ee8610395->m_frame.f_lineno = 88;
    {
        PyObject *call_args[] = { tmp_args_element_name_43, tmp_args_element_name_44, tmp_args_element_name_45 };
        tmp_assign_source_92 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_15, call_args );
    }

    if ( tmp_assign_source_92 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;

        goto try_except_handler_57;
    }
    assert( tmp_class_creation_15__class == NULL );
    tmp_class_creation_15__class = tmp_assign_source_92;

    goto try_end_15;
    // Exception handler code:
    try_except_handler_57:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_15__bases );
    tmp_class_creation_15__bases = NULL;

    Py_XDECREF( tmp_class_creation_15__class_dict );
    tmp_class_creation_15__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_15__metaclass );
    tmp_class_creation_15__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    tmp_assign_source_93 = tmp_class_creation_15__class;

    CHECK_OBJECT( tmp_assign_source_93 );
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_InvalidProxyURL, tmp_assign_source_93 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_15__class );
    Py_DECREF( tmp_class_creation_15__class );
    tmp_class_creation_15__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_15__bases );
    Py_DECREF( tmp_class_creation_15__bases );
    tmp_class_creation_15__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_15__class_dict );
    Py_DECREF( tmp_class_creation_15__class_dict );
    tmp_class_creation_15__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_15__metaclass );
    Py_DECREF( tmp_class_creation_15__metaclass );
    tmp_class_creation_15__metaclass = NULL;

    // Tried code:
    tmp_assign_source_94 = PyTuple_New( 1 );
    tmp_tuple_element_16 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_16 == NULL ))
    {
        tmp_tuple_element_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_16 == NULL )
    {
        Py_DECREF( tmp_assign_source_94 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestException" );
        exception_tb = NULL;

        exception_lineno = 92;

        goto try_except_handler_61;
    }

    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_assign_source_94, 0, tmp_tuple_element_16 );
    assert( tmp_class_creation_16__bases == NULL );
    tmp_class_creation_16__bases = tmp_assign_source_94;

    tmp_set_locals = PyDict_New();
    locals_ChunkedEncodingError_92 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyDict_SetItem( locals_ChunkedEncodingError_92, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_62b56f407a05bf4c50ea2ebf5d0c7b8a;
    tmp_res = PyDict_SetItem( locals_ChunkedEncodingError_92, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_31 = locals_ChunkedEncodingError_92;
    Py_INCREF( tmp_outline_return_value_31 );
    goto try_return_handler_62;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_62:;
    Py_DECREF( locals_ChunkedEncodingError_92 );
    locals_ChunkedEncodingError_92 = NULL;
    goto outline_result_31;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_31:;
    tmp_assign_source_95 = tmp_outline_return_value_31;
    assert( tmp_class_creation_16__class_dict == NULL );
    tmp_class_creation_16__class_dict = tmp_assign_source_95;

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
    tmp_assign_source_96 = DICT_GET_ITEM( tmp_dict_name_16, tmp_key_name_16 );
    if ( tmp_assign_source_96 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto try_except_handler_61;
    }
    goto condexpr_end_16;
    condexpr_false_16:;
    tmp_subscribed_name_16 = tmp_class_creation_16__bases;

    CHECK_OBJECT( tmp_subscribed_name_16 );
    tmp_subscript_name_16 = const_int_0;
    tmp_assign_source_97 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_16, tmp_subscript_name_16 );
    if ( tmp_assign_source_97 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto try_except_handler_61;
    }
    assert( tmp_select_metaclass_16__base == NULL );
    tmp_select_metaclass_16__base = tmp_assign_source_97;

    // Tried code:
    // Tried code:
    tmp_source_name_16 = tmp_select_metaclass_16__base;

    CHECK_OBJECT( tmp_source_name_16 );
    tmp_outline_return_value_32 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_16 );
    if ( tmp_outline_return_value_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto try_except_handler_64;
    }
    goto try_return_handler_63;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_64:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_31 );
    Py_XDECREF( exception_keeper_value_31 );
    Py_XDECREF( exception_keeper_tb_31 );
    tmp_type_arg_16 = tmp_select_metaclass_16__base;

    CHECK_OBJECT( tmp_type_arg_16 );
    tmp_outline_return_value_32 = BUILTIN_TYPE1( tmp_type_arg_16 );
    assert( tmp_outline_return_value_32 != NULL );
    goto try_return_handler_63;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_63:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_16__base );
    Py_DECREF( tmp_select_metaclass_16__base );
    tmp_select_metaclass_16__base = NULL;

    goto outline_result_32;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_16__base );
    Py_DECREF( tmp_select_metaclass_16__base );
    tmp_select_metaclass_16__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_32:;
    tmp_assign_source_96 = tmp_outline_return_value_32;
    condexpr_end_16:;
    assert( tmp_class_creation_16__metaclass == NULL );
    tmp_class_creation_16__metaclass = tmp_assign_source_96;

    tmp_called_name_16 = tmp_class_creation_16__metaclass;

    CHECK_OBJECT( tmp_called_name_16 );
    tmp_args_element_name_46 = const_str_plain_ChunkedEncodingError;
    tmp_args_element_name_47 = tmp_class_creation_16__bases;

    CHECK_OBJECT( tmp_args_element_name_47 );
    tmp_args_element_name_48 = tmp_class_creation_16__class_dict;

    CHECK_OBJECT( tmp_args_element_name_48 );
    frame_8e7ffb0d279fbe0b2e22a10ee8610395->m_frame.f_lineno = 92;
    {
        PyObject *call_args[] = { tmp_args_element_name_46, tmp_args_element_name_47, tmp_args_element_name_48 };
        tmp_assign_source_98 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_16, call_args );
    }

    if ( tmp_assign_source_98 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto try_except_handler_61;
    }
    assert( tmp_class_creation_16__class == NULL );
    tmp_class_creation_16__class = tmp_assign_source_98;

    goto try_end_16;
    // Exception handler code:
    try_except_handler_61:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_16__bases );
    tmp_class_creation_16__bases = NULL;

    Py_XDECREF( tmp_class_creation_16__class_dict );
    tmp_class_creation_16__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_16__metaclass );
    tmp_class_creation_16__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    tmp_assign_source_99 = tmp_class_creation_16__class;

    CHECK_OBJECT( tmp_assign_source_99 );
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ChunkedEncodingError, tmp_assign_source_99 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_16__class );
    Py_DECREF( tmp_class_creation_16__class );
    tmp_class_creation_16__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_16__bases );
    Py_DECREF( tmp_class_creation_16__bases );
    tmp_class_creation_16__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_16__class_dict );
    Py_DECREF( tmp_class_creation_16__class_dict );
    tmp_class_creation_16__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_16__metaclass );
    Py_DECREF( tmp_class_creation_16__metaclass );
    tmp_class_creation_16__metaclass = NULL;

    // Tried code:
    tmp_assign_source_100 = PyTuple_New( 2 );
    tmp_tuple_element_17 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_17 == NULL ))
    {
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_17 == NULL )
    {
        Py_DECREF( tmp_assign_source_100 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestException" );
        exception_tb = NULL;

        exception_lineno = 96;

        goto try_except_handler_65;
    }

    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_assign_source_100, 0, tmp_tuple_element_17 );
    tmp_tuple_element_17 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_BaseHTTPError );

    if (unlikely( tmp_tuple_element_17 == NULL ))
    {
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BaseHTTPError );
    }

    if ( tmp_tuple_element_17 == NULL )
    {
        Py_DECREF( tmp_assign_source_100 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "BaseHTTPError" );
        exception_tb = NULL;

        exception_lineno = 96;

        goto try_except_handler_65;
    }

    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_assign_source_100, 1, tmp_tuple_element_17 );
    assert( tmp_class_creation_17__bases == NULL );
    tmp_class_creation_17__bases = tmp_assign_source_100;

    tmp_set_locals = PyDict_New();
    locals_ContentDecodingError_96 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyDict_SetItem( locals_ContentDecodingError_96, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_f0f7e3ca1b6404dc7867b8c8d275ec0c;
    tmp_res = PyDict_SetItem( locals_ContentDecodingError_96, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_33 = locals_ContentDecodingError_96;
    Py_INCREF( tmp_outline_return_value_33 );
    goto try_return_handler_66;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_66:;
    Py_DECREF( locals_ContentDecodingError_96 );
    locals_ContentDecodingError_96 = NULL;
    goto outline_result_33;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_33:;
    tmp_assign_source_101 = tmp_outline_return_value_33;
    assert( tmp_class_creation_17__class_dict == NULL );
    tmp_class_creation_17__class_dict = tmp_assign_source_101;

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
    tmp_assign_source_102 = DICT_GET_ITEM( tmp_dict_name_17, tmp_key_name_17 );
    if ( tmp_assign_source_102 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_65;
    }
    goto condexpr_end_17;
    condexpr_false_17:;
    tmp_subscribed_name_17 = tmp_class_creation_17__bases;

    CHECK_OBJECT( tmp_subscribed_name_17 );
    tmp_subscript_name_17 = const_int_0;
    tmp_assign_source_103 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_17, tmp_subscript_name_17 );
    if ( tmp_assign_source_103 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_65;
    }
    assert( tmp_select_metaclass_17__base == NULL );
    tmp_select_metaclass_17__base = tmp_assign_source_103;

    // Tried code:
    // Tried code:
    tmp_source_name_17 = tmp_select_metaclass_17__base;

    CHECK_OBJECT( tmp_source_name_17 );
    tmp_outline_return_value_34 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_17 );
    if ( tmp_outline_return_value_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_68;
    }
    goto try_return_handler_67;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_68:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_33 );
    Py_XDECREF( exception_keeper_value_33 );
    Py_XDECREF( exception_keeper_tb_33 );
    tmp_type_arg_17 = tmp_select_metaclass_17__base;

    CHECK_OBJECT( tmp_type_arg_17 );
    tmp_outline_return_value_34 = BUILTIN_TYPE1( tmp_type_arg_17 );
    assert( tmp_outline_return_value_34 != NULL );
    goto try_return_handler_67;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_67:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_17__base );
    Py_DECREF( tmp_select_metaclass_17__base );
    tmp_select_metaclass_17__base = NULL;

    goto outline_result_34;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_17__base );
    Py_DECREF( tmp_select_metaclass_17__base );
    tmp_select_metaclass_17__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_34:;
    tmp_assign_source_102 = tmp_outline_return_value_34;
    condexpr_end_17:;
    assert( tmp_class_creation_17__metaclass == NULL );
    tmp_class_creation_17__metaclass = tmp_assign_source_102;

    tmp_called_name_17 = tmp_class_creation_17__metaclass;

    CHECK_OBJECT( tmp_called_name_17 );
    tmp_args_element_name_49 = const_str_plain_ContentDecodingError;
    tmp_args_element_name_50 = tmp_class_creation_17__bases;

    CHECK_OBJECT( tmp_args_element_name_50 );
    tmp_args_element_name_51 = tmp_class_creation_17__class_dict;

    CHECK_OBJECT( tmp_args_element_name_51 );
    frame_8e7ffb0d279fbe0b2e22a10ee8610395->m_frame.f_lineno = 96;
    {
        PyObject *call_args[] = { tmp_args_element_name_49, tmp_args_element_name_50, tmp_args_element_name_51 };
        tmp_assign_source_104 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_17, call_args );
    }

    if ( tmp_assign_source_104 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_65;
    }
    assert( tmp_class_creation_17__class == NULL );
    tmp_class_creation_17__class = tmp_assign_source_104;

    goto try_end_17;
    // Exception handler code:
    try_except_handler_65:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_17__bases );
    tmp_class_creation_17__bases = NULL;

    Py_XDECREF( tmp_class_creation_17__class_dict );
    tmp_class_creation_17__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_17__metaclass );
    tmp_class_creation_17__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_34;
    exception_value = exception_keeper_value_34;
    exception_tb = exception_keeper_tb_34;
    exception_lineno = exception_keeper_lineno_34;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    tmp_assign_source_105 = tmp_class_creation_17__class;

    CHECK_OBJECT( tmp_assign_source_105 );
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_ContentDecodingError, tmp_assign_source_105 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_17__class );
    Py_DECREF( tmp_class_creation_17__class );
    tmp_class_creation_17__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_17__bases );
    Py_DECREF( tmp_class_creation_17__bases );
    tmp_class_creation_17__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_17__class_dict );
    Py_DECREF( tmp_class_creation_17__class_dict );
    tmp_class_creation_17__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_17__metaclass );
    Py_DECREF( tmp_class_creation_17__metaclass );
    tmp_class_creation_17__metaclass = NULL;

    // Tried code:
    tmp_assign_source_106 = PyTuple_New( 2 );
    tmp_tuple_element_18 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_18 == NULL ))
    {
        tmp_tuple_element_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_18 == NULL )
    {
        Py_DECREF( tmp_assign_source_106 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestException" );
        exception_tb = NULL;

        exception_lineno = 100;

        goto try_except_handler_69;
    }

    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_assign_source_106, 0, tmp_tuple_element_18 );
    tmp_tuple_element_18 = PyExc_TypeError;
    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_assign_source_106, 1, tmp_tuple_element_18 );
    assert( tmp_class_creation_18__bases == NULL );
    tmp_class_creation_18__bases = tmp_assign_source_106;

    tmp_set_locals = PyDict_New();
    locals_StreamConsumedError_100 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyDict_SetItem( locals_StreamConsumedError_100, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_3cf9f3c16d293dcd967c7ed140034453;
    tmp_res = PyDict_SetItem( locals_StreamConsumedError_100, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_35 = locals_StreamConsumedError_100;
    Py_INCREF( tmp_outline_return_value_35 );
    goto try_return_handler_70;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_70:;
    Py_DECREF( locals_StreamConsumedError_100 );
    locals_StreamConsumedError_100 = NULL;
    goto outline_result_35;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_35:;
    tmp_assign_source_107 = tmp_outline_return_value_35;
    assert( tmp_class_creation_18__class_dict == NULL );
    tmp_class_creation_18__class_dict = tmp_assign_source_107;

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
    tmp_assign_source_108 = DICT_GET_ITEM( tmp_dict_name_18, tmp_key_name_18 );
    if ( tmp_assign_source_108 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_69;
    }
    goto condexpr_end_18;
    condexpr_false_18:;
    tmp_subscribed_name_18 = tmp_class_creation_18__bases;

    CHECK_OBJECT( tmp_subscribed_name_18 );
    tmp_subscript_name_18 = const_int_0;
    tmp_assign_source_109 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_18, tmp_subscript_name_18 );
    if ( tmp_assign_source_109 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_69;
    }
    assert( tmp_select_metaclass_18__base == NULL );
    tmp_select_metaclass_18__base = tmp_assign_source_109;

    // Tried code:
    // Tried code:
    tmp_source_name_18 = tmp_select_metaclass_18__base;

    CHECK_OBJECT( tmp_source_name_18 );
    tmp_outline_return_value_36 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_18 );
    if ( tmp_outline_return_value_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_72;
    }
    goto try_return_handler_71;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_72:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_35 );
    Py_XDECREF( exception_keeper_value_35 );
    Py_XDECREF( exception_keeper_tb_35 );
    tmp_type_arg_18 = tmp_select_metaclass_18__base;

    CHECK_OBJECT( tmp_type_arg_18 );
    tmp_outline_return_value_36 = BUILTIN_TYPE1( tmp_type_arg_18 );
    assert( tmp_outline_return_value_36 != NULL );
    goto try_return_handler_71;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_71:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_18__base );
    Py_DECREF( tmp_select_metaclass_18__base );
    tmp_select_metaclass_18__base = NULL;

    goto outline_result_36;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_18__base );
    Py_DECREF( tmp_select_metaclass_18__base );
    tmp_select_metaclass_18__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_36:;
    tmp_assign_source_108 = tmp_outline_return_value_36;
    condexpr_end_18:;
    assert( tmp_class_creation_18__metaclass == NULL );
    tmp_class_creation_18__metaclass = tmp_assign_source_108;

    tmp_called_name_18 = tmp_class_creation_18__metaclass;

    CHECK_OBJECT( tmp_called_name_18 );
    tmp_args_element_name_52 = const_str_plain_StreamConsumedError;
    tmp_args_element_name_53 = tmp_class_creation_18__bases;

    CHECK_OBJECT( tmp_args_element_name_53 );
    tmp_args_element_name_54 = tmp_class_creation_18__class_dict;

    CHECK_OBJECT( tmp_args_element_name_54 );
    frame_8e7ffb0d279fbe0b2e22a10ee8610395->m_frame.f_lineno = 100;
    {
        PyObject *call_args[] = { tmp_args_element_name_52, tmp_args_element_name_53, tmp_args_element_name_54 };
        tmp_assign_source_110 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_18, call_args );
    }

    if ( tmp_assign_source_110 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_69;
    }
    assert( tmp_class_creation_18__class == NULL );
    tmp_class_creation_18__class = tmp_assign_source_110;

    goto try_end_18;
    // Exception handler code:
    try_except_handler_69:;
    exception_keeper_type_36 = exception_type;
    exception_keeper_value_36 = exception_value;
    exception_keeper_tb_36 = exception_tb;
    exception_keeper_lineno_36 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_18__bases );
    tmp_class_creation_18__bases = NULL;

    Py_XDECREF( tmp_class_creation_18__class_dict );
    tmp_class_creation_18__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_18__metaclass );
    tmp_class_creation_18__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_36;
    exception_value = exception_keeper_value_36;
    exception_tb = exception_keeper_tb_36;
    exception_lineno = exception_keeper_lineno_36;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    tmp_assign_source_111 = tmp_class_creation_18__class;

    CHECK_OBJECT( tmp_assign_source_111 );
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_StreamConsumedError, tmp_assign_source_111 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_18__class );
    Py_DECREF( tmp_class_creation_18__class );
    tmp_class_creation_18__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_18__bases );
    Py_DECREF( tmp_class_creation_18__bases );
    tmp_class_creation_18__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_18__class_dict );
    Py_DECREF( tmp_class_creation_18__class_dict );
    tmp_class_creation_18__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_18__metaclass );
    Py_DECREF( tmp_class_creation_18__metaclass );
    tmp_class_creation_18__metaclass = NULL;

    // Tried code:
    tmp_assign_source_112 = PyTuple_New( 1 );
    tmp_tuple_element_19 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_19 == NULL ))
    {
        tmp_tuple_element_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_19 == NULL )
    {
        Py_DECREF( tmp_assign_source_112 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestException" );
        exception_tb = NULL;

        exception_lineno = 104;

        goto try_except_handler_73;
    }

    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_assign_source_112, 0, tmp_tuple_element_19 );
    assert( tmp_class_creation_19__bases == NULL );
    tmp_class_creation_19__bases = tmp_assign_source_112;

    tmp_set_locals = PyDict_New();
    locals_RetryError_104 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyDict_SetItem( locals_RetryError_104, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_b3f79f0ff88ef53ddf2012488144e436;
    tmp_res = PyDict_SetItem( locals_RetryError_104, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_37 = locals_RetryError_104;
    Py_INCREF( tmp_outline_return_value_37 );
    goto try_return_handler_74;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_74:;
    Py_DECREF( locals_RetryError_104 );
    locals_RetryError_104 = NULL;
    goto outline_result_37;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_37:;
    tmp_assign_source_113 = tmp_outline_return_value_37;
    assert( tmp_class_creation_19__class_dict == NULL );
    tmp_class_creation_19__class_dict = tmp_assign_source_113;

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
    tmp_assign_source_114 = DICT_GET_ITEM( tmp_dict_name_19, tmp_key_name_19 );
    if ( tmp_assign_source_114 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_73;
    }
    goto condexpr_end_19;
    condexpr_false_19:;
    tmp_subscribed_name_19 = tmp_class_creation_19__bases;

    CHECK_OBJECT( tmp_subscribed_name_19 );
    tmp_subscript_name_19 = const_int_0;
    tmp_assign_source_115 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_19, tmp_subscript_name_19 );
    if ( tmp_assign_source_115 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_73;
    }
    assert( tmp_select_metaclass_19__base == NULL );
    tmp_select_metaclass_19__base = tmp_assign_source_115;

    // Tried code:
    // Tried code:
    tmp_source_name_19 = tmp_select_metaclass_19__base;

    CHECK_OBJECT( tmp_source_name_19 );
    tmp_outline_return_value_38 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_19 );
    if ( tmp_outline_return_value_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_76;
    }
    goto try_return_handler_75;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_76:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_keeper_lineno_37 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_37 );
    Py_XDECREF( exception_keeper_value_37 );
    Py_XDECREF( exception_keeper_tb_37 );
    tmp_type_arg_19 = tmp_select_metaclass_19__base;

    CHECK_OBJECT( tmp_type_arg_19 );
    tmp_outline_return_value_38 = BUILTIN_TYPE1( tmp_type_arg_19 );
    assert( tmp_outline_return_value_38 != NULL );
    goto try_return_handler_75;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_75:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_19__base );
    Py_DECREF( tmp_select_metaclass_19__base );
    tmp_select_metaclass_19__base = NULL;

    goto outline_result_38;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_19__base );
    Py_DECREF( tmp_select_metaclass_19__base );
    tmp_select_metaclass_19__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_38:;
    tmp_assign_source_114 = tmp_outline_return_value_38;
    condexpr_end_19:;
    assert( tmp_class_creation_19__metaclass == NULL );
    tmp_class_creation_19__metaclass = tmp_assign_source_114;

    tmp_called_name_19 = tmp_class_creation_19__metaclass;

    CHECK_OBJECT( tmp_called_name_19 );
    tmp_args_element_name_55 = const_str_plain_RetryError;
    tmp_args_element_name_56 = tmp_class_creation_19__bases;

    CHECK_OBJECT( tmp_args_element_name_56 );
    tmp_args_element_name_57 = tmp_class_creation_19__class_dict;

    CHECK_OBJECT( tmp_args_element_name_57 );
    frame_8e7ffb0d279fbe0b2e22a10ee8610395->m_frame.f_lineno = 104;
    {
        PyObject *call_args[] = { tmp_args_element_name_55, tmp_args_element_name_56, tmp_args_element_name_57 };
        tmp_assign_source_116 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_19, call_args );
    }

    if ( tmp_assign_source_116 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_73;
    }
    assert( tmp_class_creation_19__class == NULL );
    tmp_class_creation_19__class = tmp_assign_source_116;

    goto try_end_19;
    // Exception handler code:
    try_except_handler_73:;
    exception_keeper_type_38 = exception_type;
    exception_keeper_value_38 = exception_value;
    exception_keeper_tb_38 = exception_tb;
    exception_keeper_lineno_38 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_19__bases );
    tmp_class_creation_19__bases = NULL;

    Py_XDECREF( tmp_class_creation_19__class_dict );
    tmp_class_creation_19__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_19__metaclass );
    tmp_class_creation_19__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_38;
    exception_value = exception_keeper_value_38;
    exception_tb = exception_keeper_tb_38;
    exception_lineno = exception_keeper_lineno_38;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    tmp_assign_source_117 = tmp_class_creation_19__class;

    CHECK_OBJECT( tmp_assign_source_117 );
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RetryError, tmp_assign_source_117 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_19__class );
    Py_DECREF( tmp_class_creation_19__class );
    tmp_class_creation_19__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_19__bases );
    Py_DECREF( tmp_class_creation_19__bases );
    tmp_class_creation_19__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_19__class_dict );
    Py_DECREF( tmp_class_creation_19__class_dict );
    tmp_class_creation_19__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_19__metaclass );
    Py_DECREF( tmp_class_creation_19__metaclass );
    tmp_class_creation_19__metaclass = NULL;

    // Tried code:
    tmp_assign_source_118 = PyTuple_New( 1 );
    tmp_tuple_element_20 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestException );

    if (unlikely( tmp_tuple_element_20 == NULL ))
    {
        tmp_tuple_element_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestException );
    }

    if ( tmp_tuple_element_20 == NULL )
    {
        Py_DECREF( tmp_assign_source_118 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestException" );
        exception_tb = NULL;

        exception_lineno = 108;

        goto try_except_handler_77;
    }

    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_assign_source_118, 0, tmp_tuple_element_20 );
    assert( tmp_class_creation_20__bases == NULL );
    tmp_class_creation_20__bases = tmp_assign_source_118;

    tmp_set_locals = PyDict_New();
    locals_UnrewindableBodyError_108 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyDict_SetItem( locals_UnrewindableBodyError_108, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_2ad499ae41fa3b0d80a6c53a6b0dd390;
    tmp_res = PyDict_SetItem( locals_UnrewindableBodyError_108, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_39 = locals_UnrewindableBodyError_108;
    Py_INCREF( tmp_outline_return_value_39 );
    goto try_return_handler_78;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_78:;
    Py_DECREF( locals_UnrewindableBodyError_108 );
    locals_UnrewindableBodyError_108 = NULL;
    goto outline_result_39;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_39:;
    tmp_assign_source_119 = tmp_outline_return_value_39;
    assert( tmp_class_creation_20__class_dict == NULL );
    tmp_class_creation_20__class_dict = tmp_assign_source_119;

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
    tmp_assign_source_120 = DICT_GET_ITEM( tmp_dict_name_20, tmp_key_name_20 );
    if ( tmp_assign_source_120 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_77;
    }
    goto condexpr_end_20;
    condexpr_false_20:;
    tmp_subscribed_name_20 = tmp_class_creation_20__bases;

    CHECK_OBJECT( tmp_subscribed_name_20 );
    tmp_subscript_name_20 = const_int_0;
    tmp_assign_source_121 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_20, tmp_subscript_name_20 );
    if ( tmp_assign_source_121 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_77;
    }
    assert( tmp_select_metaclass_20__base == NULL );
    tmp_select_metaclass_20__base = tmp_assign_source_121;

    // Tried code:
    // Tried code:
    tmp_source_name_20 = tmp_select_metaclass_20__base;

    CHECK_OBJECT( tmp_source_name_20 );
    tmp_outline_return_value_40 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_20 );
    if ( tmp_outline_return_value_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_80;
    }
    goto try_return_handler_79;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_80:;
    exception_keeper_type_39 = exception_type;
    exception_keeper_value_39 = exception_value;
    exception_keeper_tb_39 = exception_tb;
    exception_keeper_lineno_39 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_39 );
    Py_XDECREF( exception_keeper_value_39 );
    Py_XDECREF( exception_keeper_tb_39 );
    tmp_type_arg_20 = tmp_select_metaclass_20__base;

    CHECK_OBJECT( tmp_type_arg_20 );
    tmp_outline_return_value_40 = BUILTIN_TYPE1( tmp_type_arg_20 );
    assert( tmp_outline_return_value_40 != NULL );
    goto try_return_handler_79;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_79:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_20__base );
    Py_DECREF( tmp_select_metaclass_20__base );
    tmp_select_metaclass_20__base = NULL;

    goto outline_result_40;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_20__base );
    Py_DECREF( tmp_select_metaclass_20__base );
    tmp_select_metaclass_20__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_40:;
    tmp_assign_source_120 = tmp_outline_return_value_40;
    condexpr_end_20:;
    assert( tmp_class_creation_20__metaclass == NULL );
    tmp_class_creation_20__metaclass = tmp_assign_source_120;

    tmp_called_name_20 = tmp_class_creation_20__metaclass;

    CHECK_OBJECT( tmp_called_name_20 );
    tmp_args_element_name_58 = const_str_plain_UnrewindableBodyError;
    tmp_args_element_name_59 = tmp_class_creation_20__bases;

    CHECK_OBJECT( tmp_args_element_name_59 );
    tmp_args_element_name_60 = tmp_class_creation_20__class_dict;

    CHECK_OBJECT( tmp_args_element_name_60 );
    frame_8e7ffb0d279fbe0b2e22a10ee8610395->m_frame.f_lineno = 108;
    {
        PyObject *call_args[] = { tmp_args_element_name_58, tmp_args_element_name_59, tmp_args_element_name_60 };
        tmp_assign_source_122 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_20, call_args );
    }

    if ( tmp_assign_source_122 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_77;
    }
    assert( tmp_class_creation_20__class == NULL );
    tmp_class_creation_20__class = tmp_assign_source_122;

    goto try_end_20;
    // Exception handler code:
    try_except_handler_77:;
    exception_keeper_type_40 = exception_type;
    exception_keeper_value_40 = exception_value;
    exception_keeper_tb_40 = exception_tb;
    exception_keeper_lineno_40 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_20__bases );
    tmp_class_creation_20__bases = NULL;

    Py_XDECREF( tmp_class_creation_20__class_dict );
    tmp_class_creation_20__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_20__metaclass );
    tmp_class_creation_20__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_40;
    exception_value = exception_keeper_value_40;
    exception_tb = exception_keeper_tb_40;
    exception_lineno = exception_keeper_lineno_40;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    tmp_assign_source_123 = tmp_class_creation_20__class;

    CHECK_OBJECT( tmp_assign_source_123 );
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_UnrewindableBodyError, tmp_assign_source_123 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_20__class );
    Py_DECREF( tmp_class_creation_20__class );
    tmp_class_creation_20__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_20__bases );
    Py_DECREF( tmp_class_creation_20__bases );
    tmp_class_creation_20__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_20__class_dict );
    Py_DECREF( tmp_class_creation_20__class_dict );
    tmp_class_creation_20__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_20__metaclass );
    Py_DECREF( tmp_class_creation_20__metaclass );
    tmp_class_creation_20__metaclass = NULL;

    // Tried code:
    tmp_assign_source_124 = PyTuple_New( 1 );
    tmp_tuple_element_21 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_Warning );

    if (unlikely( tmp_tuple_element_21 == NULL ))
    {
        tmp_tuple_element_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Warning );
    }

    if ( tmp_tuple_element_21 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Warning" );
        exception_tb = NULL;

        exception_lineno = 114;

        goto try_except_handler_81;
    }

    Py_INCREF( tmp_tuple_element_21 );
    PyTuple_SET_ITEM( tmp_assign_source_124, 0, tmp_tuple_element_21 );
    assert( tmp_class_creation_21__bases == NULL );
    tmp_class_creation_21__bases = tmp_assign_source_124;

    tmp_set_locals = PyDict_New();
    locals_RequestsWarning_114 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyDict_SetItem( locals_RequestsWarning_114, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_231982acca444de8f23c0288db53eaef;
    tmp_res = PyDict_SetItem( locals_RequestsWarning_114, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_41 = locals_RequestsWarning_114;
    Py_INCREF( tmp_outline_return_value_41 );
    goto try_return_handler_82;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_82:;
    Py_DECREF( locals_RequestsWarning_114 );
    locals_RequestsWarning_114 = NULL;
    goto outline_result_41;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_41:;
    tmp_assign_source_125 = tmp_outline_return_value_41;
    assert( tmp_class_creation_21__class_dict == NULL );
    tmp_class_creation_21__class_dict = tmp_assign_source_125;

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
    tmp_assign_source_126 = DICT_GET_ITEM( tmp_dict_name_21, tmp_key_name_21 );
    if ( tmp_assign_source_126 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_81;
    }
    goto condexpr_end_21;
    condexpr_false_21:;
    tmp_subscribed_name_21 = tmp_class_creation_21__bases;

    CHECK_OBJECT( tmp_subscribed_name_21 );
    tmp_subscript_name_21 = const_int_0;
    tmp_assign_source_127 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_21, tmp_subscript_name_21 );
    if ( tmp_assign_source_127 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_81;
    }
    assert( tmp_select_metaclass_21__base == NULL );
    tmp_select_metaclass_21__base = tmp_assign_source_127;

    // Tried code:
    // Tried code:
    tmp_source_name_21 = tmp_select_metaclass_21__base;

    CHECK_OBJECT( tmp_source_name_21 );
    tmp_outline_return_value_42 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_21 );
    if ( tmp_outline_return_value_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_84;
    }
    goto try_return_handler_83;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_84:;
    exception_keeper_type_41 = exception_type;
    exception_keeper_value_41 = exception_value;
    exception_keeper_tb_41 = exception_tb;
    exception_keeper_lineno_41 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_41 );
    Py_XDECREF( exception_keeper_value_41 );
    Py_XDECREF( exception_keeper_tb_41 );
    tmp_type_arg_21 = tmp_select_metaclass_21__base;

    CHECK_OBJECT( tmp_type_arg_21 );
    tmp_outline_return_value_42 = BUILTIN_TYPE1( tmp_type_arg_21 );
    assert( tmp_outline_return_value_42 != NULL );
    goto try_return_handler_83;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_83:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_21__base );
    Py_DECREF( tmp_select_metaclass_21__base );
    tmp_select_metaclass_21__base = NULL;

    goto outline_result_42;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_21__base );
    Py_DECREF( tmp_select_metaclass_21__base );
    tmp_select_metaclass_21__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_42:;
    tmp_assign_source_126 = tmp_outline_return_value_42;
    condexpr_end_21:;
    assert( tmp_class_creation_21__metaclass == NULL );
    tmp_class_creation_21__metaclass = tmp_assign_source_126;

    tmp_called_name_21 = tmp_class_creation_21__metaclass;

    CHECK_OBJECT( tmp_called_name_21 );
    tmp_args_element_name_61 = const_str_plain_RequestsWarning;
    tmp_args_element_name_62 = tmp_class_creation_21__bases;

    CHECK_OBJECT( tmp_args_element_name_62 );
    tmp_args_element_name_63 = tmp_class_creation_21__class_dict;

    CHECK_OBJECT( tmp_args_element_name_63 );
    frame_8e7ffb0d279fbe0b2e22a10ee8610395->m_frame.f_lineno = 114;
    {
        PyObject *call_args[] = { tmp_args_element_name_61, tmp_args_element_name_62, tmp_args_element_name_63 };
        tmp_assign_source_128 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_21, call_args );
    }

    if ( tmp_assign_source_128 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_81;
    }
    assert( tmp_class_creation_21__class == NULL );
    tmp_class_creation_21__class = tmp_assign_source_128;

    goto try_end_21;
    // Exception handler code:
    try_except_handler_81:;
    exception_keeper_type_42 = exception_type;
    exception_keeper_value_42 = exception_value;
    exception_keeper_tb_42 = exception_tb;
    exception_keeper_lineno_42 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_21__bases );
    tmp_class_creation_21__bases = NULL;

    Py_XDECREF( tmp_class_creation_21__class_dict );
    tmp_class_creation_21__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_21__metaclass );
    tmp_class_creation_21__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_42;
    exception_value = exception_keeper_value_42;
    exception_tb = exception_keeper_tb_42;
    exception_lineno = exception_keeper_lineno_42;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    tmp_assign_source_129 = tmp_class_creation_21__class;

    CHECK_OBJECT( tmp_assign_source_129 );
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestsWarning, tmp_assign_source_129 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_21__class );
    Py_DECREF( tmp_class_creation_21__class );
    tmp_class_creation_21__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_21__bases );
    Py_DECREF( tmp_class_creation_21__bases );
    tmp_class_creation_21__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_21__class_dict );
    Py_DECREF( tmp_class_creation_21__class_dict );
    tmp_class_creation_21__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_21__metaclass );
    Py_DECREF( tmp_class_creation_21__metaclass );
    tmp_class_creation_21__metaclass = NULL;

    // Tried code:
    tmp_assign_source_130 = PyTuple_New( 2 );
    tmp_tuple_element_22 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestsWarning );

    if (unlikely( tmp_tuple_element_22 == NULL ))
    {
        tmp_tuple_element_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestsWarning );
    }

    if ( tmp_tuple_element_22 == NULL )
    {
        Py_DECREF( tmp_assign_source_130 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestsWarning" );
        exception_tb = NULL;

        exception_lineno = 118;

        goto try_except_handler_85;
    }

    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_assign_source_130, 0, tmp_tuple_element_22 );
    tmp_tuple_element_22 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

    if (unlikely( tmp_tuple_element_22 == NULL ))
    {
        tmp_tuple_element_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
    }

    if ( tmp_tuple_element_22 == NULL )
    {
        Py_DECREF( tmp_assign_source_130 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "DeprecationWarning" );
        exception_tb = NULL;

        exception_lineno = 118;

        goto try_except_handler_85;
    }

    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_assign_source_130, 1, tmp_tuple_element_22 );
    assert( tmp_class_creation_22__bases == NULL );
    tmp_class_creation_22__bases = tmp_assign_source_130;

    tmp_set_locals = PyDict_New();
    locals_FileModeWarning_118 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyDict_SetItem( locals_FileModeWarning_118, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_c5ea8ff3c07b97205cc4ec7f24ad27a2;
    tmp_res = PyDict_SetItem( locals_FileModeWarning_118, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_43 = locals_FileModeWarning_118;
    Py_INCREF( tmp_outline_return_value_43 );
    goto try_return_handler_86;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_86:;
    Py_DECREF( locals_FileModeWarning_118 );
    locals_FileModeWarning_118 = NULL;
    goto outline_result_43;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_43:;
    tmp_assign_source_131 = tmp_outline_return_value_43;
    assert( tmp_class_creation_22__class_dict == NULL );
    tmp_class_creation_22__class_dict = tmp_assign_source_131;

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
    tmp_assign_source_132 = DICT_GET_ITEM( tmp_dict_name_22, tmp_key_name_22 );
    if ( tmp_assign_source_132 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;

        goto try_except_handler_85;
    }
    goto condexpr_end_22;
    condexpr_false_22:;
    tmp_subscribed_name_22 = tmp_class_creation_22__bases;

    CHECK_OBJECT( tmp_subscribed_name_22 );
    tmp_subscript_name_22 = const_int_0;
    tmp_assign_source_133 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_22, tmp_subscript_name_22 );
    if ( tmp_assign_source_133 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;

        goto try_except_handler_85;
    }
    assert( tmp_select_metaclass_22__base == NULL );
    tmp_select_metaclass_22__base = tmp_assign_source_133;

    // Tried code:
    // Tried code:
    tmp_source_name_22 = tmp_select_metaclass_22__base;

    CHECK_OBJECT( tmp_source_name_22 );
    tmp_outline_return_value_44 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_22 );
    if ( tmp_outline_return_value_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;

        goto try_except_handler_88;
    }
    goto try_return_handler_87;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_88:;
    exception_keeper_type_43 = exception_type;
    exception_keeper_value_43 = exception_value;
    exception_keeper_tb_43 = exception_tb;
    exception_keeper_lineno_43 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_43 );
    Py_XDECREF( exception_keeper_value_43 );
    Py_XDECREF( exception_keeper_tb_43 );
    tmp_type_arg_22 = tmp_select_metaclass_22__base;

    CHECK_OBJECT( tmp_type_arg_22 );
    tmp_outline_return_value_44 = BUILTIN_TYPE1( tmp_type_arg_22 );
    assert( tmp_outline_return_value_44 != NULL );
    goto try_return_handler_87;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_87:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_22__base );
    Py_DECREF( tmp_select_metaclass_22__base );
    tmp_select_metaclass_22__base = NULL;

    goto outline_result_44;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_22__base );
    Py_DECREF( tmp_select_metaclass_22__base );
    tmp_select_metaclass_22__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_44:;
    tmp_assign_source_132 = tmp_outline_return_value_44;
    condexpr_end_22:;
    assert( tmp_class_creation_22__metaclass == NULL );
    tmp_class_creation_22__metaclass = tmp_assign_source_132;

    tmp_called_name_22 = tmp_class_creation_22__metaclass;

    CHECK_OBJECT( tmp_called_name_22 );
    tmp_args_element_name_64 = const_str_plain_FileModeWarning;
    tmp_args_element_name_65 = tmp_class_creation_22__bases;

    CHECK_OBJECT( tmp_args_element_name_65 );
    tmp_args_element_name_66 = tmp_class_creation_22__class_dict;

    CHECK_OBJECT( tmp_args_element_name_66 );
    frame_8e7ffb0d279fbe0b2e22a10ee8610395->m_frame.f_lineno = 118;
    {
        PyObject *call_args[] = { tmp_args_element_name_64, tmp_args_element_name_65, tmp_args_element_name_66 };
        tmp_assign_source_134 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_22, call_args );
    }

    if ( tmp_assign_source_134 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;

        goto try_except_handler_85;
    }
    assert( tmp_class_creation_22__class == NULL );
    tmp_class_creation_22__class = tmp_assign_source_134;

    goto try_end_22;
    // Exception handler code:
    try_except_handler_85:;
    exception_keeper_type_44 = exception_type;
    exception_keeper_value_44 = exception_value;
    exception_keeper_tb_44 = exception_tb;
    exception_keeper_lineno_44 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_22__bases );
    tmp_class_creation_22__bases = NULL;

    Py_XDECREF( tmp_class_creation_22__class_dict );
    tmp_class_creation_22__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_22__metaclass );
    tmp_class_creation_22__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_44;
    exception_value = exception_keeper_value_44;
    exception_tb = exception_keeper_tb_44;
    exception_lineno = exception_keeper_lineno_44;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;
    tmp_assign_source_135 = tmp_class_creation_22__class;

    CHECK_OBJECT( tmp_assign_source_135 );
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_FileModeWarning, tmp_assign_source_135 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_22__class );
    Py_DECREF( tmp_class_creation_22__class );
    tmp_class_creation_22__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_22__bases );
    Py_DECREF( tmp_class_creation_22__bases );
    tmp_class_creation_22__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_22__class_dict );
    Py_DECREF( tmp_class_creation_22__class_dict );
    tmp_class_creation_22__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_22__metaclass );
    Py_DECREF( tmp_class_creation_22__metaclass );
    tmp_class_creation_22__metaclass = NULL;

    // Tried code:
    tmp_assign_source_136 = PyTuple_New( 1 );
    tmp_tuple_element_23 = GET_STRING_DICT_VALUE( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestsWarning );

    if (unlikely( tmp_tuple_element_23 == NULL ))
    {
        tmp_tuple_element_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestsWarning );
    }

    if ( tmp_tuple_element_23 == NULL )
    {
        Py_DECREF( tmp_assign_source_136 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "RequestsWarning" );
        exception_tb = NULL;

        exception_lineno = 122;

        goto try_except_handler_89;
    }

    Py_INCREF( tmp_tuple_element_23 );
    PyTuple_SET_ITEM( tmp_assign_source_136, 0, tmp_tuple_element_23 );
    assert( tmp_class_creation_23__bases == NULL );
    tmp_class_creation_23__bases = tmp_assign_source_136;

    tmp_set_locals = PyDict_New();
    locals_RequestsDependencyWarning_122 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_res = PyDict_SetItem( locals_RequestsDependencyWarning_122, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = const_str_digest_3a035decbb1d48c6b204b28e42512076;
    tmp_res = PyDict_SetItem( locals_RequestsDependencyWarning_122, const_str_plain___doc__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_45 = locals_RequestsDependencyWarning_122;
    Py_INCREF( tmp_outline_return_value_45 );
    goto try_return_handler_90;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_90:;
    Py_DECREF( locals_RequestsDependencyWarning_122 );
    locals_RequestsDependencyWarning_122 = NULL;
    goto outline_result_45;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_45:;
    tmp_assign_source_137 = tmp_outline_return_value_45;
    assert( tmp_class_creation_23__class_dict == NULL );
    tmp_class_creation_23__class_dict = tmp_assign_source_137;

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
    tmp_assign_source_138 = DICT_GET_ITEM( tmp_dict_name_23, tmp_key_name_23 );
    if ( tmp_assign_source_138 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;

        goto try_except_handler_89;
    }
    goto condexpr_end_23;
    condexpr_false_23:;
    tmp_subscribed_name_23 = tmp_class_creation_23__bases;

    CHECK_OBJECT( tmp_subscribed_name_23 );
    tmp_subscript_name_23 = const_int_0;
    tmp_assign_source_139 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_23, tmp_subscript_name_23 );
    if ( tmp_assign_source_139 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;

        goto try_except_handler_89;
    }
    assert( tmp_select_metaclass_23__base == NULL );
    tmp_select_metaclass_23__base = tmp_assign_source_139;

    // Tried code:
    // Tried code:
    tmp_source_name_23 = tmp_select_metaclass_23__base;

    CHECK_OBJECT( tmp_source_name_23 );
    tmp_outline_return_value_46 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_23 );
    if ( tmp_outline_return_value_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;

        goto try_except_handler_92;
    }
    goto try_return_handler_91;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_92:;
    exception_keeper_type_45 = exception_type;
    exception_keeper_value_45 = exception_value;
    exception_keeper_tb_45 = exception_tb;
    exception_keeper_lineno_45 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_45 );
    Py_XDECREF( exception_keeper_value_45 );
    Py_XDECREF( exception_keeper_tb_45 );
    tmp_type_arg_23 = tmp_select_metaclass_23__base;

    CHECK_OBJECT( tmp_type_arg_23 );
    tmp_outline_return_value_46 = BUILTIN_TYPE1( tmp_type_arg_23 );
    assert( tmp_outline_return_value_46 != NULL );
    goto try_return_handler_91;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_91:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_23__base );
    Py_DECREF( tmp_select_metaclass_23__base );
    tmp_select_metaclass_23__base = NULL;

    goto outline_result_46;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_23__base );
    Py_DECREF( tmp_select_metaclass_23__base );
    tmp_select_metaclass_23__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_result_46:;
    tmp_assign_source_138 = tmp_outline_return_value_46;
    condexpr_end_23:;
    assert( tmp_class_creation_23__metaclass == NULL );
    tmp_class_creation_23__metaclass = tmp_assign_source_138;

    tmp_called_name_23 = tmp_class_creation_23__metaclass;

    CHECK_OBJECT( tmp_called_name_23 );
    tmp_args_element_name_67 = const_str_plain_RequestsDependencyWarning;
    tmp_args_element_name_68 = tmp_class_creation_23__bases;

    CHECK_OBJECT( tmp_args_element_name_68 );
    tmp_args_element_name_69 = tmp_class_creation_23__class_dict;

    CHECK_OBJECT( tmp_args_element_name_69 );
    frame_8e7ffb0d279fbe0b2e22a10ee8610395->m_frame.f_lineno = 122;
    {
        PyObject *call_args[] = { tmp_args_element_name_67, tmp_args_element_name_68, tmp_args_element_name_69 };
        tmp_assign_source_140 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_23, call_args );
    }

    if ( tmp_assign_source_140 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;

        goto try_except_handler_89;
    }
    assert( tmp_class_creation_23__class == NULL );
    tmp_class_creation_23__class = tmp_assign_source_140;

    goto try_end_23;
    // Exception handler code:
    try_except_handler_89:;
    exception_keeper_type_46 = exception_type;
    exception_keeper_value_46 = exception_value;
    exception_keeper_tb_46 = exception_tb;
    exception_keeper_lineno_46 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_23__bases );
    tmp_class_creation_23__bases = NULL;

    Py_XDECREF( tmp_class_creation_23__class_dict );
    tmp_class_creation_23__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_23__metaclass );
    tmp_class_creation_23__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_46;
    exception_value = exception_keeper_value_46;
    exception_tb = exception_keeper_tb_46;
    exception_lineno = exception_keeper_lineno_46;

    goto frame_exception_exit_1;
    // End of try:
    try_end_23:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8e7ffb0d279fbe0b2e22a10ee8610395 );
#endif
    popFrameStack();

    assertFrameObject( frame_8e7ffb0d279fbe0b2e22a10ee8610395 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8e7ffb0d279fbe0b2e22a10ee8610395 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8e7ffb0d279fbe0b2e22a10ee8610395, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8e7ffb0d279fbe0b2e22a10ee8610395->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8e7ffb0d279fbe0b2e22a10ee8610395, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_141 = tmp_class_creation_23__class;

    CHECK_OBJECT( tmp_assign_source_141 );
    UPDATE_STRING_DICT0( moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain_RequestsDependencyWarning, tmp_assign_source_141 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_23__class );
    Py_DECREF( tmp_class_creation_23__class );
    tmp_class_creation_23__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_23__bases );
    Py_DECREF( tmp_class_creation_23__bases );
    tmp_class_creation_23__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_23__class_dict );
    Py_DECREF( tmp_class_creation_23__class_dict );
    tmp_class_creation_23__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_23__metaclass );
    Py_DECREF( tmp_class_creation_23__metaclass );
    tmp_class_creation_23__metaclass = NULL;


    return MOD_RETURN_VALUE( module_requests$exceptions );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
