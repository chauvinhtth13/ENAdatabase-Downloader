/* Generated code for Python source for module 'requests._internal_utils'
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

/* The _module_requests$_internal_utils is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$_internal_utils;
PyDictObject *moduledict_requests$_internal_utils;

/* The module constants used, if any. */
extern PyObject *const_tuple_str_plain_ascii_tuple;
extern PyObject *const_str_plain_to_native_string;
extern PyObject *const_str_plain_string;
extern PyObject *const_str_plain_encode;
static PyObject *const_str_digest_1eef16296ee278722af2e19b9b0323d8;
extern PyObject *const_str_plain_decode;
extern PyObject *const_dict_empty;
static PyObject *const_tuple_str_plain_is_py2_str_plain_builtin_str_str_plain_str_tuple;
extern PyObject *const_str_plain_ascii;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_compat;
static PyObject *const_str_plain_u_string;
static PyObject *const_tuple_str_plain_u_string_tuple;
static PyObject *const_str_digest_081265ccdb15a2fe6d5955409d46032e;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_builtin_str;
extern PyObject *const_str_plain_out;
extern PyObject *const_str_plain_unicode_is_ascii;
static PyObject *const_tuple_str_plain_string_str_plain_encoding_str_plain_out_tuple;
static PyObject *const_str_digest_be40a1a31236a1aedb97601a84f4b9b1;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_str;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_encoding;
static PyObject *const_str_digest_8d05e532d7bf608195b669ce9c19d17c;
extern PyObject *const_str_plain_is_py2;
static PyObject *const_str_digest_66cd85c53225da4bdbe49b619c7b9e85;
static PyObject *const_str_digest_0ba890b8fef27b5b8acb500d3b382289;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_1eef16296ee278722af2e19b9b0323d8 = UNSTREAM_STRING( &constant_bin[ 934922 ], 24, 0 );
    const_tuple_str_plain_is_py2_str_plain_builtin_str_str_plain_str_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_is_py2_str_plain_builtin_str_str_plain_str_tuple, 0, const_str_plain_is_py2 ); Py_INCREF( const_str_plain_is_py2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_is_py2_str_plain_builtin_str_str_plain_str_tuple, 1, const_str_plain_builtin_str ); Py_INCREF( const_str_plain_builtin_str );
    PyTuple_SET_ITEM( const_tuple_str_plain_is_py2_str_plain_builtin_str_str_plain_str_tuple, 2, const_str_plain_str ); Py_INCREF( const_str_plain_str );
    const_str_plain_u_string = UNSTREAM_STRING( &constant_bin[ 934946 ], 8, 1 );
    const_tuple_str_plain_u_string_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_u_string_tuple, 0, const_str_plain_u_string ); Py_INCREF( const_str_plain_u_string );
    const_str_digest_081265ccdb15a2fe6d5955409d46032e = UNSTREAM_STRING( &constant_bin[ 934954 ], 33, 0 );
    const_tuple_str_plain_string_str_plain_encoding_str_plain_out_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_string_str_plain_encoding_str_plain_out_tuple, 0, const_str_plain_string ); Py_INCREF( const_str_plain_string );
    PyTuple_SET_ITEM( const_tuple_str_plain_string_str_plain_encoding_str_plain_out_tuple, 1, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    PyTuple_SET_ITEM( const_tuple_str_plain_string_str_plain_encoding_str_plain_out_tuple, 2, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    const_str_digest_be40a1a31236a1aedb97601a84f4b9b1 = UNSTREAM_STRING( &constant_bin[ 934987 ], 174, 0 );
    const_str_digest_8d05e532d7bf608195b669ce9c19d17c = UNSTREAM_STRING( &constant_bin[ 935161 ], 203, 0 );
    const_str_digest_66cd85c53225da4bdbe49b619c7b9e85 = UNSTREAM_STRING( &constant_bin[ 935364 ], 180, 0 );
    const_str_digest_0ba890b8fef27b5b8acb500d3b382289 = UNSTREAM_STRING( &constant_bin[ 935544 ], 27, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_requests$_internal_utils( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_569eec71086f2aa2b8af20f2e56c3e73;
static PyCodeObject *codeobj_4cad575026fb6ca61dec27f75a3d1cac;
static PyCodeObject *codeobj_5e056b640affc57b81ae14069de8dd62;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_0ba890b8fef27b5b8acb500d3b382289 );
    codeobj_569eec71086f2aa2b8af20f2e56c3e73 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_081265ccdb15a2fe6d5955409d46032e, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_4cad575026fb6ca61dec27f75a3d1cac = MAKE_CODEOBJ( module_filename_obj, const_str_plain_to_native_string, 14, const_tuple_str_plain_string_str_plain_encoding_str_plain_out_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5e056b640affc57b81ae14069de8dd62 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_unicode_is_ascii, 30, const_tuple_str_plain_u_string_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_requests$_internal_utils$$$function_1_to_native_string( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$_internal_utils$$$function_2_unicode_is_ascii(  );


// The module function definitions.
static PyObject *impl_requests$_internal_utils$$$function_1_to_native_string( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_string = python_pars[ 0 ];
    PyObject *par_encoding = python_pars[ 1 ];
    PyObject *var_out = NULL;
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
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    int tmp_res;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_4cad575026fb6ca61dec27f75a3d1cac = NULL;

    struct Nuitka_FrameObject *frame_4cad575026fb6ca61dec27f75a3d1cac;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4cad575026fb6ca61dec27f75a3d1cac, codeobj_4cad575026fb6ca61dec27f75a3d1cac, module_requests$_internal_utils, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4cad575026fb6ca61dec27f75a3d1cac = cache_frame_4cad575026fb6ca61dec27f75a3d1cac;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4cad575026fb6ca61dec27f75a3d1cac );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4cad575026fb6ca61dec27f75a3d1cac ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_string;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain_builtin_str );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_builtin_str );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "builtin_str" );
        exception_tb = NULL;

        exception_lineno = 19;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_1 = par_string;

    CHECK_OBJECT( tmp_assign_source_1 );
    assert( var_out == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_out = tmp_assign_source_1;

    goto branch_end_1;
    branch_no_1:;
    tmp_cond_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain_is_py2 );

    if (unlikely( tmp_cond_value_1 == NULL ))
    {
        tmp_cond_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_py2 );
    }

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "is_py2" );
        exception_tb = NULL;

        exception_lineno = 22;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "ooo";
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
    tmp_called_instance_1 = par_string;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_encoding;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_4cad575026fb6ca61dec27f75a3d1cac->m_frame.f_lineno = 23;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_out == NULL );
    var_out = tmp_assign_source_2;

    goto branch_end_2;
    branch_no_2:;
    tmp_called_instance_2 = par_string;

    CHECK_OBJECT( tmp_called_instance_2 );
    tmp_args_element_name_2 = par_encoding;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_4cad575026fb6ca61dec27f75a3d1cac->m_frame.f_lineno = 25;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_decode, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_out == NULL );
    var_out = tmp_assign_source_3;

    branch_end_2:;
    branch_end_1:;
    tmp_return_value = var_out;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "out" );
        exception_tb = NULL;

        exception_lineno = 27;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4cad575026fb6ca61dec27f75a3d1cac );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4cad575026fb6ca61dec27f75a3d1cac );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4cad575026fb6ca61dec27f75a3d1cac );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4cad575026fb6ca61dec27f75a3d1cac, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4cad575026fb6ca61dec27f75a3d1cac->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4cad575026fb6ca61dec27f75a3d1cac, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4cad575026fb6ca61dec27f75a3d1cac,
        type_description_1,
        par_string,
        par_encoding,
        var_out
    );


    // Release cached frame.
    if ( frame_4cad575026fb6ca61dec27f75a3d1cac == cache_frame_4cad575026fb6ca61dec27f75a3d1cac )
    {
        Py_DECREF( frame_4cad575026fb6ca61dec27f75a3d1cac );
    }
    cache_frame_4cad575026fb6ca61dec27f75a3d1cac = NULL;

    assertFrameObject( frame_4cad575026fb6ca61dec27f75a3d1cac );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$_internal_utils$$$function_1_to_native_string );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_out );
    var_out = NULL;

    CHECK_OBJECT( (PyObject *)par_string );
    Py_DECREF( par_string );
    par_string = NULL;

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

    Py_XDECREF( var_out );
    var_out = NULL;

    CHECK_OBJECT( (PyObject *)par_string );
    Py_DECREF( par_string );
    par_string = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$_internal_utils$$$function_1_to_native_string );
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


