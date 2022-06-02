/* Generated code for Python source for module 'tqdm'
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

/* The _module_tqdm is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_tqdm;
PyDictObject *moduledict_tqdm;

/* The module constants used, if any. */
static PyObject *const_str_plain_notebook;
static PyObject *const_tuple_str_plain_TMonitor_str_plain_TqdmSynchronisationWarning_tuple;
extern PyObject *const_dict_f154c9a58c9419d7e391901d7b7fe49e;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_TqdmSynchronisationWarning;
extern PyObject *const_str_plain_TqdmTypeError;
extern PyObject *const_str_plain_TqdmDeprecationWarning;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_str_digest_6d90926b16913281f1282e3df8ab1da6;
static PyObject *const_str_plain__tqdm_pandas;
extern PyObject *const_str_plain_tqdm;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
static PyObject *const_tuple_str_plain_trange_tuple;
extern PyObject *const_str_plain_TqdmKeyError;
static PyObject *const_str_digest_da233d117e7126d265b69eb07f13dab3;
static PyObject *const_str_plain__tnrange;
extern PyObject *const_str_plain_tqdm_pandas;
static PyObject *const_tuple_98c3ddbcb1a0b73d22a15a705ced3816_tuple;
extern PyObject *const_str_plain_stacklevel;
static PyObject *const_str_digest_183e965ca2cd9226db93b446b173c3ee;
extern PyObject *const_str_plain_tqdm_notebook;
extern PyObject *const_str_digest_1ca02da0acc9239b92167c86b155428d;
extern PyObject *const_str_plain_version;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_TqdmMonitorWarning;
extern PyObject *const_str_plain_TqdmExperimentalWarning;
extern PyObject *const_str_plain_TqdmWarning;
static PyObject *const_str_digest_1082726aafcd9eee00e77b5aa6e821e8;
extern PyObject *const_dict_empty;
extern PyObject *const_tuple_str_plain___version___tuple;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_5575a2b14ec53527541f335af75a7df0;
extern PyObject *const_str_plain___version__;
static PyObject *const_str_plain_NUITKA_PACKAGE_tqdm;
extern PyObject *const_tuple_str_plain_warn_tuple;
extern PyObject *const_str_plain_tnrange;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_trange;
static PyObject *const_tuple_6f2074c988696a234f9b071d7c5ad972_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_plain_main_tuple;
extern PyObject *const_str_plain_std;
extern PyObject *const_str_plain_TMonitor;
extern PyObject *const_str_plain_main;
extern PyObject *const_tuple_str_plain_tqdm_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___path__;
static PyObject *const_str_plain__tqdm_notebook;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain_gui;
extern PyObject *const_str_plain_warnings;
static PyObject *const_tuple_91ea56f19f8cdb35398d619f9b3f2eb9_tuple;
extern PyObject *const_str_plain__monitor;
extern PyObject *const_str_plain_environ;
static PyObject *const_tuple_str_plain_tqdm_pandas_tuple;
static PyObject *const_str_plain_cli;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_tgrange;
static PyObject *const_list_3a2cb305ab4b749d895e6bebce73de45_list;
static PyObject *const_tuple_f9cb0f4d8c222031da98521d54b43675_tuple;
extern PyObject *const_str_plain_tqdm_gui;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_notebook = UNSTREAM_STRING( &constant_bin[ 998601 ], 8, 1 );
    const_tuple_str_plain_TMonitor_str_plain_TqdmSynchronisationWarning_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_TMonitor_str_plain_TqdmSynchronisationWarning_tuple, 0, const_str_plain_TMonitor ); Py_INCREF( const_str_plain_TMonitor );
    PyTuple_SET_ITEM( const_tuple_str_plain_TMonitor_str_plain_TqdmSynchronisationWarning_tuple, 1, const_str_plain_TqdmSynchronisationWarning ); Py_INCREF( const_str_plain_TqdmSynchronisationWarning );
    const_str_digest_6d90926b16913281f1282e3df8ab1da6 = UNSTREAM_STRING( &constant_bin[ 998609 ], 13, 0 );
    const_str_plain__tqdm_pandas = UNSTREAM_STRING( &constant_bin[ 998622 ], 12, 1 );
    const_tuple_str_plain_trange_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_trange_tuple, 0, const_str_plain_trange ); Py_INCREF( const_str_plain_trange );
    const_str_digest_da233d117e7126d265b69eb07f13dab3 = UNSTREAM_STRING( &constant_bin[ 998634 ], 59, 0 );
    const_str_plain__tnrange = UNSTREAM_STRING( &constant_bin[ 998693 ], 8, 1 );
    const_tuple_98c3ddbcb1a0b73d22a15a705ced3816_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_98c3ddbcb1a0b73d22a15a705ced3816_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_98c3ddbcb1a0b73d22a15a705ced3816_tuple, 1, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_98c3ddbcb1a0b73d22a15a705ced3816_tuple, 2, const_str_plain_warn ); Py_INCREF( const_str_plain_warn );
    PyTuple_SET_ITEM( const_tuple_98c3ddbcb1a0b73d22a15a705ced3816_tuple, 3, const_str_plain__tnrange ); Py_INCREF( const_str_plain__tnrange );
    const_str_digest_183e965ca2cd9226db93b446b173c3ee = UNSTREAM_STRING( &constant_bin[ 998701 ], 16, 0 );
    const_str_digest_1082726aafcd9eee00e77b5aa6e821e8 = UNSTREAM_STRING( &constant_bin[ 998717 ], 108, 0 );
    const_str_digest_5575a2b14ec53527541f335af75a7df0 = UNSTREAM_STRING( &constant_bin[ 998825 ], 45, 0 );
    const_str_plain_NUITKA_PACKAGE_tqdm = UNSTREAM_STRING( &constant_bin[ 998870 ], 19, 1 );
    const_tuple_6f2074c988696a234f9b071d7c5ad972_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_6f2074c988696a234f9b071d7c5ad972_tuple, 0, const_str_plain_NUITKA_PACKAGE_tqdm ); Py_INCREF( const_str_plain_NUITKA_PACKAGE_tqdm );
    PyTuple_SET_ITEM( const_tuple_6f2074c988696a234f9b071d7c5ad972_tuple, 1, const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 ); Py_INCREF( const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 );
    const_tuple_str_plain_main_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_main_tuple, 0, const_str_plain_main ); Py_INCREF( const_str_plain_main );
    const_str_plain__tqdm_notebook = UNSTREAM_STRING( &constant_bin[ 998889 ], 14, 1 );
    const_tuple_91ea56f19f8cdb35398d619f9b3f2eb9_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_91ea56f19f8cdb35398d619f9b3f2eb9_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_91ea56f19f8cdb35398d619f9b3f2eb9_tuple, 1, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_91ea56f19f8cdb35398d619f9b3f2eb9_tuple, 2, const_str_plain_warn ); Py_INCREF( const_str_plain_warn );
    PyTuple_SET_ITEM( const_tuple_91ea56f19f8cdb35398d619f9b3f2eb9_tuple, 3, const_str_plain__tqdm_notebook ); Py_INCREF( const_str_plain__tqdm_notebook );
    const_tuple_str_plain_tqdm_pandas_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_tqdm_pandas_tuple, 0, const_str_plain_tqdm_pandas ); Py_INCREF( const_str_plain_tqdm_pandas );
    const_str_plain_cli = UNSTREAM_STRING( &constant_bin[ 688 ], 3, 1 );
    const_list_3a2cb305ab4b749d895e6bebce73de45_list = PyList_New( 17 );
    PyList_SET_ITEM( const_list_3a2cb305ab4b749d895e6bebce73de45_list, 0, const_str_plain_tqdm ); Py_INCREF( const_str_plain_tqdm );
    PyList_SET_ITEM( const_list_3a2cb305ab4b749d895e6bebce73de45_list, 1, const_str_plain_tqdm_gui ); Py_INCREF( const_str_plain_tqdm_gui );
    PyList_SET_ITEM( const_list_3a2cb305ab4b749d895e6bebce73de45_list, 2, const_str_plain_trange ); Py_INCREF( const_str_plain_trange );
    PyList_SET_ITEM( const_list_3a2cb305ab4b749d895e6bebce73de45_list, 3, const_str_plain_tgrange ); Py_INCREF( const_str_plain_tgrange );
    PyList_SET_ITEM( const_list_3a2cb305ab4b749d895e6bebce73de45_list, 4, const_str_plain_tqdm_pandas ); Py_INCREF( const_str_plain_tqdm_pandas );
    PyList_SET_ITEM( const_list_3a2cb305ab4b749d895e6bebce73de45_list, 5, const_str_plain_tqdm_notebook ); Py_INCREF( const_str_plain_tqdm_notebook );
    PyList_SET_ITEM( const_list_3a2cb305ab4b749d895e6bebce73de45_list, 6, const_str_plain_tnrange ); Py_INCREF( const_str_plain_tnrange );
    PyList_SET_ITEM( const_list_3a2cb305ab4b749d895e6bebce73de45_list, 7, const_str_plain_main ); Py_INCREF( const_str_plain_main );
    PyList_SET_ITEM( const_list_3a2cb305ab4b749d895e6bebce73de45_list, 8, const_str_plain_TMonitor ); Py_INCREF( const_str_plain_TMonitor );
    PyList_SET_ITEM( const_list_3a2cb305ab4b749d895e6bebce73de45_list, 9, const_str_plain_TqdmTypeError ); Py_INCREF( const_str_plain_TqdmTypeError );
    PyList_SET_ITEM( const_list_3a2cb305ab4b749d895e6bebce73de45_list, 10, const_str_plain_TqdmKeyError ); Py_INCREF( const_str_plain_TqdmKeyError );
    PyList_SET_ITEM( const_list_3a2cb305ab4b749d895e6bebce73de45_list, 11, const_str_plain_TqdmWarning ); Py_INCREF( const_str_plain_TqdmWarning );
    PyList_SET_ITEM( const_list_3a2cb305ab4b749d895e6bebce73de45_list, 12, const_str_plain_TqdmDeprecationWarning ); Py_INCREF( const_str_plain_TqdmDeprecationWarning );
    PyList_SET_ITEM( const_list_3a2cb305ab4b749d895e6bebce73de45_list, 13, const_str_plain_TqdmExperimentalWarning ); Py_INCREF( const_str_plain_TqdmExperimentalWarning );
    PyList_SET_ITEM( const_list_3a2cb305ab4b749d895e6bebce73de45_list, 14, const_str_plain_TqdmMonitorWarning ); Py_INCREF( const_str_plain_TqdmMonitorWarning );
    PyList_SET_ITEM( const_list_3a2cb305ab4b749d895e6bebce73de45_list, 15, const_str_plain_TqdmSynchronisationWarning ); Py_INCREF( const_str_plain_TqdmSynchronisationWarning );
    PyList_SET_ITEM( const_list_3a2cb305ab4b749d895e6bebce73de45_list, 16, const_str_plain___version__ ); Py_INCREF( const_str_plain___version__ );
    const_tuple_f9cb0f4d8c222031da98521d54b43675_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_f9cb0f4d8c222031da98521d54b43675_tuple, 0, const_str_plain_TqdmDeprecationWarning ); Py_INCREF( const_str_plain_TqdmDeprecationWarning );
    PyTuple_SET_ITEM( const_tuple_f9cb0f4d8c222031da98521d54b43675_tuple, 1, const_str_plain_TqdmExperimentalWarning ); Py_INCREF( const_str_plain_TqdmExperimentalWarning );
    PyTuple_SET_ITEM( const_tuple_f9cb0f4d8c222031da98521d54b43675_tuple, 2, const_str_plain_TqdmKeyError ); Py_INCREF( const_str_plain_TqdmKeyError );
    PyTuple_SET_ITEM( const_tuple_f9cb0f4d8c222031da98521d54b43675_tuple, 3, const_str_plain_TqdmMonitorWarning ); Py_INCREF( const_str_plain_TqdmMonitorWarning );
    PyTuple_SET_ITEM( const_tuple_f9cb0f4d8c222031da98521d54b43675_tuple, 4, const_str_plain_TqdmTypeError ); Py_INCREF( const_str_plain_TqdmTypeError );
    PyTuple_SET_ITEM( const_tuple_f9cb0f4d8c222031da98521d54b43675_tuple, 5, const_str_plain_TqdmWarning ); Py_INCREF( const_str_plain_TqdmWarning );
    PyTuple_SET_ITEM( const_tuple_f9cb0f4d8c222031da98521d54b43675_tuple, 6, const_str_plain_tqdm ); Py_INCREF( const_str_plain_tqdm );
    PyTuple_SET_ITEM( const_tuple_f9cb0f4d8c222031da98521d54b43675_tuple, 7, const_str_plain_trange ); Py_INCREF( const_str_plain_trange );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_tqdm( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_e9174a3b26a91bafffb44dea729f1eb9;
static PyCodeObject *codeobj_e76630403fb8ac56b03a21c46dddd2c3;
static PyCodeObject *codeobj_afece581d5c195f77c92c930aed34011;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_183e965ca2cd9226db93b446b173c3ee );
    codeobj_e9174a3b26a91bafffb44dea729f1eb9 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_6d90926b16913281f1282e3df8ab1da6, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_e76630403fb8ac56b03a21c46dddd2c3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tnrange, 31, const_tuple_98c3ddbcb1a0b73d22a15a705ced3816_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_afece581d5c195f77c92c930aed34011 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tqdm_notebook, 20, const_tuple_91ea56f19f8cdb35398d619f9b3f2eb9_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_tqdm$$$function_1_tqdm_notebook(  );


