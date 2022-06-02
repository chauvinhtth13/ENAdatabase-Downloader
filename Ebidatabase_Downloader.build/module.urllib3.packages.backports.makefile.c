/* Generated code for Python source for module 'urllib3.packages.backports.makefile'
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

/* The _module_urllib3$packages$backports$makefile is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$packages$backports$makefile;
PyDictObject *moduledict_urllib3$packages$backports$makefile;

/* The module constants used, if any. */
static PyObject *const_str_digest_7b499d847d0db721a985dc262ff53888;
extern PyObject *const_str_plain_text;
extern PyObject *const_str_plain_backport_makefile;
extern PyObject *const_str_plain_mode;
extern PyObject *const_str_plain_binary;
static PyObject *const_set_525e6d3603bc1d8f79b6c1d900133a33;
static PyObject *const_str_plain_SocketIO;
extern PyObject *const_str_empty;
static PyObject *const_str_digest_46ba7ada41bfc9e1958ff44bcc27a137;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_b;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_raw;
extern PyObject *const_str_plain_io;
static PyObject *const_str_plain_DEFAULT_BUFFER_SIZE;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_buffering;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_BufferedReader;
static PyObject *const_str_plain_BufferedWriter;
static PyObject *const_tuple_4af8492de069e4391d3453b7d6e1861c_tuple;
static PyObject *const_str_digest_cf4af7845cfa9f5a0e15afd29386c674;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_plain_r_none_none_none_none_tuple;
static PyObject *const_str_plain_rawmode;
extern PyObject *const_str_plain_newline;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_309dc3cb960a67630060f49840016072;
extern PyObject *const_str_plain_errors;
extern PyObject *const_str_plain_encoding;
static PyObject *const_str_digest_782a3f0e2f8a7742fb10a727995e1a91;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_ffa90462ed056cbd39f2ebcac7b85df9;
extern PyObject *const_str_plain__makefile_refs;
static PyObject *const_str_plain_BufferedRWPair;
static PyObject *const_str_plain_TextIOWrapper;
static PyObject *const_str_digest_397bad4f1f82195a3ed46c76f3f81db2;
static PyObject *const_str_plain_writing;
static PyObject *const_tuple_str_plain_SocketIO_tuple;
static PyObject *const_str_plain_reading;
extern PyObject *const_str_plain_buffer;
extern PyObject *const_str_plain_socket;
static PyObject *const_str_plain_w;
extern PyObject *const_str_plain_r;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_7b499d847d0db721a985dc262ff53888 = UNSTREAM_STRING( &constant_bin[ 1061317 ], 35, 0 );
    const_set_525e6d3603bc1d8f79b6c1d900133a33 = PySet_New( NULL );
    PySet_Add( const_set_525e6d3603bc1d8f79b6c1d900133a33, const_str_plain_r );
    PySet_Add( const_set_525e6d3603bc1d8f79b6c1d900133a33, const_str_plain_b );
    const_str_plain_w = UNSTREAM_CHAR( 119, 1 );
    PySet_Add( const_set_525e6d3603bc1d8f79b6c1d900133a33, const_str_plain_w );
    assert( PySet_Size( const_set_525e6d3603bc1d8f79b6c1d900133a33 ) == 3 );
    const_str_plain_SocketIO = UNSTREAM_STRING( &constant_bin[ 1061352 ], 8, 1 );
    const_str_digest_46ba7ada41bfc9e1958ff44bcc27a137 = UNSTREAM_STRING( &constant_bin[ 1061360 ], 44, 0 );
    const_str_plain_DEFAULT_BUFFER_SIZE = UNSTREAM_STRING( &constant_bin[ 1061404 ], 19, 1 );
    const_str_plain_BufferedReader = UNSTREAM_STRING( &constant_bin[ 1061423 ], 14, 1 );
    const_str_plain_BufferedWriter = UNSTREAM_STRING( &constant_bin[ 1061437 ], 14, 1 );
    const_tuple_4af8492de069e4391d3453b7d6e1861c_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_4af8492de069e4391d3453b7d6e1861c_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_4af8492de069e4391d3453b7d6e1861c_tuple, 1, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    PyTuple_SET_ITEM( const_tuple_4af8492de069e4391d3453b7d6e1861c_tuple, 2, const_str_plain_buffering ); Py_INCREF( const_str_plain_buffering );
    PyTuple_SET_ITEM( const_tuple_4af8492de069e4391d3453b7d6e1861c_tuple, 3, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    PyTuple_SET_ITEM( const_tuple_4af8492de069e4391d3453b7d6e1861c_tuple, 4, const_str_plain_errors ); Py_INCREF( const_str_plain_errors );
    PyTuple_SET_ITEM( const_tuple_4af8492de069e4391d3453b7d6e1861c_tuple, 5, const_str_plain_newline ); Py_INCREF( const_str_plain_newline );
    PyTuple_SET_ITEM( const_tuple_4af8492de069e4391d3453b7d6e1861c_tuple, 6, const_str_plain_binary ); Py_INCREF( const_str_plain_binary );
    PyTuple_SET_ITEM( const_tuple_4af8492de069e4391d3453b7d6e1861c_tuple, 7, const_str_plain_buffer ); Py_INCREF( const_str_plain_buffer );
    PyTuple_SET_ITEM( const_tuple_4af8492de069e4391d3453b7d6e1861c_tuple, 8, const_str_plain_text ); Py_INCREF( const_str_plain_text );
    const_str_plain_writing = UNSTREAM_STRING( &constant_bin[ 14260 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_4af8492de069e4391d3453b7d6e1861c_tuple, 9, const_str_plain_writing ); Py_INCREF( const_str_plain_writing );
    PyTuple_SET_ITEM( const_tuple_4af8492de069e4391d3453b7d6e1861c_tuple, 10, const_str_plain_raw ); Py_INCREF( const_str_plain_raw );
    const_str_plain_rawmode = UNSTREAM_STRING( &constant_bin[ 1061451 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_4af8492de069e4391d3453b7d6e1861c_tuple, 11, const_str_plain_rawmode ); Py_INCREF( const_str_plain_rawmode );
    const_str_plain_reading = UNSTREAM_STRING( &constant_bin[ 952950 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_4af8492de069e4391d3453b7d6e1861c_tuple, 12, const_str_plain_reading ); Py_INCREF( const_str_plain_reading );
    const_str_digest_cf4af7845cfa9f5a0e15afd29386c674 = UNSTREAM_STRING( &constant_bin[ 1061458 ], 58, 0 );
    const_tuple_str_plain_r_none_none_none_none_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_str_plain_r_none_none_none_none_tuple, 0, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_str_plain_r_none_none_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_str_plain_r_none_none_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_str_plain_r_none_none_none_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_str_plain_r_none_none_none_none_tuple, 4, Py_None ); Py_INCREF( Py_None );
    const_str_digest_309dc3cb960a67630060f49840016072 = UNSTREAM_STRING( &constant_bin[ 1061516 ], 38, 0 );
    const_str_digest_782a3f0e2f8a7742fb10a727995e1a91 = UNSTREAM_STRING( &constant_bin[ 1061554 ], 157, 0 );
    const_str_digest_ffa90462ed056cbd39f2ebcac7b85df9 = UNSTREAM_STRING( &constant_bin[ 1061711 ], 38, 0 );
    const_str_plain_BufferedRWPair = UNSTREAM_STRING( &constant_bin[ 1061749 ], 14, 1 );
    const_str_plain_TextIOWrapper = UNSTREAM_STRING( &constant_bin[ 1015326 ], 13, 1 );
    const_str_digest_397bad4f1f82195a3ed46c76f3f81db2 = UNSTREAM_STRING( &constant_bin[ 1061763 ], 33, 0 );
    const_tuple_str_plain_SocketIO_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SocketIO_tuple, 0, const_str_plain_SocketIO ); Py_INCREF( const_str_plain_SocketIO );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$packages$backports$makefile( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c3ce480fa175b035cdb8bc66da260936;
static PyCodeObject *codeobj_8f4efa7c3d8979409c75062bf4fca3f0;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_309dc3cb960a67630060f49840016072 );
    codeobj_c3ce480fa175b035cdb8bc66da260936 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_46ba7ada41bfc9e1958ff44bcc27a137, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_8f4efa7c3d8979409c75062bf4fca3f0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_backport_makefile, 14, const_tuple_4af8492de069e4391d3453b7d6e1861c_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_urllib3$packages$backports$makefile$$$function_1_backport_makefile( PyObject *defaults );


// The module function definitions.
static PyObject *impl_urllib3$packages$backports$makefile$$$function_1_backport_makefile( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_mode = python_pars[ 1 ];
    PyObject *par_buffering = python_pars[ 2 ];
    PyObject *par_encoding = python_pars[ 3 ];
    PyObject *par_errors = python_pars[ 4 ];
    PyObject *par_newline = python_pars[ 5 ];
    PyObject *var_binary = NULL;
    PyObject *var_buffer = NULL;
    PyObject *var_text = NULL;
    PyObject *var_writing = NULL;
    PyObject *var_raw = NULL;
    PyObject *var_rawmode = NULL;
    PyObject *var_reading = NULL;
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
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Lt_1;
    int tmp_cmp_LtE_1;
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
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    bool tmp_is_1;
    bool tmp_isnot_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
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
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_set_arg_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_8f4efa7c3d8979409c75062bf4fca3f0 = NULL;

    struct Nuitka_FrameObject *frame_8f4efa7c3d8979409c75062bf4fca3f0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8f4efa7c3d8979409c75062bf4fca3f0, codeobj_8f4efa7c3d8979409c75062bf4fca3f0, module_urllib3$packages$backports$makefile, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8f4efa7c3d8979409c75062bf4fca3f0 = cache_frame_8f4efa7c3d8979409c75062bf4fca3f0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8f4efa7c3d8979409c75062bf4fca3f0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8f4efa7c3d8979409c75062bf4fca3f0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_set_arg_1 = par_mode;

    CHECK_OBJECT( tmp_set_arg_1 );
    tmp_compare_left_1 = PySet_New( tmp_set_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = PySet_New( const_set_525e6d3603bc1d8f79b6c1d900133a33 );
    tmp_cmp_LtE_1 = RICH_COMPARE_BOOL_LE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_LtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 20;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_LtE_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_left_name_1 = const_str_digest_ffa90462ed056cbd39f2ebcac7b85df9;
    tmp_right_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_mode;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_8f4efa7c3d8979409c75062bf4fca3f0->m_frame.f_lineno = 21;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 21;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_compexpr_left_1 = const_str_plain_w;
    tmp_compexpr_right_1 = par_mode;

    CHECK_OBJECT( tmp_compexpr_right_1 );
    tmp_assign_source_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_writing == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_writing = tmp_assign_source_1;

    tmp_compexpr_left_2 = const_str_plain_r;
    tmp_compexpr_right_2 = par_mode;

    CHECK_OBJECT( tmp_compexpr_right_2 );
    tmp_or_left_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
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
    tmp_operand_name_1 = var_writing;

    CHECK_OBJECT( tmp_operand_name_1 );
    tmp_or_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_assign_source_2 = tmp_or_left_value_1;
    or_end_1:;
    assert( var_reading == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_reading = tmp_assign_source_2;

    tmp_or_left_value_2 = var_reading;

    CHECK_OBJECT( tmp_or_left_value_2 );
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
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
    tmp_or_right_value_2 = var_writing;

    CHECK_OBJECT( tmp_or_right_value_2 );
    tmp_cond_value_1 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_cond_value_1 = tmp_or_left_value_2;
    or_end_2:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_raise_type_2 = PyExc_AssertionError;
    exception_type = tmp_raise_type_2;
    Py_INCREF( tmp_raise_type_2 );
    exception_lineno = 24;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_compexpr_left_3 = const_str_plain_b;
    tmp_compexpr_right_3 = par_mode;

    CHECK_OBJECT( tmp_compexpr_right_3 );
    tmp_assign_source_3 = SEQUENCE_CONTAINS( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_binary == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_binary = tmp_assign_source_3;

    tmp_assign_source_4 = const_str_empty;
    assert( var_rawmode == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_rawmode = tmp_assign_source_4;

    tmp_cond_value_2 = var_reading;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "ooooooooooooo";
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
    tmp_assign_source_5 = const_str_plain_r;
    {
        PyObject *old = var_rawmode;
        assert( old != NULL );
        var_rawmode = tmp_assign_source_5;
        Py_INCREF( var_rawmode );
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_cond_value_3 = var_writing;

    CHECK_OBJECT( tmp_cond_value_3 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "ooooooooooooo";
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
    tmp_left_name_2 = var_rawmode;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_right_name_2 = const_str_plain_w;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_6 = tmp_left_name_2;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    var_rawmode = tmp_assign_source_6;

    branch_no_4:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain_SocketIO );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SocketIO );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SocketIO" );
        exception_tb = NULL;

        exception_lineno = 31;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = var_rawmode;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "rawmode" );
        exception_tb = NULL;

        exception_lineno = 31;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_8f4efa7c3d8979409c75062bf4fca3f0->m_frame.f_lineno = 31;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_raw == NULL );
    var_raw = tmp_assign_source_7;

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_8 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__makefile_refs );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_inplace_assign_attr_1__start == NULL );
    tmp_inplace_assign_attr_1__start = tmp_assign_source_8;

    // Tried code:
    tmp_left_name_3 = tmp_inplace_assign_attr_1__start;

    CHECK_OBJECT( tmp_left_name_3 );
    tmp_right_name_3 = const_int_pos_1;
    tmp_assign_source_9 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_inplace_assign_attr_1__end == NULL );
    tmp_inplace_assign_attr_1__end = tmp_assign_source_9;

    // Tried code:
    tmp_compare_left_2 = tmp_inplace_assign_attr_1__start;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = tmp_inplace_assign_attr_1__end;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_isnot_1 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__makefile_refs, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    branch_no_5:;
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

    tmp_compare_left_3 = par_buffering;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = Py_None;
    tmp_is_1 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if ( tmp_is_1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assign_source_10 = const_int_neg_1;
    {
        PyObject *old = par_buffering;
        assert( old != NULL );
        par_buffering = tmp_assign_source_10;
        Py_INCREF( par_buffering );
        Py_DECREF( old );
    }

    branch_no_6:;
    tmp_compare_left_4 = par_buffering;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain_io );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_io );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "io" );
        exception_tb = NULL;

        exception_lineno = 36;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_11 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_DEFAULT_BUFFER_SIZE );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_buffering;
        assert( old != NULL );
        par_buffering = tmp_assign_source_11;
        Py_DECREF( old );
    }

    branch_no_7:;
    tmp_compare_left_5 = par_buffering;

    if ( tmp_compare_left_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "buffering" );
        exception_tb = NULL;

        exception_lineno = 37;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_5 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_cond_value_4 = var_binary;

    CHECK_OBJECT( tmp_cond_value_4 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_no_9;
    }
    else
    {
        goto branch_yes_9;
    }
    branch_yes_9:;
    tmp_make_exception_arg_2 = const_str_digest_397bad4f1f82195a3ed46c76f3f81db2;
    frame_8f4efa7c3d8979409c75062bf4fca3f0->m_frame.f_lineno = 39;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 39;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_9:;
    tmp_return_value = var_raw;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_8:;
    tmp_and_left_value_1 = var_reading;

    CHECK_OBJECT( tmp_and_left_value_1 );
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "ooooooooooooo";
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
    tmp_and_right_value_1 = var_writing;

    CHECK_OBJECT( tmp_and_right_value_1 );
    tmp_cond_value_5 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_5 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
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
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain_io );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_io );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "io" );
        exception_tb = NULL;

        exception_lineno = 42;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_BufferedRWPair );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_raw;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = var_raw;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_args_element_name_5 = par_buffering;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "buffering" );
        exception_tb = NULL;

        exception_lineno = 42;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_8f4efa7c3d8979409c75062bf4fca3f0->m_frame.f_lineno = 42;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_buffer == NULL );
    var_buffer = tmp_assign_source_12;

    goto branch_end_10;
    branch_no_10:;
    tmp_cond_value_6 = var_reading;

    CHECK_OBJECT( tmp_cond_value_6 );
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
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
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain_io );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_io );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "io" );
        exception_tb = NULL;

        exception_lineno = 44;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_BufferedReader );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = var_raw;

    CHECK_OBJECT( tmp_args_element_name_6 );
    tmp_args_element_name_7 = par_buffering;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "buffering" );
        exception_tb = NULL;

        exception_lineno = 44;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_8f4efa7c3d8979409c75062bf4fca3f0->m_frame.f_lineno = 44;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_buffer == NULL );
    var_buffer = tmp_assign_source_13;

    goto branch_end_11;
    branch_no_11:;
    tmp_cond_value_7 = var_writing;

    CHECK_OBJECT( tmp_cond_value_7 );
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_no_12;
    }
    else
    {
        goto branch_yes_12;
    }
    branch_yes_12:;
    tmp_raise_type_4 = PyExc_AssertionError;
    exception_type = tmp_raise_type_4;
    Py_INCREF( tmp_raise_type_4 );
    exception_lineno = 46;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_12:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain_io );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_io );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "io" );
        exception_tb = NULL;

        exception_lineno = 47;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_BufferedWriter );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = var_raw;

    CHECK_OBJECT( tmp_args_element_name_8 );
    tmp_args_element_name_9 = par_buffering;

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "buffering" );
        exception_tb = NULL;

        exception_lineno = 47;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_8f4efa7c3d8979409c75062bf4fca3f0->m_frame.f_lineno = 47;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_buffer == NULL );
    var_buffer = tmp_assign_source_14;

    branch_end_11:;
    branch_end_10:;
    tmp_cond_value_8 = var_binary;

    CHECK_OBJECT( tmp_cond_value_8 );
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_8 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_return_value = var_buffer;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "buffer" );
        exception_tb = NULL;

        exception_lineno = 49;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_13:;
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain_io );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_io );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "io" );
        exception_tb = NULL;

        exception_lineno = 50;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_TextIOWrapper );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_10 = var_buffer;

    if ( tmp_args_element_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "buffer" );
        exception_tb = NULL;

        exception_lineno = 50;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = par_encoding;

    CHECK_OBJECT( tmp_args_element_name_11 );
    tmp_args_element_name_12 = par_errors;

    CHECK_OBJECT( tmp_args_element_name_12 );
    tmp_args_element_name_13 = par_newline;

    CHECK_OBJECT( tmp_args_element_name_13 );
    frame_8f4efa7c3d8979409c75062bf4fca3f0->m_frame.f_lineno = 50;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13 };
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_text == NULL );
    var_text = tmp_assign_source_15;

    tmp_assattr_name_2 = par_mode;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_assattr_target_2 = var_text;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_mode, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8f4efa7c3d8979409c75062bf4fca3f0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8f4efa7c3d8979409c75062bf4fca3f0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8f4efa7c3d8979409c75062bf4fca3f0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8f4efa7c3d8979409c75062bf4fca3f0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8f4efa7c3d8979409c75062bf4fca3f0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8f4efa7c3d8979409c75062bf4fca3f0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8f4efa7c3d8979409c75062bf4fca3f0,
        type_description_1,
        par_self,
        par_mode,
        par_buffering,
        par_encoding,
        par_errors,
        par_newline,
        var_binary,
        var_buffer,
        var_text,
        var_writing,
        var_raw,
        var_rawmode,
        var_reading
    );


    // Release cached frame.
    if ( frame_8f4efa7c3d8979409c75062bf4fca3f0 == cache_frame_8f4efa7c3d8979409c75062bf4fca3f0 )
    {
        Py_DECREF( frame_8f4efa7c3d8979409c75062bf4fca3f0 );
    }
    cache_frame_8f4efa7c3d8979409c75062bf4fca3f0 = NULL;

    assertFrameObject( frame_8f4efa7c3d8979409c75062bf4fca3f0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_text;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$packages$backports$makefile$$$function_1_backport_makefile );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_binary );
    Py_DECREF( var_binary );
    var_binary = NULL;

    CHECK_OBJECT( (PyObject *)par_errors );
    Py_DECREF( par_errors );
    par_errors = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( var_buffer );
    var_buffer = NULL;

    Py_XDECREF( var_text );
    var_text = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_newline );
    Py_DECREF( par_newline );
    par_newline = NULL;

    CHECK_OBJECT( (PyObject *)var_writing );
    Py_DECREF( var_writing );
    var_writing = NULL;

    CHECK_OBJECT( (PyObject *)var_raw );
    Py_DECREF( var_raw );
    var_raw = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    Py_XDECREF( var_rawmode );
    var_rawmode = NULL;

    Py_XDECREF( par_buffering );
    par_buffering = NULL;

    CHECK_OBJECT( (PyObject *)var_reading );
    Py_DECREF( var_reading );
    var_reading = NULL;

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

    Py_XDECREF( var_binary );
    var_binary = NULL;

    CHECK_OBJECT( (PyObject *)par_errors );
    Py_DECREF( par_errors );
    par_errors = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( var_buffer );
    var_buffer = NULL;

    Py_XDECREF( var_text );
    var_text = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_newline );
    Py_DECREF( par_newline );
    par_newline = NULL;

    Py_XDECREF( var_writing );
    var_writing = NULL;

    Py_XDECREF( var_raw );
    var_raw = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    Py_XDECREF( var_rawmode );
    var_rawmode = NULL;

    Py_XDECREF( par_buffering );
    par_buffering = NULL;

    Py_XDECREF( var_reading );
    var_reading = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$packages$backports$makefile$$$function_1_backport_makefile );
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



