/* Generated code for Python source for module 'tqdm._tqdm_pandas'
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

/* The _module_tqdm$_tqdm_pandas is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_tqdm$_tqdm_pandas;
PyDictObject *moduledict_tqdm$_tqdm_pandas;

/* The module constants used, if any. */
static PyObject *const_tuple_27ad5e5b4dabffcd438aea503a7d1d67_tuple;
static PyObject *const_str_plain_tqdm_;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_write;
extern PyObject *const_str_plain_tqdm_kwargs;
extern PyObject *const_str_plain_tqdm;
static PyObject *const_str_digest_590dba82eebd2835d405bb2866b86bf3;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_tqdm_pandas;
extern PyObject *const_str_plain_startswith;
static PyObject *const_str_digest_3d753b3142076927442f7c2734bec160;
extern PyObject *const_str_plain_fp_write;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_file;
extern PyObject *const_str_plain_pandas;
extern PyObject *const_str_plain_stderr;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_28cc2128dba3dbb37fe9c99402ab7f7c;
extern PyObject *const_str_plain_deprecated_t;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_plain_file_none_tuple;
static PyObject *const_tuple_str_digest_88c5765c50e6df26aa1b5f6cd5526ad0_tuple;
extern PyObject *const_str_plain_fp;
extern PyObject *const_str_plain_TqdmDeprecationWarning;
extern PyObject *const_str_empty;
static PyObject *const_str_plain_tclass;
static PyObject *const_tuple_str_plain_tqdm__tuple;
static PyObject *const_str_digest_88c5765c50e6df26aa1b5f6cd5526ad0;
static PyObject *const_list_str_plain_tqdm_pandas_list;
static PyObject *const_str_digest_92ab2d5324d335c36106bd5014403a9f;
static PyObject *const_str_digest_f933bb4a08c8b8b1040296e006749246;
static PyObject *const_tuple_str_digest_590dba82eebd2835d405bb2866b86bf3_tuple;
extern PyObject *const_str_plain___author__;
static PyObject *const_tuple_str_plain_TqdmDeprecationWarning_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_27ad5e5b4dabffcd438aea503a7d1d67_tuple = PyTuple_New( 3 );
    const_str_plain_tclass = UNSTREAM_STRING( &constant_bin[ 702915 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_27ad5e5b4dabffcd438aea503a7d1d67_tuple, 0, const_str_plain_tclass ); Py_INCREF( const_str_plain_tclass );
    PyTuple_SET_ITEM( const_tuple_27ad5e5b4dabffcd438aea503a7d1d67_tuple, 1, const_str_plain_tqdm_kwargs ); Py_INCREF( const_str_plain_tqdm_kwargs );
    PyTuple_SET_ITEM( const_tuple_27ad5e5b4dabffcd438aea503a7d1d67_tuple, 2, const_str_plain_TqdmDeprecationWarning ); Py_INCREF( const_str_plain_TqdmDeprecationWarning );
    const_str_plain_tqdm_ = UNSTREAM_STRING( &constant_bin[ 998623 ], 5, 1 );
    const_str_digest_590dba82eebd2835d405bb2866b86bf3 = UNSTREAM_STRING( &constant_bin[ 999591 ], 66, 0 );
    const_str_digest_3d753b3142076927442f7c2734bec160 = UNSTREAM_STRING( &constant_bin[ 999657 ], 109, 0 );
    const_str_digest_28cc2128dba3dbb37fe9c99402ab7f7c = UNSTREAM_STRING( &constant_bin[ 999766 ], 20, 0 );
    const_tuple_str_plain_file_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_file_none_tuple, 0, const_str_plain_file ); Py_INCREF( const_str_plain_file );
    PyTuple_SET_ITEM( const_tuple_str_plain_file_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_tuple_str_digest_88c5765c50e6df26aa1b5f6cd5526ad0_tuple = PyTuple_New( 1 );
    const_str_digest_88c5765c50e6df26aa1b5f6cd5526ad0 = UNSTREAM_STRING( &constant_bin[ 999786 ], 66, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_88c5765c50e6df26aa1b5f6cd5526ad0_tuple, 0, const_str_digest_88c5765c50e6df26aa1b5f6cd5526ad0 ); Py_INCREF( const_str_digest_88c5765c50e6df26aa1b5f6cd5526ad0 );
    const_tuple_str_plain_tqdm__tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_tqdm__tuple, 0, const_str_plain_tqdm_ ); Py_INCREF( const_str_plain_tqdm_ );
    const_list_str_plain_tqdm_pandas_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_tqdm_pandas_list, 0, const_str_plain_tqdm_pandas ); Py_INCREF( const_str_plain_tqdm_pandas );
    const_str_digest_92ab2d5324d335c36106bd5014403a9f = UNSTREAM_STRING( &constant_bin[ 999852 ], 20, 0 );
    const_str_digest_f933bb4a08c8b8b1040296e006749246 = UNSTREAM_STRING( &constant_bin[ 999872 ], 17, 0 );
    const_tuple_str_digest_590dba82eebd2835d405bb2866b86bf3_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_590dba82eebd2835d405bb2866b86bf3_tuple, 0, const_str_digest_590dba82eebd2835d405bb2866b86bf3 ); Py_INCREF( const_str_digest_590dba82eebd2835d405bb2866b86bf3 );
    const_tuple_str_plain_TqdmDeprecationWarning_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_TqdmDeprecationWarning_tuple, 0, const_str_plain_TqdmDeprecationWarning ); Py_INCREF( const_str_plain_TqdmDeprecationWarning );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_tqdm$_tqdm_pandas( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_7e5c03c748c3cb157d93a8e321ba68c3;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_28cc2128dba3dbb37fe9c99402ab7f7c );
    codeobj_7e5c03c748c3cb157d93a8e321ba68c3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tqdm_pandas, 7, const_tuple_27ad5e5b4dabffcd438aea503a7d1d67_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3_complex_call_helper_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_tqdm$_tqdm_pandas$$$function_1_tqdm_pandas(  );


