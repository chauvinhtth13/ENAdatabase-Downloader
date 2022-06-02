/* Generated code for Python source for module 'urllib3'
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

/* The _module_urllib3 is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3;
PyDictObject *moduledict_urllib3;

/* The module constants used, if any. */
extern PyObject *const_str_digest_a8c5d5819c4db6abb50fe4e24bb09b9d;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_ProxyManager;
extern PyObject *const_tuple_dc727193c75a686e3dee81df5ccbb9c8_tuple;
extern PyObject *const_str_plain_Retry;
extern PyObject *const_str_plain_poolmanager;
static PyObject *const_tuple_str_plain_category_tuple;
extern PyObject *const_dict_empty;
static PyObject *const_tuple_str_digest_9488daec0a222fa96a0806e8bb41d02a_tuple;
static PyObject *const_str_digest_c8c857b5729e0b378286ccbd91c95cae;
extern PyObject *const_str_plain_connection_from_url;
extern PyObject *const_str_plain_level;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_addHandler;
extern PyObject *const_str_digest_e68800bfc0da117494aca4ca9d48e152;
extern PyObject *const_str_plain_urllib3;
static PyObject *const_str_plain_setLevel;
extern PyObject *const_str_plain___license__;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain_HTTPConnectionPool;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain_make_headers;
extern PyObject *const_str_plain_debug;
extern PyObject *const_str_plain_NUITKA_PACKAGE_urllib3;
extern PyObject *const_str_plain_SecurityWarning;
static PyObject *const_str_digest_6d27c09f2576ba9e7aaeed9738d5cae8;
static PyObject *const_tuple_str_plain_get_host_tuple;
static PyObject *const_tuple_str_plain_exceptions_tuple;
extern PyObject *const_str_plain_NullHandler;
extern PyObject *const_str_plain_SNIMissingWarning;
static PyObject *const_str_digest_81b98f1a8ecf97715642eb1142269402;
static PyObject *const_str_digest_9488daec0a222fa96a0806e8bb41d02a;
static PyObject *const_tuple_18cfb5b7d6d807b6ee847ca4f1977ffc_tuple;
extern PyObject *const_str_plain_HTTPSConnectionPool;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_8464e90b8a52ddc9280bc256f7cf4fda;
extern PyObject *const_str_plain_SubjectAltNameWarning;
extern PyObject *const_str_plain_PoolManager;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_8867a986f001c831bce500d134c983ea_tuple;
extern PyObject *const_str_plain_connectionpool;
static PyObject *const_str_plain_StreamHandler;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain_get_host;
extern PyObject *const_str_plain_InsecurePlatformWarning;
extern PyObject *const_str_plain___author__;
static PyObject *const_str_plain_handler;
extern PyObject *const_str_plain_HTTPResponse;
static PyObject *const_str_plain_disable_warnings;
extern PyObject *const_str_plain_filepost;
extern PyObject *const_tuple_str_plain_Timeout_tuple;
static PyObject *const_str_plain_Formatter;
extern PyObject *const_str_digest_eec49d283d20cbc4ed650539d1524272;
static PyObject *const_str_plain_setFormatter;
static PyObject *const_tuple_a8b5457a455379132108111c71bf3ec5_tuple;
extern PyObject *const_str_plain_HTTPWarning;
extern PyObject *const_str_plain_simplefilter;
static PyObject *const_str_plain_MIT;
extern PyObject *const_str_plain_path;
extern PyObject *const_tuple_str_plain_NullHandler_tuple;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_str_digest_522bfd5e75e11cb6ec433673b0570303;
static PyObject *const_str_plain_add_stderr_logger;
extern PyObject *const_str_plain_DEBUG;
extern PyObject *const_str_plain_encode_multipart_formdata;
extern PyObject *const_str_plain_append;
static PyObject *const_str_digest_b0632bca22c128e5156e5d8ae22de6c6;
extern PyObject *const_dict_9d1be102e274ebd5d21e13e40f132db0;
static PyObject *const_str_digest_c2a5aae7bb235405ed8e87579bccaea2;
extern PyObject *const_str_plain_Timeout;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
extern PyObject *const_tuple_str_plain_encode_multipart_formdata_tuple;
extern PyObject *const_str_plain_logging;
static PyObject *const_str_digest_152e75d29d676b704beb36d348512da5;
extern PyObject *const_str_plain_logger;
extern PyObject *const_str_plain_ignore;
static PyObject *const_str_plain_always;
extern PyObject *const_tuple_str_plain_Retry_tuple;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_tuple_str_plain_make_headers_tuple;
extern PyObject *const_tuple_str_plain_HTTPResponse_tuple;
extern PyObject *const_str_plain_exceptions;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_plain_urllib3_tuple;
extern PyObject *const_str_plain___version__;
static PyObject *const_str_digest_23f90efde940ba2256d04ce7ac5cea70;
extern PyObject *const_str_plain_proxy_from_url;
extern PyObject *const_str_empty;
static PyObject *const_tuple_str_plain_level_str_plain_logger_str_plain_handler_tuple;
extern PyObject *const_str_plain_default;
extern PyObject *const_str_plain_response;
extern PyObject *const_str_plain_category;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_plain_category_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_category_tuple, 0, const_str_plain_category ); Py_INCREF( const_str_plain_category );
    const_tuple_str_digest_9488daec0a222fa96a0806e8bb41d02a_tuple = PyTuple_New( 1 );
    const_str_digest_9488daec0a222fa96a0806e8bb41d02a = UNSTREAM_STRING( &constant_bin[ 1027572 ], 37, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_9488daec0a222fa96a0806e8bb41d02a_tuple, 0, const_str_digest_9488daec0a222fa96a0806e8bb41d02a ); Py_INCREF( const_str_digest_9488daec0a222fa96a0806e8bb41d02a );
    const_str_digest_c8c857b5729e0b378286ccbd91c95cae = UNSTREAM_STRING( &constant_bin[ 1027609 ], 56, 0 );
    const_str_plain_setLevel = UNSTREAM_STRING( &constant_bin[ 1027665 ], 8, 1 );
    const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 0, const_str_plain_HTTPConnectionPool ); Py_INCREF( const_str_plain_HTTPConnectionPool );
    PyTuple_SET_ITEM( const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 1, const_str_plain_HTTPSConnectionPool ); Py_INCREF( const_str_plain_HTTPSConnectionPool );
    PyTuple_SET_ITEM( const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 2, const_str_plain_PoolManager ); Py_INCREF( const_str_plain_PoolManager );
    PyTuple_SET_ITEM( const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 3, const_str_plain_ProxyManager ); Py_INCREF( const_str_plain_ProxyManager );
    PyTuple_SET_ITEM( const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 4, const_str_plain_HTTPResponse ); Py_INCREF( const_str_plain_HTTPResponse );
    PyTuple_SET_ITEM( const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 5, const_str_plain_Retry ); Py_INCREF( const_str_plain_Retry );
    PyTuple_SET_ITEM( const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 6, const_str_plain_Timeout ); Py_INCREF( const_str_plain_Timeout );
    const_str_plain_add_stderr_logger = UNSTREAM_STRING( &constant_bin[ 1027673 ], 17, 1 );
    PyTuple_SET_ITEM( const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 7, const_str_plain_add_stderr_logger ); Py_INCREF( const_str_plain_add_stderr_logger );
    PyTuple_SET_ITEM( const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 8, const_str_plain_connection_from_url ); Py_INCREF( const_str_plain_connection_from_url );
    const_str_plain_disable_warnings = UNSTREAM_STRING( &constant_bin[ 1027690 ], 16, 1 );
    PyTuple_SET_ITEM( const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 9, const_str_plain_disable_warnings ); Py_INCREF( const_str_plain_disable_warnings );
    PyTuple_SET_ITEM( const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 10, const_str_plain_encode_multipart_formdata ); Py_INCREF( const_str_plain_encode_multipart_formdata );
    PyTuple_SET_ITEM( const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 11, const_str_plain_get_host ); Py_INCREF( const_str_plain_get_host );
    PyTuple_SET_ITEM( const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 12, const_str_plain_make_headers ); Py_INCREF( const_str_plain_make_headers );
    PyTuple_SET_ITEM( const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 13, const_str_plain_proxy_from_url ); Py_INCREF( const_str_plain_proxy_from_url );
    const_str_digest_6d27c09f2576ba9e7aaeed9738d5cae8 = UNSTREAM_STRING( &constant_bin[ 1027706 ], 60, 0 );
    const_tuple_str_plain_get_host_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_get_host_tuple, 0, const_str_plain_get_host ); Py_INCREF( const_str_plain_get_host );
    const_tuple_str_plain_exceptions_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_exceptions_tuple, 0, const_str_plain_exceptions ); Py_INCREF( const_str_plain_exceptions );
    const_str_digest_81b98f1a8ecf97715642eb1142269402 = UNSTREAM_STRING( &constant_bin[ 1027766 ], 40, 0 );
    const_tuple_18cfb5b7d6d807b6ee847ca4f1977ffc_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_18cfb5b7d6d807b6ee847ca4f1977ffc_tuple, 0, const_str_plain_HTTPConnectionPool ); Py_INCREF( const_str_plain_HTTPConnectionPool );
    PyTuple_SET_ITEM( const_tuple_18cfb5b7d6d807b6ee847ca4f1977ffc_tuple, 1, const_str_plain_HTTPSConnectionPool ); Py_INCREF( const_str_plain_HTTPSConnectionPool );
    PyTuple_SET_ITEM( const_tuple_18cfb5b7d6d807b6ee847ca4f1977ffc_tuple, 2, const_str_plain_connection_from_url ); Py_INCREF( const_str_plain_connection_from_url );
    const_str_digest_8464e90b8a52ddc9280bc256f7cf4fda = UNSTREAM_STRING( &constant_bin[ 1027806 ], 19, 0 );
    const_tuple_8867a986f001c831bce500d134c983ea_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_8867a986f001c831bce500d134c983ea_tuple, 0, const_str_plain_PoolManager ); Py_INCREF( const_str_plain_PoolManager );
    PyTuple_SET_ITEM( const_tuple_8867a986f001c831bce500d134c983ea_tuple, 1, const_str_plain_ProxyManager ); Py_INCREF( const_str_plain_ProxyManager );
    PyTuple_SET_ITEM( const_tuple_8867a986f001c831bce500d134c983ea_tuple, 2, const_str_plain_proxy_from_url ); Py_INCREF( const_str_plain_proxy_from_url );
    const_str_plain_StreamHandler = UNSTREAM_STRING( &constant_bin[ 1027825 ], 13, 1 );
    const_str_plain_handler = UNSTREAM_STRING( &constant_bin[ 655553 ], 7, 1 );
    const_str_plain_Formatter = UNSTREAM_STRING( &constant_bin[ 1027838 ], 9, 1 );
    const_str_plain_setFormatter = UNSTREAM_STRING( &constant_bin[ 1027847 ], 12, 1 );
    const_tuple_a8b5457a455379132108111c71bf3ec5_tuple = PyTuple_New( 2 );
    const_str_digest_23f90efde940ba2256d04ce7ac5cea70 = UNSTREAM_STRING( &constant_bin[ 1027859 ], 44, 0 );
    PyTuple_SET_ITEM( const_tuple_a8b5457a455379132108111c71bf3ec5_tuple, 0, const_str_digest_23f90efde940ba2256d04ce7ac5cea70 ); Py_INCREF( const_str_digest_23f90efde940ba2256d04ce7ac5cea70 );
    PyTuple_SET_ITEM( const_tuple_a8b5457a455379132108111c71bf3ec5_tuple, 1, const_str_plain_urllib3 ); Py_INCREF( const_str_plain_urllib3 );
    const_str_plain_MIT = UNSTREAM_STRING( &constant_bin[ 667377 ], 3, 1 );
    const_str_digest_b0632bca22c128e5156e5d8ae22de6c6 = UNSTREAM_STRING( &constant_bin[ 1027903 ], 134, 0 );
    const_str_digest_c2a5aae7bb235405ed8e87579bccaea2 = UNSTREAM_STRING( &constant_bin[ 1028037 ], 16, 0 );
    const_str_digest_152e75d29d676b704beb36d348512da5 = UNSTREAM_STRING( &constant_bin[ 1028053 ], 6, 0 );
    const_str_plain_always = UNSTREAM_STRING( &constant_bin[ 13972 ], 6, 1 );
    const_tuple_str_plain_urllib3_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_urllib3_tuple, 0, const_str_plain_urllib3 ); Py_INCREF( const_str_plain_urllib3 );
    const_tuple_str_plain_level_str_plain_logger_str_plain_handler_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_level_str_plain_logger_str_plain_handler_tuple, 0, const_str_plain_level ); Py_INCREF( const_str_plain_level );
    PyTuple_SET_ITEM( const_tuple_str_plain_level_str_plain_logger_str_plain_handler_tuple, 1, const_str_plain_logger ); Py_INCREF( const_str_plain_logger );
    PyTuple_SET_ITEM( const_tuple_str_plain_level_str_plain_logger_str_plain_handler_tuple, 2, const_str_plain_handler ); Py_INCREF( const_str_plain_handler );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_9c43be32adc39871d6cf1b625ce6d157;