static PyObject *MAKE_FUNCTION_tqdm$$$function_2_tnrange(  );


// The module function definitions.
static PyObject *impl_tqdm$$$function_1_tqdm_notebook( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *var_warn = NULL;
    PyObject *var__tqdm_notebook = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_afece581d5c195f77c92c930aed34011 = NULL;

    struct Nuitka_FrameObject *frame_afece581d5c195f77c92c930aed34011;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_afece581d5c195f77c92c930aed34011, codeobj_afece581d5c195f77c92c930aed34011, module_tqdm, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_afece581d5c195f77c92c930aed34011 = cache_frame_afece581d5c195f77c92c930aed34011;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_afece581d5c195f77c92c930aed34011 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_afece581d5c195f77c92c930aed34011 ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_plain_warnings;
    tmp_globals_name_1 = (PyObject *)moduledict_tqdm;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_warn_tuple;
    frame_afece581d5c195f77c92c930aed34011->m_frame.f_lineno = 22;
    tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_warn );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_warn == NULL );
    var_warn = tmp_assign_source_1;

    tmp_name_name_2 = const_str_plain_notebook;
    tmp_globals_name_2 = (PyObject *)moduledict_tqdm;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_tqdm_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_afece581d5c195f77c92c930aed34011->m_frame.f_lineno = 24;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_tqdm );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var__tqdm_notebook == NULL );
    var__tqdm_notebook = tmp_assign_source_2;

    tmp_called_name_1 = var_warn;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_digest_1082726aafcd9eee00e77b5aa6e821e8;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain_TqdmDeprecationWarning );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TqdmDeprecationWarning );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "TqdmDeprecationWarning" );
        exception_tb = NULL;

        exception_lineno = 27;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_f154c9a58c9419d7e391901d7b7fe49e );
    frame_afece581d5c195f77c92c930aed34011->m_frame.f_lineno = 25;
    tmp_unused = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_dircall_arg1_1 = var__tqdm_notebook;

    CHECK_OBJECT( tmp_dircall_arg1_1 );
    tmp_dircall_arg2_1 = par_args;

    CHECK_OBJECT( tmp_dircall_arg2_1 );
    tmp_dircall_arg3_1 = par_kwargs;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_afece581d5c195f77c92c930aed34011 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_afece581d5c195f77c92c930aed34011 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_afece581d5c195f77c92c930aed34011 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_afece581d5c195f77c92c930aed34011, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_afece581d5c195f77c92c930aed34011->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_afece581d5c195f77c92c930aed34011, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_afece581d5c195f77c92c930aed34011,
        type_description_1,
        par_args,
        par_kwargs,
        var_warn,
        var__tqdm_notebook
    );


    // Release cached frame.
    if ( frame_afece581d5c195f77c92c930aed34011 == cache_frame_afece581d5c195f77c92c930aed34011 )
    {
        Py_DECREF( frame_afece581d5c195f77c92c930aed34011 );
    }
    cache_frame_afece581d5c195f77c92c930aed34011 = NULL;

    assertFrameObject( frame_afece581d5c195f77c92c930aed34011 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tqdm$$$function_1_tqdm_notebook );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_warn );
    Py_DECREF( var_warn );
    var_warn = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)var__tqdm_notebook );
    Py_DECREF( var__tqdm_notebook );
    var__tqdm_notebook = NULL;

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

    Py_XDECREF( var_warn );
    var_warn = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var__tqdm_notebook );
    var__tqdm_notebook = NULL;

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
    NUITKA_CANNOT_GET_HERE( tqdm$$$function_1_tqdm_notebook );
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