static PyObject *impl_requests$_internal_utils$$$function_2_unicode_is_ascii( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_u_string = python_pars[ 0 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_5e056b640affc57b81ae14069de8dd62 = NULL;

    struct Nuitka_FrameObject *frame_5e056b640affc57b81ae14069de8dd62;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5e056b640affc57b81ae14069de8dd62, codeobj_5e056b640affc57b81ae14069de8dd62, module_requests$_internal_utils, sizeof(void *) );
    frame_5e056b640affc57b81ae14069de8dd62 = cache_frame_5e056b640affc57b81ae14069de8dd62;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5e056b640affc57b81ae14069de8dd62 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5e056b640affc57b81ae14069de8dd62 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_u_string;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain_str );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "str" );
        exception_tb = NULL;

        exception_lineno = 37;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
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
    tmp_raise_type_1 = PyExc_AssertionError;
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 37;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "o";
    goto frame_exception_exit_1;
    branch_no_1:;
    // Tried code:
    tmp_called_instance_1 = par_u_string;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_5e056b640affc57b81ae14069de8dd62->m_frame.f_lineno = 39;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_plain_ascii_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "o";
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
    PRESERVE_FRAME_EXCEPTION( frame_5e056b640affc57b81ae14069de8dd62 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_5e056b640affc57b81ae14069de8dd62, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_5e056b640affc57b81ae14069de8dd62, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_UnicodeEncodeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "o";
        goto frame_exception_exit_1;
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
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 38;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5e056b640affc57b81ae14069de8dd62->m_frame) frame_5e056b640affc57b81ae14069de8dd62->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto frame_exception_exit_1;
    branch_end_2:;
    // End of try:
    try_end_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_5e056b640affc57b81ae14069de8dd62 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_5e056b640affc57b81ae14069de8dd62 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_5e056b640affc57b81ae14069de8dd62 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5e056b640affc57b81ae14069de8dd62, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5e056b640affc57b81ae14069de8dd62->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5e056b640affc57b81ae14069de8dd62, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5e056b640affc57b81ae14069de8dd62,
        type_description_1,
        par_u_string
    );


    // Release cached frame.
    if ( frame_5e056b640affc57b81ae14069de8dd62 == cache_frame_5e056b640affc57b81ae14069de8dd62 )
    {
        Py_DECREF( frame_5e056b640affc57b81ae14069de8dd62 );
    }
    cache_frame_5e056b640affc57b81ae14069de8dd62 = NULL;

    assertFrameObject( frame_5e056b640affc57b81ae14069de8dd62 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$_internal_utils$$$function_2_unicode_is_ascii );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_u_string );
    Py_DECREF( par_u_string );
    par_u_string = NULL;

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

    CHECK_OBJECT( (PyObject *)par_u_string );
    Py_DECREF( par_u_string );
    par_u_string = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$_internal_utils$$$function_2_unicode_is_ascii );
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



