/* Generated code for Python source for module 'colorama.initialise'
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

/* The _module_colorama$initialise is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_colorama$initialise;
PyDictObject *moduledict_colorama$initialise;

/* The module constants used, if any. */
static PyObject *const_str_digest_ccef2723d82eb6f96393b9a051c5f85c;
extern PyObject *const_str_plain_register;
static PyObject *const_str_digest_7fc8e5365d954eac631893e5f5ba3542;
extern PyObject *const_str_plain_stream;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_b606439de20329d1b378141bdd1d0460_tuple;
static PyObject *const_str_plain_wrapped_stdout;
extern PyObject *const_str_plain_reset_all;
extern PyObject *const_dict_empty;
static PyObject *const_str_digest_922f1f05229c346ca34fb7da4c918094;
static PyObject *const_tuple_false_none_none_true_tuple;
extern PyObject *const_str_plain_any;
extern PyObject *const_str_plain_colorama_text;
extern PyObject *const_tuple_str_plain_args_str_plain_kwargs_tuple;
extern PyObject *const_tuple_str_plain_AnsiToWin32_tuple;
static PyObject *const_str_plain_wrap;
extern PyObject *const_str_plain_should_wrap;
extern PyObject *const_str_plain_AnsiToWin32;
extern PyObject *const_str_plain_strip;
extern PyObject *const_str_plain_stderr;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_0b4df12de36c38c34b5cd3b0b8bfcd32_tuple;
extern PyObject *const_str_plain_convert;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_wrapped_stderr;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_contextmanager;
extern PyObject *const_str_plain_reinit;
extern PyObject *const_str_plain_stdout;
extern PyObject *const_str_plain_init;
extern PyObject *const_str_plain_wrapper;
extern PyObject *const_str_plain_atexit;
static PyObject *const_str_plain_atexit_done;
extern PyObject *const_str_plain_contextlib;
static PyObject *const_str_digest_3c23d5986caeba567f5a103584db00f8;
extern PyObject *const_str_plain_autoreset;
extern PyObject *const_str_plain_deinit;
static PyObject *const_str_plain_wrap_stream;
extern PyObject *const_str_plain_args;
static PyObject *const_str_plain_orig_stdout;
static PyObject *const_str_plain_orig_stderr;
extern PyObject *const_str_plain_ansitowin32;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_ccef2723d82eb6f96393b9a051c5f85c = UNSTREAM_STRING( &constant_bin[ 637667 ], 44, 0 );
    const_str_digest_7fc8e5365d954eac631893e5f5ba3542 = UNSTREAM_STRING( &constant_bin[ 637711 ], 22, 0 );
    const_tuple_b606439de20329d1b378141bdd1d0460_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_b606439de20329d1b378141bdd1d0460_tuple, 0, const_str_plain_autoreset ); Py_INCREF( const_str_plain_autoreset );
    PyTuple_SET_ITEM( const_tuple_b606439de20329d1b378141bdd1d0460_tuple, 1, const_str_plain_convert ); Py_INCREF( const_str_plain_convert );
    PyTuple_SET_ITEM( const_tuple_b606439de20329d1b378141bdd1d0460_tuple, 2, const_str_plain_strip ); Py_INCREF( const_str_plain_strip );
    const_str_plain_wrap = UNSTREAM_STRING( &constant_bin[ 5481 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_b606439de20329d1b378141bdd1d0460_tuple, 3, const_str_plain_wrap ); Py_INCREF( const_str_plain_wrap );
    const_str_plain_wrapped_stdout = UNSTREAM_STRING( &constant_bin[ 637733 ], 14, 1 );
    const_str_digest_922f1f05229c346ca34fb7da4c918094 = UNSTREAM_STRING( &constant_bin[ 637747 ], 28, 0 );
    const_tuple_false_none_none_true_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_false_none_none_true_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_none_none_true_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_none_none_true_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_none_none_true_tuple, 3, Py_True ); Py_INCREF( Py_True );
    const_tuple_0b4df12de36c38c34b5cd3b0b8bfcd32_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_0b4df12de36c38c34b5cd3b0b8bfcd32_tuple, 0, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_0b4df12de36c38c34b5cd3b0b8bfcd32_tuple, 1, const_str_plain_convert ); Py_INCREF( const_str_plain_convert );
    PyTuple_SET_ITEM( const_tuple_0b4df12de36c38c34b5cd3b0b8bfcd32_tuple, 2, const_str_plain_strip ); Py_INCREF( const_str_plain_strip );
    PyTuple_SET_ITEM( const_tuple_0b4df12de36c38c34b5cd3b0b8bfcd32_tuple, 3, const_str_plain_autoreset ); Py_INCREF( const_str_plain_autoreset );
    PyTuple_SET_ITEM( const_tuple_0b4df12de36c38c34b5cd3b0b8bfcd32_tuple, 4, const_str_plain_wrap ); Py_INCREF( const_str_plain_wrap );
    PyTuple_SET_ITEM( const_tuple_0b4df12de36c38c34b5cd3b0b8bfcd32_tuple, 5, const_str_plain_wrapper ); Py_INCREF( const_str_plain_wrapper );
    const_str_plain_wrapped_stderr = UNSTREAM_STRING( &constant_bin[ 637775 ], 14, 1 );
    const_str_plain_atexit_done = UNSTREAM_STRING( &constant_bin[ 637789 ], 11, 1 );
    const_str_digest_3c23d5986caeba567f5a103584db00f8 = UNSTREAM_STRING( &constant_bin[ 637755 ], 19, 0 );
    const_str_plain_wrap_stream = UNSTREAM_STRING( &constant_bin[ 637800 ], 11, 1 );
    const_str_plain_orig_stdout = UNSTREAM_STRING( &constant_bin[ 637811 ], 11, 1 );
    const_str_plain_orig_stderr = UNSTREAM_STRING( &constant_bin[ 637822 ], 11, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_colorama$initialise( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_d3bbd14ac3bfacac7562dccff3b680cd;
static PyCodeObject *codeobj_2ccf8d08a2e8940cb1d764d273b16e19;
static PyCodeObject *codeobj_9c386e50f0d0855fbdd812ab47a32cd1;
static PyCodeObject *codeobj_cb35d6a990e9d1bf096bafc4d738bd6d;
static PyCodeObject *codeobj_72298f7e086ef6de3cb94681bd8d18c8;
static PyCodeObject *codeobj_cddb86c17d665df84c688174f1d56908;
static PyCodeObject *codeobj_bb5c64335eaadae266393d13a6e4824c;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_7fc8e5365d954eac631893e5f5ba3542 );
    codeobj_d3bbd14ac3bfacac7562dccff3b680cd = MAKE_CODEOBJ( module_filename_obj, const_str_digest_922f1f05229c346ca34fb7da4c918094, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_2ccf8d08a2e8940cb1d764d273b16e19 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_colorama_text, 58, const_tuple_str_plain_args_str_plain_kwargs_tuple, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_9c386e50f0d0855fbdd812ab47a32cd1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_deinit, 51, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cb35d6a990e9d1bf096bafc4d738bd6d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_init, 23, const_tuple_b606439de20329d1b378141bdd1d0460_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_72298f7e086ef6de3cb94681bd8d18c8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reinit, 67, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cddb86c17d665df84c688174f1d56908 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reset_all, 18, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bb5c64335eaadae266393d13a6e4824c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wrap_stream, 74, const_tuple_0b4df12de36c38c34b5cd3b0b8bfcd32_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *colorama$initialise$$$function_4_colorama_text$$$genobj_1_colorama_text_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void colorama$initialise$$$function_4_colorama_text$$$genobj_1_colorama_text_context( struct Nuitka_GeneratorObject *generator );
#endif


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_1_reset_all(  );


static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_2_init( PyObject *defaults );


static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_3_deinit(  );


static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_4_colorama_text(  );


static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_5_reinit(  );


static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_6_wrap_stream(  );


// The module function definitions.
static PyObject *impl_colorama$initialise$$$function_1_reset_all( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_isnot_1;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_cddb86c17d665df84c688174f1d56908 = NULL;

    struct Nuitka_FrameObject *frame_cddb86c17d665df84c688174f1d56908;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_cddb86c17d665df84c688174f1d56908, codeobj_cddb86c17d665df84c688174f1d56908, module_colorama$initialise, 0 );
    frame_cddb86c17d665df84c688174f1d56908 = cache_frame_cddb86c17d665df84c688174f1d56908;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cddb86c17d665df84c688174f1d56908 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cddb86c17d665df84c688174f1d56908 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_AnsiToWin32 );

    if (unlikely( tmp_compare_left_1 == NULL ))
    {
        tmp_compare_left_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AnsiToWin32 );
    }

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "AnsiToWin32" );
        exception_tb = NULL;

        exception_lineno = 19;

        goto frame_exception_exit_1;
    }

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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_AnsiToWin32 );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AnsiToWin32 );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "AnsiToWin32" );
        exception_tb = NULL;

        exception_lineno = 20;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stdout );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_orig_stdout );
    }

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "orig_stdout" );
        exception_tb = NULL;

        exception_lineno = 20;

        goto frame_exception_exit_1;
    }

    frame_cddb86c17d665df84c688174f1d56908->m_frame.f_lineno = 20;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    frame_cddb86c17d665df84c688174f1d56908->m_frame.f_lineno = 20;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_reset_all );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cddb86c17d665df84c688174f1d56908 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cddb86c17d665df84c688174f1d56908 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cddb86c17d665df84c688174f1d56908, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cddb86c17d665df84c688174f1d56908->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cddb86c17d665df84c688174f1d56908, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cddb86c17d665df84c688174f1d56908,
        type_description_1
    );


    // Release cached frame.
    if ( frame_cddb86c17d665df84c688174f1d56908 == cache_frame_cddb86c17d665df84c688174f1d56908 )
    {
        Py_DECREF( frame_cddb86c17d665df84c688174f1d56908 );
    }
    cache_frame_cddb86c17d665df84c688174f1d56908 = NULL;

    assertFrameObject( frame_cddb86c17d665df84c688174f1d56908 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( colorama$initialise$$$function_1_reset_all );
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


static PyObject *impl_colorama$initialise$$$function_2_init( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_autoreset = python_pars[ 0 ];
    PyObject *par_convert = python_pars[ 1 ];
    PyObject *par_strip = python_pars[ 2 ];
    PyObject *par_wrap = python_pars[ 3 ];
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_assign_unpack_2__assign_source = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_list_element_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_cb35d6a990e9d1bf096bafc4d738bd6d = NULL;

    struct Nuitka_FrameObject *frame_cb35d6a990e9d1bf096bafc4d738bd6d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cb35d6a990e9d1bf096bafc4d738bd6d, codeobj_cb35d6a990e9d1bf096bafc4d738bd6d, module_colorama$initialise, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cb35d6a990e9d1bf096bafc4d738bd6d = cache_frame_cb35d6a990e9d1bf096bafc4d738bd6d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cb35d6a990e9d1bf096bafc4d738bd6d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cb35d6a990e9d1bf096bafc4d738bd6d ) == 2 ); // Frame stack

    // Framed code:
    tmp_operand_name_1 = par_wrap;

    CHECK_OBJECT( tmp_operand_name_1 );
    tmp_and_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
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
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_any );
    assert( tmp_called_name_1 != NULL );
    tmp_args_element_name_1 = PyList_New( 3 );
    tmp_list_element_1 = par_autoreset;

    CHECK_OBJECT( tmp_list_element_1 );
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
    tmp_list_element_1 = par_convert;

    CHECK_OBJECT( tmp_list_element_1 );
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_1, 1, tmp_list_element_1 );
    tmp_list_element_1 = par_strip;

    CHECK_OBJECT( tmp_list_element_1 );
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_1, 2, tmp_list_element_1 );
    frame_cb35d6a990e9d1bf096bafc4d738bd6d->m_frame.f_lineno = 25;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_and_right_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 25;
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
    tmp_make_exception_arg_1 = const_str_digest_ccef2723d82eb6f96393b9a051c5f85c;
    frame_cb35d6a990e9d1bf096bafc4d738bd6d->m_frame.f_lineno = 26;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 26;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 31;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_stdout );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stdout, tmp_assign_source_1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 32;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_stderr );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stderr, tmp_assign_source_2 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 34;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_stdout );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrapped_stdout, tmp_assign_source_3 );
    goto branch_end_2;
    branch_no_2:;
    // Tried code:
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrap_stream );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wrap_stream );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "wrap_stream" );
        exception_tb = NULL;

        exception_lineno = 38;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_2 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stdout );

    if (unlikely( tmp_args_element_name_2 == NULL ))
    {
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_orig_stdout );
    }

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "orig_stdout" );
        exception_tb = NULL;

        exception_lineno = 38;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_3 = par_convert;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = par_strip;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_args_element_name_5 = par_autoreset;

    CHECK_OBJECT( tmp_args_element_name_5 );
    tmp_args_element_name_6 = par_wrap;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_cb35d6a990e9d1bf096bafc4d738bd6d->m_frame.f_lineno = 38;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( tmp_assign_unpack_1__assign_source == NULL );
    tmp_assign_unpack_1__assign_source = tmp_assign_source_4;

    tmp_assattr_name_1 = tmp_assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_assattr_target_1 == NULL ))
    {
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 37;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_stdout, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "oooo";
        goto try_except_handler_2;
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

    Py_XDECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_5 = tmp_assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_5 );
    UPDATE_STRING_DICT0( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrapped_stdout, tmp_assign_source_5 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
    Py_DECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    branch_end_2:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 39;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_stderr );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_6 = Py_None;
    UPDATE_STRING_DICT0( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrapped_stderr, tmp_assign_source_6 );
    goto branch_end_3;
    branch_no_3:;
    // Tried code:
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrap_stream );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wrap_stream );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "wrap_stream" );
        exception_tb = NULL;

        exception_lineno = 43;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }

    tmp_args_element_name_7 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stderr );

    if (unlikely( tmp_args_element_name_7 == NULL ))
    {
        tmp_args_element_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_orig_stderr );
    }

    if ( tmp_args_element_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "orig_stderr" );
        exception_tb = NULL;

        exception_lineno = 43;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }

    tmp_args_element_name_8 = par_convert;

    CHECK_OBJECT( tmp_args_element_name_8 );
    tmp_args_element_name_9 = par_strip;

    CHECK_OBJECT( tmp_args_element_name_9 );
    tmp_args_element_name_10 = par_autoreset;

    CHECK_OBJECT( tmp_args_element_name_10 );
    tmp_args_element_name_11 = par_wrap;

    CHECK_OBJECT( tmp_args_element_name_11 );
    frame_cb35d6a990e9d1bf096bafc4d738bd6d->m_frame.f_lineno = 43;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    assert( tmp_assign_unpack_2__assign_source == NULL );
    tmp_assign_unpack_2__assign_source = tmp_assign_source_7;

    tmp_assattr_name_2 = tmp_assign_unpack_2__assign_source;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_assattr_target_2 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_assattr_target_2 == NULL ))
    {
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 42;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_stderr, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    goto try_end_2;
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

    Py_XDECREF( tmp_assign_unpack_2__assign_source );
    tmp_assign_unpack_2__assign_source = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    tmp_assign_source_8 = tmp_assign_unpack_2__assign_source;

    CHECK_OBJECT( tmp_assign_source_8 );
    UPDATE_STRING_DICT0( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrapped_stderr, tmp_assign_source_8 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_2__assign_source );
    Py_DECREF( tmp_assign_unpack_2__assign_source );
    tmp_assign_unpack_2__assign_source = NULL;

    branch_end_3:;
    tmp_cond_value_2 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_atexit_done );

    if (unlikely( tmp_cond_value_2 == NULL ))
    {
        tmp_cond_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atexit_done );
    }

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "atexit_done" );
        exception_tb = NULL;

        exception_lineno = 46;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_atexit );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atexit );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "atexit" );
        exception_tb = NULL;

        exception_lineno = 47;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_register );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_12 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_reset_all );

    if (unlikely( tmp_args_element_name_12 == NULL ))
    {
        tmp_args_element_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_reset_all );
    }

    if ( tmp_args_element_name_12 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "reset_all" );
        exception_tb = NULL;

        exception_lineno = 47;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_cb35d6a990e9d1bf096bafc4d738bd6d->m_frame.f_lineno = 47;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_9 = Py_True;
    UPDATE_STRING_DICT0( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_atexit_done, tmp_assign_source_9 );
    branch_no_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb35d6a990e9d1bf096bafc4d738bd6d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb35d6a990e9d1bf096bafc4d738bd6d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cb35d6a990e9d1bf096bafc4d738bd6d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cb35d6a990e9d1bf096bafc4d738bd6d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cb35d6a990e9d1bf096bafc4d738bd6d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cb35d6a990e9d1bf096bafc4d738bd6d,
        type_description_1,
        par_autoreset,
        par_convert,
        par_strip,
        par_wrap
    );


    // Release cached frame.
    if ( frame_cb35d6a990e9d1bf096bafc4d738bd6d == cache_frame_cb35d6a990e9d1bf096bafc4d738bd6d )
    {
        Py_DECREF( frame_cb35d6a990e9d1bf096bafc4d738bd6d );
    }
    cache_frame_cb35d6a990e9d1bf096bafc4d738bd6d = NULL;

    assertFrameObject( frame_cb35d6a990e9d1bf096bafc4d738bd6d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( colorama$initialise$$$function_2_init );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_convert );
    Py_DECREF( par_convert );
    par_convert = NULL;

    CHECK_OBJECT( (PyObject *)par_autoreset );
    Py_DECREF( par_autoreset );
    par_autoreset = NULL;

    CHECK_OBJECT( (PyObject *)par_strip );
    Py_DECREF( par_strip );
    par_strip = NULL;

    CHECK_OBJECT( (PyObject *)par_wrap );
    Py_DECREF( par_wrap );
    par_wrap = NULL;

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

    CHECK_OBJECT( (PyObject *)par_convert );
    Py_DECREF( par_convert );
    par_convert = NULL;

    CHECK_OBJECT( (PyObject *)par_autoreset );
    Py_DECREF( par_autoreset );
    par_autoreset = NULL;

    CHECK_OBJECT( (PyObject *)par_strip );
    Py_DECREF( par_strip );
    par_strip = NULL;

    CHECK_OBJECT( (PyObject *)par_wrap );
    Py_DECREF( par_wrap );
    par_wrap = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( colorama$initialise$$$function_2_init );
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