static PyCodeObject *codeobj_8f9aef4b25a11a9494c10cf5592e3159;
static PyCodeObject *codeobj_fc850c8858a98c06d57be18908ad6fd7;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_8464e90b8a52ddc9280bc256f7cf4fda );
    codeobj_9c43be32adc39871d6cf1b625ce6d157 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_c2a5aae7bb235405ed8e87579bccaea2, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_8f9aef4b25a11a9494c10cf5592e3159 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_stderr_logger, 47, const_tuple_str_plain_level_str_plain_logger_str_plain_handler_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_fc850c8858a98c06d57be18908ad6fd7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_disable_warnings, 82, const_tuple_str_plain_category_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_urllib3$$$function_1_add_stderr_logger( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$$$function_2_disable_warnings( PyObject *defaults );


// The module function definitions.
static PyObject *impl_urllib3$$$function_1_add_stderr_logger( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_level = python_pars[ 0 ];
    PyObject *var_logger = NULL;
    PyObject *var_handler = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_8f9aef4b25a11a9494c10cf5592e3159 = NULL;

    struct Nuitka_FrameObject *frame_8f9aef4b25a11a9494c10cf5592e3159;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8f9aef4b25a11a9494c10cf5592e3159, codeobj_8f9aef4b25a11a9494c10cf5592e3159, module_urllib3, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8f9aef4b25a11a9494c10cf5592e3159 = cache_frame_8f9aef4b25a11a9494c10cf5592e3159;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8f9aef4b25a11a9494c10cf5592e3159 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8f9aef4b25a11a9494c10cf5592e3159 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "logging" );
        exception_tb = NULL;

        exception_lineno = 56;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_8f9aef4b25a11a9494c10cf5592e3159->m_frame.f_lineno = 56;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM( const_tuple_str_plain_urllib3_tuple, 0 ) );

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_logger == NULL );
    var_logger = tmp_assign_source_1;

    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "logging" );
        exception_tb = NULL;

        exception_lineno = 57;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_8f9aef4b25a11a9494c10cf5592e3159->m_frame.f_lineno = 57;
    tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_StreamHandler );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_handler == NULL );
    var_handler = tmp_assign_source_2;

    tmp_source_name_1 = var_handler;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_setFormatter );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_called_instance_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "logging" );
        exception_tb = NULL;

        exception_lineno = 58;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_8f9aef4b25a11a9494c10cf5592e3159->m_frame.f_lineno = 58;
    tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_Formatter, &PyTuple_GET_ITEM( const_tuple_str_digest_9488daec0a222fa96a0806e8bb41d02a_tuple, 0 ) );

    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 58;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_8f9aef4b25a11a9494c10cf5592e3159->m_frame.f_lineno = 58;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_4 = var_logger;

    CHECK_OBJECT( tmp_called_instance_4 );
    tmp_args_element_name_2 = var_handler;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_8f9aef4b25a11a9494c10cf5592e3159->m_frame.f_lineno = 59;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_addHandler, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_5 = var_logger;

    CHECK_OBJECT( tmp_called_instance_5 );
    tmp_args_element_name_3 = par_level;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_8f9aef4b25a11a9494c10cf5592e3159->m_frame.f_lineno = 60;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_setLevel, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_6 = var_logger;

    CHECK_OBJECT( tmp_called_instance_6 );
    frame_8f9aef4b25a11a9494c10cf5592e3159->m_frame.f_lineno = 61;
    tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_6, const_str_plain_debug, &PyTuple_GET_ITEM( const_tuple_a8b5457a455379132108111c71bf3ec5_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8f9aef4b25a11a9494c10cf5592e3159 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8f9aef4b25a11a9494c10cf5592e3159 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8f9aef4b25a11a9494c10cf5592e3159, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8f9aef4b25a11a9494c10cf5592e3159->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8f9aef4b25a11a9494c10cf5592e3159, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8f9aef4b25a11a9494c10cf5592e3159,
        type_description_1,
        par_level,
        var_logger,
        var_handler
    );


    // Release cached frame.
    if ( frame_8f9aef4b25a11a9494c10cf5592e3159 == cache_frame_8f9aef4b25a11a9494c10cf5592e3159 )
    {
        Py_DECREF( frame_8f9aef4b25a11a9494c10cf5592e3159 );
    }
    cache_frame_8f9aef4b25a11a9494c10cf5592e3159 = NULL;

    assertFrameObject( frame_8f9aef4b25a11a9494c10cf5592e3159 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_handler;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$$$function_1_add_stderr_logger );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_logger );
    Py_DECREF( var_logger );
    var_logger = NULL;

    CHECK_OBJECT( (PyObject *)var_handler );
    Py_DECREF( var_handler );
    var_handler = NULL;

    CHECK_OBJECT( (PyObject *)par_level );
    Py_DECREF( par_level );
    par_level = NULL;

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

    Py_XDECREF( var_logger );
    var_logger = NULL;

    Py_XDECREF( var_handler );
    var_handler = NULL;

    CHECK_OBJECT( (PyObject *)par_level );
    Py_DECREF( par_level );
    par_level = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$$$function_1_add_stderr_logger );
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


