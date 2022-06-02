/* Generated code for Python source for module 'chardet.sbcsgroupprober'
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

/* The _module_chardet$sbcsgroupprober is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$sbcsgroupprober;
PyDictObject *moduledict_chardet$sbcsgroupprober;

/* The module constants used, if any. */
extern PyObject *const_str_plain_Ibm855Model;
static PyObject *const_str_digest_5be317a1d4f47b238e8360b0b93bbe50;
static PyObject *const_tuple_b1c9da44cb8525683cd762dc4f53ea6d_tuple;
static PyObject *const_tuple_str_plain_SingleByteCharSetProber_tuple;
extern PyObject *const_str_plain_Latin5TurkishModel;
static PyObject *const_str_digest_2c059e9a0c932665d39545c1df0da978;
extern PyObject *const_str_plain_probers;
extern PyObject *const_str_plain_Koi8rModel;
static PyObject *const_tuple_str_plain_TIS620ThaiModel_tuple;
extern PyObject *const_dict_empty;
static PyObject *const_tuple_str_plain_Latin7GreekModel_str_plain_Win1253GreekModel_tuple;
extern PyObject *const_str_plain_SingleByteCharSetProber;
static PyObject *const_tuple_4718770696a749132e8430c48931b9e8_tuple;
extern PyObject *const_str_plain_MacCyrillicModel;
extern PyObject *const_str_plain_Win1251CyrillicModel;
extern PyObject *const_str_plain_TIS620ThaiModel;
extern PyObject *const_str_plain_reset;
extern PyObject *const_str_plain_SBCSGroupProber;
extern PyObject *const_str_plain_Latin5CyrillicModel;
extern PyObject *const_str_plain_Latin5BulgarianModel;
static PyObject *const_tuple_da1ffc8dadc55d2c9388cb7fe90c9085_tuple;
extern PyObject *const_str_plain_Win1253GreekModel;
extern PyObject *const_str_plain_HebrewProber;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_visual_hebrew_prober;
static PyObject *const_tuple_str_plain_Latin5TurkishModel_tuple;
static PyObject *const_str_plain_logical_hebrew_prober;
extern PyObject *const_int_0;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_langturkishmodel;
static PyObject *const_str_plain_langgreekmodel;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_extend;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_sbcharsetprober;
static PyObject *const_tuple_str_plain_HebrewProber_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_CharSetGroupProber;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_Win1251BulgarianModel;
static PyObject *const_str_digest_b18170e8601aeac7ef5014d02e0da13c;
static PyObject *const_str_plain_hebrew_prober;
extern PyObject *const_str_plain_charsetgroupprober;
static PyObject *const_str_plain_langcyrillicmodel;
static PyObject *const_tuple_str_plain_Win1255HebrewModel_tuple;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain_langthaimodel;
static PyObject *const_str_plain_langhebrewmodel;
extern PyObject *const_str_plain_Ibm866Model;
extern PyObject *const_tuple_str_plain_CharSetGroupProber_tuple;
extern PyObject *const_str_plain_Win1255HebrewModel;
static PyObject *const_str_plain_hebrewprober;
extern PyObject *const_str_plain_set_model_probers;
extern PyObject *const_str_plain_Latin7GreekModel;
static PyObject *const_str_plain_langbulgarianmodel;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_5be317a1d4f47b238e8360b0b93bbe50 = UNSTREAM_STRING( &constant_bin[ 633292 ], 23, 0 );
    const_tuple_b1c9da44cb8525683cd762dc4f53ea6d_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_b1c9da44cb8525683cd762dc4f53ea6d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_hebrew_prober = UNSTREAM_STRING( &constant_bin[ 633315 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_b1c9da44cb8525683cd762dc4f53ea6d_tuple, 1, const_str_plain_hebrew_prober ); Py_INCREF( const_str_plain_hebrew_prober );
    const_str_plain_logical_hebrew_prober = UNSTREAM_STRING( &constant_bin[ 633328 ], 21, 1 );
    PyTuple_SET_ITEM( const_tuple_b1c9da44cb8525683cd762dc4f53ea6d_tuple, 2, const_str_plain_logical_hebrew_prober ); Py_INCREF( const_str_plain_logical_hebrew_prober );
    const_str_plain_visual_hebrew_prober = UNSTREAM_STRING( &constant_bin[ 633349 ], 20, 1 );
    PyTuple_SET_ITEM( const_tuple_b1c9da44cb8525683cd762dc4f53ea6d_tuple, 3, const_str_plain_visual_hebrew_prober ); Py_INCREF( const_str_plain_visual_hebrew_prober );
    const_tuple_str_plain_SingleByteCharSetProber_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SingleByteCharSetProber_tuple, 0, const_str_plain_SingleByteCharSetProber ); Py_INCREF( const_str_plain_SingleByteCharSetProber );
    const_str_digest_2c059e9a0c932665d39545c1df0da978 = UNSTREAM_STRING( &constant_bin[ 633369 ], 32, 0 );
    const_tuple_str_plain_TIS620ThaiModel_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_TIS620ThaiModel_tuple, 0, const_str_plain_TIS620ThaiModel ); Py_INCREF( const_str_plain_TIS620ThaiModel );
    const_tuple_str_plain_Latin7GreekModel_str_plain_Win1253GreekModel_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Latin7GreekModel_str_plain_Win1253GreekModel_tuple, 0, const_str_plain_Latin7GreekModel ); Py_INCREF( const_str_plain_Latin7GreekModel );
    PyTuple_SET_ITEM( const_tuple_str_plain_Latin7GreekModel_str_plain_Win1253GreekModel_tuple, 1, const_str_plain_Win1253GreekModel ); Py_INCREF( const_str_plain_Win1253GreekModel );
    const_tuple_4718770696a749132e8430c48931b9e8_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_4718770696a749132e8430c48931b9e8_tuple, 0, const_str_plain_Latin5BulgarianModel ); Py_INCREF( const_str_plain_Latin5BulgarianModel );
    PyTuple_SET_ITEM( const_tuple_4718770696a749132e8430c48931b9e8_tuple, 1, const_str_plain_Win1251BulgarianModel ); Py_INCREF( const_str_plain_Win1251BulgarianModel );
    const_tuple_da1ffc8dadc55d2c9388cb7fe90c9085_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_da1ffc8dadc55d2c9388cb7fe90c9085_tuple, 0, const_str_plain_Win1251CyrillicModel ); Py_INCREF( const_str_plain_Win1251CyrillicModel );
    PyTuple_SET_ITEM( const_tuple_da1ffc8dadc55d2c9388cb7fe90c9085_tuple, 1, const_str_plain_Koi8rModel ); Py_INCREF( const_str_plain_Koi8rModel );
    PyTuple_SET_ITEM( const_tuple_da1ffc8dadc55d2c9388cb7fe90c9085_tuple, 2, const_str_plain_Latin5CyrillicModel ); Py_INCREF( const_str_plain_Latin5CyrillicModel );
    PyTuple_SET_ITEM( const_tuple_da1ffc8dadc55d2c9388cb7fe90c9085_tuple, 3, const_str_plain_MacCyrillicModel ); Py_INCREF( const_str_plain_MacCyrillicModel );
    PyTuple_SET_ITEM( const_tuple_da1ffc8dadc55d2c9388cb7fe90c9085_tuple, 4, const_str_plain_Ibm866Model ); Py_INCREF( const_str_plain_Ibm866Model );
    PyTuple_SET_ITEM( const_tuple_da1ffc8dadc55d2c9388cb7fe90c9085_tuple, 5, const_str_plain_Ibm855Model ); Py_INCREF( const_str_plain_Ibm855Model );
    const_tuple_str_plain_Latin5TurkishModel_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Latin5TurkishModel_tuple, 0, const_str_plain_Latin5TurkishModel ); Py_INCREF( const_str_plain_Latin5TurkishModel );
    const_str_plain_langturkishmodel = UNSTREAM_STRING( &constant_bin[ 576416 ], 16, 1 );
    const_str_plain_langgreekmodel = UNSTREAM_STRING( &constant_bin[ 468057 ], 14, 1 );
    const_str_plain_sbcharsetprober = UNSTREAM_STRING( &constant_bin[ 633048 ], 15, 1 );
    const_tuple_str_plain_HebrewProber_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HebrewProber_tuple, 0, const_str_plain_HebrewProber ); Py_INCREF( const_str_plain_HebrewProber );
    const_str_digest_b18170e8601aeac7ef5014d02e0da13c = UNSTREAM_STRING( &constant_bin[ 633401 ], 26, 0 );
    const_str_plain_langcyrillicmodel = UNSTREAM_STRING( &constant_bin[ 380438 ], 17, 1 );
    const_tuple_str_plain_Win1255HebrewModel_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Win1255HebrewModel_tuple, 0, const_str_plain_Win1255HebrewModel ); Py_INCREF( const_str_plain_Win1255HebrewModel );
    const_str_plain_langthaimodel = UNSTREAM_STRING( &constant_bin[ 576343 ], 13, 1 );
    const_str_plain_langhebrewmodel = UNSTREAM_STRING( &constant_bin[ 491403 ], 15, 1 );
    const_str_plain_hebrewprober = UNSTREAM_STRING( &constant_bin[ 184773 ], 12, 1 );
    const_str_plain_langbulgarianmodel = UNSTREAM_STRING( &constant_bin[ 264078 ], 18, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_chardet$sbcsgroupprober( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_4fd200fd11c07f3ce5fd575a15360eec;
static PyCodeObject *codeobj_2ebc7d50d278e98e091e6e3f337b46b6;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_b18170e8601aeac7ef5014d02e0da13c );
    codeobj_4fd200fd11c07f3ce5fd575a15360eec = MAKE_CODEOBJ( module_filename_obj, const_str_digest_2c059e9a0c932665d39545c1df0da978, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_2ebc7d50d278e98e091e6e3f337b46b6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 44, const_tuple_b1c9da44cb8525683cd762dc4f53ea6d_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_chardet$sbcsgroupprober$$$function_1___init__(  );


// The module function definitions.
static PyObject *impl_chardet$sbcsgroupprober$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_hebrew_prober = NULL;
    PyObject *var_logical_hebrew_prober = NULL;
    PyObject *var_visual_hebrew_prober = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
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
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_object_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_2ebc7d50d278e98e091e6e3f337b46b6 = NULL;

    struct Nuitka_FrameObject *frame_2ebc7d50d278e98e091e6e3f337b46b6;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2ebc7d50d278e98e091e6e3f337b46b6, codeobj_2ebc7d50d278e98e091e6e3f337b46b6, module_chardet$sbcsgroupprober, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2ebc7d50d278e98e091e6e3f337b46b6 = cache_frame_2ebc7d50d278e98e091e6e3f337b46b6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2ebc7d50d278e98e091e6e3f337b46b6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2ebc7d50d278e98e091e6e3f337b46b6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SBCSGroupProber );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SBCSGroupProber );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SBCSGroupProber" );
        exception_tb = NULL;

        exception_lineno = 45;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_self;

    CHECK_OBJECT( tmp_object_name_1 );
    tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_2ebc7d50d278e98e091e6e3f337b46b6->m_frame.f_lineno = 45;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain___init__ );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = PyList_New( 12 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );
    }

    if ( tmp_called_name_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SingleByteCharSetProber" );
        exception_tb = NULL;

        exception_lineno = 47;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Win1251CyrillicModel );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Win1251CyrillicModel );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Win1251CyrillicModel" );
        exception_tb = NULL;

        exception_lineno = 47;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_2ebc7d50d278e98e091e6e3f337b46b6->m_frame.f_lineno = 47;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 47;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assattr_name_1, 0, tmp_list_element_1 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SingleByteCharSetProber" );
        exception_tb = NULL;

        exception_lineno = 48;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Koi8rModel );

    if (unlikely( tmp_args_element_name_2 == NULL ))
    {
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Koi8rModel );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Koi8rModel" );
        exception_tb = NULL;

        exception_lineno = 48;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_2ebc7d50d278e98e091e6e3f337b46b6->m_frame.f_lineno = 48;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 48;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assattr_name_1, 1, tmp_list_element_1 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SingleByteCharSetProber" );
        exception_tb = NULL;

        exception_lineno = 49;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Latin5CyrillicModel );

    if (unlikely( tmp_args_element_name_3 == NULL ))
    {
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Latin5CyrillicModel );
    }

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Latin5CyrillicModel" );
        exception_tb = NULL;

        exception_lineno = 49;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_2ebc7d50d278e98e091e6e3f337b46b6->m_frame.f_lineno = 49;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 49;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assattr_name_1, 2, tmp_list_element_1 );
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );
    }

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SingleByteCharSetProber" );
        exception_tb = NULL;

        exception_lineno = 50;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_MacCyrillicModel );

    if (unlikely( tmp_args_element_name_4 == NULL ))
    {
        tmp_args_element_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MacCyrillicModel );
    }

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "MacCyrillicModel" );
        exception_tb = NULL;

        exception_lineno = 50;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_2ebc7d50d278e98e091e6e3f337b46b6->m_frame.f_lineno = 50;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 50;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assattr_name_1, 3, tmp_list_element_1 );
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );
    }

    if ( tmp_called_name_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SingleByteCharSetProber" );
        exception_tb = NULL;

        exception_lineno = 51;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Ibm866Model );

    if (unlikely( tmp_args_element_name_5 == NULL ))
    {
        tmp_args_element_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Ibm866Model );
    }

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Ibm866Model" );
        exception_tb = NULL;

        exception_lineno = 51;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_2ebc7d50d278e98e091e6e3f337b46b6->m_frame.f_lineno = 51;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 51;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assattr_name_1, 4, tmp_list_element_1 );
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );
    }

    if ( tmp_called_name_6 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SingleByteCharSetProber" );
        exception_tb = NULL;

        exception_lineno = 52;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Ibm855Model );

    if (unlikely( tmp_args_element_name_6 == NULL ))
    {
        tmp_args_element_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Ibm855Model );
    }

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Ibm855Model" );
        exception_tb = NULL;

        exception_lineno = 52;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_2ebc7d50d278e98e091e6e3f337b46b6->m_frame.f_lineno = 52;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 52;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assattr_name_1, 5, tmp_list_element_1 );
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );
    }

    if ( tmp_called_name_7 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SingleByteCharSetProber" );
        exception_tb = NULL;

        exception_lineno = 53;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Latin7GreekModel );

    if (unlikely( tmp_args_element_name_7 == NULL ))
    {
        tmp_args_element_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Latin7GreekModel );
    }

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Latin7GreekModel" );
        exception_tb = NULL;

        exception_lineno = 53;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_2ebc7d50d278e98e091e6e3f337b46b6->m_frame.f_lineno = 53;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 53;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assattr_name_1, 6, tmp_list_element_1 );
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );
    }

    if ( tmp_called_name_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SingleByteCharSetProber" );
        exception_tb = NULL;

        exception_lineno = 54;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Win1253GreekModel );

    if (unlikely( tmp_args_element_name_8 == NULL ))
    {
        tmp_args_element_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Win1253GreekModel );
    }

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Win1253GreekModel" );
        exception_tb = NULL;

        exception_lineno = 54;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_2ebc7d50d278e98e091e6e3f337b46b6->m_frame.f_lineno = 54;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 54;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assattr_name_1, 7, tmp_list_element_1 );
    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );
    }

    if ( tmp_called_name_9 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SingleByteCharSetProber" );
        exception_tb = NULL;

        exception_lineno = 55;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Latin5BulgarianModel );

    if (unlikely( tmp_args_element_name_9 == NULL ))
    {
        tmp_args_element_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Latin5BulgarianModel );
    }

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Latin5BulgarianModel" );
        exception_tb = NULL;

        exception_lineno = 55;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_2ebc7d50d278e98e091e6e3f337b46b6->m_frame.f_lineno = 55;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 55;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assattr_name_1, 8, tmp_list_element_1 );
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );
    }

    if ( tmp_called_name_10 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SingleByteCharSetProber" );
        exception_tb = NULL;

        exception_lineno = 56;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Win1251BulgarianModel );

    if (unlikely( tmp_args_element_name_10 == NULL ))
    {
        tmp_args_element_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Win1251BulgarianModel );
    }

    if ( tmp_args_element_name_10 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Win1251BulgarianModel" );
        exception_tb = NULL;

        exception_lineno = 56;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_2ebc7d50d278e98e091e6e3f337b46b6->m_frame.f_lineno = 56;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 56;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assattr_name_1, 9, tmp_list_element_1 );
    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );
    }

    if ( tmp_called_name_11 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SingleByteCharSetProber" );
        exception_tb = NULL;

        exception_lineno = 61;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_TIS620ThaiModel );

    if (unlikely( tmp_args_element_name_11 == NULL ))
    {
        tmp_args_element_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TIS620ThaiModel );
    }

    if ( tmp_args_element_name_11 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "TIS620ThaiModel" );
        exception_tb = NULL;

        exception_lineno = 61;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_2ebc7d50d278e98e091e6e3f337b46b6->m_frame.f_lineno = 61;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 61;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assattr_name_1, 10, tmp_list_element_1 );
    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );
    }

    if ( tmp_called_name_12 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SingleByteCharSetProber" );
        exception_tb = NULL;

        exception_lineno = 62;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Latin5TurkishModel );

    if (unlikely( tmp_args_element_name_12 == NULL ))
    {
        tmp_args_element_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Latin5TurkishModel );
    }

    if ( tmp_args_element_name_12 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Latin5TurkishModel" );
        exception_tb = NULL;

        exception_lineno = 62;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_2ebc7d50d278e98e091e6e3f337b46b6->m_frame.f_lineno = 62;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 62;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assattr_name_1, 11, tmp_list_element_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_probers, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 46;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_called_name_13 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_HebrewProber );

    if (unlikely( tmp_called_name_13 == NULL ))
    {
        tmp_called_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HebrewProber );
    }

    if ( tmp_called_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "HebrewProber" );
        exception_tb = NULL;

        exception_lineno = 64;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_2ebc7d50d278e98e091e6e3f337b46b6->m_frame.f_lineno = 64;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_13 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_hebrew_prober == NULL );
    var_hebrew_prober = tmp_assign_source_1;

    tmp_called_name_14 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );

    if (unlikely( tmp_called_name_14 == NULL ))
    {
        tmp_called_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );
    }

    if ( tmp_called_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SingleByteCharSetProber" );
        exception_tb = NULL;

        exception_lineno = 65;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_13 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Win1255HebrewModel );

    if (unlikely( tmp_args_element_name_13 == NULL ))
    {
        tmp_args_element_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Win1255HebrewModel );
    }

    if ( tmp_args_element_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Win1255HebrewModel" );
        exception_tb = NULL;

        exception_lineno = 65;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_14 = Py_False;
    tmp_args_element_name_15 = var_hebrew_prober;

    CHECK_OBJECT( tmp_args_element_name_15 );
    frame_2ebc7d50d278e98e091e6e3f337b46b6->m_frame.f_lineno = 65;
    {
        PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_14, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_logical_hebrew_prober == NULL );
    var_logical_hebrew_prober = tmp_assign_source_2;

    tmp_called_name_15 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );

    if (unlikely( tmp_called_name_15 == NULL ))
    {
        tmp_called_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber );
    }

    if ( tmp_called_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SingleByteCharSetProber" );
        exception_tb = NULL;

        exception_lineno = 67;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_16 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Win1255HebrewModel );

    if (unlikely( tmp_args_element_name_16 == NULL ))
    {
        tmp_args_element_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Win1255HebrewModel );
    }

    if ( tmp_args_element_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Win1255HebrewModel" );
        exception_tb = NULL;

        exception_lineno = 67;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_17 = Py_True;
    tmp_args_element_name_18 = var_hebrew_prober;

    CHECK_OBJECT( tmp_args_element_name_18 );
    frame_2ebc7d50d278e98e091e6e3f337b46b6->m_frame.f_lineno = 67;
    {
        PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_15, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_visual_hebrew_prober == NULL );
    var_visual_hebrew_prober = tmp_assign_source_3;

    tmp_called_instance_2 = var_hebrew_prober;

    CHECK_OBJECT( tmp_called_instance_2 );
    tmp_args_element_name_19 = var_logical_hebrew_prober;

    CHECK_OBJECT( tmp_args_element_name_19 );
    tmp_args_element_name_20 = var_visual_hebrew_prober;

    CHECK_OBJECT( tmp_args_element_name_20 );
    frame_2ebc7d50d278e98e091e6e3f337b46b6->m_frame.f_lineno = 69;
    {
        PyObject *call_args[] = { tmp_args_element_name_19, tmp_args_element_name_20 };
        tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_set_model_probers, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_probers );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_21 = PyList_New( 3 );
    tmp_list_element_2 = var_hebrew_prober;

    CHECK_OBJECT( tmp_list_element_2 );
    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_args_element_name_21, 0, tmp_list_element_2 );
    tmp_list_element_2 = var_logical_hebrew_prober;

    CHECK_OBJECT( tmp_list_element_2 );
    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_args_element_name_21, 1, tmp_list_element_2 );
    tmp_list_element_2 = var_visual_hebrew_prober;

    CHECK_OBJECT( tmp_list_element_2 );
    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_args_element_name_21, 2, tmp_list_element_2 );
    frame_2ebc7d50d278e98e091e6e3f337b46b6->m_frame.f_lineno = 70;
    {
        PyObject *call_args[] = { tmp_args_element_name_21 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_extend, call_args );
    }

    Py_DECREF( tmp_called_instance_3 );
    Py_DECREF( tmp_args_element_name_21 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_4 = par_self;

    CHECK_OBJECT( tmp_called_instance_4 );
    frame_2ebc7d50d278e98e091e6e3f337b46b6->m_frame.f_lineno = 73;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_reset );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2ebc7d50d278e98e091e6e3f337b46b6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2ebc7d50d278e98e091e6e3f337b46b6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2ebc7d50d278e98e091e6e3f337b46b6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2ebc7d50d278e98e091e6e3f337b46b6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2ebc7d50d278e98e091e6e3f337b46b6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2ebc7d50d278e98e091e6e3f337b46b6,
        type_description_1,
        par_self,
        var_hebrew_prober,
        var_logical_hebrew_prober,
        var_visual_hebrew_prober
    );


    // Release cached frame.
    if ( frame_2ebc7d50d278e98e091e6e3f337b46b6 == cache_frame_2ebc7d50d278e98e091e6e3f337b46b6 )
    {
        Py_DECREF( frame_2ebc7d50d278e98e091e6e3f337b46b6 );
    }
    cache_frame_2ebc7d50d278e98e091e6e3f337b46b6 = NULL;

    assertFrameObject( frame_2ebc7d50d278e98e091e6e3f337b46b6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$sbcsgroupprober$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_hebrew_prober );
    Py_DECREF( var_hebrew_prober );
    var_hebrew_prober = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_logical_hebrew_prober );
    Py_DECREF( var_logical_hebrew_prober );
    var_logical_hebrew_prober = NULL;

    CHECK_OBJECT( (PyObject *)var_visual_hebrew_prober );
    Py_DECREF( var_visual_hebrew_prober );
    var_visual_hebrew_prober = NULL;

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

    Py_XDECREF( var_hebrew_prober );
    var_hebrew_prober = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_logical_hebrew_prober );
    var_logical_hebrew_prober = NULL;

    Py_XDECREF( var_visual_hebrew_prober );
    var_visual_hebrew_prober = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$sbcsgroupprober$$$function_1___init__ );
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



