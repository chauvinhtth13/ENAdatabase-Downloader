/* Generated code for Python source for module 'urllib3.contrib._appengine_environ'
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

/* The _module_urllib3$contrib$_appengine_environ is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$contrib$_appengine_environ;
PyDictObject *moduledict_urllib3$contrib$_appengine_environ;

/* The module constants used, if any. */
extern PyObject *const_str_plain_get;
static PyObject *const_str_plain_is_prod_appengine;
static PyObject *const_tuple_str_digest_69842644472ec63a1714dd81a5a07a97_tuple;
extern PyObject *const_str_plain_is_appengine_sandbox;
static PyObject *const_str_digest_97007f6b72f106c60d0886544555df19;
extern PyObject *const_dict_empty;
static PyObject *const_str_plain_SERVER_SOFTWARE;
static PyObject *const_str_digest_834f395e3a9af1a0987e03fdddc4066c;
static PyObject *const_str_plain_APPENGINE_RUNTIME;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_b6b2e0e6078446c3fbba07b2887fe3eb;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain___doc__;
static PyObject *const_tuple_str_digest_899293462d3855f098cc8907b836b3af_tuple;
static PyObject *const_str_digest_69842644472ec63a1714dd81a5a07a97;
static PyObject *const_str_plain_python27;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_is_appengine;
static PyObject *const_str_digest_d526a72cb7820db1183117f1b18cf40c;
static PyObject *const_str_plain_is_local_appengine;
static PyObject *const_str_digest_899293462d3855f098cc8907b836b3af;
extern PyObject *const_str_empty;
static PyObject *const_str_digest_f285ef7197a32a4b57cba83490cacb2e;
static PyObject *const_str_plain_is_prod_appengine_mvms;
extern PyObject *const_str_plain_environ;
static PyObject *const_str_digest_2b4862aa1a02e00d10388ac826d1bfd3;
static PyObject *const_tuple_str_plain_SERVER_SOFTWARE_str_empty_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_is_prod_appengine = UNSTREAM_STRING( &constant_bin[ 1046324 ], 17, 1 );
    const_tuple_str_digest_69842644472ec63a1714dd81a5a07a97_tuple = PyTuple_New( 1 );
    const_str_digest_69842644472ec63a1714dd81a5a07a97 = UNSTREAM_STRING( &constant_bin[ 1046341 ], 12, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_69842644472ec63a1714dd81a5a07a97_tuple, 0, const_str_digest_69842644472ec63a1714dd81a5a07a97 ); Py_INCREF( const_str_digest_69842644472ec63a1714dd81a5a07a97 );
    const_str_digest_97007f6b72f106c60d0886544555df19 = UNSTREAM_STRING( &constant_bin[ 1046353 ], 11, 0 );
    const_str_plain_SERVER_SOFTWARE = UNSTREAM_STRING( &constant_bin[ 1046364 ], 15, 1 );
    const_str_digest_834f395e3a9af1a0987e03fdddc4066c = UNSTREAM_STRING( &constant_bin[ 1046379 ], 43, 0 );
    const_str_plain_APPENGINE_RUNTIME = UNSTREAM_STRING( &constant_bin[ 1046422 ], 17, 1 );
    const_str_digest_b6b2e0e6078446c3fbba07b2887fe3eb = UNSTREAM_STRING( &constant_bin[ 1046439 ], 37, 0 );
    const_tuple_str_digest_899293462d3855f098cc8907b836b3af_tuple = PyTuple_New( 1 );
    const_str_digest_899293462d3855f098cc8907b836b3af = UNSTREAM_STRING( &constant_bin[ 1046476 ], 18, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_899293462d3855f098cc8907b836b3af_tuple, 0, const_str_digest_899293462d3855f098cc8907b836b3af ); Py_INCREF( const_str_digest_899293462d3855f098cc8907b836b3af );
    const_str_plain_python27 = UNSTREAM_STRING( &constant_bin[ 1046494 ], 8, 1 );
    const_str_plain_is_appengine = UNSTREAM_STRING( &constant_bin[ 1046502 ], 12, 1 );
    const_str_digest_d526a72cb7820db1183117f1b18cf40c = UNSTREAM_STRING( &constant_bin[ 1046514 ], 291, 0 );
    const_str_plain_is_local_appengine = UNSTREAM_STRING( &constant_bin[ 1046805 ], 18, 1 );
    const_str_digest_f285ef7197a32a4b57cba83490cacb2e = UNSTREAM_STRING( &constant_bin[ 1046387 ], 34, 0 );
    const_str_plain_is_prod_appengine_mvms = UNSTREAM_STRING( &constant_bin[ 1046823 ], 22, 1 );
    const_str_digest_2b4862aa1a02e00d10388ac826d1bfd3 = UNSTREAM_STRING( &constant_bin[ 1046845 ], 66, 0 );
    const_tuple_str_plain_SERVER_SOFTWARE_str_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SERVER_SOFTWARE_str_empty_tuple, 0, const_str_plain_SERVER_SOFTWARE ); Py_INCREF( const_str_plain_SERVER_SOFTWARE );
    PyTuple_SET_ITEM( const_tuple_str_plain_SERVER_SOFTWARE_str_empty_tuple, 1, const_str_empty ); Py_INCREF( const_str_empty );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$contrib$_appengine_environ( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_6e64c958e2e0606ed998bd9676937180;
static PyCodeObject *codeobj_dab349fae280bd262e64d8a7a44bc6bd;
static PyCodeObject *codeobj_6b8d9541c2b6bbec7d66f564e3b88b1b;
static PyCodeObject *codeobj_7cb91d650aaef44cea67e542b98a618a;
static PyCodeObject *codeobj_05b3a2ce639ba2457d7d4d68d5ffccde;
static PyCodeObject *codeobj_f80469f8ed0a1a00c3803a81b7c92136;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_b6b2e0e6078446c3fbba07b2887fe3eb );
    codeobj_6e64c958e2e0606ed998bd9676937180 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_834f395e3a9af1a0987e03fdddc4066c, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_dab349fae280bd262e64d8a7a44bc6bd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_appengine, 8, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6b8d9541c2b6bbec7d66f564e3b88b1b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_appengine_sandbox, 12, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7cb91d650aaef44cea67e542b98a618a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_local_appengine, 22, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_05b3a2ce639ba2457d7d4d68d5ffccde = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_prod_appengine, 28, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f80469f8ed0a1a00c3803a81b7c92136 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_prod_appengine_mvms, 34, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_urllib3$contrib$_appengine_environ$$$function_1_is_appengine(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$_appengine_environ$$$function_2_is_appengine_sandbox(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$_appengine_environ$$$function_3_is_local_appengine(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$_appengine_environ$$$function_4_is_prod_appengine(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$_appengine_environ$$$function_5_is_prod_appengine_mvms(  );


// The module function definitions.
static PyObject *impl_urllib3$contrib$_appengine_environ$$$function_1_is_appengine( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_dab349fae280bd262e64d8a7a44bc6bd = NULL;

    struct Nuitka_FrameObject *frame_dab349fae280bd262e64d8a7a44bc6bd;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_dab349fae280bd262e64d8a7a44bc6bd, codeobj_dab349fae280bd262e64d8a7a44bc6bd, module_urllib3$contrib$_appengine_environ, 0 );
    frame_dab349fae280bd262e64d8a7a44bc6bd = cache_frame_dab349fae280bd262e64d8a7a44bc6bd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dab349fae280bd262e64d8a7a44bc6bd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dab349fae280bd262e64d8a7a44bc6bd ) == 2 ); // Frame stack

    // Framed code:
    tmp_compexpr_left_1 = const_str_plain_APPENGINE_RUNTIME;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 9;

        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_environ );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    tmp_return_value = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dab349fae280bd262e64d8a7a44bc6bd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dab349fae280bd262e64d8a7a44bc6bd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dab349fae280bd262e64d8a7a44bc6bd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dab349fae280bd262e64d8a7a44bc6bd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dab349fae280bd262e64d8a7a44bc6bd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dab349fae280bd262e64d8a7a44bc6bd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dab349fae280bd262e64d8a7a44bc6bd,
        type_description_1
    );


    // Release cached frame.
    if ( frame_dab349fae280bd262e64d8a7a44bc6bd == cache_frame_dab349fae280bd262e64d8a7a44bc6bd )
    {
        Py_DECREF( frame_dab349fae280bd262e64d8a7a44bc6bd );
    }
    cache_frame_dab349fae280bd262e64d8a7a44bc6bd = NULL;

    assertFrameObject( frame_dab349fae280bd262e64d8a7a44bc6bd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$_appengine_environ$$$function_1_is_appengine );
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