static PyObject *impl_urllib3$$$function_2_disable_warnings( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_category = python_pars[ 0 ];
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_fc850c8858a98c06d57be18908ad6fd7 = NULL;

    struct Nuitka_FrameObject *frame_fc850c8858a98c06d57be18908ad6fd7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fc850c8858a98c06d57be18908ad6fd7, codeobj_fc850c8858a98c06d57be18908ad6fd7, module_urllib3, sizeof(void *) );
    frame_fc850c8858a98c06d57be18908ad6fd7 = cache_frame_fc850c8858a98c06d57be18908ad6fd7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fc850c8858a98c06d57be18908ad6fd7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fc850c8858a98c06d57be18908ad6fd7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "warnings" );
        exception_tb = NULL;

        exception_lineno = 86;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_plain_ignore;
    tmp_args_element_name_2 = par_category;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_fc850c8858a98c06d57be18908ad6fd7->m_frame.f_lineno = 86;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_simplefilter, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fc850c8858a98c06d57be18908ad6fd7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fc850c8858a98c06d57be18908ad6fd7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fc850c8858a98c06d57be18908ad6fd7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fc850c8858a98c06d57be18908ad6fd7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fc850c8858a98c06d57be18908ad6fd7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fc850c8858a98c06d57be18908ad6fd7,
        type_description_1,
        par_category
    );


    // Release cached frame.
    if ( frame_fc850c8858a98c06d57be18908ad6fd7 == cache_frame_fc850c8858a98c06d57be18908ad6fd7 )
    {
        Py_DECREF( frame_fc850c8858a98c06d57be18908ad6fd7 );
    }
    cache_frame_fc850c8858a98c06d57be18908ad6fd7 = NULL;

    assertFrameObject( frame_fc850c8858a98c06d57be18908ad6fd7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$$$function_2_disable_warnings );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_category );
    Py_DECREF( par_category );
    par_category = NULL;

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

    CHECK_OBJECT( (PyObject *)par_category );
    Py_DECREF( par_category );
    par_category = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$$$function_2_disable_warnings );
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