// The module function definitions.
static PyObject *impl_tqdm$_tqdm_pandas$$$function_1_tqdm_pandas( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tclass = python_pars[ 0 ];
    PyObject *par_tqdm_kwargs = python_pars[ 1 ];
    PyObject *var_TqdmDeprecationWarning = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_attr_3;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_default_2;
    PyObject *tmp_getattr_default_3;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    PyObject *tmp_getattr_target_3;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_type_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_7e5c03c748c3cb157d93a8e321ba68c3 = NULL;

    struct Nuitka_FrameObject *frame_7e5c03c748c3cb157d93a8e321ba68c3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7e5c03c748c3cb157d93a8e321ba68c3, codeobj_7e5c03c748c3cb157d93a8e321ba68c3, module_tqdm$_tqdm_pandas, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7e5c03c748c3cb157d93a8e321ba68c3 = cache_frame_7e5c03c748c3cb157d93a8e321ba68c3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7e5c03c748c3cb157d93a8e321ba68c3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7e5c03c748c3cb157d93a8e321ba68c3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_plain_tqdm;
    tmp_globals_name_1 = (PyObject *)moduledict_tqdm$_tqdm_pandas;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_TqdmDeprecationWarning_tuple;
    frame_7e5c03c748c3cb157d93a8e321ba68c3->m_frame.f_lineno = 12;
    tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_TqdmDeprecationWarning );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_TqdmDeprecationWarning == NULL );
    var_TqdmDeprecationWarning = tmp_assign_source_1;

    tmp_isinstance_inst_1 = par_tclass;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = (PyObject *)&PyType_Type;
    tmp_or_left_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        type_description_1 = "ooo";
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
    tmp_getattr_target_1 = par_tclass;

    CHECK_OBJECT( tmp_getattr_target_1 );
    tmp_getattr_attr_1 = const_str_plain___name__;
    tmp_getattr_default_1 = const_str_empty;
    tmp_called_instance_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_7e5c03c748c3cb157d93a8e321ba68c3->m_frame.f_lineno = 14;
    tmp_or_right_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_tqdm__tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_cond_value_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 14;
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
    tmp_called_name_1 = var_TqdmDeprecationWarning;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_name_1 = const_tuple_str_digest_88c5765c50e6df26aa1b5f6cd5526ad0_tuple;
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_called_instance_2 = par_tqdm_kwargs;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_7e5c03c748c3cb157d93a8e321ba68c3->m_frame.f_lineno = 18;
    tmp_getattr_target_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_file_none_tuple, 0 ) );

    if ( tmp_getattr_target_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 18;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_getattr_attr_2 = const_str_plain_write;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_tqdm$_tqdm_pandas, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        Py_DECREF( tmp_getattr_target_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 18;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_stderr );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );
        Py_DECREF( tmp_getattr_target_2 );

        exception_lineno = 18;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_getattr_default_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_write );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_getattr_default_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );
        Py_DECREF( tmp_getattr_target_2 );

        exception_lineno = 18;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_value_1 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
    Py_DECREF( tmp_getattr_target_2 );
    Py_DECREF( tmp_getattr_default_2 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 18;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_fp_write;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_7e5c03c748c3cb157d93a8e321ba68c3->m_frame.f_lineno = 16;
    tmp_unused = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = par_tclass;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_pandas );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = par_tqdm_kwargs;

    CHECK_OBJECT( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg2_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
        tmp_unused = impl___internal__$$$function_3_complex_call_helper_star_dict( dir_call_args );
    }
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_2 = var_TqdmDeprecationWarning;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_args_name_2 = const_tuple_str_digest_590dba82eebd2835d405bb2866b86bf3_tuple;
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_source_name_4 = par_tclass;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_getattr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_fp );
    if ( tmp_getattr_target_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 23;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_getattr_attr_3 = const_str_plain_write;
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_tqdm$_tqdm_pandas, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        Py_DECREF( tmp_getattr_target_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 23;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_stderr );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );
        Py_DECREF( tmp_getattr_target_3 );

        exception_lineno = 23;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_getattr_default_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_write );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_getattr_default_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );
        Py_DECREF( tmp_getattr_target_3 );

        exception_lineno = 23;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_value_2 = BUILTIN_GETATTR( tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3 );
    Py_DECREF( tmp_getattr_target_3 );
    Py_DECREF( tmp_getattr_default_3 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 23;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_fp_write;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_7e5c03c748c3cb157d93a8e321ba68c3->m_frame.f_lineno = 21;
    tmp_unused = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_type_arg_1 = par_tclass;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_source_name_7 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_source_name_7 != NULL );
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_pandas );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_3 = _PyDict_NewPresized( 1 );
    tmp_dict_value_3 = par_tclass;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_deprecated_t;
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_7e5c03c748c3cb157d93a8e321ba68c3->m_frame.f_lineno = 24;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7e5c03c748c3cb157d93a8e321ba68c3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7e5c03c748c3cb157d93a8e321ba68c3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7e5c03c748c3cb157d93a8e321ba68c3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7e5c03c748c3cb157d93a8e321ba68c3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7e5c03c748c3cb157d93a8e321ba68c3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7e5c03c748c3cb157d93a8e321ba68c3,
        type_description_1,
        par_tclass,
        par_tqdm_kwargs,
        var_TqdmDeprecationWarning
    );


    // Release cached frame.
    if ( frame_7e5c03c748c3cb157d93a8e321ba68c3 == cache_frame_7e5c03c748c3cb157d93a8e321ba68c3 )
    {
        Py_DECREF( frame_7e5c03c748c3cb157d93a8e321ba68c3 );
    }
    cache_frame_7e5c03c748c3cb157d93a8e321ba68c3 = NULL;

    assertFrameObject( frame_7e5c03c748c3cb157d93a8e321ba68c3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tqdm$_tqdm_pandas$$$function_1_tqdm_pandas );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_tqdm_kwargs );
    Py_DECREF( par_tqdm_kwargs );
    par_tqdm_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)par_tclass );
    Py_DECREF( par_tclass );
    par_tclass = NULL;

    CHECK_OBJECT( (PyObject *)var_TqdmDeprecationWarning );
    Py_DECREF( var_TqdmDeprecationWarning );
    var_TqdmDeprecationWarning = NULL;

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

    CHECK_OBJECT( (PyObject *)par_tqdm_kwargs );
    Py_DECREF( par_tqdm_kwargs );
    par_tqdm_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)par_tclass );
    Py_DECREF( par_tclass );
    par_tclass = NULL;

    Py_XDECREF( var_TqdmDeprecationWarning );
    var_TqdmDeprecationWarning = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tqdm$_tqdm_pandas$$$function_1_tqdm_pandas );
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