static PyObject *MAKE_FUNCTION_urllib3$packages$backports$makefile$$$function_1_backport_makefile( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$packages$backports$makefile$$$function_1_backport_makefile,
        const_str_plain_backport_makefile,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8f4efa7c3d8979409c75062bf4fca3f0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$packages$backports$makefile,
        const_str_digest_cf4af7845cfa9f5a0e15afd29386c674,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$packages$backports$makefile =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.packages.backports.makefile",   /* m_name */
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

MOD_INIT_DECL( urllib3$packages$backports$makefile )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$packages$backports$makefile );
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
    puts("urllib3.packages.backports.makefile: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.packages.backports.makefile: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.packages.backports.makefile: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$packages$backports$makefile" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$packages$backports$makefile = Py_InitModule4(
        "urllib3.packages.backports.makefile",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3$packages$backports$makefile = PyModule_Create( &mdef_urllib3$packages$backports$makefile );
#endif

    moduledict_urllib3$packages$backports$makefile = MODULE_DICT( module_urllib3$packages$backports$makefile );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3$packages$backports$makefile,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$packages$backports$makefile,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_urllib3$packages$backports$makefile,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$packages$backports$makefile,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3$packages$backports$makefile );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_7b499d847d0db721a985dc262ff53888, module_urllib3$packages$backports$makefile );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_defaults_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    struct Nuitka_FrameObject *frame_c3ce480fa175b035cdb8bc66da260936;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_782a3f0e2f8a7742fb10a727995e1a91;
    UPDATE_STRING_DICT0( moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_c3ce480fa175b035cdb8bc66da260936 = MAKE_MODULE_FRAME( codeobj_c3ce480fa175b035cdb8bc66da260936, module_urllib3$packages$backports$makefile );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_c3ce480fa175b035cdb8bc66da260936 );
    assert( Py_REFCNT( frame_c3ce480fa175b035cdb8bc66da260936 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_io;
    tmp_globals_name_1 = (PyObject *)moduledict_urllib3$packages$backports$makefile;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    frame_c3ce480fa175b035cdb8bc66da260936->m_frame.f_lineno = 9;
    tmp_assign_source_3 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain_io, tmp_assign_source_3 );
    tmp_name_name_2 = const_str_plain_socket;
    tmp_globals_name_2 = (PyObject *)moduledict_urllib3$packages$backports$makefile;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_SocketIO_tuple;
    frame_c3ce480fa175b035cdb8bc66da260936->m_frame.f_lineno = 11;
    tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_SocketIO );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain_SocketIO, tmp_assign_source_4 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c3ce480fa175b035cdb8bc66da260936 );
#endif
    popFrameStack();

    assertFrameObject( frame_c3ce480fa175b035cdb8bc66da260936 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c3ce480fa175b035cdb8bc66da260936 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c3ce480fa175b035cdb8bc66da260936, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c3ce480fa175b035cdb8bc66da260936->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c3ce480fa175b035cdb8bc66da260936, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_defaults_1 = const_tuple_str_plain_r_none_none_none_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_5 = MAKE_FUNCTION_urllib3$packages$backports$makefile$$$function_1_backport_makefile( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain_backport_makefile, tmp_assign_source_5 );

    return MOD_RETURN_VALUE( module_urllib3$packages$backports$makefile );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