static PyObject *impl_urllib3$contrib$_appengine_environ$$$function_2_is_appengine_sandbox( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_6b8d9541c2b6bbec7d66f564e3b88b1b = NULL;

    struct Nuitka_FrameObject *frame_6b8d9541c2b6bbec7d66f564e3b88b1b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_6b8d9541c2b6bbec7d66f564e3b88b1b, codeobj_6b8d9541c2b6bbec7d66f564e3b88b1b, module_urllib3$contrib$_appengine_environ, 0 );
    frame_6b8d9541c2b6bbec7d66f564e3b88b1b = cache_frame_6b8d9541c2b6bbec7d66f564e3b88b1b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6b8d9541c2b6bbec7d66f564e3b88b1b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6b8d9541c2b6bbec7d66f564e3b88b1b ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain_is_appengine );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_appengine );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "is_appengine" );
        exception_tb = NULL;

        exception_lineno = 19;

        goto frame_exception_exit_1;
    }

    frame_6b8d9541c2b6bbec7d66f564e3b88b1b->m_frame.f_lineno = 19;
    tmp_and_left_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 19;

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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 19;

        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_environ );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_str_plain_APPENGINE_RUNTIME;
    tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_str_plain_python27;
    tmp_and_right_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    tmp_return_value = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_return_value = tmp_and_left_value_1;
    and_end_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6b8d9541c2b6bbec7d66f564e3b88b1b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6b8d9541c2b6bbec7d66f564e3b88b1b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6b8d9541c2b6bbec7d66f564e3b88b1b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6b8d9541c2b6bbec7d66f564e3b88b1b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6b8d9541c2b6bbec7d66f564e3b88b1b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6b8d9541c2b6bbec7d66f564e3b88b1b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6b8d9541c2b6bbec7d66f564e3b88b1b,
        type_description_1
    );


    // Release cached frame.
    if ( frame_6b8d9541c2b6bbec7d66f564e3b88b1b == cache_frame_6b8d9541c2b6bbec7d66f564e3b88b1b )
    {
        Py_DECREF( frame_6b8d9541c2b6bbec7d66f564e3b88b1b );
    }
    cache_frame_6b8d9541c2b6bbec7d66f564e3b88b1b = NULL;

    assertFrameObject( frame_6b8d9541c2b6bbec7d66f564e3b88b1b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$_appengine_environ$$$function_2_is_appengine_sandbox );
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