static PyObject *MAKE_FUNCTION_chardet$sbcsgroupprober$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$sbcsgroupprober$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2ebc7d50d278e98e091e6e3f337b46b6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_chardet$sbcsgroupprober,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_chardet$sbcsgroupprober =
{
    PyModuleDef_HEAD_INIT,
    "chardet.sbcsgroupprober",   /* m_name */
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

MOD_INIT_DECL( chardet$sbcsgroupprober )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_chardet$sbcsgroupprober );
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
    puts("chardet.sbcsgroupprober: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("chardet.sbcsgroupprober: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("chardet.sbcsgroupprober: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initchardet$sbcsgroupprober" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_chardet$sbcsgroupprober = Py_InitModule4(
        "chardet.sbcsgroupprober",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_chardet$sbcsgroupprober = PyModule_Create( &mdef_chardet$sbcsgroupprober );
#endif

    moduledict_chardet$sbcsgroupprober = MODULE_DICT( module_chardet$sbcsgroupprober );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_chardet$sbcsgroupprober,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$sbcsgroupprober,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_chardet$sbcsgroupprober,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$sbcsgroupprober,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_chardet$sbcsgroupprober );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_5be317a1d4f47b238e8360b0b93bbe50, module_chardet$sbcsgroupprober );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
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
    PyObject *tmp_called_name_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
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
    PyObject *tmp_fromlist_name_9;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
    PyObject *tmp_globals_name_8;
    PyObject *tmp_globals_name_9;
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
    PyObject *tmp_import_name_from_16;
    PyObject *tmp_key_name_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_level_name_7;
    PyObject *tmp_level_name_8;
    PyObject *tmp_level_name_9;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_locals_name_8;
    PyObject *tmp_locals_name_9;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    PyObject *tmp_name_name_8;
    PyObject *tmp_name_name_9;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    int tmp_res;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    struct Nuitka_FrameObject *frame_4fd200fd11c07f3ce5fd575a15360eec;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    PyObject *locals_SBCSGroupProber_43 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_4fd200fd11c07f3ce5fd575a15360eec = MAKE_MODULE_FRAME( codeobj_4fd200fd11c07f3ce5fd575a15360eec, module_chardet$sbcsgroupprober );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_4fd200fd11c07f3ce5fd575a15360eec );
    assert( Py_REFCNT( frame_4fd200fd11c07f3ce5fd575a15360eec ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_charsetgroupprober;
    tmp_globals_name_1 = (PyObject *)moduledict_chardet$sbcsgroupprober;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_CharSetGroupProber_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_4fd200fd11c07f3ce5fd575a15360eec->m_frame.f_lineno = 29;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_CharSetGroupProber );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_CharSetGroupProber, tmp_assign_source_3 );
    tmp_name_name_2 = const_str_plain_sbcharsetprober;
    tmp_globals_name_2 = (PyObject *)moduledict_chardet$sbcsgroupprober;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_SingleByteCharSetProber_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_4fd200fd11c07f3ce5fd575a15360eec->m_frame.f_lineno = 30;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_SingleByteCharSetProber );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber, tmp_assign_source_4 );
    tmp_name_name_3 = const_str_plain_langcyrillicmodel;
    tmp_globals_name_3 = (PyObject *)moduledict_chardet$sbcsgroupprober;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_da1ffc8dadc55d2c9388cb7fe90c9085_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_4fd200fd11c07f3ce5fd575a15360eec->m_frame.f_lineno = 31;
    tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_5;

    // Tried code:
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_Win1251CyrillicModel );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Win1251CyrillicModel, tmp_assign_source_6 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_Koi8rModel );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Koi8rModel, tmp_assign_source_7 );
    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_Latin5CyrillicModel );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Latin5CyrillicModel, tmp_assign_source_8 );
    tmp_import_name_from_6 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_MacCyrillicModel );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_MacCyrillicModel, tmp_assign_source_9 );
    tmp_import_name_from_7 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_Ibm866Model );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Ibm866Model, tmp_assign_source_10 );
    tmp_import_name_from_8 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_Ibm855Model );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Ibm855Model, tmp_assign_source_11 );
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

    tmp_name_name_4 = const_str_plain_langgreekmodel;
    tmp_globals_name_4 = (PyObject *)moduledict_chardet$sbcsgroupprober;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_Latin7GreekModel_str_plain_Win1253GreekModel_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_4fd200fd11c07f3ce5fd575a15360eec->m_frame.f_lineno = 34;
    tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_12;

    // Tried code:
    tmp_import_name_from_9 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_Latin7GreekModel );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Latin7GreekModel, tmp_assign_source_13 );
    tmp_import_name_from_10 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_Win1253GreekModel );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Win1253GreekModel, tmp_assign_source_14 );
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

    tmp_name_name_5 = const_str_plain_langbulgarianmodel;
    tmp_globals_name_5 = (PyObject *)moduledict_chardet$sbcsgroupprober;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_4718770696a749132e8430c48931b9e8_tuple;
    tmp_level_name_5 = const_int_pos_1;
    frame_4fd200fd11c07f3ce5fd575a15360eec->m_frame.f_lineno = 35;
    tmp_assign_source_15 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_15;

    // Tried code:
    tmp_import_name_from_11 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_Latin5BulgarianModel );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Latin5BulgarianModel, tmp_assign_source_16 );
    tmp_import_name_from_12 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_12 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_Win1251BulgarianModel );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Win1251BulgarianModel, tmp_assign_source_17 );
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    tmp_name_name_6 = const_str_plain_langthaimodel;
    tmp_globals_name_6 = (PyObject *)moduledict_chardet$sbcsgroupprober;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_TIS620ThaiModel_tuple;
    tmp_level_name_6 = const_int_pos_1;
    frame_4fd200fd11c07f3ce5fd575a15360eec->m_frame.f_lineno = 37;
    tmp_import_name_from_13 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_TIS620ThaiModel );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_TIS620ThaiModel, tmp_assign_source_18 );
    tmp_name_name_7 = const_str_plain_langhebrewmodel;
    tmp_globals_name_7 = (PyObject *)moduledict_chardet$sbcsgroupprober;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_Win1255HebrewModel_tuple;
    tmp_level_name_7 = const_int_pos_1;
    frame_4fd200fd11c07f3ce5fd575a15360eec->m_frame.f_lineno = 38;
    tmp_import_name_from_14 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_Win1255HebrewModel );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Win1255HebrewModel, tmp_assign_source_19 );
    tmp_name_name_8 = const_str_plain_hebrewprober;
    tmp_globals_name_8 = (PyObject *)moduledict_chardet$sbcsgroupprober;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_str_plain_HebrewProber_tuple;
    tmp_level_name_8 = const_int_pos_1;
    frame_4fd200fd11c07f3ce5fd575a15360eec->m_frame.f_lineno = 39;
    tmp_import_name_from_15 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_HebrewProber );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_HebrewProber, tmp_assign_source_20 );
    tmp_name_name_9 = const_str_plain_langturkishmodel;
    tmp_globals_name_9 = (PyObject *)moduledict_chardet$sbcsgroupprober;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = const_tuple_str_plain_Latin5TurkishModel_tuple;
    tmp_level_name_9 = const_int_pos_1;
    frame_4fd200fd11c07f3ce5fd575a15360eec->m_frame.f_lineno = 40;
    tmp_import_name_from_16 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_Latin5TurkishModel );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Latin5TurkishModel, tmp_assign_source_21 );
    // Tried code:
    tmp_assign_source_22 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_CharSetGroupProber );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CharSetGroupProber );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_22 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "CharSetGroupProber" );
        exception_tb = NULL;

        exception_lineno = 43;

        goto try_except_handler_4;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_22, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_22;

    tmp_set_locals = PyDict_New();
    locals_SBCSGroupProber_43 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_5be317a1d4f47b238e8360b0b93bbe50;
    tmp_res = PyDict_SetItem( locals_SBCSGroupProber_43, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_dictset_value = MAKE_FUNCTION_chardet$sbcsgroupprober$$$function_1___init__(  );
    tmp_res = PyDict_SetItem( locals_SBCSGroupProber_43, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    tmp_outline_return_value_1 = locals_SBCSGroupProber_43;
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$sbcsgroupprober );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_5:;
    Py_DECREF( locals_SBCSGroupProber_43 );
    locals_SBCSGroupProber_43 = NULL;
    goto outline_result_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$sbcsgroupprober );
    return MOD_RETURN_VALUE( NULL );
    outline_result_1:;
    tmp_assign_source_23 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_23;

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
    tmp_assign_source_24 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_4;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_subscribed_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_25 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_4;
    }
    assert( tmp_select_metaclass_1__base == NULL );
    tmp_select_metaclass_1__base = tmp_assign_source_25;

    // Tried code:
    // Tried code:
    tmp_source_name_1 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_outline_return_value_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_outline_return_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_7;
    }
    goto try_return_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$sbcsgroupprober );
    return MOD_RETURN_VALUE( NULL );
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

    Py_DECREF( exception_keeper_type_4 );
    Py_XDECREF( exception_keeper_value_4 );
    Py_XDECREF( exception_keeper_tb_4 );
    tmp_type_arg_1 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_outline_return_value_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_outline_return_value_2 != NULL );
    goto try_return_handler_6;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$sbcsgroupprober );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_6:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
    Py_DECREF( tmp_select_metaclass_1__base );
    tmp_select_metaclass_1__base = NULL;

    goto outline_result_2;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
    Py_DECREF( tmp_select_metaclass_1__base );
    tmp_select_metaclass_1__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$sbcsgroupprober );
    return MOD_RETURN_VALUE( NULL );
    outline_result_2:;
    tmp_assign_source_24 = tmp_outline_return_value_2;
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_24;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_SBCSGroupProber;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_4fd200fd11c07f3ce5fd575a15360eec->m_frame.f_lineno = 43;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_4;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_26;

    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4fd200fd11c07f3ce5fd575a15360eec );
#endif
    popFrameStack();

    assertFrameObject( frame_4fd200fd11c07f3ce5fd575a15360eec );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4fd200fd11c07f3ce5fd575a15360eec );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4fd200fd11c07f3ce5fd575a15360eec, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4fd200fd11c07f3ce5fd575a15360eec->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4fd200fd11c07f3ce5fd575a15360eec, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_27 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_27 );
    UPDATE_STRING_DICT0( moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SBCSGroupProber, tmp_assign_source_27 );
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


    return MOD_RETURN_VALUE( module_chardet$sbcsgroupprober );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