static PyObject *MAKE_FUNCTION_requests$_internal_utils$$$function_1_to_native_string( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$_internal_utils$$$function_1_to_native_string,
        const_str_plain_to_native_string,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4cad575026fb6ca61dec27f75a3d1cac,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$_internal_utils,
        const_str_digest_8d05e532d7bf608195b669ce9c19d17c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$_internal_utils$$$function_2_unicode_is_ascii(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$_internal_utils$$$function_2_unicode_is_ascii,
        const_str_plain_unicode_is_ascii,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5e056b640affc57b81ae14069de8dd62,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$_internal_utils,
        const_str_digest_66cd85c53225da4bdbe49b619c7b9e85,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_requests$_internal_utils =
{
    PyModuleDef_HEAD_INIT,
    "requests._internal_utils",   /* m_name */
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

MOD_INIT_DECL( requests$_internal_utils )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_requests$_internal_utils );
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
    puts("requests._internal_utils: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests._internal_utils: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests._internal_utils: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initrequests$_internal_utils" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_requests$_internal_utils = Py_InitModule4(
        "requests._internal_utils",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_requests$_internal_utils = PyModule_Create( &mdef_requests$_internal_utils );
#endif

    moduledict_requests$_internal_utils = MODULE_DICT( module_requests$_internal_utils );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_requests$_internal_utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$_internal_utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_requests$_internal_utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$_internal_utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_requests$_internal_utils );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_1eef16296ee278722af2e19b9b0323d8, module_requests$_internal_utils );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_defaults_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    struct Nuitka_FrameObject *frame_569eec71086f2aa2b8af20f2e56c3e73;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_be40a1a31236a1aedb97601a84f4b9b1;
    UPDATE_STRING_DICT0( moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_569eec71086f2aa2b8af20f2e56c3e73 = MAKE_MODULE_FRAME( codeobj_569eec71086f2aa2b8af20f2e56c3e73, module_requests$_internal_utils );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_569eec71086f2aa2b8af20f2e56c3e73 );
    assert( Py_REFCNT( frame_569eec71086f2aa2b8af20f2e56c3e73 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_compat;
    tmp_globals_name_1 = (PyObject *)moduledict_requests$_internal_utils;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_is_py2_str_plain_builtin_str_str_plain_str_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_569eec71086f2aa2b8af20f2e56c3e73->m_frame.f_lineno = 11;
    tmp_assign_source_3 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_3;

    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_is_py2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain_is_py2, tmp_assign_source_4 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_builtin_str );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain_builtin_str, tmp_assign_source_5 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_str );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain_str, tmp_assign_source_6 );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_569eec71086f2aa2b8af20f2e56c3e73 );
#endif
    popFrameStack();

    assertFrameObject( frame_569eec71086f2aa2b8af20f2e56c3e73 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_569eec71086f2aa2b8af20f2e56c3e73 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_569eec71086f2aa2b8af20f2e56c3e73, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_569eec71086f2aa2b8af20f2e56c3e73->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_569eec71086f2aa2b8af20f2e56c3e73, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    tmp_defaults_1 = const_tuple_str_plain_ascii_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_7 = MAKE_FUNCTION_requests$_internal_utils$$$function_1_to_native_string( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain_to_native_string, tmp_assign_source_7 );
    tmp_assign_source_8 = MAKE_FUNCTION_requests$_internal_utils$$$function_2_unicode_is_ascii(  );
    UPDATE_STRING_DICT1( moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain_unicode_is_ascii, tmp_assign_source_8 );

    return MOD_RETURN_VALUE( module_requests$_internal_utils );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