static PyObject *impl_urllib3$contrib$_appengine_environ$$$function_3_is_local_appengine( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_7cb91d650aaef44cea67e542b98a618a = NULL;

    struct Nuitka_FrameObject *frame_7cb91d650aaef44cea67e542b98a618a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_7cb91d650aaef44cea67e542b98a618a, codeobj_7cb91d650aaef44cea67e542b98a618a, module_urllib3$contrib$_appengine_environ, 0 );
    frame_7cb91d650aaef44cea67e542b98a618a = cache_frame_7cb91d650aaef44cea67e542b98a618a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7cb91d650aaef44cea67e542b98a618a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7cb91d650aaef44cea67e542b98a618a ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain_is_appengine );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_appengine );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "is_appengine" );
        exception_tb = NULL;

        exception_lineno = 23;

        goto frame_exception_exit_1;
    }

    frame_7cb91d650aaef44cea67e542b98a618a->m_frame.f_lineno = 23;
    tmp_and_left_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 23;

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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 23;

        goto frame_exception_exit_1;
    }

    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_environ );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    frame_7cb91d650aaef44cea67e542b98a618a->m_frame.f_lineno = 23;
    tmp_called_instance_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_SERVER_SOFTWARE_str_empty_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    frame_7cb91d650aaef44cea67e542b98a618a->m_frame.f_lineno = 23;
    tmp_and_right_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_digest_69842644472ec63a1714dd81a5a07a97_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    tmp_return_value = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_return_value = tmp_and_left_value_1;
    and_end_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7cb91d650aaef44cea67e542b98a618a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7cb91d650aaef44cea67e542b98a618a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7cb91d650aaef44cea67e542b98a618a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7cb91d650aaef44cea67e542b98a618a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7cb91d650aaef44cea67e542b98a618a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7cb91d650aaef44cea67e542b98a618a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7cb91d650aaef44cea67e542b98a618a,
        type_description_1
    );


    // Release cached frame.
    if ( frame_7cb91d650aaef44cea67e542b98a618a == cache_frame_7cb91d650aaef44cea67e542b98a618a )
    {
        Py_DECREF( frame_7cb91d650aaef44cea67e542b98a618a );
    }
    cache_frame_7cb91d650aaef44cea67e542b98a618a = NULL;

    assertFrameObject( frame_7cb91d650aaef44cea67e542b98a618a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$_appengine_environ$$$function_3_is_local_appengine );
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