static PyObject *impl_colorama$initialise$$$function_3_deinit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_9c386e50f0d0855fbdd812ab47a32cd1 = NULL;

    struct Nuitka_FrameObject *frame_9c386e50f0d0855fbdd812ab47a32cd1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_9c386e50f0d0855fbdd812ab47a32cd1, codeobj_9c386e50f0d0855fbdd812ab47a32cd1, module_colorama$initialise, 0 );
    frame_9c386e50f0d0855fbdd812ab47a32cd1 = cache_frame_9c386e50f0d0855fbdd812ab47a32cd1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9c386e50f0d0855fbdd812ab47a32cd1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9c386e50f0d0855fbdd812ab47a32cd1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stdout );

    if (unlikely( tmp_compare_left_1 == NULL ))
    {
        tmp_compare_left_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_orig_stdout );
    }

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "orig_stdout" );
        exception_tb = NULL;

        exception_lineno = 52;

        goto frame_exception_exit_1;
    }

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
    tmp_assattr_name_1 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stdout );

    if (unlikely( tmp_assattr_name_1 == NULL ))
    {
        tmp_assattr_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_orig_stdout );
    }

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "orig_stdout" );
        exception_tb = NULL;

        exception_lineno = 53;

        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_assattr_target_1 == NULL ))
    {
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 53;

        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_stdout, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto frame_exception_exit_1;
    }
    branch_no_1:;
    tmp_compare_left_2 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stderr );

    if (unlikely( tmp_compare_left_2 == NULL ))
    {
        tmp_compare_left_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_orig_stderr );
    }

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "orig_stderr" );
        exception_tb = NULL;

        exception_lineno = 54;

        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assattr_name_2 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stderr );

    if (unlikely( tmp_assattr_name_2 == NULL ))
    {
        tmp_assattr_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_orig_stderr );
    }

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "orig_stderr" );
        exception_tb = NULL;

        exception_lineno = 55;

        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_assattr_target_2 == NULL ))
    {
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 55;

        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_stderr, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto frame_exception_exit_1;
    }
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9c386e50f0d0855fbdd812ab47a32cd1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9c386e50f0d0855fbdd812ab47a32cd1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9c386e50f0d0855fbdd812ab47a32cd1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9c386e50f0d0855fbdd812ab47a32cd1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9c386e50f0d0855fbdd812ab47a32cd1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9c386e50f0d0855fbdd812ab47a32cd1,
        type_description_1
    );


    // Release cached frame.
    if ( frame_9c386e50f0d0855fbdd812ab47a32cd1 == cache_frame_9c386e50f0d0855fbdd812ab47a32cd1 )
    {
        Py_DECREF( frame_9c386e50f0d0855fbdd812ab47a32cd1 );
    }
    cache_frame_9c386e50f0d0855fbdd812ab47a32cd1 = NULL;

    assertFrameObject( frame_9c386e50f0d0855fbdd812ab47a32cd1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( colorama$initialise$$$function_3_deinit );
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


static PyObject *impl_colorama$initialise$$$function_4_colorama_text( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_args = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_kwargs = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Nuitka_Generator_New(
        colorama$initialise$$$function_4_colorama_text$$$genobj_1_colorama_text_context,
        module_colorama$initialise,
        const_str_plain_colorama_text,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_2ccf8d08a2e8940cb1d764d273b16e19,
        2
    );

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_args;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] = par_kwargs;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] );
    assert( Py_SIZE( tmp_return_value ) >= 2 ); 


    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( colorama$initialise$$$function_4_colorama_text );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( colorama$initialise$$$function_4_colorama_text );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}



