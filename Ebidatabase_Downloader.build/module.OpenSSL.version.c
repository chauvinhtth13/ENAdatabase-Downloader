/* Generated code for Python source for module 'OpenSSL.version'
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

/* The _module_OpenSSL$version is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_OpenSSL$version;
PyDictObject *moduledict_OpenSSL$version;

/* The module constants used, if any. */
static PyObject *const_str_digest_68018ff76519212609a7968014aa79ba;
static PyObject *const_str_digest_6f65ba49550399e667527d293c832a02;
static PyObject *const_str_digest_e181204d63c8b7732d12c155e97abb8c;
static PyObject *const_str_digest_d4ea8f4eef41519fcb452ff7823d9d38;
static PyObject *const_tuple_str_digest_e29bae330b8b3eb2658b1344a6271a86_tuple;
extern PyObject *const_str_plain___copyright__;
extern PyObject *const_str_plain___uri__;
extern PyObject *const_str_digest_69e665cd1c1ee14f52dfb85d4f885c38;
extern PyObject *const_str_plain___email__;
static PyObject *const_str_plain_pyOpenSSL;
extern PyObject *const_str_digest_1f67343b5259d1f6dbf7947bec2fa63d;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___summary__;
extern PyObject *const_str_plain___all__;
static PyObject *const_list_7a37fc81b16958dd9b37fbf746b699fd_list;
static PyObject *const_str_digest_160c11403ade02fd24eed8043886fe0e;
static PyObject *const_str_digest_a57f142b42eaf852996fdca4f0c4bc8b;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___version__;
extern PyObject *const_str_plain___title__;
extern PyObject *const_str_plain___license__;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_e29bae330b8b3eb2658b1344a6271a86;
extern PyObject *const_str_digest_598c5128122328c3e816ece52ab2e1f6;
static PyObject *const_str_digest_d423f61b0839c8c297e8e18c57b48478;
extern PyObject *const_str_plain___author__;
extern PyObject *const_str_plain_format;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_68018ff76519212609a7968014aa79ba = UNSTREAM_STRING( &constant_bin[ 87652 ], 27, 0 );
    const_str_digest_6f65ba49550399e667527d293c832a02 = UNSTREAM_STRING( &constant_bin[ 87679 ], 23, 0 );
    const_str_digest_e181204d63c8b7732d12c155e97abb8c = UNSTREAM_STRING( &constant_bin[ 87702 ], 48, 0 );
    const_str_digest_d4ea8f4eef41519fcb452ff7823d9d38 = UNSTREAM_STRING( &constant_bin[ 87750 ], 24, 0 );
    const_tuple_str_digest_e29bae330b8b3eb2658b1344a6271a86_tuple = PyTuple_New( 1 );
    const_str_digest_e29bae330b8b3eb2658b1344a6271a86 = UNSTREAM_STRING( &constant_bin[ 87774 ], 24, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_e29bae330b8b3eb2658b1344a6271a86_tuple, 0, const_str_digest_e29bae330b8b3eb2658b1344a6271a86 ); Py_INCREF( const_str_digest_e29bae330b8b3eb2658b1344a6271a86 );
    const_str_plain_pyOpenSSL = UNSTREAM_STRING( &constant_bin[ 30524 ], 9, 1 );
    const_list_7a37fc81b16958dd9b37fbf746b699fd_list = PyList_New( 8 );
    PyList_SET_ITEM( const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 0, const_str_plain___author__ ); Py_INCREF( const_str_plain___author__ );
    PyList_SET_ITEM( const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 1, const_str_plain___copyright__ ); Py_INCREF( const_str_plain___copyright__ );
    PyList_SET_ITEM( const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 2, const_str_plain___email__ ); Py_INCREF( const_str_plain___email__ );
    PyList_SET_ITEM( const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 3, const_str_plain___license__ ); Py_INCREF( const_str_plain___license__ );
    PyList_SET_ITEM( const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 4, const_str_plain___summary__ ); Py_INCREF( const_str_plain___summary__ );
    PyList_SET_ITEM( const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 5, const_str_plain___title__ ); Py_INCREF( const_str_plain___title__ );
    PyList_SET_ITEM( const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 6, const_str_plain___uri__ ); Py_INCREF( const_str_plain___uri__ );
    PyList_SET_ITEM( const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 7, const_str_plain___version__ ); Py_INCREF( const_str_plain___version__ );
    const_str_digest_160c11403ade02fd24eed8043886fe0e = UNSTREAM_STRING( &constant_bin[ 87798 ], 18, 0 );
    const_str_digest_a57f142b42eaf852996fdca4f0c4bc8b = UNSTREAM_STRING( &constant_bin[ 87816 ], 6, 0 );
    const_str_digest_d423f61b0839c8c297e8e18c57b48478 = UNSTREAM_STRING( &constant_bin[ 87822 ], 22, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_OpenSSL$version( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_12bf900221c3b10f6ac9ed08d925618e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_160c11403ade02fd24eed8043886fe0e );
    codeobj_12bf900221c3b10f6ac9ed08d925618e = MAKE_CODEOBJ( module_filename_obj, const_str_digest_d4ea8f4eef41519fcb452ff7823d9d38, 1, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_OpenSSL$version =
{
    PyModuleDef_HEAD_INIT,
    "OpenSSL.version",   /* m_name */
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

MOD_INIT_DECL( OpenSSL$version )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_OpenSSL$version );
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
    puts("OpenSSL.version: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("OpenSSL.version: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("OpenSSL.version: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initOpenSSL$version" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_OpenSSL$version = Py_InitModule4(
        "OpenSSL.version",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_OpenSSL$version = PyModule_Create( &mdef_OpenSSL$version );
#endif

    moduledict_OpenSSL$version = MODULE_DICT( module_OpenSSL$version );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_OpenSSL$version,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_OpenSSL$version,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_OpenSSL$version,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_OpenSSL$version,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_OpenSSL$version );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_598c5128122328c3e816ece52ab2e1f6, module_OpenSSL$version );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_called_instance_1;
    struct Nuitka_FrameObject *frame_12bf900221c3b10f6ac9ed08d925618e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_69e665cd1c1ee14f52dfb85d4f885c38;
    UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_7a37fc81b16958dd9b37fbf746b699fd_list );
    UPDATE_STRING_DICT1( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_a57f142b42eaf852996fdca4f0c4bc8b;
    UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_plain_pyOpenSSL;
    UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___title__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_d423f61b0839c8c297e8e18c57b48478;
    UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___uri__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_e181204d63c8b7732d12c155e97abb8c;
    UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___summary__, tmp_assign_source_7 );
    tmp_assign_source_8 = const_str_digest_e29bae330b8b3eb2658b1344a6271a86;
    UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_8 );
    tmp_assign_source_9 = const_str_digest_1f67343b5259d1f6dbf7947bec2fa63d;
    UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___email__, tmp_assign_source_9 );
    tmp_assign_source_10 = const_str_digest_68018ff76519212609a7968014aa79ba;
    UPDATE_STRING_DICT0( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___license__, tmp_assign_source_10 );
    // Frame without reuse.
    frame_12bf900221c3b10f6ac9ed08d925618e = MAKE_MODULE_FRAME( codeobj_12bf900221c3b10f6ac9ed08d925618e, module_OpenSSL$version );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_12bf900221c3b10f6ac9ed08d925618e );
    assert( Py_REFCNT( frame_12bf900221c3b10f6ac9ed08d925618e ) == 2 );

    // Framed code:
    tmp_called_instance_1 = const_str_digest_6f65ba49550399e667527d293c832a02;
    frame_12bf900221c3b10f6ac9ed08d925618e->m_frame.f_lineno = 28;
    tmp_assign_source_11 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_format, &PyTuple_GET_ITEM( const_tuple_str_digest_e29bae330b8b3eb2658b1344a6271a86_tuple, 0 ) );

    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___copyright__, tmp_assign_source_11 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_12bf900221c3b10f6ac9ed08d925618e );
#endif
    popFrameStack();

    assertFrameObject( frame_12bf900221c3b10f6ac9ed08d925618e );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_12bf900221c3b10f6ac9ed08d925618e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_12bf900221c3b10f6ac9ed08d925618e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_12bf900221c3b10f6ac9ed08d925618e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_12bf900221c3b10f6ac9ed08d925618e, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_OpenSSL$version );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