static PyObject *impl_urllib3$contrib$_appengine_environ$$$function_4_is_prod_appengine( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_05b3a2ce639ba2457d7d4d68d5ffccde = NULL;

    struct Nuitka_FrameObject *frame_05b3a2ce639ba2457d7d4d68d5ffccde;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_05b3a2ce639ba2457d7d4d68d5ffccde, codeobj_05b3a2ce639ba2457d7d4d68d5ffccde, module_urllib3$contrib$_appengine_environ, 0 );
    frame_05b3a2ce639ba2457d7d4d68d5ffccde = cache_frame_05b3a2ce639ba2457d7d4d68d5ffccde;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_05b3a2ce639ba2457d7d4d68d5ffccde );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_05b3a2ce639ba2457d7d4d68d5ffccde ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain_is_appengine );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_appengine );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "is_appengine" );
        exception_tb = NULL;

        exception_lineno = 29;

        goto frame_exception_exit_1;
    }

    frame_05b3a2ce639ba2457d7d4d68d5ffccde->m_frame.f_lineno = 29;
    tmp_and_left_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 29;

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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 29;

        goto frame_exception_exit_1;
    }

    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_environ );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    frame_05b3a2ce639ba2457d7d4d68d5ffccde->m_frame.f_lineno = 29;
    tmp_called_instance_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_SERVER_SOFTWARE_str_empty_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    frame_05b3a2ce639ba2457d7d4d68d5ffccde->m_frame.f_lineno = 29;
    tmp_and_right_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_digest_899293462d3855f098cc8907b836b3af_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    tmp_return_value = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_return_value = tmp_and_left_value_1;
    and_end_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_05b3a2ce639ba2457d7d4d68d5ffccde );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_05b3a2ce639ba2457d7d4d68d5ffccde );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_05b3a2ce639ba2457d7d4d68d5ffccde );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_05b3a2ce639ba2457d7d4d68d5ffccde, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_05b3a2ce639ba2457d7d4d68d5ffccde->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_05b3a2ce639ba2457d7d4d68d5ffccde, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_05b3a2ce639ba2457d7d4d68d5ffccde,
        type_description_1
    );


    // Release cached frame.
    if ( frame_05b3a2ce639ba2457d7d4d68d5ffccde == cache_frame_05b3a2ce639ba2457d7d4d68d5ffccde )
    {
        Py_DECREF( frame_05b3a2ce639ba2457d7d4d68d5ffccde );
    }
    cache_frame_05b3a2ce639ba2457d7d4d68d5ffccde = NULL;

    assertFrameObject( frame_05b3a2ce639ba2457d7d4d68d5ffccde );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$_appengine_environ$$$function_4_is_prod_appengine );
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


