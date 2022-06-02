/* Generated code for Python source for module 'chardet.langcyrillicmodel'
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

/* The _module_chardet$langcyrillicmodel is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$langcyrillicmodel;
PyDictObject *moduledict_chardet$langcyrillicmodel;

/* The module constants used, if any. */
extern PyObject *const_str_plain_Ibm855Model;
static PyObject *const_tuple_b24235f9a763afce8962d2938259e649_tuple;
static PyObject *const_dict_08a1211c47b925730703a168416d7165;
static PyObject *const_str_plain_KOI8R_char_to_order_map;
static PyObject *const_str_plain_latin5_char_to_order_map;
static PyObject *const_tuple_f18bdee9536a45fe5ae287fb6355492a_tuple;
static PyObject *const_tuple_534421f243659b6bda00351214dd02e2_tuple;
static PyObject *const_str_plain_RussianLangModel;
static PyObject *const_str_plain_win1251_char_to_order_map;
extern PyObject *const_str_plain_Koi8rModel;
static PyObject *const_tuple_f8e41cfab8cb474168ecd9a8e1d7cea1_tuple;
static PyObject *const_tuple_ffd1e1f94e28d6aae394e365bb952ebe_tuple;
static PyObject *const_str_plain_IBM866_char_to_order_map;
extern PyObject *const_str_plain_MacCyrillicModel;
extern PyObject *const_str_plain_Win1251CyrillicModel;
static PyObject *const_dict_1fb637bc4b7d10cdf5c3d4fe27ae1855;
static PyObject *const_dict_f79f8e8c281c14147ee6fd566b784fb7;
extern PyObject *const_str_plain_Latin5CyrillicModel;
static PyObject *const_tuple_9222b66a29def824eb1194a0241b88ae_tuple;
extern PyObject *const_str_plain___doc__;
static PyObject *const_dict_2da2b48883d8590f5da1f6d6bcec462f;
static PyObject *const_str_plain_macCyrillic_char_to_order_map;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_IBM855_char_to_order_map;
static PyObject *const_str_digest_d834b118d24a3c0276d3f8779844d004;
static PyObject *const_dict_64ecd53fac20988055c3a295f63de2d7;
static PyObject *const_dict_5e13bcd027a87d7e79b44001a05e3e3e;
static PyObject *const_str_digest_6ce9cc579b89a18ecd64c58d6deebbd4;
extern PyObject *const_str_plain_Ibm866Model;
static PyObject *const_tuple_666844a46456f676cd51b40483cca4f3_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_b24235f9a763afce8962d2938259e649_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 287394 ], 1285 );
    const_dict_08a1211c47b925730703a168416d7165 = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 288679 ], 21935 );
    const_str_plain_KOI8R_char_to_order_map = UNSTREAM_STRING( &constant_bin[ 310614 ], 23, 1 );
    const_str_plain_latin5_char_to_order_map = UNSTREAM_STRING( &constant_bin[ 310637 ], 24, 1 );
    const_tuple_f18bdee9536a45fe5ae287fb6355492a_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 310661 ], 1285 );
    const_tuple_534421f243659b6bda00351214dd02e2_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 311946 ], 1285 );
    const_str_plain_RussianLangModel = UNSTREAM_STRING( &constant_bin[ 313231 ], 16, 1 );
    const_str_plain_win1251_char_to_order_map = UNSTREAM_STRING( &constant_bin[ 313247 ], 25, 1 );
    const_tuple_f8e41cfab8cb474168ecd9a8e1d7cea1_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 309328 ], 1285 );
    const_tuple_ffd1e1f94e28d6aae394e365bb952ebe_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 313272 ], 1285 );
    const_str_plain_IBM866_char_to_order_map = UNSTREAM_STRING( &constant_bin[ 314557 ], 24, 1 );
    const_dict_1fb637bc4b7d10cdf5c3d4fe27ae1855 = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 314581 ], 21930 );
    const_dict_f79f8e8c281c14147ee6fd566b784fb7 = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 336511 ], 21936 );
    const_tuple_9222b66a29def824eb1194a0241b88ae_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 288796 ], 20485 );
    const_dict_2da2b48883d8590f5da1f6d6bcec462f = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 358447 ], 21930 );
    const_str_plain_macCyrillic_char_to_order_map = UNSTREAM_STRING( &constant_bin[ 380377 ], 29, 1 );
    const_str_plain_IBM855_char_to_order_map = UNSTREAM_STRING( &constant_bin[ 380406 ], 24, 1 );
    const_str_digest_d834b118d24a3c0276d3f8779844d004 = UNSTREAM_STRING( &constant_bin[ 380430 ], 25, 0 );
    const_dict_64ecd53fac20988055c3a295f63de2d7 = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 380455 ], 21934 );
    const_dict_5e13bcd027a87d7e79b44001a05e3e3e = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 402389 ], 21930 );
    const_str_digest_6ce9cc579b89a18ecd64c58d6deebbd4 = UNSTREAM_STRING( &constant_bin[ 424319 ], 28, 0 );
    const_tuple_666844a46456f676cd51b40483cca4f3_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 379091 ], 1285 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_chardet$langcyrillicmodel( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.


static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_6ce9cc579b89a18ecd64c58d6deebbd4 );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_chardet$langcyrillicmodel =
{
    PyModuleDef_HEAD_INIT,
    "chardet.langcyrillicmodel",   /* m_name */
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

MOD_INIT_DECL( chardet$langcyrillicmodel )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_chardet$langcyrillicmodel );
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
    puts("chardet.langcyrillicmodel: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("chardet.langcyrillicmodel: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("chardet.langcyrillicmodel: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initchardet$langcyrillicmodel" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_chardet$langcyrillicmodel = Py_InitModule4(
        "chardet.langcyrillicmodel",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_chardet$langcyrillicmodel = PyModule_Create( &mdef_chardet$langcyrillicmodel );
#endif

    moduledict_chardet$langcyrillicmodel = MODULE_DICT( module_chardet$langcyrillicmodel );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_chardet$langcyrillicmodel,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$langcyrillicmodel,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_chardet$langcyrillicmodel,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$langcyrillicmodel,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_chardet$langcyrillicmodel );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_d834b118d24a3c0276d3f8779844d004, module_chardet$langcyrillicmodel );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = const_tuple_f18bdee9536a45fe5ae287fb6355492a_tuple;
    UPDATE_STRING_DICT0( moduledict_chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_KOI8R_char_to_order_map, tmp_assign_source_3 );
    tmp_assign_source_4 = const_tuple_b24235f9a763afce8962d2938259e649_tuple;
    UPDATE_STRING_DICT0( moduledict_chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_win1251_char_to_order_map, tmp_assign_source_4 );
    tmp_assign_source_5 = const_tuple_ffd1e1f94e28d6aae394e365bb952ebe_tuple;
    UPDATE_STRING_DICT0( moduledict_chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_latin5_char_to_order_map, tmp_assign_source_5 );
    tmp_assign_source_6 = const_tuple_f8e41cfab8cb474168ecd9a8e1d7cea1_tuple;
    UPDATE_STRING_DICT0( moduledict_chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_macCyrillic_char_to_order_map, tmp_assign_source_6 );
    tmp_assign_source_7 = const_tuple_666844a46456f676cd51b40483cca4f3_tuple;
    UPDATE_STRING_DICT0( moduledict_chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_IBM855_char_to_order_map, tmp_assign_source_7 );
    tmp_assign_source_8 = const_tuple_534421f243659b6bda00351214dd02e2_tuple;
    UPDATE_STRING_DICT0( moduledict_chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_IBM866_char_to_order_map, tmp_assign_source_8 );
    tmp_assign_source_9 = const_tuple_9222b66a29def824eb1194a0241b88ae_tuple;
    UPDATE_STRING_DICT0( moduledict_chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_RussianLangModel, tmp_assign_source_9 );
    tmp_assign_source_10 = PyDict_Copy( const_dict_5e13bcd027a87d7e79b44001a05e3e3e );
    UPDATE_STRING_DICT1( moduledict_chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_Koi8rModel, tmp_assign_source_10 );
    tmp_assign_source_11 = PyDict_Copy( const_dict_f79f8e8c281c14147ee6fd566b784fb7 );
    UPDATE_STRING_DICT1( moduledict_chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_Win1251CyrillicModel, tmp_assign_source_11 );
    tmp_assign_source_12 = PyDict_Copy( const_dict_64ecd53fac20988055c3a295f63de2d7 );
    UPDATE_STRING_DICT1( moduledict_chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_Latin5CyrillicModel, tmp_assign_source_12 );
    tmp_assign_source_13 = PyDict_Copy( const_dict_08a1211c47b925730703a168416d7165 );
    UPDATE_STRING_DICT1( moduledict_chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_MacCyrillicModel, tmp_assign_source_13 );
    tmp_assign_source_14 = PyDict_Copy( const_dict_1fb637bc4b7d10cdf5c3d4fe27ae1855 );
    UPDATE_STRING_DICT1( moduledict_chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_Ibm866Model, tmp_assign_source_14 );
    tmp_assign_source_15 = PyDict_Copy( const_dict_2da2b48883d8590f5da1f6d6bcec462f );
    UPDATE_STRING_DICT1( moduledict_chardet$langcyrillicmodel, (Nuitka_StringObject *)const_str_plain_Ibm855Model, tmp_assign_source_15 );

    return MOD_RETURN_VALUE( module_chardet$langcyrillicmodel );
}