static PyObject *MAKE_FUNCTION_urllib3$$$function_1_add_stderr_logger( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$$$function_1_add_stderr_logger,
        const_str_plain_add_stderr_logger,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8f9aef4b25a11a9494c10cf5592e3159,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3,
        const_str_digest_b0632bca22c128e5156e5d8ae22de6c6,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$$$function_2_disable_warnings( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$$$function_2_disable_warnings,
        const_str_plain_disable_warnings,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fc850c8858a98c06d57be18908ad6fd7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3,
        const_str_digest_6d27c09f2576ba9e7aaeed9738d5cae8,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3 =
{
    PyModuleDef_HEAD_INIT,
    "urllib3",   /* m_name */
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

MOD_INIT_DECL( urllib3 )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3 );
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
    puts("urllib3: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3 = Py_InitModule4(
        "urllib3",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3 = PyModule_Create( &mdef_urllib3 );
#endif

    moduledict_urllib3 = MODULE_DICT( module_urllib3 );

    // Update "__package__" value to what it ought to be.
    {
#if 1
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_urllib3,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3 );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_urllib3, module_urllib3 );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
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
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
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
    int tmp_res;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    struct Nuitka_FrameObject *frame_9c43be32adc39871d6cf1b625ce6d157;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_c8c857b5729e0b378286ccbd91c95cae;
    UPDATE_STRING_DICT0( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_9c43be32adc39871d6cf1b625ce6d157 = MAKE_MODULE_FRAME( codeobj_9c43be32adc39871d6cf1b625ce6d157, module_urllib3 );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_9c43be32adc39871d6cf1b625ce6d157 );
    assert( Py_REFCNT( frame_9c43be32adc39871d6cf1b625ce6d157 ) == 2 );

    // Framed code:
    tmp_assign_source_3 = PyList_New( 2 );
    frame_9c43be32adc39871d6cf1b625ce6d157->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("os");
        if (likely( module != NULL ))
        {
            tmp_source_name_1 = PyObject_GetAttr( module, const_str_plain_path );
        }
        else
        {
            tmp_source_name_1 = NULL;
        }
    }

    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dirname );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = module_filename_obj;
    frame_9c43be32adc39871d6cf1b625ce6d157->m_frame.f_lineno = 1;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 0, tmp_list_element_1 );
    frame_9c43be32adc39871d6cf1b625ce6d157->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("os");
        if (likely( module != NULL ))
        {
            tmp_called_instance_1 = PyObject_GetAttr( module, const_str_plain_environ );
        }
        else
        {
            tmp_called_instance_1 = NULL;
        }
    }

    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    frame_9c43be32adc39871d6cf1b625ce6d157->m_frame.f_lineno = 1;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_dc727193c75a686e3dee81df5ccbb9c8_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 1, tmp_list_element_1 );
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    frame_9c43be32adc39871d6cf1b625ce6d157->m_frame.f_lineno = 4;
    tmp_import_name_from_1 = PyImport_ImportModule("__future__");
    assert( tmp_import_name_from_1 != NULL );
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_name_name_1 = const_str_plain_warnings;
    tmp_globals_name_1 = (PyObject *)moduledict_urllib3;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_9c43be32adc39871d6cf1b625ce6d157->m_frame.f_lineno = 5;
    tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_5 );
    tmp_name_name_2 = const_str_plain_connectionpool;
    tmp_globals_name_2 = (PyObject *)moduledict_urllib3;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_18cfb5b7d6d807b6ee847ca4f1977ffc_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_9c43be32adc39871d6cf1b625ce6d157->m_frame.f_lineno = 7;
    tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_6;

    // Tried code:
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_HTTPConnectionPool );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_HTTPConnectionPool, tmp_assign_source_7 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_HTTPSConnectionPool );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_HTTPSConnectionPool, tmp_assign_source_8 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_connection_from_url );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_connection_from_url, tmp_assign_source_9 );
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

    tmp_name_name_3 = const_str_empty;
    tmp_globals_name_3 = (PyObject *)moduledict_urllib3;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_exceptions_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_9c43be32adc39871d6cf1b625ce6d157->m_frame.f_lineno = 9;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_exceptions );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_exceptions, tmp_assign_source_10 );
    tmp_name_name_4 = const_str_plain_filepost;
    tmp_globals_name_4 = (PyObject *)moduledict_urllib3;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_encode_multipart_formdata_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_9c43be32adc39871d6cf1b625ce6d157->m_frame.f_lineno = 10;
    tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_encode_multipart_formdata );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_encode_multipart_formdata, tmp_assign_source_11 );
    tmp_name_name_5 = const_str_plain_poolmanager;
    tmp_globals_name_5 = (PyObject *)moduledict_urllib3;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_8867a986f001c831bce500d134c983ea_tuple;
    tmp_level_name_5 = const_int_pos_1;
    frame_9c43be32adc39871d6cf1b625ce6d157->m_frame.f_lineno = 11;
    tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_12;

    // Tried code:
    tmp_import_name_from_7 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_PoolManager );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_PoolManager, tmp_assign_source_13 );
    tmp_import_name_from_8 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_ProxyManager );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_ProxyManager, tmp_assign_source_14 );
    tmp_import_name_from_9 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_proxy_from_url );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_proxy_from_url, tmp_assign_source_15 );
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

    tmp_name_name_6 = const_str_plain_response;
    tmp_globals_name_6 = (PyObject *)moduledict_urllib3;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_HTTPResponse_tuple;
    tmp_level_name_6 = const_int_pos_1;
    frame_9c43be32adc39871d6cf1b625ce6d157->m_frame.f_lineno = 12;
    tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_HTTPResponse );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_HTTPResponse, tmp_assign_source_16 );
    tmp_name_name_7 = const_str_digest_eec49d283d20cbc4ed650539d1524272;
    tmp_globals_name_7 = (PyObject *)moduledict_urllib3;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_make_headers_tuple;
    tmp_level_name_7 = const_int_pos_1;
    frame_9c43be32adc39871d6cf1b625ce6d157->m_frame.f_lineno = 13;
    tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_make_headers );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_make_headers, tmp_assign_source_17 );
    tmp_name_name_8 = const_str_digest_a8c5d5819c4db6abb50fe4e24bb09b9d;
    tmp_globals_name_8 = (PyObject *)moduledict_urllib3;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_str_plain_get_host_tuple;
    tmp_level_name_8 = const_int_pos_1;
    frame_9c43be32adc39871d6cf1b625ce6d157->m_frame.f_lineno = 14;
    tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_get_host );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_get_host, tmp_assign_source_18 );
    tmp_name_name_9 = const_str_digest_522bfd5e75e11cb6ec433673b0570303;
    tmp_globals_name_9 = (PyObject *)moduledict_urllib3;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = const_tuple_str_plain_Timeout_tuple;
    tmp_level_name_9 = const_int_pos_1;
    frame_9c43be32adc39871d6cf1b625ce6d157->m_frame.f_lineno = 15;
    tmp_import_name_from_13 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_Timeout );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_Timeout, tmp_assign_source_19 );
    tmp_name_name_10 = const_str_digest_e68800bfc0da117494aca4ca9d48e152;
    tmp_globals_name_10 = (PyObject *)moduledict_urllib3;
    tmp_locals_name_10 = Py_None;
    tmp_fromlist_name_10 = const_tuple_str_plain_Retry_tuple;
    tmp_level_name_10 = const_int_pos_1;
    frame_9c43be32adc39871d6cf1b625ce6d157->m_frame.f_lineno = 16;
    tmp_import_name_from_14 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_Retry );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_Retry, tmp_assign_source_20 );
    tmp_name_name_11 = const_str_plain_logging;
    tmp_globals_name_11 = (PyObject *)moduledict_urllib3;
    tmp_locals_name_11 = Py_None;
    tmp_fromlist_name_11 = Py_None;
    tmp_level_name_11 = const_int_0;
    frame_9c43be32adc39871d6cf1b625ce6d157->m_frame.f_lineno = 20;
    tmp_assign_source_21 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_21 );
    tmp_name_name_12 = const_str_plain_logging;
    tmp_globals_name_12 = (PyObject *)moduledict_urllib3;
    tmp_locals_name_12 = Py_None;
    tmp_fromlist_name_12 = const_tuple_str_plain_NullHandler_tuple;
    tmp_level_name_12 = const_int_0;
    frame_9c43be32adc39871d6cf1b625ce6d157->m_frame.f_lineno = 21;
    tmp_import_name_from_15 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_NullHandler );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_NullHandler, tmp_assign_source_22 );
    tmp_assign_source_23 = const_str_digest_81b98f1a8ecf97715642eb1142269402;
    UPDATE_STRING_DICT0( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_23 );
    tmp_assign_source_24 = const_str_plain_MIT;
    UPDATE_STRING_DICT0( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___license__, tmp_assign_source_24 );
    tmp_assign_source_25 = const_str_digest_152e75d29d676b704beb36d348512da5;
    UPDATE_STRING_DICT0( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_25 );
    tmp_assign_source_26 = const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple;
    UPDATE_STRING_DICT0( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_26 );
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;

        exception_lineno = 44;

        goto frame_exception_exit_1;
    }

    frame_9c43be32adc39871d6cf1b625ce6d157->m_frame.f_lineno = 44;
    tmp_source_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_getLogger, &PyTuple_GET_ITEM( const_tuple_str_plain_urllib3_tuple, 0 ) );

    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_addHandler );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_NullHandler );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NullHandler );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "NullHandler" );
        exception_tb = NULL;

        exception_lineno = 44;

        goto frame_exception_exit_1;
    }

    frame_9c43be32adc39871d6cf1b625ce6d157->m_frame.f_lineno = 44;
    tmp_args_element_name_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 44;

        goto frame_exception_exit_1;
    }
    frame_9c43be32adc39871d6cf1b625ce6d157->m_frame.f_lineno = 44;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_defaults_1 = PyTuple_New( 1 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_defaults_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;

        exception_lineno = 47;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_DEBUG );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_1 );

        exception_lineno = 47;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
    tmp_assign_source_27 = MAKE_FUNCTION_urllib3$$$function_1_add_stderr_logger( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_add_stderr_logger, tmp_assign_source_27 );
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_urllib3, const_str_plain_NullHandler );
    if ( tmp_res == -1 ) CLEAR_ERROR_OCCURRED();

    if ( tmp_res == -1 )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "NullHandler" );
        exception_tb = NULL;

        exception_lineno = 66;

        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "warnings" );
        exception_tb = NULL;

        exception_lineno = 73;

        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_simplefilter );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;

        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_always;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_exceptions );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exceptions );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "exceptions" );
        exception_tb = NULL;

        exception_lineno = 73;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_SecurityWarning );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 73;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_9d1be102e274ebd5d21e13e40f132db0 );
    frame_9c43be32adc39871d6cf1b625ce6d157->m_frame.f_lineno = 73;
    tmp_unused = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "warnings" );
        exception_tb = NULL;

        exception_lineno = 75;

        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_simplefilter );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;

        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_3 = const_str_plain_default;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_exceptions );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exceptions );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "exceptions" );
        exception_tb = NULL;

        exception_lineno = 75;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_SubjectAltNameWarning );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 75;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
    tmp_kw_name_2 = PyDict_Copy( const_dict_9d1be102e274ebd5d21e13e40f132db0 );
    frame_9c43be32adc39871d6cf1b625ce6d157->m_frame.f_lineno = 75;
    tmp_unused = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "warnings" );
        exception_tb = NULL;

        exception_lineno = 77;

        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_simplefilter );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;

        goto frame_exception_exit_1;
    }
    tmp_args_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_4 = const_str_plain_default;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_exceptions );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exceptions );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "exceptions" );
        exception_tb = NULL;

        exception_lineno = 77;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_InsecurePlatformWarning );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_3 );

        exception_lineno = 77;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_4 );
    tmp_kw_name_3 = PyDict_Copy( const_dict_9d1be102e274ebd5d21e13e40f132db0 );
    frame_9c43be32adc39871d6cf1b625ce6d157->m_frame.f_lineno = 77;
    tmp_unused = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "warnings" );
        exception_tb = NULL;

        exception_lineno = 79;

        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_simplefilter );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;

        goto frame_exception_exit_1;
    }
    tmp_args_name_4 = PyTuple_New( 2 );
    tmp_tuple_element_5 = const_str_plain_default;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_5 );
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_exceptions );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exceptions );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "exceptions" );
        exception_tb = NULL;

        exception_lineno = 79;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_SNIMissingWarning );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_name_4 );

        exception_lineno = 79;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_5 );
    tmp_kw_name_4 = PyDict_Copy( const_dict_9d1be102e274ebd5d21e13e40f132db0 );
    frame_9c43be32adc39871d6cf1b625ce6d157->m_frame.f_lineno = 79;
    tmp_unused = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_4 );
    Py_DECREF( tmp_kw_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_defaults_2 = PyTuple_New( 1 );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_exceptions );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exceptions );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_defaults_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "exceptions" );
        exception_tb = NULL;

        exception_lineno = 82;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_HTTPWarning );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_2 );

        exception_lineno = 82;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_6 );
    tmp_assign_source_28 = MAKE_FUNCTION_urllib3$$$function_2_disable_warnings( tmp_defaults_2 );
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_disable_warnings, tmp_assign_source_28 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9c43be32adc39871d6cf1b625ce6d157 );
#endif
    popFrameStack();

    assertFrameObject( frame_9c43be32adc39871d6cf1b625ce6d157 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9c43be32adc39871d6cf1b625ce6d157 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9c43be32adc39871d6cf1b625ce6d157, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9c43be32adc39871d6cf1b625ce6d157->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9c43be32adc39871d6cf1b625ce6d157, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_urllib3 );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