static PyObject *impl_urllib3$contrib$_appengine_environ$$$function_5_is_prod_appengine_mvms( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$_appengine_environ$$$function_5_is_prod_appengine_mvms );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_urllib3$contrib$_appengine_environ$$$function_1_is_appengine(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$_appengine_environ$$$function_1_is_appengine,
        const_str_plain_is_appengine,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_dab349fae280bd262e64d8a7a44bc6bd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$contrib$_appengine_environ,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$_appengine_environ$$$function_2_is_appengine_sandbox(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$_appengine_environ$$$function_2_is_appengine_sandbox,
        const_str_plain_is_appengine_sandbox,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6b8d9541c2b6bbec7d66f564e3b88b1b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$contrib$_appengine_environ,
        const_str_digest_d526a72cb7820db1183117f1b18cf40c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$_appengine_environ$$$function_3_is_local_appengine(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$_appengine_environ$$$function_3_is_local_appengine,
        const_str_plain_is_local_appengine,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7cb91d650aaef44cea67e542b98a618a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$contrib$_appengine_environ,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$_appengine_environ$$$function_4_is_prod_appengine(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$_appengine_environ$$$function_4_is_prod_appengine,
        const_str_plain_is_prod_appengine,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_05b3a2ce639ba2457d7d4d68d5ffccde,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$contrib$_appengine_environ,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$_appengine_environ$$$function_5_is_prod_appengine_mvms(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$_appengine_environ$$$function_5_is_prod_appengine_mvms,
        const_str_plain_is_prod_appengine_mvms,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f80469f8ed0a1a00c3803a81b7c92136,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$contrib$_appengine_environ,
        const_str_digest_97007f6b72f106c60d0886544555df19,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$contrib$_appengine_environ =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.contrib._appengine_environ",   /* m_name */
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

MOD_INIT_DECL( urllib3$contrib$_appengine_environ )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$contrib$_appengine_environ );
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
    puts("urllib3.contrib._appengine_environ: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.contrib._appengine_environ: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.contrib._appengine_environ: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$contrib$_appengine_environ" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$contrib$_appengine_environ = Py_InitModule4(
        "urllib3.contrib._appengine_environ",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3$contrib$_appengine_environ = PyModule_Create( &mdef_urllib3$contrib$_appengine_environ );
#endif

    moduledict_urllib3$contrib$_appengine_environ = MODULE_DICT( module_urllib3$contrib$_appengine_environ );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3$contrib$_appengine_environ,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$contrib$_appengine_environ,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_urllib3$contrib$_appengine_environ,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$contrib$_appengine_environ,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3$contrib$_appengine_environ );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_f285ef7197a32a4b57cba83490cacb2e, module_urllib3$contrib$_appengine_environ );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    struct Nuitka_FrameObject *frame_6e64c958e2e0606ed998bd9676937180;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_2b4862aa1a02e00d10388ac826d1bfd3;
    UPDATE_STRING_DICT0( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_6e64c958e2e0606ed998bd9676937180 = MAKE_MODULE_FRAME( codeobj_6e64c958e2e0606ed998bd9676937180, module_urllib3$contrib$_appengine_environ );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_6e64c958e2e0606ed998bd9676937180 );
    assert( Py_REFCNT( frame_6e64c958e2e0606ed998bd9676937180 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_os;
    tmp_globals_name_1 = (PyObject *)moduledict_urllib3$contrib$_appengine_environ;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    frame_6e64c958e2e0606ed998bd9676937180->m_frame.f_lineno = 5;
    tmp_assign_source_3 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_3 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6e64c958e2e0606ed998bd9676937180 );
#endif
    popFrameStack();

    assertFrameObject( frame_6e64c958e2e0606ed998bd9676937180 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6e64c958e2e0606ed998bd9676937180 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6e64c958e2e0606ed998bd9676937180, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6e64c958e2e0606ed998bd9676937180->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6e64c958e2e0606ed998bd9676937180, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_4 = MAKE_FUNCTION_urllib3$contrib$_appengine_environ$$$function_1_is_appengine(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain_is_appengine, tmp_assign_source_4 );
    tmp_assign_source_5 = MAKE_FUNCTION_urllib3$contrib$_appengine_environ$$$function_2_is_appengine_sandbox(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain_is_appengine_sandbox, tmp_assign_source_5 );
    tmp_assign_source_6 = MAKE_FUNCTION_urllib3$contrib$_appengine_environ$$$function_3_is_local_appengine(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain_is_local_appengine, tmp_assign_source_6 );
    tmp_assign_source_7 = MAKE_FUNCTION_urllib3$contrib$_appengine_environ$$$function_4_is_prod_appengine(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain_is_prod_appengine, tmp_assign_source_7 );
    tmp_assign_source_8 = MAKE_FUNCTION_urllib3$contrib$_appengine_environ$$$function_5_is_prod_appengine_mvms(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain_is_prod_appengine_mvms, tmp_assign_source_8 );

    return MOD_RETURN_VALUE( module_urllib3$contrib$_appengine_environ );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