static PyObject *impl_tqdm$$$function_2_tnrange( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *var_warn = NULL;
    PyObject *var__tnrange = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e76630403fb8ac56b03a21c46dddd2c3 = NULL;

    struct Nuitka_FrameObject *frame_e76630403fb8ac56b03a21c46dddd2c3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e76630403fb8ac56b03a21c46dddd2c3, codeobj_e76630403fb8ac56b03a21c46dddd2c3, module_tqdm, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e76630403fb8ac56b03a21c46dddd2c3 = cache_frame_e76630403fb8ac56b03a21c46dddd2c3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e76630403fb8ac56b03a21c46dddd2c3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e76630403fb8ac56b03a21c46dddd2c3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_plain_warnings;
    tmp_globals_name_1 = (PyObject *)moduledict_tqdm;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_warn_tuple;
    frame_e76630403fb8ac56b03a21c46dddd2c3->m_frame.f_lineno = 36;
    tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_warn );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_warn == NULL );
    var_warn = tmp_assign_source_1;

    tmp_name_name_2 = const_str_plain_notebook;
    tmp_globals_name_2 = (PyObject *)moduledict_tqdm;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_trange_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_e76630403fb8ac56b03a21c46dddd2c3->m_frame.f_lineno = 38;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_trange );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var__tnrange == NULL );
    var__tnrange = tmp_assign_source_2;

    tmp_called_name_1 = var_warn;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_digest_da233d117e7126d265b69eb07f13dab3;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain_TqdmDeprecationWarning );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TqdmDeprecationWarning );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "TqdmDeprecationWarning" );
        exception_tb = NULL;

        exception_lineno = 40;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_f154c9a58c9419d7e391901d7b7fe49e );
    frame_e76630403fb8ac56b03a21c46dddd2c3->m_frame.f_lineno = 39;
    tmp_unused = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_dircall_arg1_1 = var__tnrange;

    CHECK_OBJECT( tmp_dircall_arg1_1 );
    tmp_dircall_arg2_1 = par_args;

    CHECK_OBJECT( tmp_dircall_arg2_1 );
    tmp_dircall_arg3_1 = par_kwargs;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e76630403fb8ac56b03a21c46dddd2c3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e76630403fb8ac56b03a21c46dddd2c3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e76630403fb8ac56b03a21c46dddd2c3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e76630403fb8ac56b03a21c46dddd2c3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e76630403fb8ac56b03a21c46dddd2c3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e76630403fb8ac56b03a21c46dddd2c3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e76630403fb8ac56b03a21c46dddd2c3,
        type_description_1,
        par_args,
        par_kwargs,
        var_warn,
        var__tnrange
    );


    // Release cached frame.
    if ( frame_e76630403fb8ac56b03a21c46dddd2c3 == cache_frame_e76630403fb8ac56b03a21c46dddd2c3 )
    {
        Py_DECREF( frame_e76630403fb8ac56b03a21c46dddd2c3 );
    }
    cache_frame_e76630403fb8ac56b03a21c46dddd2c3 = NULL;

    assertFrameObject( frame_e76630403fb8ac56b03a21c46dddd2c3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tqdm$$$function_2_tnrange );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_warn );
    Py_DECREF( var_warn );
    var_warn = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)var__tnrange );
    Py_DECREF( var__tnrange );
    var__tnrange = NULL;

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

    Py_XDECREF( var_warn );
    var_warn = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var__tnrange );
    var__tnrange = NULL;

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
    NUITKA_CANNOT_GET_HERE( tqdm$$$function_2_tnrange );
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