#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
struct colorama$initialise$$$function_4_colorama_text$$$genobj_1_colorama_text_locals {
    PyObject *exception_type
    PyObject *exception_value
    PyTracebackObject *exception_tb
    int exception_lineno
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_expression_name_1;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *colorama$initialise$$$function_4_colorama_text$$$genobj_1_colorama_text_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void colorama$initialise$$$function_4_colorama_text$$$genobj_1_colorama_text_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_expression_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_2ccf8d08a2e8940cb1d764d273b16e19, module_colorama$initialise, sizeof(void *)+sizeof(void *) );
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
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_init );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_init );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "init" );
        exception_tb = NULL;

        exception_lineno = 60;
        type_description_1 = "cc";
        goto frame_exception_exit_1;
    }

    if ( generator->m_closure[0] == NULL )
    {
        tmp_dircall_arg2_1 = NULL;
    }
    else
    {
        tmp_dircall_arg2_1 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_dircall_arg2_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "args" );
        exception_tb = NULL;

        exception_lineno = 60;
        type_description_1 = "cc";
        goto frame_exception_exit_1;
    }

    if ( generator->m_closure[1] == NULL )
    {
        tmp_dircall_arg3_1 = NULL;
    }
    else
    {
        tmp_dircall_arg3_1 = PyCell_GET( generator->m_closure[1] );
    }

    if ( tmp_dircall_arg3_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "kwargs" );
        exception_tb = NULL;

        exception_lineno = 60;
        type_description_1 = "cc";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg1_1 );
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


        exception_lineno = 60;
        type_description_1 = "cc";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Tried code:
    tmp_expression_name_1 = Py_None;
    Py_INCREF( tmp_expression_name_1 );
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "cc";
        goto try_except_handler_1;
    }
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

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_deinit );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_deinit );
    }

    if ( tmp_called_name_1 == NULL )
    {

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "deinit" );
        exception_tb = NULL;

        exception_lineno = 64;
        type_description_1 = "cc";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 64;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 64;
        type_description_1 = "cc";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_deinit );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_deinit );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "deinit" );
        exception_tb = NULL;

        exception_lineno = 64;
        type_description_1 = "cc";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 64;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "cc";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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
            generator->m_closure[0],
            generator->m_closure[1]
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
    goto function_exception_exit;

    frame_no_exception_1:;


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


