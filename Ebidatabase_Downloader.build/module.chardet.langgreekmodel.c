/* Generated code for Python source for module 'chardet.langgreekmodel'
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

/* The _module_chardet$langgreekmodel is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$langgreekmodel;
PyDictObject *moduledict_chardet$langgreekmodel;

/* The module constants used, if any. */
static PyObject *const_tuple_335b990c1cc0f8a22180626502e7512a_tuple;
static PyObject *const_tuple_314709394625831b834265dbf269a905_tuple;
static PyObject *const_dict_06b845faf7093f97eb3115d911b126de;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_3c0b6f52380870c9f2b2c99be827742d;
static PyObject *const_tuple_f1a24a289c33e4ce8cd3d7c4beee6f6a_tuple;
static PyObject *const_str_digest_29a4c2e32f07aee2ded98cb65dfbb23f;
static PyObject *const_str_plain_win1253_char_to_order_map;
extern PyObject *const_str_plain_Win1253GreekModel;
static PyObject *const_str_plain_Latin7_char_to_order_map;
static PyObject *const_dict_a9e1a957a072fbcbefd487cb13a990e3;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_Latin7GreekModel;
static PyObject *const_str_plain_GreekLangModel;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_335b990c1cc0f8a22180626502e7512a_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 424347 ], 20485 );
    const_tuple_314709394625831b834265dbf269a905_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 444832 ], 1285 );
    const_dict_06b845faf7093f97eb3115d911b126de = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 446117 ], 21932 );
    const_str_digest_3c0b6f52380870c9f2b2c99be827742d = UNSTREAM_STRING( &constant_bin[ 468049 ], 22, 0 );
    const_tuple_f1a24a289c33e4ce8cd3d7c4beee6f6a_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 468071 ], 1285 );
    const_str_digest_29a4c2e32f07aee2ded98cb65dfbb23f = UNSTREAM_STRING( &constant_bin[ 469356 ], 25, 0 );
    const_str_plain_win1253_char_to_order_map = UNSTREAM_STRING( &constant_bin[ 469381 ], 25, 1 );
    const_str_plain_Latin7_char_to_order_map = UNSTREAM_STRING( &constant_bin[ 469406 ], 24, 1 );
    const_dict_a9e1a957a072fbcbefd487cb13a990e3 = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 469430 ], 21934 );
    const_str_plain_GreekLangModel = UNSTREAM_STRING( &constant_bin[ 491364 ], 14, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_chardet$langgreekmodel( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.


static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_29a4c2e32f07aee2ded98cb65dfbb23f );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_chardet$langgreekmodel =
{
    PyModuleDef_HEAD_INIT,
    "chardet.langgreekmodel",   /* m_name */
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

MOD_INIT_DECL( chardet$langgreekmodel )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_chardet$langgreekmodel );
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
    puts("chardet.langgreekmodel: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("chardet.langgreekmodel: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("chardet.langgreekmodel: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initchardet$langgreekmodel" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_chardet$langgreekmodel = Py_InitModule4(
        "chardet.langgreekmodel",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_chardet$langgreekmodel = PyModule_Create( &mdef_chardet$langgreekmodel );
#endif

    moduledict_chardet$langgreekmodel = MODULE_DICT( module_chardet$langgreekmodel );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$langgreekmodel, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_chardet$langgreekmodel,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$langgreekmodel, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$langgreekmodel,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_chardet$langgreekmodel,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$langgreekmodel, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$langgreekmodel,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_chardet$langgreekmodel );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_3c0b6f52380870c9f2b2c99be827742d, module_chardet$langgreekmodel );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_chardet$langgreekmodel, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_chardet$langgreekmodel, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_chardet$langgreekmodel, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_chardet$langgreekmodel, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_chardet$langgreekmodel, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_chardet$langgreekmodel, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_chardet$langgreekmodel, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_chardet$langgreekmodel, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = const_tuple_314709394625831b834265dbf269a905_tuple;
    UPDATE_STRING_DICT0( moduledict_chardet$langgreekmodel, (Nuitka_StringObject *)const_str_plain_Latin7_char_to_order_map, tmp_assign_source_3 );
    tmp_assign_source_4 = const_tuple_f1a24a289c33e4ce8cd3d7c4beee6f6a_tuple;
    UPDATE_STRING_DICT0( moduledict_chardet$langgreekmodel, (Nuitka_StringObject *)const_str_plain_win1253_char_to_order_map, tmp_assign_source_4 );
    tmp_assign_source_5 = const_tuple_335b990c1cc0f8a22180626502e7512a_tuple;
    UPDATE_STRING_DICT0( moduledict_chardet$langgreekmodel, (Nuitka_StringObject *)const_str_plain_GreekLangModel, tmp_assign_source_5 );
    tmp_assign_source_6 = PyDict_Copy( const_dict_06b845faf7093f97eb3115d911b126de );
    UPDATE_STRING_DICT1( moduledict_chardet$langgreekmodel, (Nuitka_StringObject *)const_str_plain_Latin7GreekModel, tmp_assign_source_6 );
    tmp_assign_source_7 = PyDict_Copy( const_dict_a9e1a957a072fbcbefd487cb13a990e3 );
    UPDATE_STRING_DICT1( moduledict_chardet$langgreekmodel, (Nuitka_StringObject *)const_str_plain_Win1253GreekModel, tmp_assign_source_7 );

    return MOD_RETURN_VALUE( module_chardet$langgreekmodel );
}