static PyObject *MAKE_FUNCTION_tqdm$_tqdm_pandas$$$function_1_tqdm_pandas(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tqdm$_tqdm_pandas$$$function_1_tqdm_pandas,
        const_str_plain_tqdm_pandas,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7e5c03c748c3cb157d93a8e321ba68c3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tqdm$_tqdm_pandas,
        const_str_digest_3d753b3142076927442f7c2734bec160,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_tqdm$_tqdm_pandas =
{
    PyModuleDef_HEAD_INIT,
    "tqdm._tqdm_pandas",   /* m_name */
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

MOD_INIT_DECL( tqdm$_tqdm_pandas )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_tqdm$_tqdm_pandas );
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
    puts("tqdm._tqdm_pandas: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("tqdm._tqdm_pandas: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("tqdm._tqdm_pandas: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in inittqdm$_tqdm_pandas" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_tqdm$_tqdm_pandas = Py_InitModule4(
        "tqdm._tqdm_pandas",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_tqdm$_tqdm_pandas = PyModule_Create( &mdef_tqdm$_tqdm_pandas );
#endif

    moduledict_tqdm$_tqdm_pandas = MODULE_DICT( module_tqdm$_tqdm_pandas );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_tqdm$_tqdm_pandas, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_tqdm$_tqdm_pandas,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_tqdm$_tqdm_pandas, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_tqdm$_tqdm_pandas,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_tqdm$_tqdm_pandas,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_tqdm$_tqdm_pandas, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_tqdm$_tqdm_pandas,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_tqdm$_tqdm_pandas );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_f933bb4a08c8b8b1040296e006749246, module_tqdm$_tqdm_pandas );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_tqdm$_tqdm_pandas, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_tqdm$_tqdm_pandas, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_tqdm$_tqdm_pandas, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_tqdm$_tqdm_pandas, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_tqdm$_tqdm_pandas, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_tqdm$_tqdm_pandas, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_tqdm$_tqdm_pandas, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_tqdm$_tqdm_pandas, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_name_name_1 = const_str_plain_sys;
    tmp_globals_name_1 = (PyObject *)moduledict_tqdm$_tqdm_pandas;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_assign_source_3 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    assert( tmp_assign_source_3 != NULL );
    UPDATE_STRING_DICT1( moduledict_tqdm$_tqdm_pandas, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_92ab2d5324d335c36106bd5014403a9f;
    UPDATE_STRING_DICT0( moduledict_tqdm$_tqdm_pandas, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_4 );
    tmp_assign_source_5 = LIST_COPY( const_list_str_plain_tqdm_pandas_list );
    UPDATE_STRING_DICT1( moduledict_tqdm$_tqdm_pandas, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_5 );
    tmp_assign_source_6 = MAKE_FUNCTION_tqdm$_tqdm_pandas$$$function_1_tqdm_pandas(  );
    UPDATE_STRING_DICT1( moduledict_tqdm$_tqdm_pandas, (Nuitka_StringObject *)const_str_plain_tqdm_pandas, tmp_assign_source_6 );

    return MOD_RETURN_VALUE( module_tqdm$_tqdm_pandas );
}