static PyObject *impl_colorama$initialise$$$function_5_reinit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_72298f7e086ef6de3cb94681bd8d18c8 = NULL;

    struct Nuitka_FrameObject *frame_72298f7e086ef6de3cb94681bd8d18c8;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_72298f7e086ef6de3cb94681bd8d18c8, codeobj_72298f7e086ef6de3cb94681bd8d18c8, module_colorama$initialise, 0 );
    frame_72298f7e086ef6de3cb94681bd8d18c8 = cache_frame_72298f7e086ef6de3cb94681bd8d18c8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_72298f7e086ef6de3cb94681bd8d18c8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_72298f7e086ef6de3cb94681bd8d18c8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrapped_stdout );

    if (unlikely( tmp_compare_left_1 == NULL ))
    {
        tmp_compare_left_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wrapped_stdout );
    }

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "wrapped_stdout" );
        exception_tb = NULL;

        exception_lineno = 68;

        goto frame_exception_exit_1;
    }

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
    tmp_assattr_name_1 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrapped_stdout );

    if (unlikely( tmp_assattr_name_1 == NULL ))
    {
        tmp_assattr_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wrapped_stdout );
    }

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "wrapped_stdout" );
        exception_tb = NULL;

        exception_lineno = 69;

        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_assattr_target_1 == NULL ))
    {
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 69;

        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_stdout, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;

        goto frame_exception_exit_1;
    }
    branch_no_1:;
    tmp_compare_left_2 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrapped_stderr );

    if (unlikely( tmp_compare_left_2 == NULL ))
    {
        tmp_compare_left_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wrapped_stderr );
    }

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "wrapped_stderr" );
        exception_tb = NULL;

        exception_lineno = 70;

        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assattr_name_2 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrapped_stderr );

    if (unlikely( tmp_assattr_name_2 == NULL ))
    {
        tmp_assattr_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wrapped_stderr );
    }

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "wrapped_stderr" );
        exception_tb = NULL;

        exception_lineno = 71;

        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_assattr_target_2 == NULL ))
    {
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 71;

        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_stderr, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;

        goto frame_exception_exit_1;
    }
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_72298f7e086ef6de3cb94681bd8d18c8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_72298f7e086ef6de3cb94681bd8d18c8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_72298f7e086ef6de3cb94681bd8d18c8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_72298f7e086ef6de3cb94681bd8d18c8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_72298f7e086ef6de3cb94681bd8d18c8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_72298f7e086ef6de3cb94681bd8d18c8,
        type_description_1
    );


    // Release cached frame.
    if ( frame_72298f7e086ef6de3cb94681bd8d18c8 == cache_frame_72298f7e086ef6de3cb94681bd8d18c8 )
    {
        Py_DECREF( frame_72298f7e086ef6de3cb94681bd8d18c8 );
    }
    cache_frame_72298f7e086ef6de3cb94681bd8d18c8 = NULL;

    assertFrameObject( frame_72298f7e086ef6de3cb94681bd8d18c8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( colorama$initialise$$$function_5_reinit );
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


static PyObject *impl_colorama$initialise$$$function_6_wrap_stream( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stream = python_pars[ 0 ];
    PyObject *par_convert = python_pars[ 1 ];
    PyObject *par_strip = python_pars[ 2 ];
    PyObject *par_autoreset = python_pars[ 3 ];
    PyObject *par_wrap = python_pars[ 4 ];
    PyObject *var_wrapper = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_bb5c64335eaadae266393d13a6e4824c = NULL;

    struct Nuitka_FrameObject *frame_bb5c64335eaadae266393d13a6e4824c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bb5c64335eaadae266393d13a6e4824c, codeobj_bb5c64335eaadae266393d13a6e4824c, module_colorama$initialise, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bb5c64335eaadae266393d13a6e4824c = cache_frame_bb5c64335eaadae266393d13a6e4824c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bb5c64335eaadae266393d13a6e4824c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bb5c64335eaadae266393d13a6e4824c ) == 2 ); // Frame stack

    // Framed code:
    tmp_cond_value_1 = par_wrap;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "oooooo";
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_AnsiToWin32 );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AnsiToWin32 );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "AnsiToWin32" );
        exception_tb = NULL;

        exception_lineno = 76;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_stream;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_dict_value_1 = par_convert;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_convert;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_strip;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_strip;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = par_autoreset;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_autoreset;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_bb5c64335eaadae266393d13a6e4824c->m_frame.f_lineno = 76;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_wrapper == NULL );
    var_wrapper = tmp_assign_source_1;

    tmp_called_instance_1 = var_wrapper;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_bb5c64335eaadae266393d13a6e4824c->m_frame.f_lineno = 78;
    tmp_cond_value_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_should_wrap );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 78;
        type_description_1 = "oooooo";
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
    tmp_source_name_1 = var_wrapper;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_stream );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_stream;
        assert( old != NULL );
        par_stream = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_2:;
    branch_no_1:;
    tmp_return_value = par_stream;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "stream" );
        exception_tb = NULL;

        exception_lineno = 80;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bb5c64335eaadae266393d13a6e4824c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bb5c64335eaadae266393d13a6e4824c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bb5c64335eaadae266393d13a6e4824c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bb5c64335eaadae266393d13a6e4824c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bb5c64335eaadae266393d13a6e4824c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bb5c64335eaadae266393d13a6e4824c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bb5c64335eaadae266393d13a6e4824c,
        type_description_1,
        par_stream,
        par_convert,
        par_strip,
        par_autoreset,
        par_wrap,
        var_wrapper
    );


    // Release cached frame.
    if ( frame_bb5c64335eaadae266393d13a6e4824c == cache_frame_bb5c64335eaadae266393d13a6e4824c )
    {
        Py_DECREF( frame_bb5c64335eaadae266393d13a6e4824c );
    }
    cache_frame_bb5c64335eaadae266393d13a6e4824c = NULL;

    assertFrameObject( frame_bb5c64335eaadae266393d13a6e4824c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( colorama$initialise$$$function_6_wrap_stream );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_convert );
    Py_DECREF( par_convert );
    par_convert = NULL;

    Py_XDECREF( par_stream );
    par_stream = NULL;

    CHECK_OBJECT( (PyObject *)par_autoreset );
    Py_DECREF( par_autoreset );
    par_autoreset = NULL;

    Py_XDECREF( var_wrapper );
    var_wrapper = NULL;

    CHECK_OBJECT( (PyObject *)par_strip );
    Py_DECREF( par_strip );
    par_strip = NULL;

    CHECK_OBJECT( (PyObject *)par_wrap );
    Py_DECREF( par_wrap );
    par_wrap = NULL;

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

    CHECK_OBJECT( (PyObject *)par_convert );
    Py_DECREF( par_convert );
    par_convert = NULL;

    Py_XDECREF( par_stream );
    par_stream = NULL;

    CHECK_OBJECT( (PyObject *)par_autoreset );
    Py_DECREF( par_autoreset );
    par_autoreset = NULL;

    Py_XDECREF( var_wrapper );
    var_wrapper = NULL;

    CHECK_OBJECT( (PyObject *)par_strip );
    Py_DECREF( par_strip );
    par_strip = NULL;

    CHECK_OBJECT( (PyObject *)par_wrap );
    Py_DECREF( par_wrap );
    par_wrap = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( colorama$initialise$$$function_6_wrap_stream );
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