static PyObject *MAKE_FUNCTION_tqdm$$$function_1_tqdm_notebook(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tqdm$$$function_1_tqdm_notebook,
        const_str_plain_tqdm_notebook,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_afece581d5c195f77c92c930aed34011,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tqdm,
        const_str_digest_5575a2b14ec53527541f335af75a7df0,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tqdm$$$function_2_tnrange(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tqdm$$$function_2_tnrange,
        const_str_plain_tnrange,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e76630403fb8ac56b03a21c46dddd2c3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tqdm,
        const_str_digest_1ca02da0acc9239b92167c86b155428d,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_tqdm =
{
    PyModuleDef_HEAD_INIT,
    "tqdm",   /* m_name */
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

MOD_INIT_DECL( tqdm )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_tqdm );
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
    puts("tqdm: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("tqdm: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("tqdm: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in inittqdm" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_tqdm = Py_InitModule4(
        "tqdm",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_tqdm = PyModule_Create( &mdef_tqdm );
#endif

    moduledict_tqdm = MODULE_DICT( module_tqdm );

    // Update "__package__" value to what it ought to be.
    {
#if 1
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_tqdm,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_tqdm,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_tqdm,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_tqdm,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_tqdm );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_tqdm, module_tqdm );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
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
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_level_name_7;
    PyObject *tmp_list_element_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    PyObject *tmp_source_name_1;
    struct Nuitka_FrameObject *frame_e9174a3b26a91bafffb44dea729f1eb9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_e9174a3b26a91bafffb44dea729f1eb9 = MAKE_MODULE_FRAME( codeobj_e9174a3b26a91bafffb44dea729f1eb9, module_tqdm );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_e9174a3b26a91bafffb44dea729f1eb9 );
    assert( Py_REFCNT( frame_e9174a3b26a91bafffb44dea729f1eb9 ) == 2 );

    // Framed code:
    tmp_assign_source_3 = PyList_New( 2 );
    frame_e9174a3b26a91bafffb44dea729f1eb9->m_frame.f_lineno = 1;
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
    frame_e9174a3b26a91bafffb44dea729f1eb9->m_frame.f_lineno = 1;
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
    frame_e9174a3b26a91bafffb44dea729f1eb9->m_frame.f_lineno = 1;
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
    frame_e9174a3b26a91bafffb44dea729f1eb9->m_frame.f_lineno = 1;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_6f2074c988696a234f9b071d7c5ad972_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 1, tmp_list_element_1 );
    UPDATE_STRING_DICT1( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_name_name_1 = const_str_plain__monitor;
    tmp_globals_name_1 = (PyObject *)moduledict_tqdm;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_TMonitor_str_plain_TqdmSynchronisationWarning_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_e9174a3b26a91bafffb44dea729f1eb9->m_frame.f_lineno = 1;
    tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_4;

    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_TMonitor );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain_TMonitor, tmp_assign_source_5 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_TqdmSynchronisationWarning );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain_TqdmSynchronisationWarning, tmp_assign_source_6 );
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

    tmp_name_name_2 = const_str_plain__tqdm_pandas;
    tmp_globals_name_2 = (PyObject *)moduledict_tqdm;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_tqdm_pandas_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_e9174a3b26a91bafffb44dea729f1eb9->m_frame.f_lineno = 2;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_tqdm_pandas );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain_tqdm_pandas, tmp_assign_source_7 );
    tmp_name_name_3 = const_str_plain_cli;
    tmp_globals_name_3 = (PyObject *)moduledict_tqdm;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_main_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_e9174a3b26a91bafffb44dea729f1eb9->m_frame.f_lineno = 3;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_main );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain_main, tmp_assign_source_8 );
    tmp_name_name_4 = const_str_plain_gui;
    tmp_globals_name_4 = (PyObject *)moduledict_tqdm;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_tqdm_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_e9174a3b26a91bafffb44dea729f1eb9->m_frame.f_lineno = 4;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_tqdm );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain_tqdm_gui, tmp_assign_source_9 );
    tmp_name_name_5 = const_str_plain_gui;
    tmp_globals_name_5 = (PyObject *)moduledict_tqdm;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_trange_tuple;
    tmp_level_name_5 = const_int_pos_1;
    frame_e9174a3b26a91bafffb44dea729f1eb9->m_frame.f_lineno = 5;
    tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_trange );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain_tgrange, tmp_assign_source_10 );
    tmp_name_name_6 = const_str_plain_std;
    tmp_globals_name_6 = (PyObject *)moduledict_tqdm;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_f9cb0f4d8c222031da98521d54b43675_tuple;
    tmp_level_name_6 = const_int_pos_1;
    frame_e9174a3b26a91bafffb44dea729f1eb9->m_frame.f_lineno = 6;
    tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_11;

    // Tried code:
    tmp_import_name_from_7 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_TqdmDeprecationWarning );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain_TqdmDeprecationWarning, tmp_assign_source_12 );
    tmp_import_name_from_8 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_TqdmExperimentalWarning );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain_TqdmExperimentalWarning, tmp_assign_source_13 );
    tmp_import_name_from_9 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_TqdmKeyError );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain_TqdmKeyError, tmp_assign_source_14 );
    tmp_import_name_from_10 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_TqdmMonitorWarning );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain_TqdmMonitorWarning, tmp_assign_source_15 );
    tmp_import_name_from_11 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_TqdmTypeError );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain_TqdmTypeError, tmp_assign_source_16 );
    tmp_import_name_from_12 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_12 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_TqdmWarning );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain_TqdmWarning, tmp_assign_source_17 );
    tmp_import_name_from_13 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_13 );
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_tqdm );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain_tqdm, tmp_assign_source_18 );
    tmp_import_name_from_14 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_14 );
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_trange );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain_trange, tmp_assign_source_19 );
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

    tmp_name_name_7 = const_str_plain_version;
    tmp_globals_name_7 = (PyObject *)moduledict_tqdm;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain___version___tuple;
    tmp_level_name_7 = const_int_pos_1;
    frame_e9174a3b26a91bafffb44dea729f1eb9->m_frame.f_lineno = 9;
    tmp_import_name_from_15 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain___version__ );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_20 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e9174a3b26a91bafffb44dea729f1eb9 );
#endif
    popFrameStack();

    assertFrameObject( frame_e9174a3b26a91bafffb44dea729f1eb9 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e9174a3b26a91bafffb44dea729f1eb9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e9174a3b26a91bafffb44dea729f1eb9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e9174a3b26a91bafffb44dea729f1eb9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e9174a3b26a91bafffb44dea729f1eb9, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_21 = LIST_COPY( const_list_3a2cb305ab4b749d895e6bebce73de45_list );
    UPDATE_STRING_DICT1( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_21 );
    tmp_assign_source_22 = MAKE_FUNCTION_tqdm$$$function_1_tqdm_notebook(  );
    UPDATE_STRING_DICT1( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain_tqdm_notebook, tmp_assign_source_22 );
    tmp_assign_source_23 = MAKE_FUNCTION_tqdm$$$function_2_tnrange(  );
    UPDATE_STRING_DICT1( moduledict_tqdm, (Nuitka_StringObject *)const_str_plain_tnrange, tmp_assign_source_23 );

    return MOD_RETURN_VALUE( module_tqdm );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