static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_1_reset_all(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$initialise$$$function_1_reset_all,
        const_str_plain_reset_all,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cddb86c17d665df84c688174f1d56908,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_colorama$initialise,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_2_init( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$initialise$$$function_2_init,
        const_str_plain_init,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cb35d6a990e9d1bf096bafc4d738bd6d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_colorama$initialise,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_3_deinit(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$initialise$$$function_3_deinit,
        const_str_plain_deinit,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9c386e50f0d0855fbdd812ab47a32cd1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_colorama$initialise,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_4_colorama_text(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$initialise$$$function_4_colorama_text,
        const_str_plain_colorama_text,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2ccf8d08a2e8940cb1d764d273b16e19,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_colorama$initialise,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_5_reinit(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$initialise$$$function_5_reinit,
        const_str_plain_reinit,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_72298f7e086ef6de3cb94681bd8d18c8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_colorama$initialise,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_6_wrap_stream(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$initialise$$$function_6_wrap_stream,
        const_str_plain_wrap_stream,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bb5c64335eaadae266393d13a6e4824c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_colorama$initialise,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_colorama$initialise =
{
    PyModuleDef_HEAD_INIT,
    "colorama.initialise",   /* m_name */
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

MOD_INIT_DECL( colorama$initialise )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_colorama$initialise );
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
    puts("colorama.initialise: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("colorama.initialise: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("colorama.initialise: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcolorama$initialise" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_colorama$initialise = Py_InitModule4(
        "colorama.initialise",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_colorama$initialise = PyModule_Create( &mdef_colorama$initialise );
#endif

    moduledict_colorama$initialise = MODULE_DICT( module_colorama$initialise );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_colorama$initialise,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_colorama$initialise,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_colorama$initialise,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_colorama$initialise,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_colorama$initialise );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_3c23d5986caeba567f5a103584db00f8, module_colorama$initialise );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_args_element_name_1;
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
    PyObject *tmp_defaults_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_4;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    struct Nuitka_FrameObject *frame_d3bbd14ac3bfacac7562dccff3b680cd;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_d3bbd14ac3bfacac7562dccff3b680cd = MAKE_MODULE_FRAME( codeobj_d3bbd14ac3bfacac7562dccff3b680cd, module_colorama$initialise );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_d3bbd14ac3bfacac7562dccff3b680cd );
    assert( Py_REFCNT( frame_d3bbd14ac3bfacac7562dccff3b680cd ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_atexit;
    tmp_globals_name_1 = (PyObject *)moduledict_colorama$initialise;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    frame_d3bbd14ac3bfacac7562dccff3b680cd->m_frame.f_lineno = 2;
    tmp_assign_source_3 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_atexit, tmp_assign_source_3 );
    tmp_name_name_2 = const_str_plain_contextlib;
    tmp_globals_name_2 = (PyObject *)moduledict_colorama$initialise;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    frame_d3bbd14ac3bfacac7562dccff3b680cd->m_frame.f_lineno = 3;
    tmp_assign_source_4 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_contextlib, tmp_assign_source_4 );
    tmp_name_name_3 = const_str_plain_sys;
    tmp_globals_name_3 = (PyObject *)moduledict_colorama$initialise;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    frame_d3bbd14ac3bfacac7562dccff3b680cd->m_frame.f_lineno = 4;
    tmp_assign_source_5 = IMPORT_MODULE4( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
    assert( tmp_assign_source_5 != NULL );
    UPDATE_STRING_DICT1( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_5 );
    tmp_name_name_4 = const_str_plain_ansitowin32;
    tmp_globals_name_4 = (PyObject *)moduledict_colorama$initialise;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_AnsiToWin32_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_d3bbd14ac3bfacac7562dccff3b680cd->m_frame.f_lineno = 6;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_AnsiToWin32 );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_AnsiToWin32, tmp_assign_source_6 );
    tmp_assign_source_7 = Py_None;
    UPDATE_STRING_DICT0( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stdout, tmp_assign_source_7 );
    tmp_assign_source_8 = Py_None;
    UPDATE_STRING_DICT0( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stderr, tmp_assign_source_8 );
    tmp_assign_source_9 = Py_None;
    UPDATE_STRING_DICT0( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrapped_stdout, tmp_assign_source_9 );
    tmp_assign_source_10 = Py_None;
    UPDATE_STRING_DICT0( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrapped_stderr, tmp_assign_source_10 );
    tmp_assign_source_11 = Py_False;
    UPDATE_STRING_DICT0( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_atexit_done, tmp_assign_source_11 );
    tmp_assign_source_12 = MAKE_FUNCTION_colorama$initialise$$$function_1_reset_all(  );
    UPDATE_STRING_DICT1( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_reset_all, tmp_assign_source_12 );
    tmp_defaults_1 = const_tuple_false_none_none_true_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_13 = MAKE_FUNCTION_colorama$initialise$$$function_2_init( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_init, tmp_assign_source_13 );
    tmp_assign_source_14 = MAKE_FUNCTION_colorama$initialise$$$function_3_deinit(  );
    UPDATE_STRING_DICT1( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_deinit, tmp_assign_source_14 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_contextlib );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_contextlib );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "contextlib" );
        exception_tb = NULL;

        exception_lineno = 58;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = MAKE_FUNCTION_colorama$initialise$$$function_4_colorama_text(  );
    frame_d3bbd14ac3bfacac7562dccff3b680cd->m_frame.f_lineno = 58;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_15 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_contextmanager, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_colorama_text, tmp_assign_source_15 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d3bbd14ac3bfacac7562dccff3b680cd );
#endif
    popFrameStack();

    assertFrameObject( frame_d3bbd14ac3bfacac7562dccff3b680cd );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d3bbd14ac3bfacac7562dccff3b680cd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d3bbd14ac3bfacac7562dccff3b680cd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d3bbd14ac3bfacac7562dccff3b680cd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d3bbd14ac3bfacac7562dccff3b680cd, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_16 = MAKE_FUNCTION_colorama$initialise$$$function_5_reinit(  );
    UPDATE_STRING_DICT1( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_reinit, tmp_assign_source_16 );
    tmp_assign_source_17 = MAKE_FUNCTION_colorama$initialise$$$function_6_wrap_stream(  );
    UPDATE_STRING_DICT1( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrap_stream, tmp_assign_source_17 );

    return MOD_RETURN_VALUE( module_colorama$initialise );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
